#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer cbCS
// {
//
//   uint height;                       // Offset:    0 Size:     4
//   uint width;                        // Offset:    4 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// input                             texture   float         buf             t0      1 
// output                                UAV  float4          2d             u0      1 
// cbCS                              cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_resource_buffer (float,float,float,float) t0
dcl_uav_typed_texture2d (float,float,float,float) u0
dcl_input vThreadID.xy
dcl_temps 2
dcl_thread_group 16, 4, 1
ult r0.xy, vThreadID.xyxx, cb0[0].yxyy
and r0.x, r0.y, r0.x
if_nz r0.x
  imul null, r0.x, cb0[0].y, cb0[0].x
  imad r0.y, cb0[0].y, vThreadID.y, vThreadID.x
  ld_indexable(buffer)(float,float,float,float) r0.z, r0.yyyy, t0.yzxw
  mul r1.x, r0.z, l(0.003922)
  imad r0.z, cb0[0].x, cb0[0].y, r0.y
  ld_indexable(buffer)(float,float,float,float) r0.z, r0.zzzz, t0.yzxw
  mul r1.y, r0.z, l(0.003922)
  ishl r0.x, r0.x, l(1)
  iadd r0.x, r0.x, r0.y
  ld_indexable(buffer)(float,float,float,float) r0.x, r0.xxxx, t0.xyzw
  mul r1.z, r0.x, l(0.003922)
  mov r1.w, l(1.000000)
  store_uav_typed u0.xyzw, vThreadID.xyyy, r1.xyzw
endif 
ret 
// Approximately 18 instruction slots used
#endif

const BYTE g_csTensorRGB8ToSurface[] =
{
     68,  88,  66,  67, 176, 147, 
    187, 101, 220, 196,  15, 142, 
     62, 141, 147, 163, 136,  77, 
    210,  69,   1,   0,   0,   0, 
    188,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    184,   1,   0,   0, 200,   1, 
      0,   0, 216,   1,   0,   0, 
     32,   4,   0,   0,  82,  68, 
     69,  70, 124,   1,   0,   0, 
      1,   0,   0,   0, 176,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  67,   0,   1,   0,   0, 
     82,   1,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      1,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0, 162,   0,   0,   0, 
      4,   0,   0,   0,   5,   0, 
      0,   0,   4,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,   1,   0,   0,   0, 
     13,   0,   0,   0, 169,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    105, 110, 112, 117, 116,   0, 
    111, 117, 116, 112, 117, 116, 
      0,  99,  98,  67,  83,   0, 
    171, 171, 169,   0,   0,   0, 
      2,   0,   0,   0, 200,   0, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  24,   1,   0,   0, 
      0,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
     40,   1,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
     76,   1,   0,   0,   4,   0, 
      0,   0,   4,   0,   0,   0, 
      2,   0,   0,   0,  40,   1, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 104, 101, 
    105, 103, 104, 116,   0, 100, 
    119, 111, 114, 100,   0, 171, 
    171, 171,   0,   0,  19,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  31,   1, 
      0,   0, 119, 105, 100, 116, 
    104,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  49,  48,  46,  49,   0, 
    171, 171,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  83,  72, 
     69,  88,  64,   2,   0,   0, 
     80,   0,   5,   0, 144,   0, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  88,   8, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0, 156,  24,   0,   4, 
      0, 224,  17,   0,   0,   0, 
      0,   0,  85,  85,   0,   0, 
     95,   0,   0,   2,  50,   0, 
      2,   0, 104,   0,   0,   2, 
      2,   0,   0,   0, 155,   0, 
      0,   4,  16,   0,   0,   0, 
      4,   0,   0,   0,   1,   0, 
      0,   0,  79,   0,   0,   7, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,   2,   0, 
     22, 133,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  31,   0, 
      4,   3,  10,   0,  16,   0, 
      0,   0,   0,   0,  38,   0, 
      0,  10,   0, 208,   0,   0, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  35,   0,   0,   8, 
     34,   0,  16,   0,   0,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26,   0,   2,   0, 
     10,   0,   2,   0,  45,   0, 
      0, 137,  66,   0,   0, 128, 
     67,  85,  21,   0,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     86,   5,  16,   0,   0,   0, 
      0,   0, 150, 124,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7,  18,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0, 129, 128, 
    128,  59,  35,   0,   0,  11, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  10, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  45,   0, 
      0, 137,  66,   0,   0, 128, 
     67,  85,  21,   0,  66,   0, 
     16,   0,   0,   0,   0,   0, 
    166,  10,  16,   0,   0,   0, 
      0,   0, 150, 124,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7,  34,   0,  16,   0, 
      1,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0, 129, 128, 
    128,  59,  41,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     30,   0,   0,   7,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  45,   0, 
      0, 137,  66,   0,   0, 128, 
     67,  85,  21,   0,  18,   0, 
     16,   0,   0,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7,  66,   0,  16,   0, 
      1,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0, 129, 128, 
    128,  59,  54,   0,   0,   5, 
    130,   0,  16,   0,   1,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63, 164,   0, 
      0,   6, 242, 224,  17,   0, 
      0,   0,   0,   0,  70,   5, 
      2,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  21,   0, 
      0,   1,  62,   0,   0,   1, 
     83,  84,  65,  84, 148,   0, 
      0,   0,  18,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   5,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0
};