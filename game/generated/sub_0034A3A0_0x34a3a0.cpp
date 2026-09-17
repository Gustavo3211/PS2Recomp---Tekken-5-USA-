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

// Function: sub_0034A3A0
// Address: 0x34a3a0 - 0x34a7c8
void sub_0034A3A0_0x34a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A3A0_0x34a3a0");
#endif

    switch (ctx->pc) {
        case 0x34a3a0u: goto label_34a3a0;
        case 0x34a3a4u: goto label_34a3a4;
        case 0x34a3a8u: goto label_34a3a8;
        case 0x34a3acu: goto label_34a3ac;
        case 0x34a3b0u: goto label_34a3b0;
        case 0x34a3b4u: goto label_34a3b4;
        case 0x34a3b8u: goto label_34a3b8;
        case 0x34a3bcu: goto label_34a3bc;
        case 0x34a3c0u: goto label_34a3c0;
        case 0x34a3c4u: goto label_34a3c4;
        case 0x34a3c8u: goto label_34a3c8;
        case 0x34a3ccu: goto label_34a3cc;
        case 0x34a3d0u: goto label_34a3d0;
        case 0x34a3d4u: goto label_34a3d4;
        case 0x34a3d8u: goto label_34a3d8;
        case 0x34a3dcu: goto label_34a3dc;
        case 0x34a3e0u: goto label_34a3e0;
        case 0x34a3e4u: goto label_34a3e4;
        case 0x34a3e8u: goto label_34a3e8;
        case 0x34a3ecu: goto label_34a3ec;
        case 0x34a3f0u: goto label_34a3f0;
        case 0x34a3f4u: goto label_34a3f4;
        case 0x34a3f8u: goto label_34a3f8;
        case 0x34a3fcu: goto label_34a3fc;
        case 0x34a400u: goto label_34a400;
        case 0x34a404u: goto label_34a404;
        case 0x34a408u: goto label_34a408;
        case 0x34a40cu: goto label_34a40c;
        case 0x34a410u: goto label_34a410;
        case 0x34a414u: goto label_34a414;
        case 0x34a418u: goto label_34a418;
        case 0x34a41cu: goto label_34a41c;
        case 0x34a420u: goto label_34a420;
        case 0x34a424u: goto label_34a424;
        case 0x34a428u: goto label_34a428;
        case 0x34a42cu: goto label_34a42c;
        case 0x34a430u: goto label_34a430;
        case 0x34a434u: goto label_34a434;
        case 0x34a438u: goto label_34a438;
        case 0x34a43cu: goto label_34a43c;
        case 0x34a440u: goto label_34a440;
        case 0x34a444u: goto label_34a444;
        case 0x34a448u: goto label_34a448;
        case 0x34a44cu: goto label_34a44c;
        case 0x34a450u: goto label_34a450;
        case 0x34a454u: goto label_34a454;
        case 0x34a458u: goto label_34a458;
        case 0x34a45cu: goto label_34a45c;
        case 0x34a460u: goto label_34a460;
        case 0x34a464u: goto label_34a464;
        case 0x34a468u: goto label_34a468;
        case 0x34a46cu: goto label_34a46c;
        case 0x34a470u: goto label_34a470;
        case 0x34a474u: goto label_34a474;
        case 0x34a478u: goto label_34a478;
        case 0x34a47cu: goto label_34a47c;
        case 0x34a480u: goto label_34a480;
        case 0x34a484u: goto label_34a484;
        case 0x34a488u: goto label_34a488;
        case 0x34a48cu: goto label_34a48c;
        case 0x34a490u: goto label_34a490;
        case 0x34a494u: goto label_34a494;
        case 0x34a498u: goto label_34a498;
        case 0x34a49cu: goto label_34a49c;
        case 0x34a4a0u: goto label_34a4a0;
        case 0x34a4a4u: goto label_34a4a4;
        case 0x34a4a8u: goto label_34a4a8;
        case 0x34a4acu: goto label_34a4ac;
        case 0x34a4b0u: goto label_34a4b0;
        case 0x34a4b4u: goto label_34a4b4;
        case 0x34a4b8u: goto label_34a4b8;
        case 0x34a4bcu: goto label_34a4bc;
        case 0x34a4c0u: goto label_34a4c0;
        case 0x34a4c4u: goto label_34a4c4;
        case 0x34a4c8u: goto label_34a4c8;
        case 0x34a4ccu: goto label_34a4cc;
        case 0x34a4d0u: goto label_34a4d0;
        case 0x34a4d4u: goto label_34a4d4;
        case 0x34a4d8u: goto label_34a4d8;
        case 0x34a4dcu: goto label_34a4dc;
        case 0x34a4e0u: goto label_34a4e0;
        case 0x34a4e4u: goto label_34a4e4;
        case 0x34a4e8u: goto label_34a4e8;
        case 0x34a4ecu: goto label_34a4ec;
        case 0x34a4f0u: goto label_34a4f0;
        case 0x34a4f4u: goto label_34a4f4;
        case 0x34a4f8u: goto label_34a4f8;
        case 0x34a4fcu: goto label_34a4fc;
        case 0x34a500u: goto label_34a500;
        case 0x34a504u: goto label_34a504;
        case 0x34a508u: goto label_34a508;
        case 0x34a50cu: goto label_34a50c;
        case 0x34a510u: goto label_34a510;
        case 0x34a514u: goto label_34a514;
        case 0x34a518u: goto label_34a518;
        case 0x34a51cu: goto label_34a51c;
        case 0x34a520u: goto label_34a520;
        case 0x34a524u: goto label_34a524;
        case 0x34a528u: goto label_34a528;
        case 0x34a52cu: goto label_34a52c;
        case 0x34a530u: goto label_34a530;
        case 0x34a534u: goto label_34a534;
        case 0x34a538u: goto label_34a538;
        case 0x34a53cu: goto label_34a53c;
        case 0x34a540u: goto label_34a540;
        case 0x34a544u: goto label_34a544;
        case 0x34a548u: goto label_34a548;
        case 0x34a54cu: goto label_34a54c;
        case 0x34a550u: goto label_34a550;
        case 0x34a554u: goto label_34a554;
        case 0x34a558u: goto label_34a558;
        case 0x34a55cu: goto label_34a55c;
        case 0x34a560u: goto label_34a560;
        case 0x34a564u: goto label_34a564;
        case 0x34a568u: goto label_34a568;
        case 0x34a56cu: goto label_34a56c;
        case 0x34a570u: goto label_34a570;
        case 0x34a574u: goto label_34a574;
        case 0x34a578u: goto label_34a578;
        case 0x34a57cu: goto label_34a57c;
        case 0x34a580u: goto label_34a580;
        case 0x34a584u: goto label_34a584;
        case 0x34a588u: goto label_34a588;
        case 0x34a58cu: goto label_34a58c;
        case 0x34a590u: goto label_34a590;
        case 0x34a594u: goto label_34a594;
        case 0x34a598u: goto label_34a598;
        case 0x34a59cu: goto label_34a59c;
        case 0x34a5a0u: goto label_34a5a0;
        case 0x34a5a4u: goto label_34a5a4;
        case 0x34a5a8u: goto label_34a5a8;
        case 0x34a5acu: goto label_34a5ac;
        case 0x34a5b0u: goto label_34a5b0;
        case 0x34a5b4u: goto label_34a5b4;
        case 0x34a5b8u: goto label_34a5b8;
        case 0x34a5bcu: goto label_34a5bc;
        case 0x34a5c0u: goto label_34a5c0;
        case 0x34a5c4u: goto label_34a5c4;
        case 0x34a5c8u: goto label_34a5c8;
        case 0x34a5ccu: goto label_34a5cc;
        case 0x34a5d0u: goto label_34a5d0;
        case 0x34a5d4u: goto label_34a5d4;
        case 0x34a5d8u: goto label_34a5d8;
        case 0x34a5dcu: goto label_34a5dc;
        case 0x34a5e0u: goto label_34a5e0;
        case 0x34a5e4u: goto label_34a5e4;
        case 0x34a5e8u: goto label_34a5e8;
        case 0x34a5ecu: goto label_34a5ec;
        case 0x34a5f0u: goto label_34a5f0;
        case 0x34a5f4u: goto label_34a5f4;
        case 0x34a5f8u: goto label_34a5f8;
        case 0x34a5fcu: goto label_34a5fc;
        case 0x34a600u: goto label_34a600;
        case 0x34a604u: goto label_34a604;
        case 0x34a608u: goto label_34a608;
        case 0x34a60cu: goto label_34a60c;
        case 0x34a610u: goto label_34a610;
        case 0x34a614u: goto label_34a614;
        case 0x34a618u: goto label_34a618;
        case 0x34a61cu: goto label_34a61c;
        case 0x34a620u: goto label_34a620;
        case 0x34a624u: goto label_34a624;
        case 0x34a628u: goto label_34a628;
        case 0x34a62cu: goto label_34a62c;
        case 0x34a630u: goto label_34a630;
        case 0x34a634u: goto label_34a634;
        case 0x34a638u: goto label_34a638;
        case 0x34a63cu: goto label_34a63c;
        case 0x34a640u: goto label_34a640;
        case 0x34a644u: goto label_34a644;
        case 0x34a648u: goto label_34a648;
        case 0x34a64cu: goto label_34a64c;
        case 0x34a650u: goto label_34a650;
        case 0x34a654u: goto label_34a654;
        case 0x34a658u: goto label_34a658;
        case 0x34a65cu: goto label_34a65c;
        case 0x34a660u: goto label_34a660;
        case 0x34a664u: goto label_34a664;
        case 0x34a668u: goto label_34a668;
        case 0x34a66cu: goto label_34a66c;
        case 0x34a670u: goto label_34a670;
        case 0x34a674u: goto label_34a674;
        case 0x34a678u: goto label_34a678;
        case 0x34a67cu: goto label_34a67c;
        case 0x34a680u: goto label_34a680;
        case 0x34a684u: goto label_34a684;
        case 0x34a688u: goto label_34a688;
        case 0x34a68cu: goto label_34a68c;
        case 0x34a690u: goto label_34a690;
        case 0x34a694u: goto label_34a694;
        case 0x34a698u: goto label_34a698;
        case 0x34a69cu: goto label_34a69c;
        case 0x34a6a0u: goto label_34a6a0;
        case 0x34a6a4u: goto label_34a6a4;
        case 0x34a6a8u: goto label_34a6a8;
        case 0x34a6acu: goto label_34a6ac;
        case 0x34a6b0u: goto label_34a6b0;
        case 0x34a6b4u: goto label_34a6b4;
        case 0x34a6b8u: goto label_34a6b8;
        case 0x34a6bcu: goto label_34a6bc;
        case 0x34a6c0u: goto label_34a6c0;
        case 0x34a6c4u: goto label_34a6c4;
        case 0x34a6c8u: goto label_34a6c8;
        case 0x34a6ccu: goto label_34a6cc;
        case 0x34a6d0u: goto label_34a6d0;
        case 0x34a6d4u: goto label_34a6d4;
        case 0x34a6d8u: goto label_34a6d8;
        case 0x34a6dcu: goto label_34a6dc;
        case 0x34a6e0u: goto label_34a6e0;
        case 0x34a6e4u: goto label_34a6e4;
        case 0x34a6e8u: goto label_34a6e8;
        case 0x34a6ecu: goto label_34a6ec;
        case 0x34a6f0u: goto label_34a6f0;
        case 0x34a6f4u: goto label_34a6f4;
        case 0x34a6f8u: goto label_34a6f8;
        case 0x34a6fcu: goto label_34a6fc;
        case 0x34a700u: goto label_34a700;
        case 0x34a704u: goto label_34a704;
        case 0x34a708u: goto label_34a708;
        case 0x34a70cu: goto label_34a70c;
        case 0x34a710u: goto label_34a710;
        case 0x34a714u: goto label_34a714;
        case 0x34a718u: goto label_34a718;
        case 0x34a71cu: goto label_34a71c;
        case 0x34a720u: goto label_34a720;
        case 0x34a724u: goto label_34a724;
        case 0x34a728u: goto label_34a728;
        case 0x34a72cu: goto label_34a72c;
        case 0x34a730u: goto label_34a730;
        case 0x34a734u: goto label_34a734;
        case 0x34a738u: goto label_34a738;
        case 0x34a73cu: goto label_34a73c;
        case 0x34a740u: goto label_34a740;
        case 0x34a744u: goto label_34a744;
        case 0x34a748u: goto label_34a748;
        case 0x34a74cu: goto label_34a74c;
        case 0x34a750u: goto label_34a750;
        case 0x34a754u: goto label_34a754;
        case 0x34a758u: goto label_34a758;
        case 0x34a75cu: goto label_34a75c;
        case 0x34a760u: goto label_34a760;
        case 0x34a764u: goto label_34a764;
        case 0x34a768u: goto label_34a768;
        case 0x34a76cu: goto label_34a76c;
        case 0x34a770u: goto label_34a770;
        case 0x34a774u: goto label_34a774;
        case 0x34a778u: goto label_34a778;
        case 0x34a77cu: goto label_34a77c;
        case 0x34a780u: goto label_34a780;
        case 0x34a784u: goto label_34a784;
        case 0x34a788u: goto label_34a788;
        case 0x34a78cu: goto label_34a78c;
        case 0x34a790u: goto label_34a790;
        case 0x34a794u: goto label_34a794;
        case 0x34a798u: goto label_34a798;
        case 0x34a79cu: goto label_34a79c;
        case 0x34a7a0u: goto label_34a7a0;
        case 0x34a7a4u: goto label_34a7a4;
        case 0x34a7a8u: goto label_34a7a8;
        case 0x34a7acu: goto label_34a7ac;
        case 0x34a7b0u: goto label_34a7b0;
        case 0x34a7b4u: goto label_34a7b4;
        case 0x34a7b8u: goto label_34a7b8;
        case 0x34a7bcu: goto label_34a7bc;
        case 0x34a7c0u: goto label_34a7c0;
        case 0x34a7c4u: goto label_34a7c4;
        default: break;
    }

    ctx->pc = 0x34a3a0u;

