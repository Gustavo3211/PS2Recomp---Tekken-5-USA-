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

// Function: sub_0012DD90
// Address: 0x12dd90 - 0x12ddd0
void sub_0012DD90_0x12dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD90_0x12dd90");
#endif

    ctx->pc = 0x12dd90u;

label_12dd90:
    // 0x12dd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12dd94: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12dd98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12dd9c: 0x24a5daa8  addiu       $a1, $a1, -0x2558
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957736));
    // 0x12dda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dda4: 0x804b9aa  j           func_12E6A8
    ctx->pc = 0x12DDA4u;
    ctx->pc = 0x12DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDA4u;
    // 0x12dda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E6A8u, 0x12DDA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x12DDACu;
    // 0x12ddac: 0x0  nop
    ctx->pc = 0x12ddacu;
    // NOP
    // 0x12ddb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ddb4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12ddb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ddbc: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x12ddc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ddc4: 0x804b764  j           func_12DD90
    ctx->pc = 0x12DDC4u;
    ctx->pc = 0x12DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDC4u;
    // 0x12ddc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD90u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_12dd90;
    ctx->pc = 0x12DDCCu;
    // 0x12ddcc: 0x0  nop
    ctx->pc = 0x12ddccu;
    // NOP
    ctx->pc = 0x12ddd0u;
}
