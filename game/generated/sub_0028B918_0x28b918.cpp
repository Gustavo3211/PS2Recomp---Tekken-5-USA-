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

// Function: sub_0028B918
// Address: 0x28b918 - 0x28c378
void sub_0028B918_0x28b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B918_0x28b918");
#endif

    switch (ctx->pc) {
        case 0x28b9a8u: goto label_28b9a8;
        case 0x28b9c4u: goto label_28b9c4;
        case 0x28b9e0u: goto label_28b9e0;
        case 0x28b9ecu: goto label_28b9ec;
        case 0x28ba0cu: goto label_28ba0c;
        case 0x28ba2cu: goto label_28ba2c;
        case 0x28ba38u: goto label_28ba38;
        case 0x28ba54u: goto label_28ba54;
        case 0x28ba88u: goto label_28ba88;
        case 0x28baa4u: goto label_28baa4;
        case 0x28bab4u: goto label_28bab4;
        case 0x28bac4u: goto label_28bac4;
        case 0x28bae4u: goto label_28bae4;
        case 0x28baf4u: goto label_28baf4;
        case 0x28bb04u: goto label_28bb04;
        case 0x28bb24u: goto label_28bb24;
        case 0x28bb34u: goto label_28bb34;
        case 0x28bb44u: goto label_28bb44;
        case 0x28bb64u: goto label_28bb64;
        case 0x28bb74u: goto label_28bb74;
        case 0x28bb84u: goto label_28bb84;
        case 0x28bba4u: goto label_28bba4;
        case 0x28bbb4u: goto label_28bbb4;
        case 0x28bbc4u: goto label_28bbc4;
        case 0x28bbe8u: goto label_28bbe8;
        case 0x28bc04u: goto label_28bc04;
        case 0x28bc20u: goto label_28bc20;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc50u: goto label_28bc50;
        case 0x28bc6cu: goto label_28bc6c;
        case 0x28bc88u: goto label_28bc88;
        case 0x28bc98u: goto label_28bc98;
        case 0x28bcd4u: goto label_28bcd4;
        case 0x28bcf0u: goto label_28bcf0;
        case 0x28bd00u: goto label_28bd00;
        case 0x28bd10u: goto label_28bd10;
        case 0x28bd30u: goto label_28bd30;
        case 0x28bd50u: goto label_28bd50;
        case 0x28bd70u: goto label_28bd70;
        case 0x28bd84u: goto label_28bd84;
        case 0x28bd90u: goto label_28bd90;
        case 0x28bdbcu: goto label_28bdbc;
        case 0x28bdc8u: goto label_28bdc8;
        case 0x28bde0u: goto label_28bde0;
        case 0x28bdf0u: goto label_28bdf0;
        case 0x28be20u: goto label_28be20;
        case 0x28be2cu: goto label_28be2c;
        case 0x28be38u: goto label_28be38;
        case 0x28be74u: goto label_28be74;
        case 0x28bea4u: goto label_28bea4;
        case 0x28bed4u: goto label_28bed4;
        case 0x28bf04u: goto label_28bf04;
        case 0x28bf34u: goto label_28bf34;
        case 0x28bf64u: goto label_28bf64;
        case 0x28bf94u: goto label_28bf94;
        case 0x28bfc4u: goto label_28bfc4;
        case 0x28bff4u: goto label_28bff4;
        case 0x28c024u: goto label_28c024;
        case 0x28c054u: goto label_28c054;
        case 0x28c084u: goto label_28c084;
        case 0x28c0b4u: goto label_28c0b4;
        case 0x28c0e4u: goto label_28c0e4;
        case 0x28c114u: goto label_28c114;
        case 0x28c144u: goto label_28c144;
        case 0x28c174u: goto label_28c174;
        case 0x28c1a4u: goto label_28c1a4;
        case 0x28c1d4u: goto label_28c1d4;
        case 0x28c204u: goto label_28c204;
        case 0x28c238u: goto label_28c238;
        case 0x28c274u: goto label_28c274;
        case 0x28c298u: goto label_28c298;
        case 0x28c2e0u: goto label_28c2e0;
        case 0x28c2fcu: goto label_28c2fc;
        case 0x28c334u: goto label_28c334;
        case 0x28c350u: goto label_28c350;
        default: break;
    }

    ctx->pc = 0x28b918u;

    // 0x28b918: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28b91c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x28b91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x28b920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b924: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x28b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28b928: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x28b928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x28b92c: 0x26270158  addiu       $a3, $s1, 0x158
    ctx->pc = 0x28b92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
    // 0x28b930: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x28b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x28b934: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x28b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28b938: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x28b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x28b93c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28b940: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x28b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28b944: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B944u;
    {
        const bool branch_taken_0x28b944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B944u;
        // 0x28b948: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b944) {
            ctx->pc = 0x28B95Cu;
            goto label_28b95c;
        }
    }
    ctx->pc = 0x28B94Cu;
    // 0x28b94c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28b950: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x28b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28b954: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B954u;
    {
        const bool branch_taken_0x28b954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B954u;
        // 0x28b958: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b954) {
            ctx->pc = 0x28B968u;
            goto label_28b968;
        }
    }
    ctx->pc = 0x28B95Cu;
label_28b95c:
    // 0x28b95c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x28b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x28b960: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28b960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b964: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x28b964u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_28b968:
    // 0x28b968: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x28b968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x28b96c: 0x10400279  beqz        $v0, . + 4 + (0x279 << 2)
    ctx->pc = 0x28B96Cu;
    {
        const bool branch_taken_0x28b96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B96Cu;
        // 0x28b970: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b96c) {
            ctx->pc = 0x28C354u;
            goto label_28c354;
        }
    }
    ctx->pc = 0x28B974u;
    // 0x28b974: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x28b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x28b978: 0x5a880  sll         $s5, $a1, 2
    ctx->pc = 0x28b978u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28b97c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28b980: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x28b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x28b984: 0x8c639e30  lw          $v1, -0x61D0($v1)
    ctx->pc = 0x28b984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942256)));
    // 0x28b988: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x28b98c: 0x600008  jr          $v1
    ctx->pc = 0x28B98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x28B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B98Cu;
        // 0x28b990: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B998u: goto label_28b998;
            case 0x28B9F8u: goto label_28b9f8;
            case 0x28BA68u: goto label_28ba68;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BD38u: goto label_28bd38;
            case 0x28BDD8u: goto label_28bdd8;
            case 0x28C288u: goto label_28c288;
            case 0x28C308u: goto label_28c308;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B98Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B994u;
    // 0x28b994: 0x0  nop
    ctx->pc = 0x28b994u;
    // NOP
label_28b998:
    // 0x28b998: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x28b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x28b99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9a0: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28B9A0u;
    SET_GPR_U32(ctx, 31, 0x28B9A8u);
    ctx->pc = 0x28B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9A0u;
    // 0x28b9a4: 0x8c500050  lw          $s0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28B9A0u, 0x28B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9A8u;
