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

// Function: sub_00230F70
// Address: 0x230f70 - 0x230fb0
void sub_00230F70_0x230f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230F70_0x230f70");
#endif

    switch (ctx->pc) {
        case 0x230f84u: goto label_230f84;
        default: break;
    }

    ctx->pc = 0x230f70u;

    // 0x230f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x230f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x230f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x230f7c: 0xc0846e8  jal         func_211BA0
    ctx->pc = 0x230F7Cu;
    SET_GPR_U32(ctx, 31, 0x230F84u);
    ctx->pc = 0x230F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F7Cu;
    // 0x230f80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211BA0u, 0x230F7Cu, 0x230F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F84u;
label_230f84:
    // 0x230f84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230F84u;
    {
        const bool branch_taken_0x230f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F84u;
        // 0x230f88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f84) {
            ctx->pc = 0x230FA0u;
            goto label_230fa0;
        }
    }
    ctx->pc = 0x230F8Cu;
    // 0x230f8c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x230f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x230f90: 0x8c62885c  lw          $v0, -0x77A4($v1)
    ctx->pc = 0x230f90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x230f94: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x230f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x230f98: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x230f98u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x230f9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230fa0:
    // 0x230fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230fa4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x230fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x230FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FA8u;
        // 0x230fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230FB0u;
}