label_34a3a0:
    // 0x34a3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34a3a4:
    // 0x34a3a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x34a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_34a3a8:
    // 0x34a3a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34a3ac:
    // 0x34a3ac: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x34a3acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_34a3b0:
    // 0x34a3b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34a3b4:
    // 0x34a3b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34a3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34a3b8:
    // 0x34a3b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_34a3bc:
    // 0x34a3bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34a3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34a3c0:
    // 0x34a3c0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x34a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_34a3c4:
    // 0x34a3c4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x34a3c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34a3c8:
    // 0x34a3c8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_34a3cc:
    // 0x34a3cc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x34a3ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34a3d0:
    // 0x34a3d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34a3d4:
    // 0x34a3d4: 0x26030d00  addiu       $v1, $s0, 0xD00
    ctx->pc = 0x34a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a3d8:
    // 0x34a3d8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_34a3dc:
    // 0x34a3dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_34a3e0:
    // 0x34a3e0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x34a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_34a3e4:
    // 0x34a3e4: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x34a3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_34a3e8:
    // 0x34a3e8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_34a3ec:
    // 0x34a3ec: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34a3f0:
    // 0x34a3f0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x34a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_34a3f4:
    // 0x34a3f4: 0x8c6701f4  lw          $a3, 0x1F4($v1)
    ctx->pc = 0x34a3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_34a3f8:
    // 0x34a3f8: 0xe21824  and         $v1, $a3, $v0
    ctx->pc = 0x34a3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34a3fc:
    // 0x34a3fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_34a400:
    if (ctx->pc == 0x34A400u) {
        ctx->pc = 0x34A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3FCu;
        // 0x34a400: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A404u;
        goto label_34a404;
    }
    ctx->pc = 0x34A3FCu;
    {
        const bool branch_taken_0x34a3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3FCu;
        // 0x34a400: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3fc) {
            ctx->pc = 0x34A410u;
            goto label_34a410;
        }
    }
    ctx->pc = 0x34A404u;
