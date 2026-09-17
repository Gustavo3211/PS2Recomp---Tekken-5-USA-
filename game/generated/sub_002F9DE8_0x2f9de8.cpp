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

// Function: sub_002F9DE8
// Address: 0x2f9de8 - 0x2fa0d0
void sub_002F9DE8_0x2f9de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9DE8_0x2f9de8");
#endif

    switch (ctx->pc) {
        case 0x2f9e10u: goto label_2f9e10;
        case 0x2f9e6cu: goto label_2f9e6c;
        case 0x2f9ea4u: goto label_2f9ea4;
        case 0x2f9edcu: goto label_2f9edc;
        case 0x2f9f3cu: goto label_2f9f3c;
        case 0x2f9f6cu: goto label_2f9f6c;
        case 0x2f9fa0u: goto label_2f9fa0;
        case 0x2f9fb0u: goto label_2f9fb0;
        case 0x2f9fc0u: goto label_2f9fc0;
        case 0x2f9fd0u: goto label_2f9fd0;
        case 0x2f9fe0u: goto label_2f9fe0;
        case 0x2f9ff0u: goto label_2f9ff0;
        case 0x2fa000u: goto label_2fa000;
        case 0x2fa010u: goto label_2fa010;
        case 0x2fa044u: goto label_2fa044;
        case 0x2fa058u: goto label_2fa058;
        case 0x2fa08cu: goto label_2fa08c;
        default: break;
    }

    ctx->pc = 0x2f9de8u;

    // 0x2f9de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9df4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f9df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f9df8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f9df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f9dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f9dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f9e00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f9e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f9e04: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f9e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2f9e08: 0xc0bb8c2  jal         func_2EE308
    ctx->pc = 0x2F9E08u;
    SET_GPR_U32(ctx, 31, 0x2F9E10u);
    ctx->pc = 0x2F9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E08u;
    // 0x2f9e0c: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2F9E08u, 0x2F9E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E10u;
label_2f9e10:
    // 0x2f9e10: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x2f9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f9e14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f9e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e18: 0x2c82000b  sltiu       $v0, $a0, 0xB
    ctx->pc = 0x2f9e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2f9e1c: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2F9E1Cu;
    {
        const bool branch_taken_0x2f9e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E1Cu;
        // 0x2f9e20: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e1c) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9E24u;
    // 0x2f9e24: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2f9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2f9e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9e2c: 0x8c631a90  lw          $v1, 0x1A90($v1)
    ctx->pc = 0x2f9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6800)));
    // 0x2f9e30: 0x600008  jr          $v1
    ctx->pc = 0x2F9E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F9E38u: goto label_2f9e38;
            case 0x2F9F98u: goto label_2f9f98;
            case 0x2F9FA8u: goto label_2f9fa8;
            case 0x2F9FB8u: goto label_2f9fb8;
            case 0x2F9FC8u: goto label_2f9fc8;
            case 0x2F9FD8u: goto label_2f9fd8;
            case 0x2F9FE8u: goto label_2f9fe8;
            case 0x2F9FF8u: goto label_2f9ff8;
            case 0x2FA008u: goto label_2fa008;
            case 0x2FA050u: goto label_2fa050;
            case 0x2FA090u: goto label_2fa090;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9E30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F9E38u;
label_2f9e38:
    // 0x2f9e38: 0x26130148  addiu       $s3, $s0, 0x148
    ctx->pc = 0x2f9e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2f9e3c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f9e40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9E40u;
    {
        const bool branch_taken_0x2f9e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9e40) {
            ctx->pc = 0x2F9E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9E40u;
            // 0x2f9e44: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9E5Cu;
            goto label_2f9e5c;
        }
    }
    ctx->pc = 0x2F9E48u;
    // 0x2f9e48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9e4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2f9e50: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9E50u;
    {
        const bool branch_taken_0x2f9e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9e50) {
            ctx->pc = 0x2F9E64u;
            goto label_2f9e64;
        }
    }
    ctx->pc = 0x2F9E58u;
    // 0x2f9e58: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2f9e5c:
    // 0x2f9e5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e60: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2f9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2f9e64:
    // 0x2f9e64: 0xc0bda1c  jal         func_2F6870
    ctx->pc = 0x2F9E64u;
    SET_GPR_U32(ctx, 31, 0x2F9E6Cu);
    ctx->pc = 0x2F9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E64u;
    // 0x2f9e68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6870u, 0x2F9E64u, 0x2F9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9E6Cu;
