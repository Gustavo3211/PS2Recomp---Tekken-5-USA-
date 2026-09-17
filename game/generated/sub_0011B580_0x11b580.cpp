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

// Function: sub_0011B580
// Address: 0x11b580 - 0x11b7a8
void sub_0011B580_0x11b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B580_0x11b580");
#endif

    switch (ctx->pc) {
        case 0x11b580u: goto label_11b580;
        case 0x11b584u: goto label_11b584;
        case 0x11b588u: goto label_11b588;
        case 0x11b58cu: goto label_11b58c;
        case 0x11b590u: goto label_11b590;
        case 0x11b594u: goto label_11b594;
        case 0x11b598u: goto label_11b598;
        case 0x11b59cu: goto label_11b59c;
        case 0x11b5a0u: goto label_11b5a0;
        case 0x11b5a4u: goto label_11b5a4;
        case 0x11b5a8u: goto label_11b5a8;
        case 0x11b5acu: goto label_11b5ac;
        case 0x11b5b0u: goto label_11b5b0;
        case 0x11b5b4u: goto label_11b5b4;
        case 0x11b5b8u: goto label_11b5b8;
        case 0x11b5bcu: goto label_11b5bc;
        case 0x11b5c0u: goto label_11b5c0;
        case 0x11b5c4u: goto label_11b5c4;
        case 0x11b5c8u: goto label_11b5c8;
        case 0x11b5ccu: goto label_11b5cc;
        case 0x11b5d0u: goto label_11b5d0;
        case 0x11b5d4u: goto label_11b5d4;
        case 0x11b5d8u: goto label_11b5d8;
        case 0x11b5dcu: goto label_11b5dc;
        case 0x11b5e0u: goto label_11b5e0;
        case 0x11b5e4u: goto label_11b5e4;
        case 0x11b5e8u: goto label_11b5e8;
        case 0x11b5ecu: goto label_11b5ec;
        case 0x11b5f0u: goto label_11b5f0;
        case 0x11b5f4u: goto label_11b5f4;
        case 0x11b5f8u: goto label_11b5f8;
        case 0x11b5fcu: goto label_11b5fc;
        case 0x11b600u: goto label_11b600;
        case 0x11b604u: goto label_11b604;
        case 0x11b608u: goto label_11b608;
        case 0x11b60cu: goto label_11b60c;
        case 0x11b610u: goto label_11b610;
        case 0x11b614u: goto label_11b614;
        case 0x11b618u: goto label_11b618;
        case 0x11b61cu: goto label_11b61c;
        case 0x11b620u: goto label_11b620;
        case 0x11b624u: goto label_11b624;
        case 0x11b628u: goto label_11b628;
        case 0x11b62cu: goto label_11b62c;
        case 0x11b630u: goto label_11b630;
        case 0x11b634u: goto label_11b634;
        case 0x11b638u: goto label_11b638;
        case 0x11b63cu: goto label_11b63c;
        case 0x11b640u: goto label_11b640;
        case 0x11b644u: goto label_11b644;
        case 0x11b648u: goto label_11b648;
        case 0x11b64cu: goto label_11b64c;
        case 0x11b650u: goto label_11b650;
        case 0x11b654u: goto label_11b654;
        case 0x11b658u: goto label_11b658;
        case 0x11b65cu: goto label_11b65c;
        case 0x11b660u: goto label_11b660;
        case 0x11b664u: goto label_11b664;
        case 0x11b668u: goto label_11b668;
        case 0x11b66cu: goto label_11b66c;
        case 0x11b670u: goto label_11b670;
        case 0x11b674u: goto label_11b674;
        case 0x11b678u: goto label_11b678;
        case 0x11b67cu: goto label_11b67c;
        case 0x11b680u: goto label_11b680;
        case 0x11b684u: goto label_11b684;
        case 0x11b688u: goto label_11b688;
        case 0x11b68cu: goto label_11b68c;
        case 0x11b690u: goto label_11b690;
        case 0x11b694u: goto label_11b694;
        case 0x11b698u: goto label_11b698;
        case 0x11b69cu: goto label_11b69c;
        case 0x11b6a0u: goto label_11b6a0;
        case 0x11b6a4u: goto label_11b6a4;
        case 0x11b6a8u: goto label_11b6a8;
        case 0x11b6acu: goto label_11b6ac;
        case 0x11b6b0u: goto label_11b6b0;
        case 0x11b6b4u: goto label_11b6b4;
        case 0x11b6b8u: goto label_11b6b8;
        case 0x11b6bcu: goto label_11b6bc;
        case 0x11b6c0u: goto label_11b6c0;
        case 0x11b6c4u: goto label_11b6c4;
        case 0x11b6c8u: goto label_11b6c8;
        case 0x11b6ccu: goto label_11b6cc;
        case 0x11b6d0u: goto label_11b6d0;
        case 0x11b6d4u: goto label_11b6d4;
        case 0x11b6d8u: goto label_11b6d8;
        case 0x11b6dcu: goto label_11b6dc;
        case 0x11b6e0u: goto label_11b6e0;
        case 0x11b6e4u: goto label_11b6e4;
        case 0x11b6e8u: goto label_11b6e8;
        case 0x11b6ecu: goto label_11b6ec;
        case 0x11b6f0u: goto label_11b6f0;
        case 0x11b6f4u: goto label_11b6f4;
        case 0x11b6f8u: goto label_11b6f8;
        case 0x11b6fcu: goto label_11b6fc;
        case 0x11b700u: goto label_11b700;
        case 0x11b704u: goto label_11b704;
        case 0x11b708u: goto label_11b708;
        case 0x11b70cu: goto label_11b70c;
        case 0x11b710u: goto label_11b710;
        case 0x11b714u: goto label_11b714;
        case 0x11b718u: goto label_11b718;
        case 0x11b71cu: goto label_11b71c;
        case 0x11b720u: goto label_11b720;
        case 0x11b724u: goto label_11b724;
        case 0x11b728u: goto label_11b728;
        case 0x11b72cu: goto label_11b72c;
        case 0x11b730u: goto label_11b730;
        case 0x11b734u: goto label_11b734;
        case 0x11b738u: goto label_11b738;
        case 0x11b73cu: goto label_11b73c;
        case 0x11b740u: goto label_11b740;
        case 0x11b744u: goto label_11b744;
        case 0x11b748u: goto label_11b748;
        case 0x11b74cu: goto label_11b74c;
        case 0x11b750u: goto label_11b750;
        case 0x11b754u: goto label_11b754;
        case 0x11b758u: goto label_11b758;
        case 0x11b75cu: goto label_11b75c;
        case 0x11b760u: goto label_11b760;
        case 0x11b764u: goto label_11b764;
        case 0x11b768u: goto label_11b768;
        case 0x11b76cu: goto label_11b76c;
        case 0x11b770u: goto label_11b770;
        case 0x11b774u: goto label_11b774;
        case 0x11b778u: goto label_11b778;
        case 0x11b77cu: goto label_11b77c;
        case 0x11b780u: goto label_11b780;
        case 0x11b784u: goto label_11b784;
        case 0x11b788u: goto label_11b788;
        case 0x11b78cu: goto label_11b78c;
        case 0x11b790u: goto label_11b790;
        case 0x11b794u: goto label_11b794;
        case 0x11b798u: goto label_11b798;
        case 0x11b79cu: goto label_11b79c;
        case 0x11b7a0u: goto label_11b7a0;
        case 0x11b7a4u: goto label_11b7a4;
        default: break;
    }

    ctx->pc = 0x11b580u;

