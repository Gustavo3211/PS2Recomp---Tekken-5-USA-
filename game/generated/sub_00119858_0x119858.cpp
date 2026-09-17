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

// Function: sub_00119858
// Address: 0x119858 - 0x119b00
void sub_00119858_0x119858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119858_0x119858");
#endif

    switch (ctx->pc) {
        case 0x119858u: goto label_119858;
        case 0x11985cu: goto label_11985c;
        case 0x119860u: goto label_119860;
        case 0x119864u: goto label_119864;
        case 0x119868u: goto label_119868;
        case 0x11986cu: goto label_11986c;
        case 0x119870u: goto label_119870;
        case 0x119874u: goto label_119874;
        case 0x119878u: goto label_119878;
        case 0x11987cu: goto label_11987c;
        case 0x119880u: goto label_119880;
        case 0x119884u: goto label_119884;
        case 0x119888u: goto label_119888;
        case 0x11988cu: goto label_11988c;
        case 0x119890u: goto label_119890;
        case 0x119894u: goto label_119894;
        case 0x119898u: goto label_119898;
        case 0x11989cu: goto label_11989c;
        case 0x1198a0u: goto label_1198a0;
        case 0x1198a4u: goto label_1198a4;
        case 0x1198a8u: goto label_1198a8;
        case 0x1198acu: goto label_1198ac;
        case 0x1198b0u: goto label_1198b0;
        case 0x1198b4u: goto label_1198b4;
        case 0x1198b8u: goto label_1198b8;
        case 0x1198bcu: goto label_1198bc;
        case 0x1198c0u: goto label_1198c0;
        case 0x1198c4u: goto label_1198c4;
        case 0x1198c8u: goto label_1198c8;
        case 0x1198ccu: goto label_1198cc;
        case 0x1198d0u: goto label_1198d0;
        case 0x1198d4u: goto label_1198d4;
        case 0x1198d8u: goto label_1198d8;
        case 0x1198dcu: goto label_1198dc;
        case 0x1198e0u: goto label_1198e0;
        case 0x1198e4u: goto label_1198e4;
        case 0x1198e8u: goto label_1198e8;
        case 0x1198ecu: goto label_1198ec;
        case 0x1198f0u: goto label_1198f0;
        case 0x1198f4u: goto label_1198f4;
        case 0x1198f8u: goto label_1198f8;
        case 0x1198fcu: goto label_1198fc;
        case 0x119900u: goto label_119900;
        case 0x119904u: goto label_119904;
        case 0x119908u: goto label_119908;
        case 0x11990cu: goto label_11990c;
        case 0x119910u: goto label_119910;
        case 0x119914u: goto label_119914;
        case 0x119918u: goto label_119918;
        case 0x11991cu: goto label_11991c;
        case 0x119920u: goto label_119920;
        case 0x119924u: goto label_119924;
        case 0x119928u: goto label_119928;
        case 0x11992cu: goto label_11992c;
        case 0x119930u: goto label_119930;
        case 0x119934u: goto label_119934;
        case 0x119938u: goto label_119938;
        case 0x11993cu: goto label_11993c;
        case 0x119940u: goto label_119940;
        case 0x119944u: goto label_119944;
        case 0x119948u: goto label_119948;
        case 0x11994cu: goto label_11994c;
        case 0x119950u: goto label_119950;
        case 0x119954u: goto label_119954;
        case 0x119958u: goto label_119958;
        case 0x11995cu: goto label_11995c;
        case 0x119960u: goto label_119960;
        case 0x119964u: goto label_119964;
        case 0x119968u: goto label_119968;
        case 0x11996cu: goto label_11996c;
        case 0x119970u: goto label_119970;
        case 0x119974u: goto label_119974;
        case 0x119978u: goto label_119978;
        case 0x11997cu: goto label_11997c;
        case 0x119980u: goto label_119980;
        case 0x119984u: goto label_119984;
        case 0x119988u: goto label_119988;
        case 0x11998cu: goto label_11998c;
        case 0x119990u: goto label_119990;
        case 0x119994u: goto label_119994;
        case 0x119998u: goto label_119998;
        case 0x11999cu: goto label_11999c;
        case 0x1199a0u: goto label_1199a0;
        case 0x1199a4u: goto label_1199a4;
        case 0x1199a8u: goto label_1199a8;
        case 0x1199acu: goto label_1199ac;
        case 0x1199b0u: goto label_1199b0;
        case 0x1199b4u: goto label_1199b4;
        case 0x1199b8u: goto label_1199b8;
        case 0x1199bcu: goto label_1199bc;
        case 0x1199c0u: goto label_1199c0;
        case 0x1199c4u: goto label_1199c4;
        case 0x1199c8u: goto label_1199c8;
        case 0x1199ccu: goto label_1199cc;
        case 0x1199d0u: goto label_1199d0;
        case 0x1199d4u: goto label_1199d4;
        case 0x1199d8u: goto label_1199d8;
        case 0x1199dcu: goto label_1199dc;
        case 0x1199e0u: goto label_1199e0;
        case 0x1199e4u: goto label_1199e4;
        case 0x1199e8u: goto label_1199e8;
        case 0x1199ecu: goto label_1199ec;
        case 0x1199f0u: goto label_1199f0;
        case 0x1199f4u: goto label_1199f4;
        case 0x1199f8u: goto label_1199f8;
        case 0x1199fcu: goto label_1199fc;
        case 0x119a00u: goto label_119a00;
        case 0x119a04u: goto label_119a04;
        case 0x119a08u: goto label_119a08;
        case 0x119a0cu: goto label_119a0c;
        case 0x119a10u: goto label_119a10;
        case 0x119a14u: goto label_119a14;
        case 0x119a18u: goto label_119a18;
        case 0x119a1cu: goto label_119a1c;
        case 0x119a20u: goto label_119a20;
        case 0x119a24u: goto label_119a24;
        case 0x119a28u: goto label_119a28;
        case 0x119a2cu: goto label_119a2c;
        case 0x119a30u: goto label_119a30;
        case 0x119a34u: goto label_119a34;
        case 0x119a38u: goto label_119a38;
        case 0x119a3cu: goto label_119a3c;
        case 0x119a40u: goto label_119a40;
        case 0x119a44u: goto label_119a44;
        case 0x119a48u: goto label_119a48;
        case 0x119a4cu: goto label_119a4c;
        case 0x119a50u: goto label_119a50;
        case 0x119a54u: goto label_119a54;
        case 0x119a58u: goto label_119a58;
        case 0x119a5cu: goto label_119a5c;
        case 0x119a60u: goto label_119a60;
        case 0x119a64u: goto label_119a64;
        case 0x119a68u: goto label_119a68;
        case 0x119a6cu: goto label_119a6c;
        case 0x119a70u: goto label_119a70;
        case 0x119a74u: goto label_119a74;
        case 0x119a78u: goto label_119a78;
        case 0x119a7cu: goto label_119a7c;
        case 0x119a80u: goto label_119a80;
        case 0x119a84u: goto label_119a84;
        case 0x119a88u: goto label_119a88;
        case 0x119a8cu: goto label_119a8c;
        case 0x119a90u: goto label_119a90;
        case 0x119a94u: goto label_119a94;
        case 0x119a98u: goto label_119a98;
        case 0x119a9cu: goto label_119a9c;
        case 0x119aa0u: goto label_119aa0;
        case 0x119aa4u: goto label_119aa4;
        case 0x119aa8u: goto label_119aa8;
        case 0x119aacu: goto label_119aac;
        case 0x119ab0u: goto label_119ab0;
        case 0x119ab4u: goto label_119ab4;
        case 0x119ab8u: goto label_119ab8;
        case 0x119abcu: goto label_119abc;
        case 0x119ac0u: goto label_119ac0;
        case 0x119ac4u: goto label_119ac4;
        case 0x119ac8u: goto label_119ac8;
        case 0x119accu: goto label_119acc;
        case 0x119ad0u: goto label_119ad0;
        case 0x119ad4u: goto label_119ad4;
        case 0x119ad8u: goto label_119ad8;
        case 0x119adcu: goto label_119adc;
        case 0x119ae0u: goto label_119ae0;
        case 0x119ae4u: goto label_119ae4;
        case 0x119ae8u: goto label_119ae8;
        case 0x119aecu: goto label_119aec;
        case 0x119af0u: goto label_119af0;
        case 0x119af4u: goto label_119af4;
        case 0x119af8u: goto label_119af8;
        case 0x119afcu: goto label_119afc;
        default: break;
    }

    ctx->pc = 0x119858u;