label_28b9a8:
    // 0x28b9a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B9A8u;
    {
        const bool branch_taken_0x28b9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b9a8) {
            ctx->pc = 0x28B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B9A8u;
            // 0x28b9ac: 0x2e42000a  sltiu       $v0, $s2, 0xA (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B9C8u;
            goto label_28b9c8;
        }
    }
    ctx->pc = 0x28B9B0u;
    // 0x28b9b0: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28b9b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28b9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28b9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b9bc: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28B9BCu;
    SET_GPR_U32(ctx, 31, 0x28B9C4u);
    ctx->pc = 0x28B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9BCu;
    // 0x28b9c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28B9BCu, 0x28B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9C4u;
label_28b9c4:
    // 0x28b9c4: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x28b9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_28b9c8:
    // 0x28b9c8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28b9cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28b9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9d4: 0x242300b  movn        $a2, $s2, $v0
    ctx->pc = 0x28b9d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    // 0x28b9d8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28B9D8u;
    SET_GPR_U32(ctx, 31, 0x28B9E0u);
    ctx->pc = 0x28B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9D8u;
    // 0x28b9dc: 0x24a53d40  addiu       $a1, $a1, 0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28B9D8u, 0x28B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9E0u;
label_28b9e0:
    // 0x28b9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28B9E4u;
    SET_GPR_U32(ctx, 31, 0x28B9ECu);
    ctx->pc = 0x28B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B9E4u;
    // 0x28b9e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28B9E4u, 0x28B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B9ECu;
label_28b9ec:
    // 0x28b9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9f0: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x28B9F0u;
    {
        const bool branch_taken_0x28b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9F0u;
        // 0x28b9f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9f0) {
            ctx->pc = 0x28C2D8u;
            goto label_28c2d8;
        }
    }
    ctx->pc = 0x28B9F8u;
label_28b9f8:
    // 0x28b9f8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x28b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x28b9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba00: 0x24503c28  addiu       $s0, $v0, 0x3C28
    ctx->pc = 0x28ba00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15400));
    // 0x28ba04: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28BA04u;
    SET_GPR_U32(ctx, 31, 0x28BA0Cu);
    ctx->pc = 0x28BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA04u;
    // 0x28ba08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28BA04u, 0x28BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA0Cu;
label_28ba0c:
    // 0x28ba0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ba0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BA10u;
    {
        const bool branch_taken_0x28ba10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA10u;
        // 0x28ba14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba10) {
            ctx->pc = 0x28BA24u;
            goto label_28ba24;
        }
    }
    ctx->pc = 0x28BA18u;
    // 0x28ba18: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28ba1c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28ba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28ba20: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28ba24:
    // 0x28ba24: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BA24u;
    SET_GPR_U32(ctx, 31, 0x28BA2Cu);
    ctx->pc = 0x28BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA24u;
    // 0x28ba28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BA24u, 0x28BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA2Cu;
label_28ba2c:
    // 0x28ba2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba30: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28BA30u;
    SET_GPR_U32(ctx, 31, 0x28BA38u);
    ctx->pc = 0x28BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA30u;
    // 0x28ba34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28BA30u, 0x28BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA38u;
label_28ba38:
    // 0x28ba38: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BA38u;
    {
        const bool branch_taken_0x28ba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ba38) {
            ctx->pc = 0x28BA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BA38u;
            // 0x28ba3c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BA58u;
            goto label_28ba58;
        }
    }
    ctx->pc = 0x28BA40u;
    // 0x28ba40: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28ba44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ba44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ba48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba4c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28BA4Cu;
    SET_GPR_U32(ctx, 31, 0x28BA54u);
    ctx->pc = 0x28BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA4Cu;
    // 0x28ba50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28BA4Cu, 0x28BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA54u;
label_28ba54:
    // 0x28ba54: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x28ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_28ba58:
    // 0x28ba58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba5c: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x28BA5Cu;
    {
        const bool branch_taken_0x28ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA5Cu;
        // 0x28ba60: 0x8c500050  lw          $s0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba5c) {
            ctx->pc = 0x28C2D8u;
            goto label_28c2d8;
        }
    }
    ctx->pc = 0x28BA64u;
    // 0x28ba64: 0x0  nop
    ctx->pc = 0x28ba64u;
    // NOP
label_28ba68:
    // 0x28ba68: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x28ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x28ba6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba70: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28ba74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28ba78: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28ba7c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28ba80: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28BA80u;
    SET_GPR_U32(ctx, 31, 0x28BA88u);
    ctx->pc = 0x28BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA80u;
    // 0x28ba84: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28BA80u, 0x28BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA88u;
label_28ba88:
    // 0x28ba88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BA88u;
    {
        const bool branch_taken_0x28ba88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA88u;
        // 0x28ba8c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba88) {
            ctx->pc = 0x28BAA8u;
            goto label_28baa8;
        }
    }
    ctx->pc = 0x28BA90u;
    // 0x28ba90: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28ba94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ba94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28ba98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba9c: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28BA9Cu;
    SET_GPR_U32(ctx, 31, 0x28BAA4u);
    ctx->pc = 0x28BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BA9Cu;
    // 0x28baa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28BA9Cu, 0x28BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAA4u;
label_28baa4:
    // 0x28baa4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28baa8:
    // 0x28baa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28baa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28baac: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BAACu;
    SET_GPR_U32(ctx, 31, 0x28BAB4u);
    ctx->pc = 0x28BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAACu;
    // 0x28bab0: 0x24a59d50  addiu       $a1, $a1, -0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BAACu, 0x28BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAB4u;
label_28bab4:
    // 0x28bab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28babc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28BABCu;
    SET_GPR_U32(ctx, 31, 0x28BAC4u);
    ctx->pc = 0x28BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BABCu;
    // 0x28bac0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28BABCu, 0x28BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAC4u;
label_28bac4:
    // 0x28bac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bacc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x28baccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28bad0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bad4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28bad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bad8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28badc: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x28BADCu;
    SET_GPR_U32(ctx, 31, 0x28BAE4u);
    ctx->pc = 0x28BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BADCu;
    // 0x28bae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x28BADCu, 0x28BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAE4u;
label_28bae4:
    // 0x28bae4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28bae8: 0x24a59d60  addiu       $a1, $a1, -0x62A0
    ctx->pc = 0x28bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942048));
    // 0x28baec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BAECu;
    SET_GPR_U32(ctx, 31, 0x28BAF4u);
    ctx->pc = 0x28BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAECu;
    // 0x28baf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BAECu, 0x28BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BAF4u;
label_28baf4:
    // 0x28baf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28baf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28baf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28baf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bafc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28BAFCu;
    SET_GPR_U32(ctx, 31, 0x28BB04u);
    ctx->pc = 0x28BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BAFCu;
    // 0x28bb00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28BAFCu, 0x28BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB04u;
label_28bb04:
    // 0x28bb04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bb08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb0c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x28bb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28bb10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bb10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb14: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28bb14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bb18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb1c: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x28BB1Cu;
    SET_GPR_U32(ctx, 31, 0x28BB24u);
    ctx->pc = 0x28BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB1Cu;
    // 0x28bb20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x28BB1Cu, 0x28BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB24u;