label_11b580:
    // 0x11b580: 0x3c1a001f  lui         $k0, 0x1F
    ctx->pc = 0x11b580u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)31 << 16));
label_11b584:
    // 0x11b584: 0x275af600  addiu       $k0, $k0, -0xA00
    ctx->pc = 0x11b584u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294964736));
label_11b588:
    // 0x11b588: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x11b588u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_11b58c:
    // 0x11b58c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x11b58cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_11b590:
    // 0x11b590: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x11b590u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_11b594:
    // 0x11b594: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x11b594u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_11b598:
    // 0x11b598: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x11b598u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_11b59c:
    // 0x11b59c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x11b59cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_11b5a0:
    // 0x11b5a0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x11b5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_11b5a4:
    // 0x11b5a4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x11b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_11b5a8:
    // 0x11b5a8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x11b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_11b5ac:
    // 0x11b5ac: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x11b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_11b5b0:
    // 0x11b5b0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x11b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_11b5b4:
    // 0x11b5b4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x11b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_11b5b8:
    // 0x11b5b8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x11b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_11b5bc:
    // 0x11b5bc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x11b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_11b5c0:
    // 0x11b5c0: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x11b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_11b5c4:
    // 0x11b5c4: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x11b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_11b5c8:
    // 0x11b5c8: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x11b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_11b5cc:
    // 0x11b5cc: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x11b5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_11b5d0:
    // 0x11b5d0: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x11b5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_11b5d4:
    // 0x11b5d4: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x11b5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_11b5d8:
    // 0x11b5d8: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x11b5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_11b5dc:
    // 0x11b5dc: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x11b5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_11b5e0:
    // 0x11b5e0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x11b5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_11b5e4:
    // 0x11b5e4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x11b5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_11b5e8:
    // 0x11b5e8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x11b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_11b5ec:
    // 0x11b5ec: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x11b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_11b5f0:
    // 0x11b5f0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x11b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_11b5f4:
    // 0x11b5f4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x11b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_11b5f8:
    // 0x11b5f8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x11b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_11b5fc:
    // 0x11b5fc: 0x1010  mfhi        $v0
    ctx->pc = 0x11b5fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_11b600:
    // 0x11b600: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b604:
    // 0x11b604: 0xfc22f800  sd          $v0, -0x800($at)
    ctx->pc = 0x11b604u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965248), GPR_U64(ctx, 2));