label_119858:
    // 0x119858: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x119858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_11985c:
    // 0x11985c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11985cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_119860:
    // 0x119860: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x119860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_119864:
    // 0x119864: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x119864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_119868:
    // 0x119868: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x119868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_11986c:
    // 0x11986c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x11986cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_119870:
    // 0x119870: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x119870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_119874:
    // 0x119874: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_119878:
    // 0x119878: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11987c:
    // 0x11987c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_119880:
    // 0x119880: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_119884:
    // 0x119884: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_119888:
    // 0x119888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11988c:
    // 0x11988c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11988cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_119890:
    // 0x119890: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x119890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_119894:
    // 0x119894: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_119898:
    if (ctx->pc == 0x119898u) {
        ctx->pc = 0x119898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119894u;
        // 0x119898: 0x3c150013  lui         $s5, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11989Cu;
        goto label_11989c;
    }
    ctx->pc = 0x119894u;
    {
        const bool branch_taken_0x119894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119894u;
        // 0x119898: 0x3c150013  lui         $s5, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119894) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x11989Cu;
label_11989c:
    // 0x11989c: 0x26a22148  addiu       $v0, $s5, 0x2148
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8520));
label_1198a0:
    // 0x1198a0: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1198a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1198a4:
    // 0x1198a4: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_1198a8:
    if (ctx->pc == 0x1198A8u) {
        ctx->pc = 0x1198A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A4u;
        // 0x1198a8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198ACu;
        goto label_1198ac;
    }
    ctx->pc = 0x1198A4u;
    {
        const bool branch_taken_0x1198a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A4u;
        // 0x1198a8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198a4) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x1198ACu;
label_1198ac:
    // 0x1198ac: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x1198acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_1198b0:
    // 0x1198b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1198b4:
    // 0x1198b4: 0x0  nop
    ctx->pc = 0x1198b4u;
    // NOP
label_1198b8:
    // 0x1198b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1198b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1198bc:
    // 0x1198bc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1198bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1198c0:
    // 0x1198c0: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x1198c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_1198c4:
    // 0x1198c4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1198c4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_1198c8:
    // 0x1198c8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1198c8u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_1198cc:
    // 0x1198cc: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x1198ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1198d0:
    // 0x1198d0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1198d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1198d4:
    // 0x1198d4: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_1198d8:
    // 0x1198d8: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1198d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1198dc:
    // 0x1198dc: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x1198dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_1198e0:
    // 0x1198e0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1198e4:
    if (ctx->pc == 0x1198E4u) {
        ctx->pc = 0x1198E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E0u;
        // 0x1198e4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1198E8u;
        goto label_1198e8;
    }
    ctx->pc = 0x1198E0u;
    {
        const bool branch_taken_0x1198e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E0u;
        // 0x1198e4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198e0) {
            ctx->pc = 0x11990Cu;
            goto label_11990c;
        }
    }
    ctx->pc = 0x1198E8u;