label_28bb24:
    // 0x28bb24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28bb28: 0x24a59d70  addiu       $a1, $a1, -0x6290
    ctx->pc = 0x28bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
    // 0x28bb2c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BB2Cu;
    SET_GPR_U32(ctx, 31, 0x28BB34u);
    ctx->pc = 0x28BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB2Cu;
    // 0x28bb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BB2Cu, 0x28BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB34u;
label_28bb34:
    // 0x28bb34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb3c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28BB3Cu;
    SET_GPR_U32(ctx, 31, 0x28BB44u);
    ctx->pc = 0x28BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB3Cu;
    // 0x28bb40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28BB3Cu, 0x28BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB44u;
label_28bb44:
    // 0x28bb44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb4c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x28bb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28bb50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bb50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28bb54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bb58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb5c: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x28BB5Cu;
    SET_GPR_U32(ctx, 31, 0x28BB64u);
    ctx->pc = 0x28BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB5Cu;
    // 0x28bb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x28BB5Cu, 0x28BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB64u;
label_28bb64:
    // 0x28bb64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28bb68: 0x24a59d80  addiu       $a1, $a1, -0x6280
    ctx->pc = 0x28bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942080));
    // 0x28bb6c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BB6Cu;
    SET_GPR_U32(ctx, 31, 0x28BB74u);
    ctx->pc = 0x28BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB6Cu;
    // 0x28bb70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BB6Cu, 0x28BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB74u;
label_28bb74:
    // 0x28bb74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb7c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28BB7Cu;
    SET_GPR_U32(ctx, 31, 0x28BB84u);
    ctx->pc = 0x28BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB7Cu;
    // 0x28bb80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28BB7Cu, 0x28BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BB84u;
label_28bb84:
    // 0x28bb84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb8c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x28bb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x28bb90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28bb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28bb98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb9c: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x28BB9Cu;
    SET_GPR_U32(ctx, 31, 0x28BBA4u);
    ctx->pc = 0x28BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BB9Cu;
    // 0x28bba0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x28BB9Cu, 0x28BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBA4u;
label_28bba4:
    // 0x28bba4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28bba8: 0x24a59d90  addiu       $a1, $a1, -0x6270
    ctx->pc = 0x28bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942096));
    // 0x28bbac: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BBACu;
    SET_GPR_U32(ctx, 31, 0x28BBB4u);
    ctx->pc = 0x28BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBACu;
    // 0x28bbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BBACu, 0x28BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBB4u;
label_28bbb4:
    // 0x28bbb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbbc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28BBBCu;
    SET_GPR_U32(ctx, 31, 0x28BBC4u);
    ctx->pc = 0x28BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBBCu;
    // 0x28bbc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28BBBCu, 0x28BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBC4u;
label_28bbc4:
    // 0x28bbc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28bbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbd0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x28BBD0u;
    {
        const bool branch_taken_0x28bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BBD0u;
        // 0x28bbd4: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbd0) {
            ctx->pc = 0x28BD20u;
            goto label_28bd20;
        }
    }
    ctx->pc = 0x28BBD8u;
label_28bbd8:
    // 0x28bbd8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28bbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbe0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BBE0u;
    SET_GPR_U32(ctx, 31, 0x28BBE8u);
    ctx->pc = 0x28BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBE0u;
    // 0x28bbe4: 0x24a53d48  addiu       $a1, $a1, 0x3D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BBE0u, 0x28BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BBE8u;
label_28bbe8:
    // 0x28bbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28bbf4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28bbf8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28bbfc: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28BBFCu;
    SET_GPR_U32(ctx, 31, 0x28BC04u);
    ctx->pc = 0x28BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BBFCu;
    // 0x28bc00: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28BBFCu, 0x28BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC04u;
label_28bc04:
    // 0x28bc04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BC04u;
    {
        const bool branch_taken_0x28bc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC04u;
        // 0x28bc08: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc04) {
            ctx->pc = 0x28BC24u;
            goto label_28bc24;
        }
    }
    ctx->pc = 0x28BC0Cu;
    // 0x28bc0c: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28bc10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28bc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc18: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28BC18u;
    SET_GPR_U32(ctx, 31, 0x28BC20u);
    ctx->pc = 0x28BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC18u;
    // 0x28bc1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28BC18u, 0x28BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC20u;
label_28bc20:
    // 0x28bc20: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28bc20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28bc24:
    // 0x28bc24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc28: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BC28u;
    SET_GPR_U32(ctx, 31, 0x28BC30u);
    ctx->pc = 0x28BC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC28u;
    // 0x28bc2c: 0x24a53d50  addiu       $a1, $a1, 0x3D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BC28u, 0x28BC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC30u;
label_28bc30:
    // 0x28bc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc38: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x28BC38u;
    {
        const bool branch_taken_0x28bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC38u;
        // 0x28bc3c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc38) {
            ctx->pc = 0x28C2CCu;
            goto label_28c2cc;
        }
    }
    ctx->pc = 0x28BC40u;
label_28bc40:
    // 0x28bc40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28bc44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc48: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BC48u;
    SET_GPR_U32(ctx, 31, 0x28BC50u);
    ctx->pc = 0x28BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC48u;
    // 0x28bc4c: 0x24a59da0  addiu       $a1, $a1, -0x6260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BC48u, 0x28BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC50u;
label_28bc50:
    // 0x28bc50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28bc5c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28bc60: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28bc64: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28BC64u;
    SET_GPR_U32(ctx, 31, 0x28BC6Cu);
    ctx->pc = 0x28BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC64u;
    // 0x28bc68: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28BC64u, 0x28BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC6Cu;
label_28bc6c:
    // 0x28bc6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BC6Cu;
    {
        const bool branch_taken_0x28bc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BC6Cu;
        // 0x28bc70: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc6c) {
            ctx->pc = 0x28BC8Cu;
            goto label_28bc8c;
        }
    }
    ctx->pc = 0x28BC74u;
    // 0x28bc74: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28bc78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc80: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28BC80u;
    SET_GPR_U32(ctx, 31, 0x28BC88u);
    ctx->pc = 0x28BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC80u;
    // 0x28bc84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28BC80u, 0x28BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC88u;
label_28bc88:
    // 0x28bc88: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28bc8c:
    // 0x28bc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc90: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BC90u;
    SET_GPR_U32(ctx, 31, 0x28BC98u);
    ctx->pc = 0x28BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BC90u;
    // 0x28bc94: 0x24a53d58  addiu       $a1, $a1, 0x3D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BC90u, 0x28BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC98u;
label_28bc98:
    // 0x28bc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bca0: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x28BCA0u;
    {
        const bool branch_taken_0x28bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCA0u;
        // 0x28bca4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bca0) {
            ctx->pc = 0x28C2CCu;
            goto label_28c2cc;
        }
    }
    ctx->pc = 0x28BCA8u;