label_11b608:
    // 0x11b608: 0x70001010  mfhi1       $v0
    ctx->pc = 0x11b608u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_11b60c:
    // 0x11b60c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b610:
    // 0x11b610: 0xfc22f808  sd          $v0, -0x7F8($at)
    ctx->pc = 0x11b610u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965256), GPR_U64(ctx, 2));
label_11b614:
    // 0x11b614: 0x1012  mflo        $v0
    ctx->pc = 0x11b614u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_11b618:
    // 0x11b618: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b61c:
    // 0x11b61c: 0xfc22f810  sd          $v0, -0x7F0($at)
    ctx->pc = 0x11b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965264), GPR_U64(ctx, 2));
label_11b620:
    // 0x11b620: 0x70001012  mflo1       $v0
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_11b624:
    // 0x11b624: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b628:
    // 0x11b628: 0xfc22f818  sd          $v0, -0x7E8($at)
    ctx->pc = 0x11b628u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965272), GPR_U64(ctx, 2));
label_11b62c:
    // 0x11b62c: 0x1028  mfsa        $v0
    ctx->pc = 0x11b62cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_11b630:
    // 0x11b630: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11b630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_11b634:
    // 0x11b634: 0xfc22f820  sd          $v0, -0x7E0($at)
    ctx->pc = 0x11b634u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965280), GPR_U64(ctx, 2));
label_11b638:
    // 0x11b638: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x11b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_11b63c:
    // 0x11b63c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x11b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_11b640:
    // 0x11b640: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x11b640u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_11b644:
    // 0x11b644: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x11b644u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_11b648:
    // 0x11b648: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_11b64c:
    // 0x11b64c: 0x3c09001f  lui         $t1, 0x1F
    ctx->pc = 0x11b64cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)31 << 16));
label_11b650:
    // 0x11b650: 0x2529f600  addiu       $t1, $t1, -0xA00
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964736));
label_11b654:
    // 0x11b654: 0x3c010012  lui         $at, 0x12
    ctx->pc = 0x11b654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18 << 16));
label_11b658:
    // 0x11b658: 0x2421b67c  addiu       $at, $at, -0x4984
    ctx->pc = 0x11b658u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294948476));
