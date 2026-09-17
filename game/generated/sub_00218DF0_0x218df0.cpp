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

// Function: sub_00218DF0
// Address: 0x218df0 - 0x218e18
void sub_00218DF0_0x218df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218DF0_0x218df0");
#endif

    switch (ctx->pc) {
        case 0x218e00u: goto label_218e00;
        default: break;
    }

    ctx->pc = 0x218df0u;

    // 0x218df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218df8: 0xc0862b2  jal         func_218AC8
    ctx->pc = 0x218DF8u;
    SET_GPR_U32(ctx, 31, 0x218E00u);
    ctx->pc = 0x218AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AC8u, 0x218DF8u, 0x218E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E00u;
label_218e00:
    // 0x218e00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x218e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218e0c: 0x8086346  j           func_218D18
    ctx->pc = 0x218E0Cu;
    ctx->pc = 0x218E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218E0Cu;
    // 0x218e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218D18u;
    sub_00218D18_0x218d18(rdram, ctx, runtime); return;
    ctx->pc = 0x218E14u;
    // 0x218e14: 0x0  nop
    ctx->pc = 0x218e14u;
    // NOP
    ctx->pc = 0x218e18u;
}