label_1198e8:
    // 0x1198e8: 0xde822148  ld          $v0, 0x2148($s4)
    ctx->pc = 0x1198e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 8520)));
label_1198ec:
    // 0x1198ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1198ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1198f0:
    // 0x1198f0: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_1198f4:
    // 0x1198f4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1198f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_1198f8:
    // 0x1198f8: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x1198f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_1198fc:
    // 0x1198fc: 0xc0464a6  jal         func_119298
label_119900:
    if (ctx->pc == 0x119900u) {
        ctx->pc = 0x119900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198FCu;
        // 0x119900: 0xfe822148  sd          $v0, 0x2148($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8520), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119904u;
        goto label_119904;
    }
    ctx->pc = 0x1198FCu;
    SET_GPR_U32(ctx, 31, 0x119904u);
    ctx->pc = 0x119900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1198FCu;
    // 0x119900: 0xfe822148  sd          $v0, 0x2148($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 8520), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x1198FCu, 0x119904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119904u;
label_119904:
    // 0x119904: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x119904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_119908:
    // 0x119908: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x119908u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_11990c:
    // 0x11990c: 0xde842148  ld          $a0, 0x2148($s4)
    ctx->pc = 0x11990cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 8520)));
label_119910:
    // 0x119910: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x119910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_119914:
    // 0x119914: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x119914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_119918:
    // 0x119918: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x119918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_11991c:
    // 0x11991c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11991cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_119920:
    // 0x119920: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x119920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_119924:
    // 0x119924: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x119924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_119928:
    // 0x119928: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x119928u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_11992c:
    // 0x11992c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x11992cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_119930:
    // 0x119930: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_119934:
    if (ctx->pc == 0x119934u) {
        ctx->pc = 0x119934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119930u;
        // 0x119934: 0x26922148  addiu       $s2, $s4, 0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119938u;
        goto label_119938;
    }
    ctx->pc = 0x119930u;
    {
        const bool branch_taken_0x119930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119930u;
        // 0x119934: 0x26922148  addiu       $s2, $s4, 0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119930) {
            ctx->pc = 0x119A08u;
            goto label_119a08;
        }
    }
    ctx->pc = 0x119938u;
