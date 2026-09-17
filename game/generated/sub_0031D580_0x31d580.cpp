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

// Function: sub_0031D580
// Address: 0x31d580 - 0x31d5a0
void sub_0031D580_0x31d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D580_0x31d580");
#endif

    switch (ctx->pc) {
        case 0x31d590u: goto label_31d590;
        default: break;
    }

    ctx->pc = 0x31d580u;

    // 0x31d580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d588: 0xc0ce6b6  jal         func_339AD8
    ctx->pc = 0x31D588u;
    SET_GPR_U32(ctx, 31, 0x31D590u);
    ctx->pc = 0x31D58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D588u;
    // 0x31d58c: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AD8u, 0x31D588u, 0x31D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D590u;
label_31d590:
    // 0x31d590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d594: 0x3e00008  jr          $ra
    ctx->pc = 0x31D594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D594u;
        // 0x31d598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D59Cu;
    // 0x31d59c: 0x0  nop
    ctx->pc = 0x31d59cu;
    // NOP
    ctx->pc = 0x31d5a0u;
}
