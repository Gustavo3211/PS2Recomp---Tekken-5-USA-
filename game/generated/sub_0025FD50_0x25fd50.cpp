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

// Function: sub_0025FD50
// Address: 0x25fd50 - 0x25fda0
void sub_0025FD50_0x25fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD50_0x25fd50");
#endif

    ctx->pc = 0x25fd50u;

    // 0x25fd50: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25fd50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd54: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x25fd54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x25fd58: 0x8d020024  lw          $v0, 0x24($t0)
    ctx->pc = 0x25fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x25fd5c: 0x63823  negu        $a3, $a2
    ctx->pc = 0x25fd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x25fd60: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x25fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x25fd64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25fd68: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x25fd68u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25fd6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25fd70: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x25fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x25fd74: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x25fd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x25fd78: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x25fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25fd7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x25fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25fd80: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x25fd80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x25fd84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FD84u;
    {
        const bool branch_taken_0x25fd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD84u;
        // 0x25fd88: 0x462821  addu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd84) {
            ctx->pc = 0x25FD98u;
            goto label_25fd98;
        }
    }
    ctx->pc = 0x25FD8Cu;
    // 0x25fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD8Cu;
        // 0x25fd90: 0xad050024  sw          $a1, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD94u;
    // 0x25fd94: 0x0  nop
    ctx->pc = 0x25fd94u;
    // NOP
label_25fd98:
    // 0x25fd98: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD98u;
        // 0x25fd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FDA0u;
}