label_119938:
    // 0x119938: 0xc046608  jal         func_119820
label_11993c:
    if (ctx->pc == 0x11993Cu) {
        ctx->pc = 0x11993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119938u;
        // 0x11993c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119940u;
        goto label_119940;
    }
    ctx->pc = 0x119938u;
    SET_GPR_U32(ctx, 31, 0x119940u);
    ctx->pc = 0x11993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119938u;
    // 0x11993c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119820u, 0x119938u, 0x119940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119944:
    // 0x119944: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x119944u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_119948:
    // 0x119948: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11994c:
    // 0x11994c: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x11994cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_119950:
    // 0x119950: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x119950u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_119954:
    // 0x119954: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x119954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_119958:
    // 0x119958: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_11995c:
    // 0x11995c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x11995cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_119960:
    // 0x119960: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x119960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_119964:
    // 0x119964: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x119964u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_119968:
    // 0x119968: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x119968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11996c:
    // 0x11996c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x11996cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119970:
    // 0x119970: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x119970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_119974:
    // 0x119974: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x119974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_119978:
    // 0x119978: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x119978u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_11997c:
    // 0x11997c: 0x40f809  jalr        $v0
label_119980:
    if (ctx->pc == 0x119980u) {
        ctx->pc = 0x119980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11997Cu;
        // 0x119980: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119984u;
        goto label_119984;
    }
    ctx->pc = 0x11997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x119984u);
        ctx->pc = 0x119980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11997Cu;
        // 0x119980: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11997Cu, 0x119984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119984u;
label_119984:
    // 0x119984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x119984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119988:
    // 0x119988: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_11998c:
    if (ctx->pc == 0x11998Cu) {
        ctx->pc = 0x11998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119988u;
        // 0x11998c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119990u;
        goto label_119990;
    }
    ctx->pc = 0x119988u;
    {
        const bool branch_taken_0x119988 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119988u;
        // 0x11998c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119988) {
            ctx->pc = 0x1199A8u;
            goto label_1199a8;
        }
    }
    ctx->pc = 0x119990u;
label_119990:
    // 0x119990: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_119994:
    // 0x119994: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x119994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_119998:
    // 0x119998: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x119998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_11999c:
    // 0x11999c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1199a0:
    // 0x1199a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1199a4:
    if (ctx->pc == 0x1199A4u) {
        ctx->pc = 0x1199A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A0u;
        // 0x1199a4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199A8u;
        goto label_1199a8;
    }
    ctx->pc = 0x1199A0u;
    {
        const bool branch_taken_0x1199a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A0u;
        // 0x1199a4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199a0) {
            ctx->pc = 0x1199F4u;
            goto label_1199f4;
        }
    }
    ctx->pc = 0x1199A8u;
label_1199a8:
    // 0x1199a8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_1199ac:
    if (ctx->pc == 0x1199ACu) {
        ctx->pc = 0x1199ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A8u;
        // 0x1199ac: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199B0u;
        goto label_1199b0;
    }
    ctx->pc = 0x1199A8u;
    {
        const bool branch_taken_0x1199a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1199ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199A8u;
        // 0x1199ac: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199a8) {
            ctx->pc = 0x1199D8u;
            goto label_1199d8;
        }
    }
    ctx->pc = 0x1199B0u;
label_1199b0:
    // 0x1199b0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1199b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1199b4:
    // 0x1199b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1199b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1199b8:
    // 0x1199b8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1199bc:
    // 0x1199bc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1199c0:
    // 0x1199c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1199c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1199c4:
    // 0x1199c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1199c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1199c8:
    // 0x1199c8: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1199c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_1199cc:
    // 0x1199cc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1199ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1199d0:
    // 0x1199d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1199d4:
    if (ctx->pc == 0x1199D4u) {
        ctx->pc = 0x1199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D0u;
        // 0x1199d4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199D8u;
        goto label_1199d8;
    }
    ctx->pc = 0x1199D0u;
    {
        const bool branch_taken_0x1199d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199D0u;
        // 0x1199d4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d0) {
            ctx->pc = 0x1199F8u;
            goto label_1199f8;
        }
    }
    ctx->pc = 0x1199D8u;
