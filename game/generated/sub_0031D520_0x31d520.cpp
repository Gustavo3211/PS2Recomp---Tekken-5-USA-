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

// Function: sub_0031D520
// Address: 0x31d520 - 0x31d540
void sub_0031D520_0x31d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D520_0x31d520");
#endif

    switch (ctx->pc) {
        case 0x31d530u: goto label_31d530;
        default: break;
    }

    ctx->pc = 0x31d520u;

    // 0x31d520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d528: 0xc0ce694  jal         func_339A50
    ctx->pc = 0x31D528u;
    SET_GPR_U32(ctx, 31, 0x31D530u);
    ctx->pc = 0x31D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D528u;
    // 0x31d52c: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A50u, 0x31D528u, 0x31D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D530u;
label_31d530:
    // 0x31d530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d534: 0x3e00008  jr          $ra
    ctx->pc = 0x31D534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D534u;
        // 0x31d538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D53Cu;
    // 0x31d53c: 0x0  nop
    ctx->pc = 0x31d53cu;
    // NOP
    ctx->pc = 0x31d540u;
}