label_34a404:
    // 0x34a404: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a408:
    // 0x34a408: 0x10000004  b           . + 4 + (0x4 << 2)
label_34a40c:
    if (ctx->pc == 0x34A40Cu) {
        ctx->pc = 0x34A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A408u;
        // 0x34a40c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A410u;
        goto label_34a410;
    }
    ctx->pc = 0x34A408u;
    {
        const bool branch_taken_0x34a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A408u;
        // 0x34a40c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a408) {
            ctx->pc = 0x34A41Cu;
            goto label_34a41c;
        }
    }
    ctx->pc = 0x34A410u;
label_34a410:
    // 0x34a410: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34a414:
    // 0x34a414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a418:
    // 0x34a418: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x34a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34a41c:
    // 0x34a41c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a420:
    // 0x34a420: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x34a420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34a424:
    // 0x34a424: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x34a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34a428:
    // 0x34a428: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_34a42c:
    // 0x34a42c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x34a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
label_34a430:
    // 0x34a430: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34a434:
    // 0x34a434: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34a434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_34a438:
    // 0x34a438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a43c:
    // 0x34a43c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a440:
    // 0x34a440: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34a440u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34a444:
    // 0x34a444: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34a444u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34a448:
    // 0x34a448: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_34a44c:
    // 0x34a44c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34a44cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34a450:
    // 0x34a450: 0x8e69000c  lw          $t1, 0xC($s3)
    ctx->pc = 0x34a450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_34a454:
    // 0x34a454: 0x26040d00  addiu       $a0, $s0, 0xD00
    ctx->pc = 0x34a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a458:
    // 0x34a458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34a45c:
    // 0x34a45c: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x34a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_34a460:
    // 0x34a460: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x34a460u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_34a464:
    // 0x34a464: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x34a464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_34a468:
    // 0x34a468: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x34a468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_34a46c:
    // 0x34a46c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x34a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_34a470:
    // 0x34a470: 0x32e80004  andi        $t0, $s7, 0x4
    ctx->pc = 0x34a470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4);