label_28bca8:
    // 0x28bca8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x28bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28bcac: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x28bcacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x28bcb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28bcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28bcb4: 0x8e106e70  lw          $s0, 0x6E70($s0)
    ctx->pc = 0x28bcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28272)));
    // 0x28bcb8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x28BCB8u;
    {
        const bool branch_taken_0x28bcb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCB8u;
        // 0x28bcbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcb8) {
            ctx->pc = 0x28BCF0u;
            goto label_28bcf0;
        }
    }
    ctx->pc = 0x28BCC0u;
    // 0x28bcc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28bcc4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28bcc8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28bccc: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28BCCCu;
    SET_GPR_U32(ctx, 31, 0x28BCD4u);
    ctx->pc = 0x28BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCCCu;
    // 0x28bcd0: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28BCCCu, 0x28BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCD4u;
label_28bcd4:
    // 0x28bcd4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BCD4u;
    {
        const bool branch_taken_0x28bcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BCD4u;
        // 0x28bcd8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcd4) {
            ctx->pc = 0x28BCF4u;
            goto label_28bcf4;
        }
    }
    ctx->pc = 0x28BCDCu;
    // 0x28bcdc: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28bce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28bce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bce4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28bce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bce8: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28BCE8u;
    SET_GPR_U32(ctx, 31, 0x28BCF0u);
    ctx->pc = 0x28BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCE8u;
    // 0x28bcec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28BCE8u, 0x28BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BCF0u;
label_28bcf0:
    // 0x28bcf0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28bcf4:
    // 0x28bcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bcf8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BCF8u;
    SET_GPR_U32(ctx, 31, 0x28BD00u);
    ctx->pc = 0x28BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BCF8u;
    // 0x28bcfc: 0x24a53d60  addiu       $a1, $a1, 0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BCF8u, 0x28BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD00u;
label_28bd00:
    // 0x28bd00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28bd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd08: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x28BD08u;
    SET_GPR_U32(ctx, 31, 0x28BD10u);
    ctx->pc = 0x28BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD08u;
    // 0x28bd0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x28BD08u, 0x28BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD10u;
label_28bd10:
    // 0x28bd10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28bd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd1c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x28bd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28bd20:
    // 0x28bd20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bd20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28bd24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bd28: 0xc0a5b96  jal         func_296E58
    ctx->pc = 0x28BD28u;
    SET_GPR_U32(ctx, 31, 0x28BD30u);
    ctx->pc = 0x28BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD28u;
    // 0x28bd2c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E58u, 0x28BD28u, 0x28BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD30u;
label_28bd30:
    // 0x28bd30: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x28BD30u;
    {
        const bool branch_taken_0x28bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD30u;
        // 0x28bd34: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd30) {
            ctx->pc = 0x28C354u;
            goto label_28c354;
        }
    }
    ctx->pc = 0x28BD38u;
label_28bd38:
    // 0x28bd38: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x28BD38u;
    {
        const bool branch_taken_0x28bd38 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x28BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD38u;
        // 0x28bd3c: 0x2e42000a  sltiu       $v0, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd38) {
            ctx->pc = 0x28BD60u;
            goto label_28bd60;
        }
    }
    ctx->pc = 0x28BD40u;
    // 0x28bd40: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28bd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd48: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BD48u;
    SET_GPR_U32(ctx, 31, 0x28BD50u);
    ctx->pc = 0x28BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD48u;
    // 0x28bd4c: 0x24a59db0  addiu       $a1, $a1, -0x6250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BD48u, 0x28BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD50u;
label_28bd50:
    // 0x28bd50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd58: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x28BD58u;
    {
        const bool branch_taken_0x28bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD58u;
        // 0x28bd5c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd58) {
            ctx->pc = 0x28C2CCu;
            goto label_28c2cc;
        }
    }
    ctx->pc = 0x28BD60u;
label_28bd60:
    // 0x28bd60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28bd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd64: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x28bd64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x28bd68: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28bd68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28bd6c: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x28bd6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_28bd70:
    // 0x28bd70: 0x1212000b  beq         $s0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x28BD70u;
    {
        const bool branch_taken_0x28bd70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x28BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BD70u;
        // 0x28bd74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd70) {
            ctx->pc = 0x28BDA0u;
            goto label_28bda0;
        }
    }
    ctx->pc = 0x28BD78u;
    // 0x28bd78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd7c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28BD7Cu;
    SET_GPR_U32(ctx, 31, 0x28BD84u);
    ctx->pc = 0x28BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD7Cu;
    // 0x28bd80: 0x26659dc0  addiu       $a1, $s3, -0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28BD7Cu, 0x28BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD84u;
label_28bd84:
    // 0x28bd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd88: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BD88u;
    SET_GPR_U32(ctx, 31, 0x28BD90u);
    ctx->pc = 0x28BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BD88u;
    // 0x28bd8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BD88u, 0x28BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD90u;
label_28bd90:
    // 0x28bd90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bd94: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28bd98: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x28bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28bd9c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28bda0:
    // 0x28bda0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28bda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28bda4: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x28bda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28bda8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x28BDA8u;
    {
        const bool branch_taken_0x28bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDA8u;
        // 0x28bdac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bda8) {
            ctx->pc = 0x28BD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28bd70;
        }
    }
    ctx->pc = 0x28BDB0u;
    // 0x28bdb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28bdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdb4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28BDB4u;
    SET_GPR_U32(ctx, 31, 0x28BDBCu);
    ctx->pc = 0x28BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDB4u;
    // 0x28bdb8: 0x26659dc0  addiu       $a1, $s3, -0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28BDB4u, 0x28BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDBCu;
label_28bdbc:
    // 0x28bdbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdc0: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BDC0u;
    SET_GPR_U32(ctx, 31, 0x28BDC8u);
    ctx->pc = 0x28BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDC0u;
    // 0x28bdc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BDC0u, 0x28BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDC8u;
label_28bdc8:
    // 0x28bdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdd0: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x28BDD0u;
    {
        const bool branch_taken_0x28bdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDD0u;
        // 0x28bdd4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdd0) {
            ctx->pc = 0x28C2CCu;
            goto label_28c2cc;
        }
    }
    ctx->pc = 0x28BDD8u;
label_28bdd8:
    // 0x28bdd8: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x28BDD8u;
    SET_GPR_U32(ctx, 31, 0x28BDE0u);
    ctx->pc = 0x28BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDD8u;
    // 0x28bddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x28BDD8u, 0x28BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDE0u;
label_28bde0:
    // 0x28bde0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28bde4: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x28bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x28bde8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BDE8u;
    SET_GPR_U32(ctx, 31, 0x28BDF0u);
    ctx->pc = 0x28BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BDE8u;
    // 0x28bdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BDE8u, 0x28BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BDF0u;