label_11b65c:
    // 0x11b65c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x11b65cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_11b660:
    // 0x11b660: 0x40f  sync.p
    ctx->pc = 0x11b660u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b664:
    // 0x11b664: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x11b664u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_11b668:
    // 0x11b668: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x11b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_11b66c:
    // 0x11b66c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x11b66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_11b670:
    // 0x11b670: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x11b670u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_11b674:
    // 0x11b674: 0x40f  sync.p
    ctx->pc = 0x11b674u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_11b678:
    // 0x11b678: 0x42000018  eret
    ctx->pc = 0x11b678u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_11b67c:
    // 0x11b67c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x11b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_11b680:
    // 0x11b680: 0x3c010013  lui         $at, 0x13
    ctx->pc = 0x11b680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19 << 16));
label_11b684:
    // 0x11b684: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_11b688:
    // 0x11b688: 0x8c2124a8  lw          $at, 0x24A8($at)
    ctx->pc = 0x11b688u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9384)));
label_11b68c:
    // 0x11b68c: 0x3c1d001f  lui         $sp, 0x1F
    ctx->pc = 0x11b68cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)31 << 16));
label_11b690:
    // 0x11b690: 0x20f809  jalr        $at
label_11b694:
    if (ctx->pc == 0x11B694u) {
        ctx->pc = 0x11B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B690u;
        // 0x11b694: 0x27bdf600  addiu       $sp, $sp, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B698u;
        goto label_11b698;
    }
    ctx->pc = 0x11B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x11B698u);
        ctx->pc = 0x11B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B690u;
        // 0x11b694: 0x27bdf600  addiu       $sp, $sp, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B690u, 0x11B698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B698u;
label_11b698:
    // 0x11b698: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x11b698u;
    runtime->handleBreak(rdram, ctx);
label_11b69c:
    // 0x11b69c: 0x0  nop
    ctx->pc = 0x11b69cu;
    // NOP
label_11b6a0:
    // 0x11b6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11b6a4:
    // 0x11b6a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11b6a8:
    // 0x11b6a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b6ac:
    // 0x11b6ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11b6b0:
    // 0x11b6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b6b4:
    // 0x11b6b4: 0xc04706e  jal         func_11C1B8
label_11b6b8:
    if (ctx->pc == 0x11B6B8u) {
        ctx->pc = 0x11B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B4u;
        // 0x11b6b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6BCu;
        goto label_11b6bc;
    }
    ctx->pc = 0x11B6B4u;
    SET_GPR_U32(ctx, 31, 0x11B6BCu);
    ctx->pc = 0x11B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6B4u;
    // 0x11b6b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1B8u, 0x11B6B4u, 0x11B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6BCu;
label_11b6bc:
    // 0x11b6bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_11b6c0:
    if (ctx->pc == 0x11B6C0u) {
        ctx->pc = 0x11B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6BCu;
        // 0x11b6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6C4u;
        goto label_11b6c4;
    }
    ctx->pc = 0x11B6BCu;
    {
        const bool branch_taken_0x11b6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6BCu;
        // 0x11b6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6bc) {
            ctx->pc = 0x11B6F4u;
            goto label_11b6f4;
        }
    }
    ctx->pc = 0x11B6C4u;
label_11b6c4:
    // 0x11b6c4: 0xc04626a  jal         func_1189A8
label_11b6c8:
    if (ctx->pc == 0x11B6C8u) {
        ctx->pc = 0x11B6CCu;
        goto label_11b6cc;
    }
    ctx->pc = 0x11B6C4u;
    SET_GPR_U32(ctx, 31, 0x11B6CCu);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11B6C4u, 0x11B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6CCu;
label_11b6cc:
    // 0x11b6cc: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
label_11b6d0:
    // 0x11b6d0: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
label_11b6d4:
    // 0x11b6d4: 0x8c70f840  lw          $s0, -0x7C0($v1)
    ctx->pc = 0x11b6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965312)));
label_11b6d8:
    // 0x11b6d8: 0xac71f840  sw          $s1, -0x7C0($v1)
    ctx->pc = 0x11b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965312), GPR_U32(ctx, 17));
