#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B340
// Address: 0x11b340 - 0x11b580
void sub_0011B340_0x11b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B340_0x11b340");
#endif

    switch (ctx->pc) {
        case 0x11b340u: goto label_11b340;
        case 0x11b344u: goto label_11b344;
        case 0x11b348u: goto label_11b348;
        case 0x11b34cu: goto label_11b34c;
        case 0x11b350u: goto label_11b350;
        case 0x11b354u: goto label_11b354;
        case 0x11b358u: goto label_11b358;
        case 0x11b35cu: goto label_11b35c;
        case 0x11b360u: goto label_11b360;
        case 0x11b364u: goto label_11b364;
        case 0x11b368u: goto label_11b368;
        case 0x11b36cu: goto label_11b36c;
        case 0x11b370u: goto label_11b370;
        case 0x11b374u: goto label_11b374;
        case 0x11b378u: goto label_11b378;
        case 0x11b37cu: goto label_11b37c;
        case 0x11b380u: goto label_11b380;
        case 0x11b384u: goto label_11b384;
        case 0x11b388u: goto label_11b388;
        case 0x11b38cu: goto label_11b38c;
        case 0x11b390u: goto label_11b390;
        case 0x11b394u: goto label_11b394;
        case 0x11b398u: goto label_11b398;
        case 0x11b39cu: goto label_11b39c;
        case 0x11b3a0u: goto label_11b3a0;
        case 0x11b3a4u: goto label_11b3a4;
        case 0x11b3a8u: goto label_11b3a8;
        case 0x11b3acu: goto label_11b3ac;
        case 0x11b3b0u: goto label_11b3b0;
        case 0x11b3b4u: goto label_11b3b4;
        case 0x11b3b8u: goto label_11b3b8;
        case 0x11b3bcu: goto label_11b3bc;
        case 0x11b3c0u: goto label_11b3c0;
        case 0x11b3c4u: goto label_11b3c4;
        case 0x11b3c8u: goto label_11b3c8;
        case 0x11b3ccu: goto label_11b3cc;
        case 0x11b3d0u: goto label_11b3d0;
        case 0x11b3d4u: goto label_11b3d4;
        case 0x11b3d8u: goto label_11b3d8;
        case 0x11b3dcu: goto label_11b3dc;
        case 0x11b3e0u: goto label_11b3e0;
        case 0x11b3e4u: goto label_11b3e4;
        case 0x11b3e8u: goto label_11b3e8;
        case 0x11b3ecu: goto label_11b3ec;
        case 0x11b3f0u: goto label_11b3f0;
        case 0x11b3f4u: goto label_11b3f4;
        case 0x11b3f8u: goto label_11b3f8;
        case 0x11b3fcu: goto label_11b3fc;
        case 0x11b400u: goto label_11b400;
        case 0x11b404u: goto label_11b404;
        case 0x11b408u: goto label_11b408;
        case 0x11b40cu: goto label_11b40c;
        case 0x11b410u: goto label_11b410;
        case 0x11b414u: goto label_11b414;
        case 0x11b418u: goto label_11b418;
        case 0x11b41cu: goto label_11b41c;
        case 0x11b420u: goto label_11b420;
        case 0x11b424u: goto label_11b424;
        case 0x11b428u: goto label_11b428;
        case 0x11b42cu: goto label_11b42c;
        case 0x11b430u: goto label_11b430;
        case 0x11b434u: goto label_11b434;
        case 0x11b438u: goto label_11b438;
        case 0x11b43cu: goto label_11b43c;
        case 0x11b440u: goto label_11b440;
        case 0x11b444u: goto label_11b444;
        case 0x11b448u: goto label_11b448;
        case 0x11b44cu: goto label_11b44c;
        case 0x11b450u: goto label_11b450;
        case 0x11b454u: goto label_11b454;
        case 0x11b458u: goto label_11b458;
        case 0x11b45cu: goto label_11b45c;
        case 0x11b460u: goto label_11b460;
        case 0x11b464u: goto label_11b464;
        case 0x11b468u: goto label_11b468;
        case 0x11b46cu: goto label_11b46c;
        case 0x11b470u: goto label_11b470;
        case 0x11b474u: goto label_11b474;
        case 0x11b478u: goto label_11b478;
        case 0x11b47cu: goto label_11b47c;
        case 0x11b480u: goto label_11b480;
        case 0x11b484u: goto label_11b484;
        case 0x11b488u: goto label_11b488;
        case 0x11b48cu: goto label_11b48c;
        case 0x11b490u: goto label_11b490;
        case 0x11b494u: goto label_11b494;
        case 0x11b498u: goto label_11b498;
        case 0x11b49cu: goto label_11b49c;
        case 0x11b4a0u: goto label_11b4a0;
        case 0x11b4a4u: goto label_11b4a4;
        case 0x11b4a8u: goto label_11b4a8;
        case 0x11b4acu: goto label_11b4ac;
        case 0x11b4b0u: goto label_11b4b0;
        case 0x11b4b4u: goto label_11b4b4;
        case 0x11b4b8u: goto label_11b4b8;
        case 0x11b4bcu: goto label_11b4bc;
        case 0x11b4c0u: goto label_11b4c0;
        case 0x11b4c4u: goto label_11b4c4;
        case 0x11b4c8u: goto label_11b4c8;
        case 0x11b4ccu: goto label_11b4cc;
        case 0x11b4d0u: goto label_11b4d0;
        case 0x11b4d4u: goto label_11b4d4;
        case 0x11b4d8u: goto label_11b4d8;
        case 0x11b4dcu: goto label_11b4dc;
        case 0x11b4e0u: goto label_11b4e0;
        case 0x11b4e4u: goto label_11b4e4;
        case 0x11b4e8u: goto label_11b4e8;
        case 0x11b4ecu: goto label_11b4ec;
        case 0x11b4f0u: goto label_11b4f0;
        case 0x11b4f4u: goto label_11b4f4;
        case 0x11b4f8u: goto label_11b4f8;
        case 0x11b4fcu: goto label_11b4fc;
        case 0x11b500u: goto label_11b500;
        case 0x11b504u: goto label_11b504;
        case 0x11b508u: goto label_11b508;
        case 0x11b50cu: goto label_11b50c;
        case 0x11b510u: goto label_11b510;
        case 0x11b514u: goto label_11b514;
        case 0x11b518u: goto label_11b518;
        case 0x11b51cu: goto label_11b51c;
        case 0x11b520u: goto label_11b520;
        case 0x11b524u: goto label_11b524;
        case 0x11b528u: goto label_11b528;
        case 0x11b52cu: goto label_11b52c;
        case 0x11b530u: goto label_11b530;
        case 0x11b534u: goto label_11b534;
        case 0x11b538u: goto label_11b538;
        case 0x11b53cu: goto label_11b53c;
        case 0x11b540u: goto label_11b540;
        case 0x11b544u: goto label_11b544;
        case 0x11b548u: goto label_11b548;
        case 0x11b54cu: goto label_11b54c;
        case 0x11b550u: goto label_11b550;
        case 0x11b554u: goto label_11b554;
        case 0x11b558u: goto label_11b558;
        case 0x11b55cu: goto label_11b55c;
        case 0x11b560u: goto label_11b560;
        case 0x11b564u: goto label_11b564;
        case 0x11b568u: goto label_11b568;
        case 0x11b56cu: goto label_11b56c;
        case 0x11b570u: goto label_11b570;
        case 0x11b574u: goto label_11b574;
        case 0x11b578u: goto label_11b578;
        case 0x11b57cu: goto label_11b57c;
        default: break;
    }

    ctx->pc = 0x11b340u;

