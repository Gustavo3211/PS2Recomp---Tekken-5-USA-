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

// Function: sub_0028E680
// Address: 0x28e680 - 0x28e6a8
void sub_0028E680_0x28e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E680_0x28e680");
#endif

    switch (ctx->pc) {
        case 0x28e690u: goto label_28e690;
        default: break;
    }

    ctx->pc = 0x28e680u;

    // 0x28e680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e688: 0xc08215c  jal         func_208570
    ctx->pc = 0x28E688u;
    SET_GPR_U32(ctx, 31, 0x28E690u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x28E688u, 0x28E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E690u;
label_28e690:
    // 0x28e690: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28e694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e698: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28e698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x28e69c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E69Cu;
        // 0x28e6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E6A4u;
    // 0x28e6a4: 0x0  nop
    ctx->pc = 0x28e6a4u;
    // NOP
    ctx->pc = 0x28e6a8u;
}