label_1199d8:
    // 0x1199d8: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1199d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1199dc:
    // 0x1199dc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1199dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1199e0:
    // 0x1199e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1199e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1199e4:
    // 0x1199e4: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x1199e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_1199e8:
    // 0x1199e8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1199e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_1199ec:
    // 0x1199ec: 0xc0465e6  jal         func_119798
label_1199f0:
    if (ctx->pc == 0x1199F0u) {
        ctx->pc = 0x1199F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199ECu;
        // 0x1199f0: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1199F4u;
        goto label_1199f4;
    }
    ctx->pc = 0x1199ECu;
    SET_GPR_U32(ctx, 31, 0x1199F4u);
    ctx->pc = 0x1199F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1199ECu;
    // 0x1199f0: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119798u, 0x1199ECu, 0x1199F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1199F4u;
label_1199f4:
    // 0x1199f4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1199f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1199f8:
    // 0x1199f8: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_1199fc:
    if (ctx->pc == 0x1199FCu) {
        ctx->pc = 0x1199FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F8u;
        // 0x1199fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A00u;
        goto label_119a00;
    }
    ctx->pc = 0x1199F8u;
    {
        const bool branch_taken_0x1199f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199F8u;
        // 0x1199fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f8) {
            ctx->pc = 0x1198B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1198b8;
        }
    }
    ctx->pc = 0x119A00u;
label_119a00:
    // 0x119a00: 0x10000002  b           . + 4 + (0x2 << 2)
label_119a04:
    if (ctx->pc == 0x119A04u) {
        ctx->pc = 0x119A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A00u;
        // 0x119a04: 0x26a42148  addiu       $a0, $s5, 0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A08u;
        goto label_119a08;
    }
    ctx->pc = 0x119A00u;
    {
        const bool branch_taken_0x119a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A00u;
        // 0x119a04: 0x26a42148  addiu       $a0, $s5, 0x2148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a00) {
            ctx->pc = 0x119A0Cu;
            goto label_119a0c;
        }
    }
    ctx->pc = 0x119A08u;
label_119a08:
    // 0x119a08: 0x26a42148  addiu       $a0, $s5, 0x2148
    ctx->pc = 0x119a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8520));
label_119a0c:
    // 0x119a0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119a10:
    // 0x119a10: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x119a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_119a14:
    // 0x119a14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_119a18:
    // 0x119a18: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x119a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_119a1c:
    // 0x119a1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_119a20:
    // 0x119a20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_119a24:
    // 0x119a24: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x119a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_119a28:
    // 0x119a28: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_119a2c:
    // 0x119a2c: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x119a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_119a30:
    // 0x119a30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_119a34:
    if (ctx->pc == 0x119A34u) {
        ctx->pc = 0x119A38u;
        goto label_119a38;
    }
    ctx->pc = 0x119A30u;
    {
        const bool branch_taken_0x119a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119a30) {
            ctx->pc = 0x119A5Cu;
            goto label_119a5c;
        }
    }
    ctx->pc = 0x119A38u;
label_119a38:
    // 0x119a38: 0xdea22148  ld          $v0, 0x2148($s5)
    ctx->pc = 0x119a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8520)));
label_119a3c:
    // 0x119a3c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_119a40:
    // 0x119a40: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x119a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_119a44:
    // 0x119a44: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x119a44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_119a48:
    // 0x119a48: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x119a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_119a4c:
    // 0x119a4c: 0xc0464a6  jal         func_119298
label_119a50:
    if (ctx->pc == 0x119A50u) {
        ctx->pc = 0x119A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A4Cu;
        // 0x119a50: 0xfea22148  sd          $v0, 0x2148($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 8520), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A54u;
        goto label_119a54;
    }
    ctx->pc = 0x119A4Cu;
    SET_GPR_U32(ctx, 31, 0x119A54u);
    ctx->pc = 0x119A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A4Cu;
    // 0x119a50: 0xfea22148  sd          $v0, 0x2148($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 8520), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x119A4Cu, 0x119A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A54u;