label_11b340:
    // 0x11b340: 0x3c1a001f  lui         $k0, 0x1F
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)31 << 16));
label_11b344:
    // 0x11b344: 0x275af600  addiu       $k0, $k0, -0xA00
    ctx->pc = 0x11b344u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294964736));
label_11b348:
    // 0x11b348: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x11b348u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_11b34c:
    // 0x11b34c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x11b34cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_11b350:
    // 0x11b350: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x11b350u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_11b354:
    // 0x11b354: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x11b354u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_11b358:
    // 0x11b358: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x11b358u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_11b35c:
    // 0x11b35c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x11b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_11b360:
    // 0x11b360: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x11b360u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_11b364:
    // 0x11b364: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x11b364u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_11b368:
    // 0x11b368: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x11b368u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_11b36c:
    // 0x11b36c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x11b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_11b370:
    // 0x11b370: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x11b370u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_11b374:
    // 0x11b374: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x11b374u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_11b378:
    // 0x11b378: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x11b378u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_11b37c:
    // 0x11b37c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x11b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_11b380:
    // 0x11b380: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x11b380u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_11b384:
    // 0x11b384: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x11b384u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_11b388:
    // 0x11b388: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x11b388u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_11b38c:
    // 0x11b38c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x11b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_11b390:
    // 0x11b390: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x11b390u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_11b394:
    // 0x11b394: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x11b394u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_11b398:
    // 0x11b398: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x11b398u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_11b39c:
    // 0x11b39c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x11b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_11b3a0:
    // 0x11b3a0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x11b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_11b3a4:
    // 0x11b3a4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x11b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_11b3a8:
    // 0x11b3a8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x11b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_11b3ac:
    // 0x11b3ac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x11b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_11b3b0:
    // 0x11b3b0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x11b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_11b3b4:
    // 0x11b3b4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x11b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_11b3b8:
    // 0x11b3b8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x11b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_11b3bc:
    // 0x11b3bc: 0x1010  mfhi        $v0
    ctx->pc = 0x11b3bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_11b3c0:
    // 0x11b3c0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b3c4:
    // 0x11b3c4: 0xfc22f800  sd          $v0, -0x800($at)
    ctx->pc = 0x11b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965248), GPR_U64(ctx, 2));