label_28bdf0:
    // 0x28bdf0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BDF0u;
    {
        const bool branch_taken_0x28bdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDF0u;
        // 0x28bdf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdf0) {
            ctx->pc = 0x28BE14u;
            goto label_28be14;
        }
    }
    ctx->pc = 0x28BDF8u;
    // 0x28bdf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bdfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BDFCu;
    {
        const bool branch_taken_0x28bdfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BDFCu;
        // 0x28be00: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdfc) {
            ctx->pc = 0x28BE14u;
            goto label_28be14;
        }
    }
    ctx->pc = 0x28BE04u;
    // 0x28be04: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28be08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28be08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28be0c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28be10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28be10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28be14:
    // 0x28be14: 0x3c140015  lui         $s4, 0x15
    ctx->pc = 0x28be14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)21 << 16));
    // 0x28be18: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x28be18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28be1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28be20:
    // 0x28be20: 0x26853d40  addiu       $a1, $s4, 0x3D40
    ctx->pc = 0x28be20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 15680));
    // 0x28be24: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x28BE24u;
    SET_GPR_U32(ctx, 31, 0x28BE2Cu);
    ctx->pc = 0x28BE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE24u;
    // 0x28be28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x28BE24u, 0x28BE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE2Cu;
label_28be2c:
    // 0x28be2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be30: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BE30u;
    SET_GPR_U32(ctx, 31, 0x28BE38u);
    ctx->pc = 0x28BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE30u;
    // 0x28be34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BE30u, 0x28BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE38u;
label_28be38:
    // 0x28be38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BE38u;
    {
        const bool branch_taken_0x28be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE38u;
        // 0x28be3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be38) {
            ctx->pc = 0x28BE58u;
            goto label_28be58;
        }
    }
    ctx->pc = 0x28BE40u;
    // 0x28be40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28be44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BE44u;
    {
        const bool branch_taken_0x28be44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be44) {
            ctx->pc = 0x28BE58u;
            goto label_28be58;
        }
    }
    ctx->pc = 0x28BE4Cu;
    // 0x28be4c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28be50: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x28be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x28be54: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28be54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28be58:
    // 0x28be58: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x28be58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28be5c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28BE5Cu;
    {
        const bool branch_taken_0x28be5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE5Cu;
        // 0x28be60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be5c) {
            ctx->pc = 0x28BE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28be20;
        }
    }
    ctx->pc = 0x28BE64u;
    // 0x28be64: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28be64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28be68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be6c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BE6Cu;
    SET_GPR_U32(ctx, 31, 0x28BE74u);
    ctx->pc = 0x28BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE6Cu;
    // 0x28be70: 0x24a53c28  addiu       $a1, $a1, 0x3C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BE6Cu, 0x28BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BE74u;
label_28be74:
    // 0x28be74: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BE74u;
    {
        const bool branch_taken_0x28be74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28be74) {
            ctx->pc = 0x28BE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BE74u;
            // 0x28be78: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BE98u;
            goto label_28be98;
        }
    }
    ctx->pc = 0x28BE7Cu;
    // 0x28be7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28be80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BE80u;
    {
        const bool branch_taken_0x28be80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BE80u;
        // 0x28be84: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be80) {
            ctx->pc = 0x28BE94u;
            goto label_28be94;
        }
    }
    ctx->pc = 0x28BE88u;
    // 0x28be88: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28be8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28be8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28be90: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28be90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28be94:
    // 0x28be94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28be94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28be98:
    // 0x28be98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be9c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BE9Cu;
    SET_GPR_U32(ctx, 31, 0x28BEA4u);
    ctx->pc = 0x28BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BE9Cu;
    // 0x28bea0: 0x24a59dd0  addiu       $a1, $a1, -0x6230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BE9Cu, 0x28BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEA4u;
label_28bea4:
    // 0x28bea4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BEA4u;
    {
        const bool branch_taken_0x28bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bea4) {
            ctx->pc = 0x28BEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BEA4u;
            // 0x28bea8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BEC8u;
            goto label_28bec8;
        }
    }
    ctx->pc = 0x28BEACu;
    // 0x28beac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28beb0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BEB0u;
    {
        const bool branch_taken_0x28beb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEB0u;
        // 0x28beb4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28beb0) {
            ctx->pc = 0x28BEC4u;
            goto label_28bec4;
        }
    }
    ctx->pc = 0x28BEB8u;
    // 0x28beb8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28bebc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bec0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bec4:
    // 0x28bec4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bec8:
    // 0x28bec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28becc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BECCu;
    SET_GPR_U32(ctx, 31, 0x28BED4u);
    ctx->pc = 0x28BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BECCu;
    // 0x28bed0: 0x24a59de0  addiu       $a1, $a1, -0x6220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BECCu, 0x28BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BED4u;
label_28bed4:
    // 0x28bed4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BED4u;
    {
        const bool branch_taken_0x28bed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bed4) {
            ctx->pc = 0x28BED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BED4u;
            // 0x28bed8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BEF8u;
            goto label_28bef8;
        }
    }
    ctx->pc = 0x28BEDCu;
    // 0x28bedc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bee0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BEE0u;
    {
        const bool branch_taken_0x28bee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEE0u;
        // 0x28bee4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bee0) {
            ctx->pc = 0x28BEF4u;
            goto label_28bef4;
        }
    }
    ctx->pc = 0x28BEE8u;
    // 0x28bee8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28beec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bef0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bef4:
    // 0x28bef4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bef8:
    // 0x28bef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28befc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BEFCu;
    SET_GPR_U32(ctx, 31, 0x28BF04u);
    ctx->pc = 0x28BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEFCu;
    // 0x28bf00: 0x24a59df0  addiu       $a1, $a1, -0x6210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BEFCu, 0x28BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF04u;
label_28bf04:
    // 0x28bf04: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BF04u;
    {
        const bool branch_taken_0x28bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf04) {
            ctx->pc = 0x28BF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF04u;
            // 0x28bf08: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF28u;
            goto label_28bf28;
        }
    }
    ctx->pc = 0x28BF0Cu;
    // 0x28bf0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bf10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BF10u;
    {
        const bool branch_taken_0x28bf10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF10u;
        // 0x28bf14: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf10) {
            ctx->pc = 0x28BF24u;
            goto label_28bf24;
        }
    }
    ctx->pc = 0x28BF18u;
    // 0x28bf18: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28bf1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bf20: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bf24:
    // 0x28bf24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bf28:
    // 0x28bf28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf2c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BF2Cu;
    SET_GPR_U32(ctx, 31, 0x28BF34u);
    ctx->pc = 0x28BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF2Cu;
    // 0x28bf30: 0x24a59d50  addiu       $a1, $a1, -0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BF2Cu, 0x28BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF34u;
