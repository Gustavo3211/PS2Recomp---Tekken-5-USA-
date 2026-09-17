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

// Function: sub_00341C28
// Address: 0x341c28 - 0x341c60
void sub_00341C28_0x341c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C28_0x341c28");
#endif

    switch (ctx->pc) {
        case 0x341c4cu: goto label_341c4c;
        default: break;
    }

    ctx->pc = 0x341c28u;

    // 0x341c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341c2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x341c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x341c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341c38: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x341c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x341c3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341C3Cu;
    {
        const bool branch_taken_0x341c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x341C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C3Cu;
        // 0x341c40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c3c) {
            ctx->pc = 0x341C4Cu;
            goto label_341c4c;
        }
    }
    ctx->pc = 0x341C44u;
    // 0x341c44: 0xc0d1c38  jal         func_3470E0
    ctx->pc = 0x341C44u;
    SET_GPR_U32(ctx, 31, 0x341C4Cu);
    ctx->pc = 0x3470E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3470E0u, 0x341C44u, 0x341C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C4Cu;
label_341c4c:
    // 0x341c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341c50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c54: 0x3e00008  jr          $ra
    ctx->pc = 0x341C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C54u;
        // 0x341c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C5Cu;
    // 0x341c5c: 0x0  nop
    ctx->pc = 0x341c5cu;
    // NOP
    ctx->pc = 0x341c60u;
}