label_11b3c8:
    // 0x11b3c8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x11b3c8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_11b3cc:
    // 0x11b3cc: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b3d0:
    // 0x11b3d0: 0xfc22f808  sd          $v0, -0x7F8($at)
    ctx->pc = 0x11b3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965256), GPR_U64(ctx, 2));
label_11b3d4:
    // 0x11b3d4: 0x1012  mflo        $v0
    ctx->pc = 0x11b3d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_11b3d8:
    // 0x11b3d8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b3dc:
    // 0x11b3dc: 0xfc22f810  sd          $v0, -0x7F0($at)
    ctx->pc = 0x11b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965264), GPR_U64(ctx, 2));
label_11b3e0:
    // 0x11b3e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x11b3e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_11b3e4:
    // 0x11b3e4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b3e8:
    // 0x11b3e8: 0xfc22f818  sd          $v0, -0x7E8($at)
    ctx->pc = 0x11b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965272), GPR_U64(ctx, 2));
label_11b3ec:
    // 0x11b3ec: 0x1028  mfsa        $v0
    ctx->pc = 0x11b3ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_11b3f0:
    // 0x11b3f0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b3f4:
    // 0x11b3f4: 0xfc22f820  sd          $v0, -0x7E0($at)
    ctx->pc = 0x11b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965280), GPR_U64(ctx, 2));
label_11b3f8:
    // 0x11b3f8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_11b3fc:
    // 0x11b3fc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x11b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_11b400:
    // 0x11b400: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x11b400u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_11b404:
    // 0x11b404: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_11b408:
    // 0x11b408: 0x3c08001f  lui         $t0, 0x1F
    ctx->pc = 0x11b408u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)31 << 16));
label_11b40c:
    // 0x11b40c: 0x2508f600  addiu       $t0, $t0, -0xA00
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964736));
label_11b410:
    // 0x11b410: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b414:
    // 0x11b414: 0xac26f828  sw          $a2, -0x7D8($at)
    ctx->pc = 0x11b414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965288), GPR_U32(ctx, 6));
label_11b418:
    // 0x11b418: 0x3c010012  lui         $at, 0x12
    ctx->pc = 0x11b418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18 << 16));
label_11b41c:
    // 0x11b41c: 0x2421b440  addiu       $at, $at, -0x4BC0
    ctx->pc = 0x11b41cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947904));