label_34a474:
    // 0x34a474: 0x95230002  lhu         $v1, 0x2($t1)
    ctx->pc = 0x34a474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_34a478:
    // 0x34a478: 0x3c056c02  lui         $a1, 0x6C02
    ctx->pc = 0x34a478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27650 << 16));
label_34a47c:
    // 0x34a47c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x34a47cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_34a480:
    // 0x34a480: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x34a480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_34a484:
    // 0x34a484: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x34a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_34a488:
    // 0x34a488: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x34a488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_34a48c:
    // 0x34a48c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_34a490:
    // 0x34a490: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x34a490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_34a494:
    // 0x34a494: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x34a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_34a498:
    // 0x34a498: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x34a498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_34a49c:
    // 0x34a49c: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x34a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_34a4a0:
    // 0x34a4a0: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x34a4a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_34a4a4:
    // 0x34a4a4: 0xae28001c  sw          $t0, 0x1C($s1)
    ctx->pc = 0x34a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 8));
label_34a4a8:
    // 0x34a4a8: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x34a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_34a4ac:
    // 0x34a4ac: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x34a4acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_34a4b0:
    // 0x34a4b0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x34a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_34a4b4:
    // 0x34a4b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a4b8:
    // 0x34a4b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x34a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_34a4bc:
    // 0x34a4bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a4c0:
    // 0x34a4c0: 0x70463389  pcpyld      $a2, $v0, $a2
    ctx->pc = 0x34a4c0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
label_34a4c4:
    // 0x34a4c4: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x34a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
