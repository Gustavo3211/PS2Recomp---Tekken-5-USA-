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

// Function: sub_00248E28
// Address: 0x248e28 - 0x248e88
void sub_00248E28_0x248e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248E28_0x248e28");
#endif

    switch (ctx->pc) {
        case 0x248e48u: goto label_248e48;
        default: break;
    }

    ctx->pc = 0x248e28u;

    // 0x248e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x248e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248e3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x248e40: 0xc092240  jal         func_248900
    ctx->pc = 0x248E40u;
    SET_GPR_U32(ctx, 31, 0x248E48u);
    ctx->pc = 0x248E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E40u;
    // 0x248e44: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248900u, 0x248E40u, 0x248E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248E48u;
label_248e48:
    // 0x248e48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248e50: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x248E50u;
    {
        const bool branch_taken_0x248e50 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x248E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E50u;
        // 0x248e54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248e50) {
            ctx->pc = 0x248E70u;
            goto label_248e70;
        }
    }
    ctx->pc = 0x248E58u;
    // 0x248e58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248e5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248e64: 0x80922e8  j           func_248BA0
    ctx->pc = 0x248E64u;
    ctx->pc = 0x248E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E64u;
    // 0x248e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248BA0u, 0x248E64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x248E6Cu;
    // 0x248e6c: 0x0  nop
    ctx->pc = 0x248e6cu;
    // NOP
label_248e70:
    // 0x248e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248e7c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x248e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x248e80: 0x3e00008  jr          $ra
    ctx->pc = 0x248E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E80u;
        // 0x248e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E88u;
}