label_2f9e6c:
    // 0x2f9e6c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9E6Cu;
    {
        const bool branch_taken_0x2f9e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E6Cu;
        // 0x2f9e70: 0x26120150  addiu       $s2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e6c) {
            ctx->pc = 0x2F9EF0u;
            goto label_2f9ef0;
        }
    }
    ctx->pc = 0x2F9E74u;
    // 0x2f9e74: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f9e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f9e78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9E78u;
    {
        const bool branch_taken_0x2f9e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E78u;
        // 0x2f9e7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e78) {
            ctx->pc = 0x2F9E90u;
            goto label_2f9e90;
        }
    }
    ctx->pc = 0x2F9E80u;
    // 0x2f9e80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9e84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f9e88: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9E88u;
    {
        const bool branch_taken_0x2f9e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9e88) {
            ctx->pc = 0x2F9E9Cu;
            goto label_2f9e9c;
        }
    }
    ctx->pc = 0x2F9E90u;
label_2f9e90:
    // 0x2f9e90: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f9e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9e9c:
    // 0x2f9e9c: 0xc0bddee  jal         func_2F77B8
    ctx->pc = 0x2F9E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F9EA4u);
    ctx->pc = 0x2F9EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E9Cu;
    // 0x2f9ea0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F77B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F77B8u, 0x2F9E9Cu, 0x2F9EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EA4u;
label_2f9ea4:
    // 0x2f9ea4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F9EA4u;
    {
        const bool branch_taken_0x2f9ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EA4u;
        // 0x2f9ea8: 0x26110158  addiu       $s1, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ea4) {
            ctx->pc = 0x2F9EF4u;
            goto label_2f9ef4;
        }
    }
    ctx->pc = 0x2F9EACu;
    // 0x2f9eac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f9eb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9EB0u;
    {
        const bool branch_taken_0x2f9eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EB0u;
        // 0x2f9eb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9eb0) {
            ctx->pc = 0x2F9EC8u;
            goto label_2f9ec8;
        }
    }
    ctx->pc = 0x2F9EB8u;
    // 0x2f9eb8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9ebc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f9ec0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9EC0u;
    {
        const bool branch_taken_0x2f9ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9ec0) {
            ctx->pc = 0x2F9ED4u;
            goto label_2f9ed4;
        }
    }
    ctx->pc = 0x2F9EC8u;
label_2f9ec8:
    // 0x2f9ec8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2f9ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ed0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9ed4:
    // 0x2f9ed4: 0xc0be0aa  jal         func_2F82A8
    ctx->pc = 0x2F9ED4u;
    SET_GPR_U32(ctx, 31, 0x2F9EDCu);
    ctx->pc = 0x2F9ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9ED4u;
    // 0x2f9ed8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F82A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F82A8u, 0x2F9ED4u, 0x2F9EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EDCu;
label_2f9edc:
    // 0x2f9edc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9EDCu;
    {
        const bool branch_taken_0x2f9edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EDCu;
        // 0x2f9ee0: 0x26030130  addiu       $v1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9edc) {
            ctx->pc = 0x2F9F0Cu;
            goto label_2f9f0c;
        }
    }
    ctx->pc = 0x2F9EE4u;
    // 0x2f9ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9EE4u;
    {
        const bool branch_taken_0x2f9ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EE4u;
        // 0x2f9ee8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ee4) {
            ctx->pc = 0x2F9EFCu;
            goto label_2f9efc;
        }
    }
    ctx->pc = 0x2F9EECu;
    // 0x2f9eec: 0x0  nop
    ctx->pc = 0x2f9eecu;
    // NOP