label_34a4c8:
    // 0x34a4c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a4cc:
    // 0x34a4cc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x34a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_34a4d0:
    // 0x34a4d0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x34a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_34a4d4:
    // 0x34a4d4: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x34a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_34a4d8:
    // 0x34a4d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34a4dc:
    if (ctx->pc == 0x34A4DCu) {
        ctx->pc = 0x34A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4D8u;
        // 0x34a4dc: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A4E0u;
        goto label_34a4e0;
    }
    ctx->pc = 0x34A4D8u;
    {
        const bool branch_taken_0x34a4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4D8u;
        // 0x34a4dc: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4d8) {
            ctx->pc = 0x34A4F4u;
            goto label_34a4f4;
        }
    }
    ctx->pc = 0x34A4E0u;
label_34a4e0:
    // 0x34a4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a4e4:
    // 0x34a4e4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x34a4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34a4e8:
    // 0x34a4e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34a4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34a4ec:
    // 0x34a4ec: 0x60f809  jalr        $v1
label_34a4f0:
    if (ctx->pc == 0x34A4F0u) {
        ctx->pc = 0x34A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4ECu;
        // 0x34a4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A4F4u;
        goto label_34a4f4;
    }
    ctx->pc = 0x34A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x34A4F4u);
        ctx->pc = 0x34A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4ECu;
        // 0x34a4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A4ECu, 0x34A4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A4F4u;
label_34a4f4:
    // 0x34a4f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a4f8:
    // 0x34a4f8: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x34a4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34a4fc:
    // 0x34a4fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34a500:
    // 0x34a500: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x34a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_34a504:
    // 0x34a504: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_34a508:
    if (ctx->pc == 0x34A508u) {
        ctx->pc = 0x34A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A504u;
        // 0x34a508: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A50Cu;
        goto label_34a50c;
    }
    ctx->pc = 0x34A504u;
    {
        const bool branch_taken_0x34a504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x34A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A504u;
        // 0x34a508: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a504) {
            ctx->pc = 0x34A520u;
            goto label_34a520;
        }
    }
    ctx->pc = 0x34A50Cu;
label_34a50c:
    // 0x34a50c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a510:
    // 0x34a510: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a514:
    // 0x34a514: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a518:
    // 0x34a518: 0x10000006  b           . + 4 + (0x6 << 2)
label_34a51c:
    if (ctx->pc == 0x34A51Cu) {
        ctx->pc = 0x34A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A518u;
        // 0x34a51c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A520u;
        goto label_34a520;
    }
    ctx->pc = 0x34A518u;
    {
        const bool branch_taken_0x34a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A518u;
        // 0x34a51c: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a518) {
            ctx->pc = 0x34A534u;
            goto label_34a534;
        }
    }
    ctx->pc = 0x34A520u;
label_34a520:
    // 0x34a520: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34a520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34a524:
    // 0x34a524: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a528:
    // 0x34a528: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a52c:
    // 0x34a52c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a530:
    // 0x34a530: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x34a530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_34a534:
    // 0x34a534: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a538:
    // 0x34a538: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x34a538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a53c:
    // 0x34a53c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34a540:
    // 0x34a540: 0x3c026804  lui         $v0, 0x6804
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26628 << 16));
label_34a544:
    // 0x34a544: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x34a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_34a548:
    // 0x34a548: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34a548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34a54c:
    // 0x34a54c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34a54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_34a550:
    // 0x34a550: 0x70673b89  pcpyld      $a3, $v1, $a3
    ctx->pc = 0x34a550u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_34a554:
    // 0x34a554: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x34a554u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
label_34a558:
    // 0x34a558: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x34a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34a55c:
    // 0x34a55c: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x34a55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_34a560:
    // 0x34a560: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x34a560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_34a564:
    // 0x34a564: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_34a568:
    // 0x34a568: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_34a56c:
    if (ctx->pc == 0x34A56Cu) {
        ctx->pc = 0x34A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A568u;
        // 0x34a56c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A570u;
        goto label_34a570;
    }
    ctx->pc = 0x34A568u;
    {
        const bool branch_taken_0x34a568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A568u;
        // 0x34a56c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a568) {
            ctx->pc = 0x34A584u;
            goto label_34a584;
        }
    }
    ctx->pc = 0x34A570u;
label_34a570:
    // 0x34a570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a574:
    // 0x34a574: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a578:
    // 0x34a578: 0xc0d2b84  jal         func_34AE10
label_34a57c:
    if (ctx->pc == 0x34A57Cu) {
        ctx->pc = 0x34A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A578u;
        // 0x34a57c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A580u;
        goto label_34a580;
    }
    ctx->pc = 0x34A578u;
    SET_GPR_U32(ctx, 31, 0x34A580u);
    ctx->pc = 0x34A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A578u;
    // 0x34a57c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AE10u, 0x34A578u, 0x34A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A580u;
label_34a580:
    // 0x34a580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34a580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a584:
    // 0x34a584: 0x26020d00  addiu       $v0, $s0, 0xD00
    ctx->pc = 0x34a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a588:
    // 0x34a588: 0x244200d4  addiu       $v0, $v0, 0xD4
    ctx->pc = 0x34a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
