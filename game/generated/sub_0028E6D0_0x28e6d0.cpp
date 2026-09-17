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

// Function: sub_0028E6D0
// Address: 0x28e6d0 - 0x28e6f8
void sub_0028E6D0_0x28e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E6D0_0x28e6d0");
#endif

    switch (ctx->pc) {
        case 0x28e6e0u: goto label_28e6e0;
        default: break;
    }

    ctx->pc = 0x28e6d0u;

    // 0x28e6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e6d8: 0xc08215c  jal         func_208570
    ctx->pc = 0x28E6D8u;
    SET_GPR_U32(ctx, 31, 0x28E6E0u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x28E6D8u, 0x28E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6E0u;
label_28e6e0:
    // 0x28e6e0: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x28e6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x28e6e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e6e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28e6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6ECu;
        // 0x28e6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E6F4u;
    // 0x28e6f4: 0x0  nop
    ctx->pc = 0x28e6f4u;
    // NOP
    ctx->pc = 0x28e6f8u;
}
