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

// Function: sub_0033B308
// Address: 0x33b308 - 0x33b330
void sub_0033B308_0x33b308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B308_0x33b308");
#endif

    switch (ctx->pc) {
        case 0x33b320u: goto label_33b320;
        default: break;
    }

    ctx->pc = 0x33b308u;

    // 0x33b308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b30c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33b30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b314: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x33b314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 6));
    // 0x33b318: 0xc0cec94  jal         func_33B250
    ctx->pc = 0x33B318u;
    SET_GPR_U32(ctx, 31, 0x33B320u);
    ctx->pc = 0x33B31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B318u;
    // 0x33b31c: 0xac450044  sw          $a1, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B250u, 0x33B318u, 0x33B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B320u;
label_33b320:
    // 0x33b320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b324: 0x3e00008  jr          $ra
    ctx->pc = 0x33B324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B324u;
        // 0x33b328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B32Cu;
    // 0x33b32c: 0x0  nop
    ctx->pc = 0x33b32cu;
    // NOP
    ctx->pc = 0x33b330u;
}