label_34a58c:
    // 0x34a58c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x34a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34a590:
    // 0x34a590: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x34a590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_34a594:
    // 0x34a594: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34a594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_34a598:
    // 0x34a598: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x34a598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34a59c:
    // 0x34a59c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x34a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_34a5a0:
    // 0x34a5a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34a5a4:
    if (ctx->pc == 0x34A5A4u) {
        ctx->pc = 0x34A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5A0u;
        // 0x34a5a4: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A5A8u;
        goto label_34a5a8;
    }
    ctx->pc = 0x34A5A0u;
    {
        const bool branch_taken_0x34a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5A0u;
        // 0x34a5a4: 0x27b60004  addiu       $s6, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5a0) {
            ctx->pc = 0x34A5B0u;
            goto label_34a5b0;
        }
    }
    ctx->pc = 0x34A5A8u;
label_34a5a8:
    // 0x34a5a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_34a5ac:
    if (ctx->pc == 0x34A5ACu) {
        ctx->pc = 0x34A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5A8u;
        // 0x34a5ac: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A5B0u;
        goto label_34a5b0;
    }
    ctx->pc = 0x34A5A8u;
    {
        const bool branch_taken_0x34a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5A8u;
        // 0x34a5ac: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5a8) {
            ctx->pc = 0x34A5E8u;
            goto label_34a5e8;
        }
    }
    ctx->pc = 0x34A5B0u;
label_34a5b0:
    // 0x34a5b0: 0xc0c8864  jal         func_322190
label_34a5b4:
    if (ctx->pc == 0x34A5B4u) {
        ctx->pc = 0x34A5B8u;
        goto label_34a5b8;
    }
    ctx->pc = 0x34A5B0u;
    SET_GPR_U32(ctx, 31, 0x34A5B8u);
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x34A5B0u, 0x34A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5B8u;
label_34a5b8:
    // 0x34a5b8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x34a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34a5bc:
    // 0x34a5bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34a5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a5c0:
    // 0x34a5c0: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x34a5c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_34a5c4:
    // 0x34a5c4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x34a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_34a5c8:
    // 0x34a5c8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x34a5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34a5cc:
    // 0x34a5cc: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x34a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_34a5d0:
    // 0x34a5d0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34a5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34a5d4:
    // 0x34a5d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34a5d8:
    // 0x34a5d8: 0x40f809  jalr        $v0
label_34a5dc:
    if (ctx->pc == 0x34A5DCu) {
        ctx->pc = 0x34A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5D8u;
        // 0x34a5dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A5E0u;
        goto label_34a5e0;
    }
    ctx->pc = 0x34A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A5E0u);
        ctx->pc = 0x34A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5D8u;
        // 0x34a5dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A5D8u, 0x34A5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A5E0u;
label_34a5e0:
    // 0x34a5e0: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x34a5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_34a5e4:
    // 0x34a5e4: 0x8fb40004  lw          $s4, 0x4($sp)
    ctx->pc = 0x34a5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34a5e8:
    // 0x34a5e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x34a5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_34a5ec:
    // 0x34a5ec: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_34a5f0:
    if (ctx->pc == 0x34A5F0u) {
        ctx->pc = 0x34A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5ECu;
        // 0x34a5f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A5F4u;
        goto label_34a5f4;
    }
    ctx->pc = 0x34A5ECu;
    {
        const bool branch_taken_0x34a5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5ECu;
        // 0x34a5f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5ec) {
            ctx->pc = 0x34A6D8u;
            goto label_34a6d8;
        }
    }
    ctx->pc = 0x34A5F4u;
label_34a5f4:
    // 0x34a5f4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x34a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34a5f8:
    // 0x34a5f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x34a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_34a5fc:
    // 0x34a5fc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x34a5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_34a600:
    // 0x34a600: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_34a604:
    if (ctx->pc == 0x34A604u) {
        ctx->pc = 0x34A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A600u;
        // 0x34a604: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A608u;
        goto label_34a608;
    }
    ctx->pc = 0x34A600u;
    {
        const bool branch_taken_0x34a600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a600) {
            ctx->pc = 0x34A604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A600u;
            // 0x34a604: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A620u;
            goto label_34a620;
        }
    }
    ctx->pc = 0x34A608u;
label_34a608:
    // 0x34a608: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a60c:
    // 0x34a60c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a610:
    // 0x34a610: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a614:
    // 0x34a614: 0x10000006  b           . + 4 + (0x6 << 2)
label_34a618:
    if (ctx->pc == 0x34A618u) {
        ctx->pc = 0x34A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A614u;
        // 0x34a618: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A61Cu;
        goto label_34a61c;
    }
    ctx->pc = 0x34A614u;
    {
        const bool branch_taken_0x34a614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A614u;
        // 0x34a618: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a614) {
            ctx->pc = 0x34A630u;
            goto label_34a630;
        }
    }
    ctx->pc = 0x34A61Cu;
label_34a61c:
    // 0x34a61c: 0x0  nop
    ctx->pc = 0x34a61cu;
    // NOP