label_11b6dc:
    // 0x11b6dc: 0xac9cf844  sw          $gp, -0x7BC($a0)
    ctx->pc = 0x11b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965316), GPR_U32(ctx, 28));
label_11b6e0:
    // 0x11b6e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11b6e4:
    if (ctx->pc == 0x11B6E4u) {
        ctx->pc = 0x11B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6E0u;
        // 0x11b6e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B6E8u;
        goto label_11b6e8;
    }
    ctx->pc = 0x11B6E0u;
    {
        const bool branch_taken_0x11b6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6E0u;
        // 0x11b6e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6e0) {
            ctx->pc = 0x11B6F4u;
            goto label_11b6f4;
        }
    }
    ctx->pc = 0x11B6E8u;
label_11b6e8:
    // 0x11b6e8: 0xc04627e  jal         func_1189F8
label_11b6ec:
    if (ctx->pc == 0x11B6ECu) {
        ctx->pc = 0x11B6F0u;
        goto label_11b6f0;
    }
    ctx->pc = 0x11B6E8u;
    SET_GPR_U32(ctx, 31, 0x11B6F0u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11B6E8u, 0x11B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6F0u;
label_11b6f0:
    // 0x11b6f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b6f4:
    // 0x11b6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11b6f8:
    // 0x11b6f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b6fc:
    // 0x11b6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b700:
    // 0x11b700: 0x3e00008  jr          $ra
label_11b704:
    if (ctx->pc == 0x11B704u) {
        ctx->pc = 0x11B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B700u;
        // 0x11b704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B708u;
        goto label_11b708;
    }
    ctx->pc = 0x11B700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B700u;
        // 0x11b704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B708u;
label_11b708:
    // 0x11b708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11b70c:
    // 0x11b70c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11b710:
    // 0x11b710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b714:
    // 0x11b714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11b718:
    // 0x11b718: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x11b718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
label_11b71c:
    // 0x11b71c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11b720:
    // 0x11b720: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x11b720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
label_11b724:
    // 0x11b724: 0xae032820  sw          $v1, 0x2820($s0)
    ctx->pc = 0x11b724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10272), GPR_U32(ctx, 3));
label_11b728:
    // 0x11b728: 0x8e022820  lw          $v0, 0x2820($s0)
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10272)));
label_11b72c:
    // 0x11b72c: 0xac822824  sw          $v0, 0x2824($a0)
    ctx->pc = 0x11b72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10276), GPR_U32(ctx, 2));
label_11b730:
    // 0x11b730: 0x8e032820  lw          $v1, 0x2820($s0)
    ctx->pc = 0x11b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10272)));
label_11b734:
    // 0x11b734: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_11b738:
    if (ctx->pc == 0x11B738u) {
        ctx->pc = 0x11B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B734u;
        // 0x11b738: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B73Cu;
        goto label_11b73c;
    }
    ctx->pc = 0x11B734u;
    {
        const bool branch_taken_0x11b734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B734u;
        // 0x11b738: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b734) {
            ctx->pc = 0x11B750u;
            goto label_11b750;
        }
    }
    ctx->pc = 0x11B73Cu;
label_11b73c:
    // 0x11b73c: 0xae002820  sw          $zero, 0x2820($s0)
    ctx->pc = 0x11b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10272), GPR_U32(ctx, 0));
label_11b740:
    // 0x11b740: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11b740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11b744:
    // 0x11b744: 0xac4027f4  sw          $zero, 0x27F4($v0)
    ctx->pc = 0x11b744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10228), GPR_U32(ctx, 0));
label_11b748:
    // 0x11b748: 0x10000014  b           . + 4 + (0x14 << 2)
label_11b74c:
    if (ctx->pc == 0x11B74Cu) {
        ctx->pc = 0x11B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B748u;
        // 0x11b74c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B750u;
        goto label_11b750;
    }
    ctx->pc = 0x11B748u;
    {
        const bool branch_taken_0x11b748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B748u;
        // 0x11b74c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b748) {
            ctx->pc = 0x11B79Cu;
            goto label_11b79c;
        }
    }
    ctx->pc = 0x11B750u;
