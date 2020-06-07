Lights1 piranha_plant_Green_lights = gdSPDefLights1(
	0xB, 0x44, 0xC,
	0x17, 0x88, 0x18, 0x28, 0x28, 0x28);

Lights1 piranha_plant_Spots_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

u8 piranha_plant_spots_rgba16[] = {
	#include "actors/piranha_plant/spots.rgba16.inc.c"
};
u8 piranha_plant_teeth_rgba16[] = {
	#include "actors/piranha_plant/teeth.rgba16.inc.c"
};
u8 piranha_plant_leaf_rgba16[] = {
	#include "actors/piranha_plant/leaf.rgba16.inc.c"
};
Vtx piranha_plant_000_offset_mesh_vtx_0[10] = {
	{{{-25, -31, 142},0, {-16, 1008},{0x4F, 0xE2, 0x5F, 0xFF}}},
	{{{67, 69, 43},0, {-16, 1008},{0x6A, 0x39, 0x28, 0xFF}}},
	{{{-25, 127, 88},0, {-16, 1008},{0x4F, 0x50, 0x3A, 0xFF}}},
	{{{67, -13, 71},0, {-16, 1008},{0x6A, 0xE9, 0x43, 0xFF}}},
	{{{-25, -135, -3},0, {-16, 1008},{0x4B, 0x9A, 0x0, 0xFF}}},
	{{{67, -69, -3},0, {-16, 1008},{0x67, 0xB6, 0x0, 0xFF}}},
	{{{67, -13, -77},0, {-16, 1008},{0x6A, 0xE9, 0xBD, 0xFF}}},
	{{{-25, -31, -148},0, {-16, 1008},{0x4F, 0xE2, 0xA1, 0xFF}}},
	{{{-25, 127, -94},0, {-16, 1008},{0x4F, 0x50, 0xC6, 0xFF}}},
	{{{67, 69, -49},0, {-16, 1008},{0x6A, 0x39, 0xD8, 0xFF}}},
};

Gfx piranha_plant_000_offset_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_mesh_vtx_0 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(2, 9, 8, 0),
	gsSP1Triangle(1, 9, 2, 0),
	gsSP1Triangle(1, 5, 9, 0),
	gsSP1Triangle(3, 5, 1, 0),
	gsSP1Triangle(9, 5, 6, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_001_mesh_vtx_0[9] = {
	{{{163, -26, 37},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{18, -26, 37},0, {-16, 1008},{0xD4, 0x0, 0x77, 0xFF}}},
	{{{166, -65, -3},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{166, 12, -3},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{18, 12, -3},0, {-16, 1008},{0xD5, 0x78, 0x0, 0xFF}}},
	{{{18, -26, -43},0, {-16, 1008},{0xD4, 0x0, 0x89, 0xFF}}},
	{{{163, -26, -43},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{18, -65, -3},0, {-16, 1008},{0xD5, 0x88, 0x0, 0xFF}}},
	{{{-19, -26, -3},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx piranha_plant_000_offset_001_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_001_mesh_vtx_0 + 0, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 2, 5, 0),
	gsSP1Triangle(5, 2, 7, 0),
	gsSP1Triangle(2, 1, 7, 0),
	gsSP1Triangle(1, 8, 7, 0),
	gsSP1Triangle(1, 4, 8, 0),
	gsSP1Triangle(4, 5, 8, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_002_mesh_vtx_0[4] = {
	{{{159, -26, 37},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, -65, -3},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{159, -26, -43},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 12, -3},0, {-16, 1008},{0xFF, 0x7F, 0x0, 0xFF}}},
};

Gfx piranha_plant_000_offset_002_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_002_mesh_vtx_0 + 0, 4, 4),
	gsSP1Triangle(1, 2, 4, 0),
	gsSP1Triangle(4, 2, 0, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(6, 0, 3, 0),
	gsSP1Triangle(3, 1, 6, 0),
	gsSP1Triangle(6, 1, 7, 0),
	gsSP1Triangle(7, 1, 4, 0),
	gsSPEndDisplayList(),
};
Vtx piranha_plant_000_offset_002_skinned_vtx_0[4] = {
	{{{166, -65, -3},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{166, 12, -3},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -26, 37},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, -26, -43},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx piranha_plant_000_offset_002_skinned_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_002_skinned_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_003_mesh_vtx_0[4] = {
	{{{158, -25, 37},0, {-16, 1008},{0x2B, 0x1, 0x78, 0xFF}}},
	{{{158, 14, -3},0, {-16, 1008},{0x2A, 0x78, 0x0, 0xFF}}},
	{{{158, -25, -43},0, {-16, 1008},{0x2B, 0x1, 0x88, 0xFF}}},
	{{{158, -65, -3},0, {-16, 1008},{0x2C, 0x89, 0x0, 0xFF}}},
};

Gfx piranha_plant_000_offset_003_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_003_mesh_vtx_0 + 0, 4, 4),
	gsSP1Triangle(4, 1, 2, 0),
	gsSP1Triangle(1, 4, 5, 0),
	gsSP1Triangle(5, 6, 1, 0),
	gsSP1Triangle(1, 6, 3, 0),
	gsSP1Triangle(6, 0, 3, 0),
	gsSP1Triangle(0, 6, 7, 0),
	gsSP1Triangle(7, 4, 0, 0),
	gsSP1Triangle(0, 4, 2, 0),
	gsSPEndDisplayList(),
};Vtx piranha_plant_000_offset_003_mesh_vtx_1[5] = {
	{{{158, -65, -3},0, {-16, 1008},{0x2C, 0x89, 0x0, 0xFF}}},
	{{{196, -25, -3},0, {-16, 1008},{0x7F, 0x1, 0x0, 0xFF}}},
	{{{158, -25, 37},0, {-16, 1008},{0x2B, 0x1, 0x78, 0xFF}}},
	{{{158, -25, -43},0, {-16, 1008},{0x2B, 0x1, 0x88, 0xFF}}},
	{{{158, 14, -3},0, {-16, 1008},{0x2A, 0x78, 0x0, 0xFF}}},
};