label_28bf34:
    // 0x28bf34: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BF34u;
    {
        const bool branch_taken_0x28bf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf34) {
            ctx->pc = 0x28BF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF34u;
            // 0x28bf38: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF58u;
            goto label_28bf58;
        }
    }
    ctx->pc = 0x28BF3Cu;
    // 0x28bf3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bf40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BF40u;
    {
        const bool branch_taken_0x28bf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF40u;
        // 0x28bf44: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf40) {
            ctx->pc = 0x28BF54u;
            goto label_28bf54;
        }
    }
    ctx->pc = 0x28BF48u;
    // 0x28bf48: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28bf4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bf50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bf54:
    // 0x28bf54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bf58:
    // 0x28bf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf5c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BF5Cu;
    SET_GPR_U32(ctx, 31, 0x28BF64u);
    ctx->pc = 0x28BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF5Cu;
    // 0x28bf60: 0x24a59d60  addiu       $a1, $a1, -0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BF5Cu, 0x28BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF64u;
label_28bf64:
    // 0x28bf64: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BF64u;
    {
        const bool branch_taken_0x28bf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf64) {
            ctx->pc = 0x28BF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF64u;
            // 0x28bf68: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BF88u;
            goto label_28bf88;
        }
    }
    ctx->pc = 0x28BF6Cu;
    // 0x28bf6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bf70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BF70u;
    {
        const bool branch_taken_0x28bf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BF70u;
        // 0x28bf74: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf70) {
            ctx->pc = 0x28BF84u;
            goto label_28bf84;
        }
    }
    ctx->pc = 0x28BF78u;
    // 0x28bf78: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28bf7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bf80: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bf84:
    // 0x28bf84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bf88:
    // 0x28bf88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf8c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BF8Cu;
    SET_GPR_U32(ctx, 31, 0x28BF94u);
    ctx->pc = 0x28BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BF8Cu;
    // 0x28bf90: 0x24a59d70  addiu       $a1, $a1, -0x6290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BF8Cu, 0x28BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BF94u;
label_28bf94:
    // 0x28bf94: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BF94u;
    {
        const bool branch_taken_0x28bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bf94) {
            ctx->pc = 0x28BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BF94u;
            // 0x28bf98: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BFB8u;
            goto label_28bfb8;
        }
    }
    ctx->pc = 0x28BF9Cu;
    // 0x28bf9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bfa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFA0u;
        // 0x28bfa4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BFB4u;
            goto label_28bfb4;
        }
    }
    ctx->pc = 0x28BFA8u;
    // 0x28bfa8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28bfac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bfb0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bfb4:
    // 0x28bfb4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bfb8:
    // 0x28bfb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfbc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BFBCu;
    SET_GPR_U32(ctx, 31, 0x28BFC4u);
    ctx->pc = 0x28BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFBCu;
    // 0x28bfc0: 0x24a59d80  addiu       $a1, $a1, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BFBCu, 0x28BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFC4u;
label_28bfc4:
    // 0x28bfc4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BFC4u;
    {
        const bool branch_taken_0x28bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bfc4) {
            ctx->pc = 0x28BFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BFC4u;
            // 0x28bfc8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28BFE8u;
            goto label_28bfe8;
        }
    }
    ctx->pc = 0x28BFCCu;
    // 0x28bfcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28bfd0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BFD0u;
    {
        const bool branch_taken_0x28bfd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BFD0u;
        // 0x28bfd4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd0) {
            ctx->pc = 0x28BFE4u;
            goto label_28bfe4;
        }
    }
    ctx->pc = 0x28BFD8u;
    // 0x28bfd8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28bfdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28bfe0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28bfe4:
    // 0x28bfe4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28bfe8:
    // 0x28bfe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28BFECu;
    SET_GPR_U32(ctx, 31, 0x28BFF4u);
    ctx->pc = 0x28BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BFECu;
    // 0x28bff0: 0x24a59d90  addiu       $a1, $a1, -0x6270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28BFECu, 0x28BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BFF4u;
label_28bff4:
    // 0x28bff4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BFF4u;
    {
        const bool branch_taken_0x28bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bff4) {
            ctx->pc = 0x28BFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28BFF4u;
            // 0x28bff8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C018u;
            goto label_28c018;
        }
    }
    ctx->pc = 0x28BFFCu;
    // 0x28bffc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c000: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C000u;
    {
        const bool branch_taken_0x28c000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C000u;
        // 0x28c004: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c000) {
            ctx->pc = 0x28C014u;
            goto label_28c014;
        }
    }
    ctx->pc = 0x28C008u;
    // 0x28c008: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c00c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c010: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c014:
    // 0x28c014: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c018:
    // 0x28c018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c01c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C01Cu;
    SET_GPR_U32(ctx, 31, 0x28C024u);
    ctx->pc = 0x28C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C01Cu;
    // 0x28c020: 0x24a53d70  addiu       $a1, $a1, 0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C01Cu, 0x28C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C024u;
label_28c024:
    // 0x28c024: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C024u;
    {
        const bool branch_taken_0x28c024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c024) {
            ctx->pc = 0x28C028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C024u;
            // 0x28c028: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C048u;
            goto label_28c048;
        }
    }
    ctx->pc = 0x28C02Cu;
    // 0x28c02c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c030: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C030u;
    {
        const bool branch_taken_0x28c030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C030u;
        // 0x28c034: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c030) {
            ctx->pc = 0x28C044u;
            goto label_28c044;
        }
    }
    ctx->pc = 0x28C038u;
    // 0x28c038: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c03c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c040: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c044:
    // 0x28c044: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c048:
    // 0x28c048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c04c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C04Cu;
    SET_GPR_U32(ctx, 31, 0x28C054u);
    ctx->pc = 0x28C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C04Cu;
    // 0x28c050: 0x24a53d78  addiu       $a1, $a1, 0x3D78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C04Cu, 0x28C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C054u;
label_28c054:
    // 0x28c054: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C054u;
    {
        const bool branch_taken_0x28c054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c054) {
            ctx->pc = 0x28C058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C054u;
            // 0x28c058: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C078u;
            goto label_28c078;
        }
    }
    ctx->pc = 0x28C05Cu;
    // 0x28c05c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c060: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C060u;
    {
        const bool branch_taken_0x28c060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C060u;
        // 0x28c064: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c060) {
            ctx->pc = 0x28C074u;
            goto label_28c074;
        }
    }
    ctx->pc = 0x28C068u;
    // 0x28c068: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c06c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c070: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c074:
    // 0x28c074: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c078:
    // 0x28c078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c07c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C07Cu;
    SET_GPR_U32(ctx, 31, 0x28C084u);
    ctx->pc = 0x28C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C07Cu;
    // 0x28c080: 0x24a59e00  addiu       $a1, $a1, -0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C07Cu, 0x28C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C084u;
label_28c084:
    // 0x28c084: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C084u;
    {
        const bool branch_taken_0x28c084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c084) {
            ctx->pc = 0x28C088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C084u;
            // 0x28c088: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C0A8u;
            goto label_28c0a8;
        }
    }
    ctx->pc = 0x28C08Cu;
    // 0x28c08c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c090: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C090u;
    {
        const bool branch_taken_0x28c090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C090u;
        // 0x28c094: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c090) {
            ctx->pc = 0x28C0A4u;
            goto label_28c0a4;
        }
    }
    ctx->pc = 0x28C098u;
    // 0x28c098: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c09c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c0a0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c0a4:
    // 0x28c0a4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c0a8:
    // 0x28c0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0ac: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C0ACu;
    SET_GPR_U32(ctx, 31, 0x28C0B4u);
    ctx->pc = 0x28C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0ACu;
    // 0x28c0b0: 0x24a53d80  addiu       $a1, $a1, 0x3D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C0ACu, 0x28C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0B4u;