label_11b420:
    // 0x11b420: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x11b420u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_11b424:
    // 0x11b424: 0x40f  sync.p
    ctx->pc = 0x11b424u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b428:
    // 0x11b428: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x11b428u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_11b42c:
    // 0x11b42c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_11b430:
    // 0x11b430: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x11b430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_11b434:
    // 0x11b434: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x11b434u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_11b438:
    // 0x11b438: 0x40f  sync.p
    ctx->pc = 0x11b438u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b43c:
    // 0x11b43c: 0x42000018  eret
    ctx->pc = 0x11b43cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11b440:
    // 0x11b440: 0x3c010013  lui         $at, 0x13
    ctx->pc = 0x11b440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19 << 16));
label_11b444:
    // 0x11b444: 0x8c2124a0  lw          $at, 0x24A0($at)
    ctx->pc = 0x11b444u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9376)));
label_11b448:
    // 0x11b448: 0x3c1d001f  lui         $sp, 0x1F
    ctx->pc = 0x11b448u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)31 << 16));
label_11b44c:
    // 0x11b44c: 0x20f809  jalr        $at
label_11b450:
    if (ctx->pc == 0x11B450u) {
        ctx->pc = 0x11B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B44Cu;
        // 0x11b450: 0x27bdf600  addiu       $sp, $sp, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B454u;
        goto label_11b454;
    }
    ctx->pc = 0x11B44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x11B454u);
        ctx->pc = 0x11B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B44Cu;
        // 0x11b450: 0x27bdf600  addiu       $sp, $sp, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B44Cu, 0x11B454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B454u;
label_11b454:
    // 0x11b454: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x11b454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_11b458:
    // 0x11b458: 0xc  syscall     0
    ctx->pc = 0x11b458u;
    ctx->pc = 0x11B45Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b45c:
    // 0x11b45c: 0x0  nop
    ctx->pc = 0x11b45cu;
    // NOP
label_11b460:
    // 0x11b460: 0x0  nop
    ctx->pc = 0x11b460u;
    // NOP
label_11b464:
    // 0x11b464: 0x0  nop
    ctx->pc = 0x11b464u;
    // NOP
label_11b468:
    // 0x11b468: 0x0  nop
    ctx->pc = 0x11b468u;
    // NOP
label_11b46c:
    // 0x11b46c: 0x0  nop
    ctx->pc = 0x11b46cu;
    // NOP
label_11b470:
    // 0x11b470: 0x0  nop
    ctx->pc = 0x11b470u;
    // NOP
label_11b474:
    // 0x11b474: 0x0  nop
    ctx->pc = 0x11b474u;
    // NOP
label_11b478:
    // 0x11b478: 0x0  nop
    ctx->pc = 0x11b478u;
    // NOP
label_11b47c:
    // 0x11b47c: 0x0  nop
    ctx->pc = 0x11b47cu;
    // NOP
label_11b480:
    // 0x11b480: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_11b484:
    // 0x11b484: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_11b488:
    // 0x11b488: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x11b488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_11b48c:
    // 0x11b48c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x11b48cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_11b490:
    // 0x11b490: 0x40f  sync.p
    ctx->pc = 0x11b490u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b494:
    // 0x11b494: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b498:
    // 0x11b498: 0x8c42f828  lw          $v0, -0x7D8($v0)
    ctx->pc = 0x11b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965288)));
label_11b49c:
    // 0x11b49c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x11b49cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_11b4a0:
    // 0x11b4a0: 0x40f  sync.p
    ctx->pc = 0x11b4a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b4a4:
    // 0x11b4a4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b4a8:
    // 0x11b4a8: 0xdc42f800  ld          $v0, -0x800($v0)
    ctx->pc = 0x11b4a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965248)));
label_11b4ac:
    // 0x11b4ac: 0x400011  mthi        $v0
    ctx->pc = 0x11b4acu;
    ctx->hi = GPR_U64(ctx, 2);
label_11b4b0:
    // 0x11b4b0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b4b4:
    // 0x11b4b4: 0xdc42f808  ld          $v0, -0x7F8($v0)
    ctx->pc = 0x11b4b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965256)));
