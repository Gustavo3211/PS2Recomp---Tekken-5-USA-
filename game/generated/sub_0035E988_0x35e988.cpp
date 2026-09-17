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

// Function: sub_0035E988
// Address: 0x35e988 - 0x35eb78
void sub_0035E988_0x35e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E988_0x35e988");
#endif

    switch (ctx->pc) {
        case 0x35e9c8u: goto label_35e9c8;
        case 0x35e9e8u: goto label_35e9e8;
        case 0x35ea0cu: goto label_35ea0c;
        case 0x35ea18u: goto label_35ea18;
        case 0x35ea20u: goto label_35ea20;
        case 0x35ea38u: goto label_35ea38;
        case 0x35ea6cu: goto label_35ea6c;
        case 0x35ea84u: goto label_35ea84;
        case 0x35ea9cu: goto label_35ea9c;
        case 0x35eaacu: goto label_35eaac;
        case 0x35eac8u: goto label_35eac8;
        case 0x35eb08u: goto label_35eb08;
        case 0x35eb20u: goto label_35eb20;
        case 0x35eb2cu: goto label_35eb2c;
        case 0x35eb3cu: goto label_35eb3c;
        case 0x35eb5cu: goto label_35eb5c;
        default: break;
    }

    ctx->pc = 0x35e988u;

    // 0x35e988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35e98c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35e990: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x35e990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e99c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e9a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e9a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e9a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35e9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e9ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35e9b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35e9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e9b4: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E9B4u;
    {
        const bool branch_taken_0x35e9b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9B4u;
        // 0x35e9b8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9b4) {
            ctx->pc = 0x35E9D8u;
            goto label_35e9d8;
        }
    }
    ctx->pc = 0x35E9BCu;
    // 0x35e9bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35e9c0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E9C0u;
    SET_GPR_U32(ctx, 31, 0x35E9C8u);
    ctx->pc = 0x35E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9C0u;
    // 0x35e9c4: 0x24846388  addiu       $a0, $a0, 0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E9C0u, 0x35E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9C8u;
label_35e9c8:
    // 0x35e9c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e9cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x35E9CCu;
    {
        const bool branch_taken_0x35e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9CCu;
        // 0x35e9d0: 0x34420025  ori         $v0, $v0, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9cc) {
            ctx->pc = 0x35EAE4u;
            goto label_35eae4;
        }
    }
    ctx->pc = 0x35E9D4u;
    // 0x35e9d4: 0x0  nop
    ctx->pc = 0x35e9d4u;
    // NOP
label_35e9d8:
    // 0x35e9d8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E9D8u;
    {
        const bool branch_taken_0x35e9d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9D8u;
        // 0x35e9dc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9d8) {
            ctx->pc = 0x35E9F8u;
            goto label_35e9f8;
        }
    }
    ctx->pc = 0x35E9E0u;
    // 0x35e9e0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35E9E0u;
    SET_GPR_U32(ctx, 31, 0x35E9E8u);
    ctx->pc = 0x35E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9E0u;
    // 0x35e9e4: 0x248463c0  addiu       $a0, $a0, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35E9E0u, 0x35E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9E8u;
label_35e9e8:
    // 0x35e9e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35e9ec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x35E9ECu;
    {
        const bool branch_taken_0x35e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9ECu;
        // 0x35e9f0: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9ec) {
            ctx->pc = 0x35EAE4u;
            goto label_35eae4;
        }
    }
    ctx->pc = 0x35E9F4u;
    // 0x35e9f4: 0x0  nop
    ctx->pc = 0x35e9f4u;
    // NOP
label_35e9f8:
    // 0x35e9f8: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x35E9F8u;
    {
        const bool branch_taken_0x35e9f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9F8u;
        // 0x35e9fc: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9f8) {
            ctx->pc = 0x35EA28u;
            goto label_35ea28;
        }
    }
    ctx->pc = 0x35EA00u;
    // 0x35ea00: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ea04: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EA04u;
    SET_GPR_U32(ctx, 31, 0x35EA0Cu);
    ctx->pc = 0x35EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA04u;
    // 0x35ea08: 0x248463f8  addiu       $a0, $a0, 0x63F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EA04u, 0x35EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA0Cu;
label_35ea0c:
    // 0x35ea0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ea10: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x35EA10u;
    {
        const bool branch_taken_0x35ea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA10u;
        // 0x35ea14: 0x34420027  ori         $v0, $v0, 0x27 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea10) {
            ctx->pc = 0x35EAE4u;
            goto label_35eae4;
        }
    }
    ctx->pc = 0x35EA18u;