label_34a620:
    // 0x34a620: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x34a620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_34a624:
    // 0x34a624: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x34a624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_34a628:
    // 0x34a628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a62c:
    // 0x34a62c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x34a62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_34a630:
    // 0x34a630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a634:
    // 0x34a634: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x34a634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a638:
    // 0x34a638: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_34a63c:
    // 0x34a63c: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x34a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_34a640:
    // 0x34a640: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x34a640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
label_34a644:
    // 0x34a644: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34a648:
    // 0x34a648: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x34a648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_34a64c:
    // 0x34a64c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34a64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34a650:
    // 0x34a650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a654:
    // 0x34a654: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34a654u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34a658:
    // 0x34a658: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x34a658u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
label_34a65c:
    // 0x34a65c: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x34a65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34a660:
    // 0x34a660: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34a660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_34a664:
    // 0x34a664: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x34a664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_34a668:
    // 0x34a668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a66c:
    // 0x34a66c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x34a66cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_34a670:
    // 0x34a670: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x34a670u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
label_34a674:
    // 0x34a674: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x34a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_34a678:
    // 0x34a678: 0x26150d00  addiu       $s5, $s0, 0xD00
    ctx->pc = 0x34a678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_34a67c:
    // 0x34a67c: 0x26b000d4  addiu       $s0, $s5, 0xD4
    ctx->pc = 0x34a67cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 212));
label_34a680:
    // 0x34a680: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x34a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_34a684:
    // 0x34a684: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34a684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34a688:
    // 0x34a688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34a68c:
    // 0x34a68c: 0x40f809  jalr        $v0
label_34a690:
    if (ctx->pc == 0x34A690u) {
        ctx->pc = 0x34A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A68Cu;
        // 0x34a690: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A694u;
        goto label_34a694;
    }
    ctx->pc = 0x34A68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34A694u);
        ctx->pc = 0x34A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A68Cu;
        // 0x34a690: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A68Cu, 0x34A694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34A694u;
label_34a694:
    // 0x34a694: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_34a698:
    if (ctx->pc == 0x34A698u) {
        ctx->pc = 0x34A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A694u;
        // 0x34a698: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A69Cu;
        goto label_34a69c;
    }
    ctx->pc = 0x34A694u;
    {
        const bool branch_taken_0x34a694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A694u;
        // 0x34a698: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a694) {
            ctx->pc = 0x34A6A4u;
            goto label_34a6a4;
        }
    }
    ctx->pc = 0x34A69Cu;
label_34a69c:
    // 0x34a69c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_34a6a0:
    // 0x34a6a0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x34a6a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_34a6a4:
    // 0x34a6a4: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x34a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_34a6a8:
    // 0x34a6a8: 0x26b00068  addiu       $s0, $s5, 0x68
    ctx->pc = 0x34a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
label_34a6ac:
    // 0x34a6ac: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x34a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_34a6b0:
    // 0x34a6b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_34a6b4:
    if (ctx->pc == 0x34A6B4u) {
        ctx->pc = 0x34A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6B0u;
        // 0x34a6b4: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A6B8u;
        goto label_34a6b8;
    }
    ctx->pc = 0x34A6B0u;
    {
        const bool branch_taken_0x34a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a6b0) {
            ctx->pc = 0x34A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A6B0u;
            // 0x34a6b4: 0xc6000058  lwc1        $f0, 0x58($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A6C4u;
            goto label_34a6c4;
        }
    }
    ctx->pc = 0x34A6B8u;
label_34a6b8:
    // 0x34a6b8: 0xc0c89d4  jal         func_322750
label_34a6bc:
    if (ctx->pc == 0x34A6BCu) {
        ctx->pc = 0x34A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6B8u;
        // 0x34a6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A6C0u;
        goto label_34a6c0;
    }
    ctx->pc = 0x34A6B8u;
    SET_GPR_U32(ctx, 31, 0x34A6C0u);
    ctx->pc = 0x34A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A6B8u;
    // 0x34a6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322750u, 0x34A6B8u, 0x34A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A6C0u;
label_34a6c0:
    // 0x34a6c0: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x34a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34a6c4:
    // 0x34a6c4: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x34a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_34a6c8:
    // 0x34a6c8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x34a6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_34a6cc:
    // 0x34a6cc: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x34a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_34a6d0:
    // 0x34a6d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_34a6d4:
    if (ctx->pc == 0x34A6D4u) {
        ctx->pc = 0x34A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6D0u;
        // 0x34a6d4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A6D8u;
        goto label_34a6d8;
    }
    ctx->pc = 0x34A6D0u;
    {
        const bool branch_taken_0x34a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6D0u;
        // 0x34a6d4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a6d0) {
            ctx->pc = 0x34A6F0u;
            goto label_34a6f0;
        }
    }
    ctx->pc = 0x34A6D8u;
label_34a6d8:
    // 0x34a6d8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x34a6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_34a6dc:
    // 0x34a6dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a6e0:
    // 0x34a6e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34a6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34a6e4:
    // 0x34a6e4: 0xc0d2ba6  jal         func_34AE98
