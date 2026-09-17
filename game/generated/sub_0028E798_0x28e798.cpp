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

// Function: sub_0028E798
// Address: 0x28e798 - 0x28e7c0
void sub_0028E798_0x28e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E798_0x28e798");
#endif

    ctx->pc = 0x28e798u;

    // 0x28e798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e7a4: 0x80b279c  j           func_2C9E70
    ctx->pc = 0x28E7A4u;
    ctx->pc = 0x28E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E7A4u;
    // 0x28e7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    sub_002C9E70_0x2c9e70(rdram, ctx, runtime); return;
    ctx->pc = 0x28E7ACu;
    // 0x28e7ac: 0x0  nop
    ctx->pc = 0x28e7acu;
    // NOP
    // 0x28e7b0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x28e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x28e7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28E7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E7B4u;
        // 0x28e7b8: 0x8c626f1c  lw          $v0, 0x6F1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28444)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E7BCu;
    // 0x28e7bc: 0x0  nop
    ctx->pc = 0x28e7bcu;
    // NOP
    ctx->pc = 0x28e7c0u;
}