label_35ea18:
    // 0x35ea18: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35EA18u;
    SET_GPR_U32(ctx, 31, 0x35EA20u);
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35EA18u, 0x35EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA20u;
label_35ea20:
    // 0x35ea20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35EA20u;
    {
        const bool branch_taken_0x35ea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA20u;
        // 0x35ea24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea20) {
            ctx->pc = 0x35EA70u;
            goto label_35ea70;
        }
    }
    ctx->pc = 0x35EA28u;
label_35ea28:
    // 0x35ea28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35ea28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea2c: 0x24442c68  addiu       $a0, $v0, 0x2C68
    ctx->pc = 0x35ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x35ea30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35EA30u;
    {
        const bool branch_taken_0x35ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA30u;
        // 0x35ea34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea30) {
            ctx->pc = 0x35EA3Cu;
            goto label_35ea3c;
        }
    }
    ctx->pc = 0x35EA38u;
label_35ea38:
    // 0x35ea38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_35ea3c:
    // 0x35ea3c: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x35ea3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x35ea40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35EA40u;
    {
        const bool branch_taken_0x35ea40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ea40) {
            ctx->pc = 0x35EA70u;
            goto label_35ea70;
        }
    }
    ctx->pc = 0x35EA48u;
    // 0x35ea48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ea4c: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EA4Cu;
    {
        const bool branch_taken_0x35ea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x35EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA4Cu;
        // 0x35ea50: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea4c) {
            ctx->pc = 0x35EA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ea38;
        }
    }
    ctx->pc = 0x35EA54u;
    // 0x35ea54: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x35ea54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea58: 0x1240ffef  beqz        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x35EA58u;
    {
        const bool branch_taken_0x35ea58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ea58) {
            ctx->pc = 0x35EA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ea18;
        }
    }
    ctx->pc = 0x35EA60u;
    // 0x35ea60: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x35ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x35ea64: 0xc0d7860  jal         func_35E180
    ctx->pc = 0x35EA64u;
    SET_GPR_U32(ctx, 31, 0x35EA6Cu);
    ctx->pc = 0x35EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA64u;
    // 0x35ea68: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E180u, 0x35EA64u, 0x35EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA6Cu;
label_35ea6c:
    // 0x35ea6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ea6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea70:
    // 0x35ea70: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EA70u;
    {
        const bool branch_taken_0x35ea70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ea70) {
            ctx->pc = 0x35EA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EA70u;
            // 0x35ea74: 0x3244ffff  andi        $a0, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EA90u;
            goto label_35ea90;
        }
    }
    ctx->pc = 0x35EA78u;
    // 0x35ea78: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ea7c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EA7Cu;
    SET_GPR_U32(ctx, 31, 0x35EA84u);
    ctx->pc = 0x35EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA7Cu;
    // 0x35ea80: 0x24846438  addiu       $a0, $a0, 0x6438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EA7Cu, 0x35EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA84u;
label_35ea84:
    // 0x35ea84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ea88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35EA88u;
    {
        const bool branch_taken_0x35ea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EA88u;
        // 0x35ea8c: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea88) {
            ctx->pc = 0x35EAE4u;
            goto label_35eae4;
        }
    }
    ctx->pc = 0x35EA90u;
label_35ea90:
    // 0x35ea90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ea94: 0xc0d7872  jal         func_35E1C8
    ctx->pc = 0x35EA94u;
    SET_GPR_U32(ctx, 31, 0x35EA9Cu);
    ctx->pc = 0x35EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EA94u;
    // 0x35ea98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E1C8u, 0x35EA94u, 0x35EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EA9Cu;
label_35ea9c:
    // 0x35ea9c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x35EA9Cu;
    {
        const bool branch_taken_0x35ea9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ea9c) {
            ctx->pc = 0x35EAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EA9Cu;
            // 0x35eaa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EAE8u;
            goto label_35eae8;
        }
    }
    ctx->pc = 0x35EAA4u;
    // 0x35eaa4: 0xc0d7c1c  jal         func_35F070
    ctx->pc = 0x35EAA4u;
    SET_GPR_U32(ctx, 31, 0x35EAACu);
    ctx->pc = 0x35EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAA4u;
    // 0x35eaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F070u, 0x35EAA4u, 0x35EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAACu;