label_28c0b4:
    // 0x28c0b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C0B4u;
    {
        const bool branch_taken_0x28c0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0b4) {
            ctx->pc = 0x28C0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C0B4u;
            // 0x28c0b8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C0BCu;
    // 0x28c0bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c0c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C0C0u;
    {
        const bool branch_taken_0x28c0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0C0u;
        // 0x28c0c4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0c0) {
            ctx->pc = 0x28C0D4u;
            goto label_28c0d4;
        }
    }
    ctx->pc = 0x28C0C8u;
    // 0x28c0c8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c0cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c0d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c0d4:
    // 0x28c0d4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c0d8:
    // 0x28c0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0dc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C0DCu;
    SET_GPR_U32(ctx, 31, 0x28C0E4u);
    ctx->pc = 0x28C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C0DCu;
    // 0x28c0e0: 0x24a53d88  addiu       $a1, $a1, 0x3D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C0DCu, 0x28C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C0E4u;
label_28c0e4:
    // 0x28c0e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C0E4u;
    {
        const bool branch_taken_0x28c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c0e4) {
            ctx->pc = 0x28C0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C0E4u;
            // 0x28c0e8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C108u;
            goto label_28c108;
        }
    }
    ctx->pc = 0x28C0ECu;
    // 0x28c0ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c0f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C0F0u;
    {
        const bool branch_taken_0x28c0f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C0F0u;
        // 0x28c0f4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0f0) {
            ctx->pc = 0x28C104u;
            goto label_28c104;
        }
    }
    ctx->pc = 0x28C0F8u;
    // 0x28c0f8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c0fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c100: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c104:
    // 0x28c104: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c108:
    // 0x28c108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c10c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C10Cu;
    SET_GPR_U32(ctx, 31, 0x28C114u);
    ctx->pc = 0x28C110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C10Cu;
    // 0x28c110: 0x24a59e10  addiu       $a1, $a1, -0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C10Cu, 0x28C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C114u;
label_28c114:
    // 0x28c114: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C114u;
    {
        const bool branch_taken_0x28c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c114) {
            ctx->pc = 0x28C118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C114u;
            // 0x28c118: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C138u;
            goto label_28c138;
        }
    }
    ctx->pc = 0x28C11Cu;
    // 0x28c11c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c120: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C120u;
    {
        const bool branch_taken_0x28c120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C120u;
        // 0x28c124: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c120) {
            ctx->pc = 0x28C134u;
            goto label_28c134;
        }
    }
    ctx->pc = 0x28C128u;
    // 0x28c128: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c12c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c130: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c134:
    // 0x28c134: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c138:
    // 0x28c138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c13c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C13Cu;
    SET_GPR_U32(ctx, 31, 0x28C144u);
    ctx->pc = 0x28C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C13Cu;
    // 0x28c140: 0x24a53d48  addiu       $a1, $a1, 0x3D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C13Cu, 0x28C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C144u;
label_28c144:
    // 0x28c144: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C144u;
    {
        const bool branch_taken_0x28c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c144) {
            ctx->pc = 0x28C148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C144u;
            // 0x28c148: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C168u;
            goto label_28c168;
        }
    }
    ctx->pc = 0x28C14Cu;
    // 0x28c14c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c150: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C150u;
    {
        const bool branch_taken_0x28c150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C150u;
        // 0x28c154: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c150) {
            ctx->pc = 0x28C164u;
            goto label_28c164;
        }
    }
    ctx->pc = 0x28C158u;
    // 0x28c158: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c15c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c160: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c164:
    // 0x28c164: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28c168:
    // 0x28c168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c16c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C16Cu;
    SET_GPR_U32(ctx, 31, 0x28C174u);
    ctx->pc = 0x28C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C16Cu;
    // 0x28c170: 0x24a59da0  addiu       $a1, $a1, -0x6260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C16Cu, 0x28C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C174u;
label_28c174:
    // 0x28c174: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C174u;
    {
        const bool branch_taken_0x28c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c174) {
            ctx->pc = 0x28C178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C174u;
            // 0x28c178: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C198u;
            goto label_28c198;
        }
    }
    ctx->pc = 0x28C17Cu;
    // 0x28c17c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c180: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C180u;
    {
        const bool branch_taken_0x28c180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C180u;
        // 0x28c184: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c180) {
            ctx->pc = 0x28C194u;
            goto label_28c194;
        }
    }
    ctx->pc = 0x28C188u;
    // 0x28c188: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c18c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c190: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c194:
    // 0x28c194: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c198:
    // 0x28c198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c19c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C19Cu;
    SET_GPR_U32(ctx, 31, 0x28C1A4u);
    ctx->pc = 0x28C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C19Cu;
    // 0x28c1a0: 0x24a53d50  addiu       $a1, $a1, 0x3D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C19Cu, 0x28C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1A4u;
label_28c1a4:
    // 0x28c1a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C1A4u;
    {
        const bool branch_taken_0x28c1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c1a4) {
            ctx->pc = 0x28C1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C1A4u;
            // 0x28c1a8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C1C8u;
            goto label_28c1c8;
        }
    }
    ctx->pc = 0x28C1ACu;
    // 0x28c1ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c1b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C1B0u;
    {
        const bool branch_taken_0x28c1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1B0u;
        // 0x28c1b4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1b0) {
            ctx->pc = 0x28C1C4u;
            goto label_28c1c4;
        }
    }
    ctx->pc = 0x28C1B8u;
    // 0x28c1b8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c1bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c1c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c1c4:
    // 0x28c1c4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c1c8:
    // 0x28c1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1cc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C1CCu;
    SET_GPR_U32(ctx, 31, 0x28C1D4u);
    ctx->pc = 0x28C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1CCu;
    // 0x28c1d0: 0x24a53d58  addiu       $a1, $a1, 0x3D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C1CCu, 0x28C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C1D4u;
label_28c1d4:
    // 0x28c1d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C1D4u;
    {
        const bool branch_taken_0x28c1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c1d4) {
            ctx->pc = 0x28C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C1D4u;
            // 0x28c1d8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C1F8u;
            goto label_28c1f8;
        }
    }
    ctx->pc = 0x28C1DCu;
    // 0x28c1dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c1e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C1E0u;
    {
        const bool branch_taken_0x28c1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C1E0u;
        // 0x28c1e4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e0) {
            ctx->pc = 0x28C1F4u;
            goto label_28c1f4;
        }
    }
    ctx->pc = 0x28C1E8u;
    // 0x28c1e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c1ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c1f0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c1f4:
    // 0x28c1f4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28c1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_28c1f8:
    // 0x28c1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1fc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C1FCu;
    SET_GPR_U32(ctx, 31, 0x28C204u);
    ctx->pc = 0x28C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C1FCu;
    // 0x28c200: 0x24a53d60  addiu       $a1, $a1, 0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C1FCu, 0x28C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C204u;
