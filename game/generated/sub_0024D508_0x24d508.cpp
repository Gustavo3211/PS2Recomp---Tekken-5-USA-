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

// Function: sub_0024D508
// Address: 0x24d508 - 0x24d540
void sub_0024D508_0x24d508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D508_0x24d508");
#endif

    switch (ctx->pc) {
        case 0x24d51cu: goto label_24d51c;
        case 0x24d524u: goto label_24d524;
        case 0x24d52cu: goto label_24d52c;
        case 0x24d534u: goto label_24d534;
        default: break;
    }

    ctx->pc = 0x24d508u;

    // 0x24d508: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x24d508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x24d50c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d514: 0xc0a5e92  jal         func_297A48
    ctx->pc = 0x24D514u;
    SET_GPR_U32(ctx, 31, 0x24D51Cu);
    ctx->pc = 0x24D518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D514u;
    // 0x24d518: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A48u, 0x24D514u, 0x24D51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D51Cu;
label_24d51c:
    // 0x24d51c: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x24D51Cu;
    SET_GPR_U32(ctx, 31, 0x24D524u);
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x24D51Cu, 0x24D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D524u;
label_24d524:
    // 0x24d524: 0xc092108  jal         func_248420
    ctx->pc = 0x24D524u;
    SET_GPR_U32(ctx, 31, 0x24D52Cu);
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x24D524u, 0x24D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D52Cu;
label_24d52c:
    // 0x24d52c: 0xc08999e  jal         func_226678
    ctx->pc = 0x24D52Cu;
    SET_GPR_U32(ctx, 31, 0x24D534u);
    ctx->pc = 0x226678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226678u, 0x24D52Cu, 0x24D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D534u;
label_24d534:
    // 0x24d534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d538: 0x3e00008  jr          $ra
    ctx->pc = 0x24D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D538u;
        // 0x24d53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D540u;
}