label_35eaac:
    // 0x35eaac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35eaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35eab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eab4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35eab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eab8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35eab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eabc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35eabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eac0: 0xc0d8b5e  jal         func_362D78
    ctx->pc = 0x35EAC0u;
    SET_GPR_U32(ctx, 31, 0x35EAC8u);
    ctx->pc = 0x35EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EAC0u;
    // 0x35eac4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D78u, 0x35EAC0u, 0x35EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EAC8u;
label_35eac8:
    // 0x35eac8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35EAC8u;
    {
        const bool branch_taken_0x35eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eac8) {
            ctx->pc = 0x35EACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EAC8u;
            // 0x35eacc: 0xa6920000  sh          $s2, 0x0($s4) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EAE0u;
            goto label_35eae0;
        }
    }
    ctx->pc = 0x35EAD0u;
    // 0x35ead0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ead4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35EAD4u;
    {
        const bool branch_taken_0x35ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAD4u;
        // 0x35ead8: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ead4) {
            ctx->pc = 0x35EAE4u;
            goto label_35eae4;
        }
    }
    ctx->pc = 0x35EADCu;
    // 0x35eadc: 0x0  nop
    ctx->pc = 0x35eadcu;
    // NOP
label_35eae0:
    // 0x35eae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35eae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eae4:
    // 0x35eae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35eae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35eae8:
    // 0x35eae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35eae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eaec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35eaecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eaf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35eaf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eaf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35eaf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35eaf8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35eaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35eafc: 0x3e00008  jr          $ra
    ctx->pc = 0x35EAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EAFCu;
        // 0x35eb00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB04u;
    // 0x35eb04: 0x0  nop
    ctx->pc = 0x35eb04u;
    // NOP
label_35eb08:
    // 0x35eb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35eb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35eb0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35eb10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35eb14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35eb18: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x35eb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x35eb1c: 0x3211ffff  andi        $s1, $s0, 0xFFFF
    ctx->pc = 0x35eb1cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_35eb20:
    // 0x35eb20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x35eb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x35eb24: 0xc0d7bc2  jal         func_35EF08
    ctx->pc = 0x35EB24u;
    SET_GPR_U32(ctx, 31, 0x35EB2Cu);
    ctx->pc = 0x35EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB24u;
    // 0x35eb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF08u, 0x35EB24u, 0x35EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB2Cu;
label_35eb2c:
    // 0x35eb2c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35EB2Cu;
    {
        const bool branch_taken_0x35eb2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35eb2c) {
            ctx->pc = 0x35EB48u;
            goto label_35eb48;
        }
    }
    ctx->pc = 0x35EB34u;
    // 0x35eb34: 0xc0d7ade  jal         func_35EB78
    ctx->pc = 0x35EB34u;
    SET_GPR_U32(ctx, 31, 0x35EB3Cu);
    ctx->pc = 0x35EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB34u;
    // 0x35eb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB78u, 0x35EB34u, 0x35EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB3Cu;
label_35eb3c:
    // 0x35eb3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35EB3Cu;
    {
        const bool branch_taken_0x35eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB3Cu;
        // 0x35eb40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb3c) {
            ctx->pc = 0x35EB64u;
            goto label_35eb64;
        }
    }
    ctx->pc = 0x35EB44u;
    // 0x35eb44: 0x0  nop
    ctx->pc = 0x35eb44u;
    // NOP
label_35eb48:
    // 0x35eb48: 0x601fff5  bgez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35EB48u;
    {
        const bool branch_taken_0x35eb48 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB48u;
        // 0x35eb4c: 0x3211ffff  andi        $s1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb48) {
            ctx->pc = 0x35EB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35eb20;
        }
    }
    ctx->pc = 0x35EB50u;
    // 0x35eb50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35eb54: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EB54u;
    SET_GPR_U32(ctx, 31, 0x35EB5Cu);
    ctx->pc = 0x35EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB54u;
    // 0x35eb58: 0x24846480  addiu       $a0, $a0, 0x6480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EB54u, 0x35EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB5Cu;
label_35eb5c:
    // 0x35eb5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35eb60: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x35eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
label_35eb64:
    // 0x35eb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35eb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eb68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35eb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35eb6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35eb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eb70: 0x3e00008  jr          $ra
    ctx->pc = 0x35EB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB70u;
        // 0x35eb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB78u;
}