label_11b750:
    // 0x11b750: 0x8c4427e8  lw          $a0, 0x27E8($v0)
    ctx->pc = 0x11b750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10216)));
label_11b754:
    // 0x11b754: 0xc043cf4  jal         func_10F3D0
label_11b758:
    if (ctx->pc == 0x11B758u) {
        ctx->pc = 0x11B75Cu;
        goto label_11b75c;
    }
    ctx->pc = 0x11B754u;
    SET_GPR_U32(ctx, 31, 0x11B75Cu);
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x11B754u, 0x11B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B75Cu;
label_11b75c:
    // 0x11b75c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
label_11b760:
    // 0x11b760: 0x8c6227d4  lw          $v0, 0x27D4($v1)
    ctx->pc = 0x11b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10196)));
label_11b764:
    // 0x11b764: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11b768:
    if (ctx->pc == 0x11B768u) {
        ctx->pc = 0x11B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B764u;
        // 0x11b768: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B76Cu;
        goto label_11b76c;
    }
    ctx->pc = 0x11B764u;
    {
        const bool branch_taken_0x11b764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B764u;
        // 0x11b768: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b764) {
            ctx->pc = 0x11B78Cu;
            goto label_11b78c;
        }
    }
    ctx->pc = 0x11B76Cu;
label_11b76c:
    // 0x11b76c: 0x8c43f840  lw          $v1, -0x7C0($v0)
    ctx->pc = 0x11b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965312)));
label_11b770:
    // 0x11b770: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_11b774:
    if (ctx->pc == 0x11B774u) {
        ctx->pc = 0x11B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B770u;
        // 0x11b774: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B778u;
        goto label_11b778;
    }
    ctx->pc = 0x11B770u;
    {
        const bool branch_taken_0x11b770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B770u;
        // 0x11b774: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b770) {
            ctx->pc = 0x11B78Cu;
            goto label_11b78c;
        }
    }
    ctx->pc = 0x11B778u;
label_11b778:
    // 0x11b778: 0x8c4427e0  lw          $a0, 0x27E0($v0)
    ctx->pc = 0x11b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10208)));
label_11b77c:
    // 0x11b77c: 0xc043cf4  jal         func_10F3D0
label_11b780:
    if (ctx->pc == 0x11B780u) {
        ctx->pc = 0x11B784u;
        goto label_11b784;
    }
    ctx->pc = 0x11B77Cu;
    SET_GPR_U32(ctx, 31, 0x11B784u);
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x11B77Cu, 0x11B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B784u;
label_11b784:
    // 0x11b784: 0x10000003  b           . + 4 + (0x3 << 2)
label_11b788:
    if (ctx->pc == 0x11B788u) {
        ctx->pc = 0x11B78Cu;
        goto label_11b78c;
    }
    ctx->pc = 0x11B784u;
    {
        const bool branch_taken_0x11b784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b784) {
            ctx->pc = 0x11B794u;
            goto label_11b794;
        }
    }
    ctx->pc = 0x11B78Cu;
label_11b78c:
    // 0x11b78c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_11b790:
    // 0x11b790: 0xac4027f4  sw          $zero, 0x27F4($v0)
    ctx->pc = 0x11b790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10228), GPR_U32(ctx, 0));
label_11b794:
    // 0x11b794: 0xae002820  sw          $zero, 0x2820($s0)
    ctx->pc = 0x11b794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10272), GPR_U32(ctx, 0));
label_11b798:
    // 0x11b798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11b798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b79c:
    // 0x11b79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b7a0:
    // 0x11b7a0: 0x3e00008  jr          $ra
label_11b7a4:
    if (ctx->pc == 0x11B7A4u) {
        ctx->pc = 0x11B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7A0u;
        // 0x11b7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B7A8u;
        goto label_fallthrough_0x11b7a0;
    }
    ctx->pc = 0x11B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7A0u;
        // 0x11b7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11b7a0:
    ctx->pc = 0x11B7A8u;
}