Gfx piranha_plant_000_offset_003_mesh_tri_1[] = {
	gsSPVertex(piranha_plant_000_offset_003_mesh_vtx_1 + 0, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(2, 1, 4, 0),
	gsSPEndDisplayList(),
};
Vtx piranha_plant_000_offset_003_skinned_vtx_0[4] = {
	{{{163, -65, -3},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 12, -3},0, {-16, 1008},{0xFF, 0x7F, 0x0, 0xFF}}},
	{{{159, -26, 37},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{159, -26, -43},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx piranha_plant_000_offset_003_skinned_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_003_skinned_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_005_mesh_vtx_0[41] = {
	{{{49, -27, -280},0, {-16, 1008},{0xCA, 0x5, 0x8D, 0xFF}}},
	{{{-81, -13, -117},0, {-16, 1008},{0x8C, 0x5, 0xCC, 0xFF}}},
	{{{-34, 42, -195},0, {-16, 1008},{0xB5, 0x51, 0xC2, 0xFF}}},
	{{{-111, 33, -3},0, {-16, 1008},{0x9F, 0x51, 0x0, 0xFF}}},
	{{{158, 49, -254},0, {-16, 1008},{0xF2, 0x72, 0xCA, 0xFF}}},
	{{{433, 71, -3},0, {-16, 1008},{0x36, 0x73, 0x0, 0xFF}}},
	{{{158, 49, 248},0, {-16, 1008},{0xF2, 0x72, 0x36, 0xFF}}},
	{{{-34, 42, 189},0, {-16, 1008},{0xB5, 0x51, 0x3E, 0xFF}}},
	{{{-81, -13, 111},0, {-16, 1008},{0x8C, 0x5, 0x34, 0xFF}}},
	{{{49, -27, 274},0, {-16, 1008},{0xCA, 0x5, 0x73, 0xFF}}},
	{{{163, -15, 310},0, {-16, 1008},{0xEB, 0xB, 0x7D, 0xFF}}},
	{{{167, -60, 279},0, {-16, 1008},{0xFF, 0xB8, 0x68, 0xFF}}},
	{{{296, -12, 316},0, {-16, 1008},{0x24, 0xFD, 0x7A, 0xFF}}},
	{{{365, -64, 197},0, {-16, 1008},{0x4A, 0xAF, 0x41, 0xFF}}},
	{{{407, -3, 241},0, {-16, 1008},{0x61, 0x5, 0x51, 0xFF}}},
	{{{509, -5, -3},0, {-16, 1008},{0x7F, 0xFE, 0x0, 0xFF}}},
	{{{430, -75, -3},0, {-16, 1008},{0x65, 0xB3, 0x0, 0xFF}}},
	{{{509, -5, -3},0, {-16, 1008},{0x7F, 0xFE, 0x0, 0xFF}}},
	{{{365, -64, 197},0, {-16, 1008},{0x4A, 0xAF, 0x41, 0xFF}}},
	{{{365, -64, -203},0, {-16, 1008},{0x4A, 0xAF, 0xBF, 0xFF}}},
	{{{407, -3, -247},0, {-16, 1008},{0x61, 0x5, 0xAF, 0xFF}}},
	{{{296, -12, -322},0, {-16, 1008},{0x24, 0xFD, 0x86, 0xFF}}},
	{{{167, -60, -285},0, {-16, 1008},{0xFF, 0xB8, 0x98, 0xFF}}},
	{{{163, -15, -316},0, {-16, 1008},{0xEB, 0xB, 0x83, 0xFF}}},
	{{{49, -27, -280},0, {-16, 1008},{0xCA, 0x5, 0x8D, 0xFF}}},
	{{{158, 49, -254},0, {-16, 1008},{0xF2, 0x72, 0xCA, 0xFF}}},
	{{{-34, 42, -195},0, {-16, 1008},{0xB5, 0x51, 0xC2, 0xFF}}},
	{{{352, 65, -198},0, {-16, 1008},{0x22, 0x74, 0xDA, 0xFF}}},
	{{{433, 71, -3},0, {-16, 1008},{0x36, 0x73, 0x0, 0xFF}}},
	{{{352, 65, 192},0, {-16, 1008},{0x22, 0x74, 0x26, 0xFF}}},
	{{{158, 49, 248},0, {-16, 1008},{0xF2, 0x72, 0x36, 0xFF}}},
	{{{296, -12, 316},0, {-16, 1008},{0x24, 0xFD, 0x7A, 0xFF}}},
	{{{158, 49, 248},0, {-16, 1008},{0xF2, 0x72, 0x36, 0xFF}}},
	{{{163, -15, 310},0, {-16, 1008},{0xEB, 0xB, 0x7D, 0xFF}}},
	{{{296, -12, 316},0, {-16, 1008},{0x24, 0xFD, 0x7A, 0xFF}}},
	{{{352, 65, 192},0, {-16, 1008},{0x22, 0x74, 0x26, 0xFF}}},
	{{{407, -3, 241},0, {-16, 1008},{0x61, 0x5, 0x51, 0xFF}}},
	{{{509, -5, -3},0, {-16, 1008},{0x7F, 0xFE, 0x0, 0xFF}}},
	{{{407, -3, -247},0, {-16, 1008},{0x61, 0x5, 0xAF, 0xFF}}},
	{{{296, -12, -322},0, {-16, 1008},{0x24, 0xFD, 0x86, 0xFF}}},
	{{{352, 65, -198},0, {-16, 1008},{0x22, 0x74, 0xDA, 0xFF}}},
};

Gfx piranha_plant_000_offset_005_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_005_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 2, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(8, 7, 3, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 6, 0),
	gsSP1Triangle(6, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(piranha_plant_000_offset_005_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(5, 7, 9, 0),
	gsSP1Triangle(11, 5, 9, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(12, 1, 11, 0),
	gsSP1Triangle(13, 1, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(piranha_plant_000_offset_005_mesh_vtx_0 + 32, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(5, 6, 8, 0),
	gsSPEndDisplayList(),
};Vtx piranha_plant_000_offset_005_mesh_vtx_1[41] = {
	{{{381, -154, 82},0, {858, 1501},{0x5E, 0xB3, 0x25, 0xFF}}},
	{{{430, -75, -3},0, {496, 1718},{0x65, 0xB3, 0x0, 0xFF}}},
	{{{365, -64, 197},0, {1350, 1434},{0x4A, 0xAF, 0x41, 0xFF}}},
	{{{381, -154, -88},0, {134, 1501},{0x5E, 0xB3, 0xDB, 0xFF}}},
	{{{299, -230, -3},0, {496, 1144},{0x34, 0x8C, 0x0, 0xFF}}},
	{{{261, -164, 202},0, {1373, 975},{0x2B, 0xAD, 0x56, 0xFF}}},
	{{{167, -60, 279},0, {1704, 563},{0xFF, 0xB8, 0x68, 0xFF}}},
	{{{91, -178, 202},0, {1373, 229},{0xE1, 0xA6, 0x54, 0xFF}}},
	{{{49, -27, 274},0, {1682, 44},{0xCA, 0x5, 0x73, 0xFF}}},
	{{{-32, -68, 197},0, {1350, -315},{0xA2, 0xE8, 0x52, 0xFF}}},
	{{{-81, -13, 111},0, {985, -529},{0x8C, 0x5, 0x34, 0xFF}}},
	{{{-115, -75, -3},0, {496, -677},{0x86, 0xDE, 0x0, 0xFF}}},
	{{{-111, 33, -3},0, {496, -659},{0x9F, 0x51, 0x0, 0xFF}}},
	{{{-81, -13, -117},0, {7, -529},{0x8C, 0x5, 0xCC, 0xFF}}},
	{{{-32, -68, -203},0, {-358, -315},{0xA2, 0xE8, 0xAE, 0xFF}}},
	{{{49, -27, -280},0, {-690, 44},{0xCA, 0x5, 0x8D, 0xFF}}},
	{{{49, -27, -280},0, {-690, 44},{0xCA, 0x5, 0x8D, 0xFF}}},
	{{{91, -178, -208},0, {-381, 229},{0xE1, 0xA6, 0xAC, 0xFF}}},
	{{{-32, -68, -203},0, {-358, -315},{0xA2, 0xE8, 0xAE, 0xFF}}},
	{{{167, -60, -285},0, {-712, 563},{0xFF, 0xB8, 0x98, 0xFF}}},
	{{{261, -164, -208},0, {-381, 975},{0x2B, 0xAD, 0xAA, 0xFF}}},
	{{{365, -64, -203},0, {-358, 1434},{0x4A, 0xAF, 0xBF, 0xFF}}},
	{{{381, -154, -88},0, {134, 1501},{0x5E, 0xB3, 0xDB, 0xFF}}},
	{{{430, -75, -3},0, {496, 1718},{0x65, 0xB3, 0x0, 0xFF}}},
	{{{182, -240, -121},0, {-7, 629},{0xA, 0x89, 0xD5, 0xFF}}},
	{{{299, -230, -3},0, {496, 1144},{0x34, 0x8C, 0x0, 0xFF}}},
	{{{64, -249, -3},0, {496, 111},{0xDF, 0x85, 0x0, 0xFF}}},
	{{{182, -240, 115},0, {999, 629},{0xA, 0x89, 0x2B, 0xFF}}},
	{{{261, -164, 202},0, {1373, 975},{0x2B, 0xAD, 0x56, 0xFF}}},
	{{{91, -178, 202},0, {1373, 229},{0xE1, 0xA6, 0x54, 0xFF}}},
	{{{-28, -188, 82},0, {858, -294},{0xB0, 0xA6, 0x27, 0xFF}}},
	{{{-32, -68, 197},0, {1350, -315},{0xA2, 0xE8, 0x52, 0xFF}}},
	{{{-32, -68, 197},0, {1350, -315},{0xA2, 0xE8, 0x52, 0xFF}}},
	{{{-115, -75, -3},0, {496, -677},{0x86, 0xDE, 0x0, 0xFF}}},
	{{{-28, -188, 82},0, {858, -294},{0xB0, 0xA6, 0x27, 0xFF}}},
	{{{-28, -188, -88},0, {134, -294},{0xB0, 0xA6, 0xD9, 0xFF}}},
	{{{-32, -68, -203},0, {-358, -315},{0xA2, 0xE8, 0xAE, 0xFF}}},
	{{{91, -178, -208},0, {-381, 229},{0xE1, 0xA6, 0xAC, 0xFF}}},
	{{{182, -240, -121},0, {-7, 629},{0xA, 0x89, 0xD5, 0xFF}}},
	{{{261, -164, -208},0, {-381, 975},{0x2B, 0xAD, 0xAA, 0xFF}}},
	{{{64, -249, -3},0, {496, 111},{0xDF, 0x85, 0x0, 0xFF}}},
};

Gfx piranha_plant_000_offset_005_mesh_tri_1[] = {
	gsSPVertex(piranha_plant_000_offset_005_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 2, 5, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(piranha_plant_000_offset_005_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(4, 6, 8, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 10, 11, 0),
	gsSP1Triangle(10, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(piranha_plant_000_offset_005_mesh_vtx_1 + 32, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(3, 6, 8, 0),
	gsSP1Triangle(2, 3, 8, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_displaylist_mesh_vtx_0[2] = {
	{{{348, 120, -197},0, {1008, 496},{0x57, 0x9, 0xA3, 0xFF}}},
	{{{352, 65, -198},0, {1008, -16},{0x53, 0x9, 0xA1, 0xFF}}},
};

Gfx piranha_plant_000_displaylist_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_displaylist_mesh_vtx_0 + 0, 2, 2),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 0, 1, 0),
	gsSPEndDisplayList(),
};Vtx piranha_plant_000_displaylist_mesh_vtx_1[12] = {
	{{{428, 127, -3},0, {1008, 496},{0x7F, 0xB, 0x0, 0xFF}}},
	{{{352, 65, -198},0, {-16, -16},{0x53, 0x9, 0xA1, 0xFF}}},
	{{{348, 120, -197},0, {-16, 496},{0x57, 0x9, 0xA3, 0xFF}}},
	{{{433, 71, -3},0, {1008, -16},{0x7F, 0xB, 0x0, 0xFF}}},
	{{{348, 120, 191},0, {1008, 496},{0x57, 0x9, 0x5D, 0xFF}}},
	{{{352, 65, 192},0, {1008, -16},{0x53, 0x9, 0x5F, 0xFF}}},
	{{{428, 127, -3},0, {-16, 496},{0x7F, 0xB, 0x0, 0xFF}}},
	{{{433, 71, -3},0, {-16, -16},{0x7F, 0xB, 0x0, 0xFF}}},
	{{{158, 49, 248},0, {1008, -16},{0x24, 0x1, 0x7A, 0xFF}}},
	{{{352, 65, 192},0, {-16, -16},{0x53, 0x9, 0x5F, 0xFF}}},
	{{{348, 120, 191},0, {-16, 496},{0x57, 0x9, 0x5D, 0xFF}}},
	{{{156, 79, 249},0, {1008, 496},{0x25, 0x0, 0x7A, 0xFF}}},
};

Gfx piranha_plant_000_displaylist_mesh_tri_1[] = {
	gsSPVertex(piranha_plant_000_displaylist_mesh_vtx_1 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSPEndDisplayList(),
};
Vtx piranha_plant_000_displaylist_skinned_vtx_0[2] = {
	{{{158, 49, -254},0, {-16, -16},{0x24, 0x1, 0x86, 0xFF}}},
	{{{156, 79, -255},0, {-16, 496},{0x25, 0x0, 0x86, 0xFF}}},
};

Gfx piranha_plant_000_displaylist_skinned_tri_0[] = {
	gsSPVertex(piranha_plant_000_displaylist_skinned_vtx_0 + 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_006_mesh_vtx_0[45] = {
	{{{0, 68, 181},0, {-16, 1008},{0xA5, 0x30, 0x4A, 0xFF}}},
	{{{61, 36, 254},0, {-16, 1008},{0xD6, 0xD3, 0x6F, 0xFF}}},
	{{{180, 119, 257},0, {-16, 1008},{0xF0, 0x3B, 0x6F, 0xFF}}},
	{{{-30, 28, 156},0, {-16, 1008},{0x95, 0xD9, 0x38, 0xFF}}},
	{{{-68, 62, -3},0, {-16, 1008},{0x8B, 0x32, 0x0, 0xFF}}},
	{{{-84, 23, -3},0, {-16, 1008},{0x86, 0xDD, 0x0, 0xFF}}},
	{{{-30, 28, -162},0, {-16, 1008},{0x95, 0xD9, 0xC8, 0xFF}}},
	{{{0, 68, -187},0, {-16, 1008},{0xA5, 0x30, 0xB6, 0xFF}}},
	{{{61, 36, -260},0, {-16, 1008},{0xD6, 0xD3, 0x91, 0xFF}}},
	{{{180, 119, -263},0, {-16, 1008},{0xF0, 0x3B, 0x91, 0xFF}}},
	{{{296, 92, -276},0, {-16, 1008},{0x26, 0xEE, 0x88, 0xFF}}},
	{{{353, 162, -180},0, {-16, 1008},{0x31, 0x63, 0xC1, 0xFF}}},
	{{{399, 111, -220},0, {-16, 1008},{0x5A, 0xFE, 0xA7, 0xFF}}},
	{{{481, 155, -3},0, {-16, 1008},{0x74, 0x34, 0x0, 0xFF}}},
	{{{402, 172, -3},0, {-16, 1008},{0x3A, 0x71, 0x0, 0xFF}}},
	{{{353, 162, 174},0, {-16, 1008},{0x31, 0x63, 0x3F, 0xFF}}},
	{{{353, 162, 174},0, {-16, 1008},{0x31, 0x63, 0x3F, 0xFF}}},
	{{{399, 111, 214},0, {-16, 1008},{0x5A, 0xFE, 0x59, 0xFF}}},
	{{{481, 155, -3},0, {-16, 1008},{0x74, 0x34, 0x0, 0xFF}}},
	{{{296, 92, 270},0, {-16, 1008},{0x26, 0xEE, 0x78, 0xFF}}},
	{{{180, 119, 257},0, {-16, 1008},{0xF0, 0x3B, 0x6F, 0xFF}}},
	{{{61, 36, 254},0, {-16, 1008},{0xD6, 0xD3, 0x6F, 0xFF}}},
	{{{186, 48, 217},0, {-16, 1008},{0x17, 0x86, 0x1B, 0xFF}}},
	{{{21, 7, 165},0, {-16, 1008},{0xF5, 0x84, 0x19, 0xFF}}},
	{{{-30, 28, 156},0, {-16, 1008},{0x95, 0xD9, 0x38, 0xFF}}},
	{{{-48, 1, -3},0, {-16, 1008},{0xE0, 0x85, 0x0, 0xFF}}},
	{{{-84, 23, -3},0, {-16, 1008},{0x86, 0xDD, 0x0, 0xFF}}},
	{{{-30, 28, -162},0, {-16, 1008},{0x95, 0xD9, 0xC8, 0xFF}}},
	{{{21, 7, -171},0, {-16, 1008},{0xF5, 0x84, 0xE7, 0xFF}}},
	{{{61, 36, -260},0, {-16, 1008},{0xD6, 0xD3, 0x91, 0xFF}}},
	{{{186, 48, -223},0, {-16, 1008},{0x17, 0x86, 0xE5, 0xFF}}},
	{{{296, 92, -276},0, {-16, 1008},{0x26, 0xEE, 0x88, 0xFF}}},
	{{{296, 92, -276},0, {-16, 1008},{0x26, 0xEE, 0x88, 0xFF}}},
	{{{366, 64, -158},0, {-16, 1008},{0x2B, 0x8B, 0xE6, 0xFF}}},
	{{{186, 48, -223},0, {-16, 1008},{0x17, 0x86, 0xE5, 0xFF}}},
	{{{399, 111, -220},0, {-16, 1008},{0x5A, 0xFE, 0xA7, 0xFF}}},
	{{{441, 70, -3},0, {-16, 1008},{0x51, 0x9E, 0x0, 0xFF}}},
	{{{481, 155, -3},0, {-16, 1008},{0x74, 0x34, 0x0, 0xFF}}},
	{{{399, 111, 214},0, {-16, 1008},{0x5A, 0xFE, 0x59, 0xFF}}},
	{{{366, 64, 152},0, {-16, 1008},{0x2B, 0x8B, 0x1A, 0xFF}}},
	{{{296, 92, 270},0, {-16, 1008},{0x26, 0xEE, 0x78, 0xFF}}},
	{{{186, 48, 217},0, {-16, 1008},{0x17, 0x86, 0x1B, 0xFF}}},
	{{{-48, 1, -3},0, {-16, 1008},{0xE0, 0x85, 0x0, 0xFF}}},
	{{{21, 7, 165},0, {-16, 1008},{0xF5, 0x84, 0x19, 0xFF}}},
	{{{21, 7, -171},0, {-16, 1008},{0xF5, 0x84, 0xE7, 0xFF}}},
};

Gfx piranha_plant_000_offset_006_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_006_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(14, 13, 11, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(piranha_plant_000_offset_006_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(piranha_plant_000_offset_006_mesh_vtx_0 + 32, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(4, 7, 9, 0),
	gsSP1Triangle(9, 10, 4, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(2, 4, 10, 0),
	gsSP1Triangle(2, 1, 4, 0),
	gsSP1Triangle(10, 12, 2, 0),
	gsSPEndDisplayList(),
};Vtx piranha_plant_000_offset_006_mesh_vtx_1[30] = {
	{{{98, 175, 183},0, {1370, 74},{0xCD, 0x53, 0x51, 0xFF}}},
	{{{0, 68, 181},0, {1361, -398},{0xA5, 0x30, 0x4A, 0xFF}}},
	{{{180, 119, 257},0, {1718, 470},{0xF0, 0x3B, 0x6F, 0xFF}}},
	{{{-10, 166, 73},0, {856, -447},{0xA1, 0x4C, 0x24, 0xFF}}},
	{{{168, 256, 101},0, {985, 415},{0xF1, 0x76, 0x2C, 0xFF}}},
	{{{248, 202, 178},0, {1347, 802},{0x15, 0x62, 0x4E, 0xFF}}},
	{{{353, 162, 174},0, {1328, 1310},{0x31, 0x63, 0x3F, 0xFF}}},
	{{{354, 211, 72},0, {847, 1314},{0x4A, 0x63, 0x1F, 0xFF}}},
	{{{402, 172, -3},0, {496, 1544},{0x3A, 0x71, 0x0, 0xFF}}},
	{{{354, 211, -78},0, {145, 1314},{0x4A, 0x63, 0xE1, 0xFF}}},
	{{{353, 162, -180},0, {-336, 1310},{0x31, 0x63, 0xC1, 0xFF}}},
	{{{248, 202, -184},0, {-355, 802},{0x15, 0x62, 0xB2, 0xFF}}},
	{{{180, 119, -263},0, {-726, 470},{0xF0, 0x3B, 0x91, 0xFF}}},
	{{{98, 175, -189},0, {-378, 74},{0xCD, 0x53, 0xAF, 0xFF}}},
	{{{0, 68, -187},0, {-369, -398},{0xA5, 0x30, 0xB6, 0xFF}}},
	{{{-10, 166, -79},0, {136, -447},{0xA1, 0x4C, 0xDC, 0xFF}}},
	{{{0, 68, -187},0, {-369, -398},{0xA5, 0x30, 0xB6, 0xFF}}},
	{{{-68, 62, -3},0, {496, -726},{0x8B, 0x32, 0x0, 0xFF}}},
	{{{-10, 166, -79},0, {136, -447},{0xA1, 0x4C, 0xDC, 0xFF}}},
	{{{-10, 166, 73},0, {856, -447},{0xA1, 0x4C, 0x24, 0xFF}}},
	{{{0, 68, 181},0, {1361, -398},{0xA5, 0x30, 0x4A, 0xFF}}},
	{{{66, 238, -3},0, {496, -82},{0xC6, 0x71, 0x0, 0xFF}}},
	{{{168, 256, -107},0, {7, 415},{0xF1, 0x76, 0xD4, 0xFF}}},
	{{{168, 256, 101},0, {985, 415},{0xF1, 0x76, 0x2C, 0xFF}}},
	{{{272, 265, -3},0, {496, 915},{0x20, 0x7B, 0x0, 0xFF}}},
	{{{354, 211, 72},0, {847, 1314},{0x4A, 0x63, 0x1F, 0xFF}}},
	{{{248, 202, 178},0, {1347, 802},{0x15, 0x62, 0x4E, 0xFF}}},
	{{{354, 211, -78},0, {145, 1314},{0x4A, 0x63, 0xE1, 0xFF}}},
	{{{248, 202, -184},0, {-355, 802},{0x15, 0x62, 0xB2, 0xFF}}},
	{{{98, 175, -189},0, {-378, 74},{0xCD, 0x53, 0xAF, 0xFF}}},
};

Gfx piranha_plant_000_offset_006_mesh_tri_1[] = {
	gsSPVertex(piranha_plant_000_offset_006_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 2, 5, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(piranha_plant_000_offset_006_mesh_vtx_1 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 2, 3, 0),
	gsSP1Triangle(6, 2, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(3, 7, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(9, 11, 8, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(8, 12, 6, 0),
	gsSP1Triangle(12, 13, 6, 0),
	gsSP1Triangle(13, 2, 6, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_displaylist_001_mesh_vtx_0[16] = {
	{{{186, 48, -223},0, {1008, -16},{0x2A, 0x8, 0x88, 0xFF}}},
	{{{366, 64, -158},0, {-16, -16},{0x58, 0xFA, 0xA5, 0xFF}}},
	{{{190, 27, -223},0, {1008, 496},{0x2A, 0x7, 0x89, 0xFF}}},
	{{{364, 22, -158},0, {-16, 496},{0x54, 0xFA, 0xA1, 0xFF}}},
	{{{366, 64, -158},0, {1008, -16},{0x58, 0xFA, 0xA5, 0xFF}}},
	{{{441, 70, -3},0, {-16, -16},{0x7F, 0xF7, 0x0, 0xFF}}},
	{{{364, 22, -158},0, {1008, 496},{0x54, 0xFA, 0xA1, 0xFF}}},
	{{{438, 27, -3},0, {-16, 496},{0x7F, 0xF7, 0x0, 0xFF}}},
	{{{441, 70, -3},0, {1008, -16},{0x7F, 0xF7, 0x0, 0xFF}}},
	{{{364, 22, 152},0, {-16, 496},{0x55, 0xFA, 0x5F, 0xFF}}},
	{{{438, 27, -3},0, {1008, 496},{0x7F, 0xF7, 0x0, 0xFF}}},
	{{{366, 64, 152},0, {-16, -16},{0x58, 0xFB, 0x5B, 0xFF}}},
	{{{366, 64, 152},0, {1008, -16},{0x58, 0xFB, 0x5B, 0xFF}}},
	{{{193, 27, 217},0, {-16, 496},{0x2A, 0xC, 0x77, 0xFF}}},
	{{{364, 22, 152},0, {1008, 496},{0x55, 0xFA, 0x5F, 0xFF}}},
	{{{186, 48, 217},0, {-16, -16},{0x2A, 0xE, 0x77, 0xFF}}},
};

Gfx piranha_plant_000_displaylist_001_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_displaylist_001_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_007_mesh_vtx_0[4] = {
	{{{503, -17, -217},0, {-16, -2},{0xFF, 0x7F, 0x1, 0xFF}}},
	{{{-34, -23, 276},0, {2029, 976},{0xFF, 0x7F, 0x1, 0xFF}}},
	{{{498, -19, 281},0, {-16, 976},{0xFF, 0x7F, 0x1, 0xFF}}},
	{{{-29, -20, -223},0, {2029, -2},{0xFF, 0x7F, 0x1, 0xFF}}},
};

Gfx piranha_plant_000_offset_007_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_007_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

Vtx piranha_plant_000_offset_008_mesh_vtx_0[4] = {
	{{{496, -21, -246},0, {-16, -2},{0xFF, 0x7F, 0x1, 0xFF}}},
	{{{-37, -24, -251},0, {2029, -2},{0xFF, 0x7F, 0x1, 0xFF}}},
	{{{-42, -27, 248},0, {2029, 976},{0xFF, 0x7F, 0x1, 0xFF}}},
	{{{491, -24, 253},0, {-16, 976},{0xFF, 0x7F, 0x1, 0xFF}}},
};

Gfx piranha_plant_000_offset_008_mesh_tri_0[] = {
	gsSPVertex(piranha_plant_000_offset_008_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_piranha_plant_Green[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piranha_plant_Green_lights),
	gsSPEndDisplayList(),
};


Gfx mat_piranha_plant_Spots[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, piranha_plant_spots_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(piranha_plant_Spots_lights),
	gsSPEndDisplayList(),
};


Gfx mat_piranha_plant_Teeth[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, piranha_plant_teeth_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_piranha_plant_Teeth[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};


Gfx mat_piranha_plant_Leaves[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, piranha_plant_leaf_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_piranha_plant_Leaves[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};


Gfx piranha_plant_000_offset_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_001_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_001_mesh_tri_0),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_002_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_002_mesh_tri_0),
	gsSPEndDisplayList(),
};


Gfx piranha_plant_000_offset_002_skinned[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_002_skinned_tri_0),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_003_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_003_mesh_tri_0),
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_003_mesh_tri_1),
	gsSPEndDisplayList(),
};


Gfx piranha_plant_000_offset_003_skinned[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_003_skinned_tri_0),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_005_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_005_mesh_tri_0),
	gsSPDisplayList(mat_piranha_plant_Spots),
	gsSPDisplayList(piranha_plant_000_offset_005_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_displaylist_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Teeth),
	gsSPDisplayList(piranha_plant_000_displaylist_mesh_tri_0),
	gsSPDisplayList(mat_revert_piranha_plant_Teeth),
	gsSPDisplayList(mat_piranha_plant_Teeth),
	gsSPDisplayList(piranha_plant_000_displaylist_mesh_tri_1),
	gsSPDisplayList(mat_revert_piranha_plant_Teeth),
	gsSPEndDisplayList(),
};


Gfx piranha_plant_000_displaylist_skinned[] = {
	gsSPDisplayList(mat_piranha_plant_Teeth),
	gsSPDisplayList(piranha_plant_000_displaylist_skinned_tri_0),
	gsSPDisplayList(mat_revert_piranha_plant_Teeth),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_006_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Green),
	gsSPDisplayList(piranha_plant_000_offset_006_mesh_tri_0),
	gsSPDisplayList(mat_piranha_plant_Spots),
	gsSPDisplayList(piranha_plant_000_offset_006_mesh_tri_1),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_displaylist_001_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Teeth),
	gsSPDisplayList(piranha_plant_000_displaylist_001_mesh_tri_0),
	gsSPDisplayList(mat_revert_piranha_plant_Teeth),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_007_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Leaves),
	gsSPDisplayList(piranha_plant_000_offset_007_mesh_tri_0),
	gsSPDisplayList(mat_revert_piranha_plant_Leaves),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_000_offset_008_mesh[] = {
	gsSPDisplayList(mat_piranha_plant_Leaves),
	gsSPDisplayList(piranha_plant_000_offset_008_mesh_tri_0),
	gsSPDisplayList(mat_revert_piranha_plant_Leaves),
	gsSPEndDisplayList(),
};



Gfx piranha_plant_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