label_119a54:
    // 0x119a54: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x119a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_119a58:
    // 0x119a58: 0x8c841000  lw          $a0, 0x1000($a0)
    ctx->pc = 0x119a58u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 4096))); // MMIO: 0x10001000
label_119a5c:
    // 0x119a5c: 0xdea22148  ld          $v0, 0x2148($s5)
    ctx->pc = 0x119a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8520)));
label_119a60:
    // 0x119a60: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x119a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_119a64:
    // 0x119a64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_119a68:
    // 0x119a68: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x119a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_119a6c:
    // 0x119a6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_119a70:
    // 0x119a70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_119a74:
    // 0x119a74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_119a78:
    // 0x119a78: 0xc046582  jal         func_119608
label_119a7c:
    if (ctx->pc == 0x119A7Cu) {
        ctx->pc = 0x119A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A78u;
        // 0x119a7c: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119A80u;
        goto label_119a80;
    }
    ctx->pc = 0x119A78u;
    SET_GPR_U32(ctx, 31, 0x119A80u);
    ctx->pc = 0x119A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A78u;
    // 0x119a7c: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119608u, 0x119A78u, 0x119A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A80u;
label_119a80:
    // 0x119a80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x119a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_119a84:
    // 0x119a84: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_119a88:
    // 0x119a88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_119a8c:
    // 0x119a8c: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_119a90:
    // 0x119a90: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_119a94:
    // 0x119a94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_119a98:
    if (ctx->pc == 0x119A98u) {
        ctx->pc = 0x119A9Cu;
        goto label_119a9c;
    }
    ctx->pc = 0x119A94u;
    {
        const bool branch_taken_0x119a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119a94) {
            ctx->pc = 0x119AC0u;
            goto label_119ac0;
        }
    }
    ctx->pc = 0x119A9Cu;
label_119a9c:
    // 0x119a9c: 0xdea22148  ld          $v0, 0x2148($s5)
    ctx->pc = 0x119a9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8520)));
label_119aa0:
    // 0x119aa0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_119aa4:
    // 0x119aa4: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x119aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_119aa8:
    // 0x119aa8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x119aa8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_119aac:
    // 0x119aac: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x119aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_119ab0:
    // 0x119ab0: 0xc0464a6  jal         func_119298
label_119ab4:
    if (ctx->pc == 0x119AB4u) {
        ctx->pc = 0x119AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AB0u;
        // 0x119ab4: 0xfea22148  sd          $v0, 0x2148($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 8520), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119AB8u;
        goto label_119ab8;
    }
    ctx->pc = 0x119AB0u;
    SET_GPR_U32(ctx, 31, 0x119AB8u);
    ctx->pc = 0x119AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AB0u;
    // 0x119ab4: 0xfea22148  sd          $v0, 0x2148($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 8520), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x119AB0u, 0x119AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119AB8u;
label_119ab8:
    // 0x119ab8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x119ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_119abc:
    // 0x119abc: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x119abcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_119ac0:
    // 0x119ac0: 0xdea22148  ld          $v0, 0x2148($s5)
    ctx->pc = 0x119ac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8520)));
label_119ac4:
    // 0x119ac4: 0xf  sync
    ctx->pc = 0x119ac4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_119ac8:
    // 0x119ac8: 0x42000038  ei
    ctx->pc = 0x119ac8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_119acc:
    // 0x119acc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x119accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_119ad0:
    // 0x119ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119ad4:
    // 0x119ad4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x119ad4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_119ad8:
    // 0x119ad8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x119ad8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_119adc:
    // 0x119adc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119adcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_119ae0:
    // 0x119ae0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119ae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_119ae4:
    // 0x119ae4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119ae8:
    // 0x119ae8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_119aec:
    // 0x119aec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_119af0:
    // 0x119af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119af4:
    // 0x119af4: 0x3e00008  jr          $ra
label_119af8:
    if (ctx->pc == 0x119AF8u) {
        ctx->pc = 0x119AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AF4u;
        // 0x119af8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119AFCu;
        goto label_119afc;
    }
    ctx->pc = 0x119AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AF4u;
        // 0x119af8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119AFCu;
label_119afc:
    // 0x119afc: 0x0  nop
    ctx->pc = 0x119afcu;
    // NOP
    ctx->pc = 0x119b00u;
}