label_34a6e8:
    if (ctx->pc == 0x34A6E8u) {
        ctx->pc = 0x34A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A6E4u;
        // 0x34a6e8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A6ECu;
        goto label_34a6ec;
    }
    ctx->pc = 0x34A6E4u;
    SET_GPR_U32(ctx, 31, 0x34A6ECu);
    ctx->pc = 0x34A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A6E4u;
    // 0x34a6e8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34AE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34AE98u, 0x34A6E4u, 0x34A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A6ECu;
label_34a6ec:
    // 0x34a6ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34a6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34a6f0:
    // 0x34a6f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_34a6f4:
    // 0x34a6f4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_34a6f8:
    // 0x34a6f8: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x34a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_34a6fc:
    // 0x34a6fc: 0x2442cc28  addiu       $v0, $v0, -0x33D8
    ctx->pc = 0x34a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954024));
label_34a700:
    // 0x34a700: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34a700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34a704:
    // 0x34a704: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34a704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_34a708:
    // 0x34a708: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x34a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_34a70c:
    // 0x34a70c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x34a70cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_34a710:
    // 0x34a710: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34a710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34a714:
    // 0x34a714: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a718:
    // 0x34a718: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34a718u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34a71c:
    // 0x34a71c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x34a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_34a720:
    // 0x34a720: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x34a720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_34a724:
    // 0x34a724: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x34a724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_34a728:
    // 0x34a728: 0x96650014  lhu         $a1, 0x14($s3)
    ctx->pc = 0x34a728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_34a72c:
    // 0x34a72c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x34a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_34a730:
    // 0x34a730: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x34a730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_34a734:
    // 0x34a734: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x34a734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_34a738:
    // 0x34a738: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_34a73c:
    if (ctx->pc == 0x34A73Cu) {
        ctx->pc = 0x34A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A738u;
        // 0x34a73c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A740u;
        goto label_34a740;
    }
    ctx->pc = 0x34A738u;
    {
        const bool branch_taken_0x34a738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x34A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A738u;
        // 0x34a73c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a738) {
            ctx->pc = 0x34A750u;
            goto label_34a750;
        }
    }
    ctx->pc = 0x34A740u;
label_34a740:
    // 0x34a740: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x34a740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_34a744:
    // 0x34a744: 0x10000005  b           . + 4 + (0x5 << 2)
label_34a748:
    if (ctx->pc == 0x34A748u) {
        ctx->pc = 0x34A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A744u;
        // 0x34a748: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A74Cu;
        goto label_34a74c;
    }
    ctx->pc = 0x34A744u;
    {
        const bool branch_taken_0x34a744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A744u;
        // 0x34a748: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a744) {
            ctx->pc = 0x34A75Cu;
            goto label_34a75c;
        }
    }
    ctx->pc = 0x34A74Cu;
label_34a74c:
    // 0x34a74c: 0x0  nop
    ctx->pc = 0x34a74cu;
    // NOP
label_34a750:
    // 0x34a750: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34a754:
    // 0x34a754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34a754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34a758:
    // 0x34a758: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x34a758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_34a75c:
    // 0x34a75c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34a760:
    // 0x34a760: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x34a760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_34a764:
    // 0x34a764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34a764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a768:
    // 0x34a768: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34a768u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34a76c:
    // 0x34a76c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x34a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_34a770:
    // 0x34a770: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x34a770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_34a774:
    // 0x34a774: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x34a774u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_34a778:
    // 0x34a778: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x34a778u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
label_34a77c:
    // 0x34a77c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x34a77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34a780:
    // 0x34a780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34a784:
    // 0x34a784: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34a784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34a788:
    // 0x34a788: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x34a788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34a78c:
    // 0x34a78c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x34a78cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_34a790:
    // 0x34a790: 0xc0d276a  jal         func_349DA8
label_34a794:
    if (ctx->pc == 0x34A794u) {
        ctx->pc = 0x34A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A790u;
        // 0x34a794: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A798u;
        goto label_34a798;
    }
    ctx->pc = 0x34A790u;
    SET_GPR_U32(ctx, 31, 0x34A798u);
    ctx->pc = 0x34A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A790u;
    // 0x34a794: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349DA8u, 0x34A790u, 0x34A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A798u;
label_34a798:
    // 0x34a798: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34a79c:
    // 0x34a79c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34a7a0:
    // 0x34a7a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34a7a4:
    // 0x34a7a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34a7a8:
    // 0x34a7a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a7a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34a7ac:
    // 0x34a7ac: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a7acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34a7b0:
    // 0x34a7b0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34a7b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34a7b4:
    // 0x34a7b4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34a7b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34a7b8:
    // 0x34a7b8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34a7b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34a7bc:
    // 0x34a7bc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34a7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34a7c0:
    // 0x34a7c0: 0x3e00008  jr          $ra
label_34a7c4:
    if (ctx->pc == 0x34A7C4u) {
        ctx->pc = 0x34A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7C0u;
        // 0x34a7c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34A7C8u;
        goto label_fallthrough_0x34a7c0;
    }
    ctx->pc = 0x34A7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7C0u;
        // 0x34a7c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34a7c0:
    ctx->pc = 0x34A7C8u;
}
