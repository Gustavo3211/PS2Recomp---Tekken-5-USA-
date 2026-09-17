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

// Function: sub_00343C28
// Address: 0x343c28 - 0x343c60
void sub_00343C28_0x343c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343C28_0x343c28");
#endif

    switch (ctx->pc) {
        case 0x343c4cu: goto label_343c4c;
        default: break;
    }

    ctx->pc = 0x343c28u;

    // 0x343c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x343c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343c34: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x343c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x343c38: 0x30630021  andi        $v1, $v1, 0x21
    ctx->pc = 0x343c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)33);
    // 0x343c3c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x343C3Cu;
    {
        const bool branch_taken_0x343c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x343C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C3Cu;
        // 0x343c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c3c) {
            ctx->pc = 0x343C50u;
            goto label_343c50;
        }
    }
    ctx->pc = 0x343C44u;
    // 0x343c44: 0xc0d0f7c  jal         func_343DF0
    ctx->pc = 0x343C44u;
    SET_GPR_U32(ctx, 31, 0x343C4Cu);
    ctx->pc = 0x343DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343DF0u, 0x343C44u, 0x343C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C4Cu;
label_343c4c:
    // 0x343c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343c50:
    // 0x343c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343c54: 0x3e00008  jr          $ra
    ctx->pc = 0x343C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C54u;
        // 0x343c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343C5Cu;
    // 0x343c5c: 0x0  nop
    ctx->pc = 0x343c5cu;
    // NOP
    ctx->pc = 0x343c60u;
}