label_11b4b8:
    // 0x11b4b8: 0x70400011  mthi1       $v0
    ctx->pc = 0x11b4b8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_11b4bc:
    // 0x11b4bc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b4c0:
    // 0x11b4c0: 0xdc42f810  ld          $v0, -0x7F0($v0)
    ctx->pc = 0x11b4c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965264)));
label_11b4c4:
    // 0x11b4c4: 0x400013  mtlo        $v0
    ctx->pc = 0x11b4c4u;
    ctx->lo = GPR_U64(ctx, 2);
label_11b4c8:
    // 0x11b4c8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b4cc:
    // 0x11b4cc: 0xdc42f818  ld          $v0, -0x7E8($v0)
    ctx->pc = 0x11b4ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965272)));
label_11b4d0:
    // 0x11b4d0: 0x70400013  mtlo1       $v0
    ctx->pc = 0x11b4d0u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_11b4d4:
    // 0x11b4d4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_11b4d8:
    // 0x11b4d8: 0xdc42f820  ld          $v0, -0x7E0($v0)
    ctx->pc = 0x11b4d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965280)));
label_11b4dc:
    // 0x11b4dc: 0x400029  mtsa        $v0
    ctx->pc = 0x11b4dcu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_11b4e0:
    // 0x11b4e0: 0x40f  sync.p
    ctx->pc = 0x11b4e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b4e4:
    // 0x11b4e4: 0x3c1a001f  lui         $k0, 0x1F
    ctx->pc = 0x11b4e4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)31 << 16));
label_11b4e8:
    // 0x11b4e8: 0x275af600  addiu       $k0, $k0, -0xA00
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294964736));
label_11b4ec:
    // 0x11b4ec: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x11b4ecu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_11b4f0:
    // 0x11b4f0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x11b4f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_11b4f4:
    // 0x11b4f4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x11b4f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_11b4f8:
    // 0x11b4f8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x11b4f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_11b4fc:
    // 0x11b4fc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x11b4fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_11b500:
    // 0x11b500: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x11b500u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_11b504:
    // 0x11b504: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x11b504u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_11b508:
    // 0x11b508: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x11b508u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_11b50c:
    // 0x11b50c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x11b50cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_11b510:
    // 0x11b510: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x11b510u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_11b514:
    // 0x11b514: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x11b514u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_11b518:
    // 0x11b518: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x11b518u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_11b51c:
    // 0x11b51c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x11b51cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_11b520:
    // 0x11b520: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x11b520u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_11b524:
    // 0x11b524: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x11b524u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_11b528:
    // 0x11b528: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x11b528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_11b52c:
    // 0x11b52c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x11b52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_11b530:
    // 0x11b530: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x11b530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_11b534:
    // 0x11b534: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x11b534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_11b538:
    // 0x11b538: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x11b538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_11b53c:
    // 0x11b53c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x11b53cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_11b540:
    // 0x11b540: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x11b540u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_11b544:
    // 0x11b544: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x11b544u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_11b548:
    // 0x11b548: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x11b548u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_11b54c:
    // 0x11b54c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x11b54cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_11b550:
    // 0x11b550: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x11b550u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_11b554:
    // 0x11b554: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x11b554u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_11b558:
    // 0x11b558: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x11b558u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_11b55c:
    // 0x11b55c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x11b55cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_11b560:
    // 0x11b560: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_11b564:
    // 0x11b564: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_11b568:
    // 0x11b568: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x11b568u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_11b56c:
    // 0x11b56c: 0x40f  sync.p
    ctx->pc = 0x11b56cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b570:
    // 0x11b570: 0x42000018  eret
    ctx->pc = 0x11b570u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11b574:
    // 0x11b574: 0x0  nop
    ctx->pc = 0x11b574u;
    // NOP
label_11b578:
    // 0x11b578: 0x0  nop
    ctx->pc = 0x11b578u;
    // NOP
label_11b57c:
    // 0x11b57c: 0x0  nop
    ctx->pc = 0x11b57cu;
    // NOP
    ctx->pc = 0x11b580u;
}