label_28c204:
    // 0x28c204: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C204u;
    {
        const bool branch_taken_0x28c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c204) {
            ctx->pc = 0x28C208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C204u;
            // 0x28c208: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C228u;
            goto label_28c228;
        }
    }
    ctx->pc = 0x28C20Cu;
    // 0x28c20c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c210: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C210u;
    {
        const bool branch_taken_0x28c210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C210u;
        // 0x28c214: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c210) {
            ctx->pc = 0x28C224u;
            goto label_28c224;
        }
    }
    ctx->pc = 0x28C218u;
    // 0x28c218: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c21c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c220: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c224:
    // 0x28c224: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x28c224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_28c228:
    // 0x28c228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c22c: 0x24466e70  addiu       $a2, $v0, 0x6E70
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x28c230: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28c234: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28c234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28c238:
    // 0x28c238: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28c23c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c240: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C240u;
    {
        const bool branch_taken_0x28c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C240u;
        // 0x28c244: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c240) {
            ctx->pc = 0x28C260u;
            goto label_28c260;
        }
    }
    ctx->pc = 0x28C248u;
    // 0x28c248: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c24c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C24Cu;
    {
        const bool branch_taken_0x28c24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c24c) {
            ctx->pc = 0x28C260u;
            goto label_28c260;
        }
    }
    ctx->pc = 0x28C254u;
    // 0x28c254: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28c258: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28c25c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28c260:
    // 0x28c260: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x28c260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x28c264: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28C264u;
    {
        const bool branch_taken_0x28c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C264u;
        // 0x28c268: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c264) {
            ctx->pc = 0x28C238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28c238;
        }
    }
    ctx->pc = 0x28C26Cu;
    // 0x28c26c: 0xc0a2d9e  jal         func_28B678
    ctx->pc = 0x28C26Cu;
    SET_GPR_U32(ctx, 31, 0x28C274u);
    ctx->pc = 0x28C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C26Cu;
    // 0x28c270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B678u, 0x28C26Cu, 0x28C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C274u;
label_28c274:
    // 0x28c274: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x28c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x28c278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c27c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28C27Cu;
    {
        const bool branch_taken_0x28c27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C27Cu;
        // 0x28c280: 0x8c500050  lw          $s0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c27c) {
            ctx->pc = 0x28C2D8u;
            goto label_28c2d8;
        }
    }
    ctx->pc = 0x28C284u;
    // 0x28c284: 0x0  nop
    ctx->pc = 0x28c284u;
    // NOP
label_28c288:
    // 0x28c288: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c28c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c290: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C290u;
    SET_GPR_U32(ctx, 31, 0x28C298u);
    ctx->pc = 0x28C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C290u;
    // 0x28c294: 0x24a59e20  addiu       $a1, $a1, -0x61E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C290u, 0x28C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C298u;
label_28c298:
    // 0x28c298: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C298u;
    {
        const bool branch_taken_0x28c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c298) {
            ctx->pc = 0x28C29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C298u;
            // 0x28c29c: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C2BCu;
            goto label_28c2bc;
        }
    }
    ctx->pc = 0x28C2A0u;
    // 0x28c2a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c2a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C2A4u;
    {
        const bool branch_taken_0x28c2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2A4u;
        // 0x28c2a8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2a4) {
            ctx->pc = 0x28C2B8u;
            goto label_28c2b8;
        }
    }
    ctx->pc = 0x28C2ACu;
    // 0x28c2ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28c2b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c2b4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28c2b8:
    // 0x28c2b8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_28c2bc:
    // 0x28c2bc: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x28c2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28c2c0: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28C2C0u;
    {
        const bool branch_taken_0x28c2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2C0u;
        // 0x28c2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2c0) {
            ctx->pc = 0x28C350u;
            goto label_28c350;
        }
    }
    ctx->pc = 0x28C2C8u;
    // 0x28c2c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x28c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28c2cc:
    // 0x28c2cc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28c2d0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28c2d4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_28c2d8:
    // 0x28c2d8: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28C2D8u;
    SET_GPR_U32(ctx, 31, 0x28C2E0u);
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28C2D8u, 0x28C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2E0u;
label_28c2e0:
    // 0x28c2e0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x28C2E0u;
    {
        const bool branch_taken_0x28c2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c2e0) {
            ctx->pc = 0x28C2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C2E0u;
            // 0x28c2e4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C354u;
            goto label_28c354;
        }
    }
    ctx->pc = 0x28C2E8u;
    // 0x28c2e8: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28c2ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28c2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c2f4: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28C2F4u;
    SET_GPR_U32(ctx, 31, 0x28C2FCu);
    ctx->pc = 0x28C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C2F4u;
    // 0x28c2f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28C2F4u, 0x28C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C2FCu;
label_28c2fc:
    // 0x28c2fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28C2FCu;
    {
        const bool branch_taken_0x28c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C2FCu;
        // 0x28c300: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2fc) {
            ctx->pc = 0x28C354u;
            goto label_28c354;
        }
    }
    ctx->pc = 0x28C304u;
    // 0x28c304: 0x0  nop
    ctx->pc = 0x28c304u;
    // NOP
label_28c308:
    // 0x28c308: 0x26a20050  addiu       $v0, $s5, 0x50
    ctx->pc = 0x28c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x28c30c: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28c310: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28c314: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C314u;
    {
        const bool branch_taken_0x28c314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C314u;
        // 0x28c318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c314) {
            ctx->pc = 0x28C350u;
            goto label_28c350;
        }
    }
    ctx->pc = 0x28C31Cu;
    // 0x28c31c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28c320: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28c324: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28c328: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28c328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28c32c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x28C32Cu;
    SET_GPR_U32(ctx, 31, 0x28C334u);
    ctx->pc = 0x28C330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C32Cu;
    // 0x28c330: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x28C32Cu, 0x28C334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C334u;
label_28c334:
    // 0x28c334: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C334u;
    {
        const bool branch_taken_0x28c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c334) {
            ctx->pc = 0x28C338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28C334u;
            // 0x28c338: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C354u;
            goto label_28c354;
        }
    }
    ctx->pc = 0x28C33Cu;
    // 0x28c33c: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x28c340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c344: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28c344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c348: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x28C348u;
    SET_GPR_U32(ctx, 31, 0x28C350u);
    ctx->pc = 0x28C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C348u;
    // 0x28c34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x28C348u, 0x28C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C350u;
label_28c350:
    // 0x28c350: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x28c350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28c354:
    // 0x28c354: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x28c354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28c358: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x28c358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c35c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x28c35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28c360: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x28c360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c364: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x28c364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28c368: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c36c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C36Cu;
        // 0x28c370: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C374u;
    // 0x28c374: 0x0  nop
    ctx->pc = 0x28c374u;
    // NOP
    ctx->pc = 0x28c378u;
}
