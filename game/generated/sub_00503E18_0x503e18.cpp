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

// Function: sub_00503E18
// Address: 0x503e18 - 0x503eb0
void sub_00503E18_0x503e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503E18_0x503e18");
#endif

    switch (ctx->pc) {
        case 0x503e44u: goto label_503e44;
        case 0x503e50u: goto label_503e50;
        case 0x503e58u: goto label_503e58;
        case 0x503e60u: goto label_503e60;
        default: break;
    }

    ctx->pc = 0x503e18u;

    // 0x503e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x503e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x503e20: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x503e20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x503e24: 0x2610c4a8  addiu       $s0, $s0, -0x3B58
    ctx->pc = 0x503e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952104));
    // 0x503e28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x503e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x503e2c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x503e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC4ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC4ACu, _value); } while (0);
    // 0x503e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x503e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503e34: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x503e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC4A8u, _value); } while (0);
    // 0x503e38: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x503e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EC4B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC4B0u, _value); } while (0);
    // 0x503e3c: 0xc043d88  jal         func_10F620
    ctx->pc = 0x503E3Cu;
    SET_GPR_U32(ctx, 31, 0x503E44u);
    ctx->pc = 0x503E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503E3Cu;
    // 0x503e40: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x503E3Cu, 0x503E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503E44u;
label_503e44:
    // 0x503e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x503e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503e48: 0xc043dd8  jal         func_10F760
    ctx->pc = 0x503E48u;
    SET_GPR_U32(ctx, 31, 0x503E50u);
    ctx->pc = 0x503E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503E48u;
    // 0x503e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F760u, 0x503E48u, 0x503E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503E50u;
label_503e50:
    // 0x503e50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x503e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503e54: 0x0  nop
    ctx->pc = 0x503e54u;
    // NOP
label_503e58:
    // 0x503e58: 0xc043dd0  jal         func_10F740
    ctx->pc = 0x503E58u;
    SET_GPR_U32(ctx, 31, 0x503E60u);
    ctx->pc = 0x503E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503E58u;
    // 0x503e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F740u, 0x503E58u, 0x503E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503E60u;
label_503e60:
    // 0x503e60: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x503E60u;
    {
        const bool branch_taken_0x503e60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x503E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503E60u;
        // 0x503e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503e60) {
            ctx->pc = 0x503E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503e58;
        }
    }
    ctx->pc = 0x503E68u;
    // 0x503e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x503e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503e6c: 0x10100b  movn        $v0, $zero, $s0
    ctx->pc = 0x503e6cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x503e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x503e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503e74: 0x3e00008  jr          $ra
    ctx->pc = 0x503E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503E74u;
        // 0x503e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503E7Cu;
    // 0x503e7c: 0x0  nop
    ctx->pc = 0x503e7cu;
    // NOP
    // 0x503e80: 0x3e00008  jr          $ra
    ctx->pc = 0x503E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503E80u;
        // 0x503e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503E88u;
    // 0x503e88: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x503e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x503e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x503E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503E8Cu;
        // 0x503e90: 0x8c62c4c0  lw          $v0, -0x3B40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503E94u;
    // 0x503e94: 0x0  nop
    ctx->pc = 0x503e94u;
    // NOP
    // 0x503e98: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x503e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x503e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x503E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503E9Cu;
        // 0x503ea0: 0x8c62c4c0  lw          $v0, -0x3B40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503EA4u;
    // 0x503ea4: 0x0  nop
    ctx->pc = 0x503ea4u;
    // NOP
    // 0x503ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x503EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503EA8u;
        // 0x503eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503EB0u;
}