label_2f9ef0:
    // 0x2f9ef0: 0x26110158  addiu       $s1, $s0, 0x158
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
label_2f9ef4:
    // 0x2f9ef4: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x2f9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2f9ef8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f9ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9efc:
    // 0x2f9efc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9EFCu;
    {
        const bool branch_taken_0x2f9efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9efc) {
            ctx->pc = 0x2F9F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9EFCu;
            // 0x2f9f00: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F10u;
            goto label_2f9f10;
        }
    }
    ctx->pc = 0x2F9F04u;
    // 0x2f9f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9f08: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2f9f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f9f0c:
    // 0x2f9f0c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f9f10:
    // 0x2f9f10: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9F10u;
    {
        const bool branch_taken_0x2f9f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f10) {
            ctx->pc = 0x2F9F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F10u;
            // 0x2f9f14: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F2Cu;
            goto label_2f9f2c;
        }
    }
    ctx->pc = 0x2F9F18u;
    // 0x2f9f18: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9f1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2f9f20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9F20u;
    {
        const bool branch_taken_0x2f9f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9f20) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9F28u;
    // 0x2f9f28: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2f9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2f9f2c:
    // 0x2f9f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f30: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f9f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2f9f34:
    // 0x2f9f34: 0xc0bda98  jal         func_2F6A60
    ctx->pc = 0x2F9F34u;
    SET_GPR_U32(ctx, 31, 0x2F9F3Cu);
    ctx->pc = 0x2F6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6A60u, 0x2F9F34u, 0x2F9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F3Cu;
label_2f9f3c:
    // 0x2f9f3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f9f40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9F40u;
    {
        const bool branch_taken_0x2f9f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f40) {
            ctx->pc = 0x2F9F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F40u;
            // 0x2f9f44: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F5Cu;
            goto label_2f9f5c;
        }
    }
    ctx->pc = 0x2F9F48u;
    // 0x2f9f48: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9f4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f9f50: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9F50u;
    {
        const bool branch_taken_0x2f9f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9f50) {
            ctx->pc = 0x2F9F64u;
            goto label_2f9f64;
        }
    }
    ctx->pc = 0x2F9F58u;
    // 0x2f9f58: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f9f5c:
    // 0x2f9f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f60: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f9f64:
    // 0x2f9f64: 0xc0bdd38  jal         func_2F74E0
    ctx->pc = 0x2F9F64u;
    SET_GPR_U32(ctx, 31, 0x2F9F6Cu);
    ctx->pc = 0x2F74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F74E0u, 0x2F9F64u, 0x2F9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F6Cu;
label_2f9f6c:
    // 0x2f9f6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f9f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f9f70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9F70u;
    {
        const bool branch_taken_0x2f9f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f70) {
            ctx->pc = 0x2F9F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9F70u;
            // 0x2f9f74: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9F8Cu;
            goto label_2f9f8c;
        }
    }
    ctx->pc = 0x2F9F78u;
    // 0x2f9f78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9f7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f9f80: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F9F80u;
    {
        const bool branch_taken_0x2f9f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9f80) {
            ctx->pc = 0x2FA03Cu;
            goto label_2fa03c;
        }
    }
    ctx->pc = 0x2F9F88u;
    // 0x2f9f88: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f9f8c:
    // 0x2f9f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f90: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F9F90u;
    {
        const bool branch_taken_0x2f9f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F90u;
        // 0x2f9f94: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f90) {
            ctx->pc = 0x2FA03Cu;
            goto label_2fa03c;
        }
    }
    ctx->pc = 0x2F9F98u;
label_2f9f98:
    // 0x2f9f98: 0xc0be608  jal         func_2F9820
    ctx->pc = 0x2F9F98u;
    SET_GPR_U32(ctx, 31, 0x2F9FA0u);
    ctx->pc = 0x2F9F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F98u;
    // 0x2f9f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9820u, 0x2F9F98u, 0x2F9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FA0u;
