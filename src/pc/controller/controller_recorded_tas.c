#include <stdio.h>
#include <ultra64.h>

#include "controller_api.h"

static FILE *fp;

static void tas_init(void) {
    fp = fopen("cont.m64", "rb");
    if (fp != NULL) {
        uint8_t buf[0x400];
        fread(buf, 1, sizeof(buf), fp);
    }
}

static void tas_read(OSContPad *pad) {
    if (fp != NULL) {
        uint8_t bytes[4] = {0};
        fread(bytes, 1, 4, fp);
        pad->button = (bytes[0] << 8) | bytes[1];
        pad->stick_x = bytes[2];
        pad->stick_y = bytes[3];
    }
}

static u32 tas_rawkey(void) {
    return VK_INVALID;
}

struct ControllerAPI controller_recorded_tas = {
    VK_INVALID,
    tas_init,
    tas_read,
    tas_rawkey,
    NULL, // no rebinding
};
