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

// Function: sub_004D2D50
// Address: 0x4d2d50 - 0x4d2d78
void sub_004D2D50_0x4d2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D2D50_0x4d2d50");
#endif

    switch (ctx->pc) {
        case 0x4d2d64u: goto label_4d2d64;
        default: break;
    }

    ctx->pc = 0x4d2d50u;

    // 0x4d2d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d2d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d2d58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d2d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4d2d5c: 0xc134ae8  jal         func_4D2BA0
    ctx->pc = 0x4D2D5Cu;
    SET_GPR_U32(ctx, 31, 0x4D2D64u);
    ctx->pc = 0x4D2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2D5Cu;
    // 0x4d2d60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D2BA0u, 0x4D2D5Cu, 0x4D2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2D64u;
label_4d2d64:
    // 0x4d2d64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d2d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d2d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d2d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d2d70: 0x8134b1e  j           func_4D2C78
    ctx->pc = 0x4D2D70u;
    ctx->pc = 0x4D2D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2D70u;
    // 0x4d2d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2C78u;
    sub_004D2C78_0x4d2c78(rdram, ctx, runtime); return;
    ctx->pc = 0x4D2D78u;
}