label_2f9fa0:
    // 0x2f9fa0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F9FA0u;
    {
        const bool branch_taken_0x2f9fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FA0u;
        // 0x2f9fa4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fa0) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9FA8u;
label_2f9fa8:
    // 0x2f9fa8: 0xc0be548  jal         func_2F9520
    ctx->pc = 0x2F9FA8u;
    SET_GPR_U32(ctx, 31, 0x2F9FB0u);
    ctx->pc = 0x2F9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FA8u;
    // 0x2f9fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9520u, 0x2F9FA8u, 0x2F9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FB0u;
label_2f9fb0:
    // 0x2f9fb0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2F9FB0u;
    {
        const bool branch_taken_0x2f9fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FB0u;
        // 0x2f9fb4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fb0) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9FB8u;
label_2f9fb8:
    // 0x2f9fb8: 0xc0be5a6  jal         func_2F9698
    ctx->pc = 0x2F9FB8u;
    SET_GPR_U32(ctx, 31, 0x2F9FC0u);
    ctx->pc = 0x2F9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FB8u;
    // 0x2f9fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9698u, 0x2F9FB8u, 0x2F9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FC0u;
label_2f9fc0:
    // 0x2f9fc0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F9FC0u;
    {
        const bool branch_taken_0x2f9fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FC0u;
        // 0x2f9fc4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fc0) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9FC8u;
label_2f9fc8:
    // 0x2f9fc8: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2F9FC8u;
    SET_GPR_U32(ctx, 31, 0x2F9FD0u);
    ctx->pc = 0x2F9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FC8u;
    // 0x2f9fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F99A8u, 0x2F9FC8u, 0x2F9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FD0u;
label_2f9fd0:
    // 0x2f9fd0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F9FD0u;
    {
        const bool branch_taken_0x2f9fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FD0u;
        // 0x2f9fd4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fd0) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9FD8u;
label_2f9fd8:
    // 0x2f9fd8: 0xc0be6b8  jal         func_2F9AE0
    ctx->pc = 0x2F9FD8u;
    SET_GPR_U32(ctx, 31, 0x2F9FE0u);
    ctx->pc = 0x2F9FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FD8u;
    // 0x2f9fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9AE0u, 0x2F9FD8u, 0x2F9FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FE0u;
label_2f9fe0:
    // 0x2f9fe0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F9FE0u;
    {
        const bool branch_taken_0x2f9fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FE0u;
        // 0x2f9fe4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fe0) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9FE8u;
label_2f9fe8:
    // 0x2f9fe8: 0xc0be70c  jal         func_2F9C30
    ctx->pc = 0x2F9FE8u;
    SET_GPR_U32(ctx, 31, 0x2F9FF0u);
    ctx->pc = 0x2F9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FE8u;
    // 0x2f9fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9C30u, 0x2F9FE8u, 0x2F9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FF0u;
label_2f9ff0:
    // 0x2f9ff0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2F9FF0u;
    {
        const bool branch_taken_0x2f9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FF0u;
        // 0x2f9ff4: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ff0) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2F9FF8u;
label_2f9ff8:
    // 0x2f9ff8: 0xc0be732  jal         func_2F9CC8
    ctx->pc = 0x2F9FF8u;
    SET_GPR_U32(ctx, 31, 0x2FA000u);
    ctx->pc = 0x2F9FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FF8u;
    // 0x2f9ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9CC8u, 0x2F9FF8u, 0x2FA000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA000u;
label_2fa000:
    // 0x2fa000: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA000u;
    {
        const bool branch_taken_0x2fa000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA000u;
        // 0x2fa004: 0x26050158  addiu       $a1, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa000) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2FA008u;
label_2fa008:
    // 0x2fa008: 0xc0be740  jal         func_2F9D00
    ctx->pc = 0x2FA008u;
    SET_GPR_U32(ctx, 31, 0x2FA010u);
    ctx->pc = 0x2FA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA008u;
    // 0x2fa00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9D00u, 0x2FA008u, 0x2FA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA010u;
label_2fa010:
    // 0x2fa010: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2fa010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
label_2fa014:
    // 0x2fa014: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa018: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA018u;
    {
        const bool branch_taken_0x2fa018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa018) {
            ctx->pc = 0x2FA01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA018u;
            // 0x2fa01c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA034u;
            goto label_2fa034;
        }
    }
    ctx->pc = 0x2FA020u;
    // 0x2fa020: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa024: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa028: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA028u;
    {
        const bool branch_taken_0x2fa028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa028) {
            ctx->pc = 0x2FA03Cu;
            goto label_2fa03c;
        }
    }
    ctx->pc = 0x2FA030u;
    // 0x2fa030: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa034:
    // 0x2fa034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa038: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa03c:
    // 0x2fa03c: 0xc0be10a  jal         func_2F8428
    ctx->pc = 0x2FA03Cu;
    SET_GPR_U32(ctx, 31, 0x2FA044u);
    ctx->pc = 0x2F8428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8428u, 0x2FA03Cu, 0x2FA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA044u;
label_2fa044:
    // 0x2fa044: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2FA044u;
    {
        const bool branch_taken_0x2fa044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA044u;
        // 0x2fa048: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa044) {
            ctx->pc = 0x2FA090u;
            goto label_2fa090;
        }
    }
    ctx->pc = 0x2FA04Cu;
    // 0x2fa04c: 0x0  nop
    ctx->pc = 0x2fa04cu;
    // NOP
label_2fa050:
    // 0x2fa050: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2FA050u;
    SET_GPR_U32(ctx, 31, 0x2FA058u);
    ctx->pc = 0x2FA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA050u;
    // 0x2fa054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9DA0u, 0x2FA050u, 0x2FA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA058u;
label_2fa058:
    // 0x2fa058: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2fa058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2fa05c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa060: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA060u;
    {
        const bool branch_taken_0x2fa060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa060) {
            ctx->pc = 0x2FA064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA060u;
            // 0x2fa064: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA07Cu;
            goto label_2fa07c;
        }
    }
    ctx->pc = 0x2FA068u;
    // 0x2fa068: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa06c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa070: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA070u;
    {
        const bool branch_taken_0x2fa070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa070) {
            ctx->pc = 0x2FA084u;
            goto label_2fa084;
        }
    }
    ctx->pc = 0x2FA078u;
    // 0x2fa078: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa07c:
    // 0x2fa07c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa080: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa084:
    // 0x2fa084: 0xc0be10a  jal         func_2F8428
    ctx->pc = 0x2FA084u;
    SET_GPR_U32(ctx, 31, 0x2FA08Cu);
    ctx->pc = 0x2F8428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8428u, 0x2FA084u, 0x2FA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA08Cu;
label_2fa08c:
    // 0x2fa08c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x2fa08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_2fa090:
    // 0x2fa090: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA090u;
    {
        const bool branch_taken_0x2fa090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA090u;
        // 0x2fa094: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa090) {
            ctx->pc = 0x2FA0ACu;
            goto label_2fa0ac;
        }
    }
    ctx->pc = 0x2FA098u;
    // 0x2fa098: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2fa098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa09c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA09Cu;
    {
        const bool branch_taken_0x2fa09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA09Cu;
        // 0x2fa0a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa09c) {
            ctx->pc = 0x2FA0B0u;
            goto label_2fa0b0;
        }
    }
    ctx->pc = 0x2FA0A4u;
    // 0x2fa0a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa0a8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2fa0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2fa0ac:
    // 0x2fa0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa0b0:
    // 0x2fa0b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fa0b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa0b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fa0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa0b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fa0b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fa0bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fa0bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa0c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fa0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0C4u;
        // 0x2fa0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA0CCu;
    // 0x2fa0cc: 0x0  nop
    ctx->pc = 0x2fa0ccu;
    // NOP
    ctx->pc = 0x2fa0d0u;
}
