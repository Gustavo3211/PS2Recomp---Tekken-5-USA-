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

// Function: sub_0012E808
// Address: 0x12e808 - 0x12e828
void sub_0012E808_0x12e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E808_0x12e808");
#endif

    ctx->pc = 0x12e808u;

    // 0x12e808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e80c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12e810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e814: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x12e814u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x12e818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e81c: 0x804b9f4  j           func_12E7D0
    ctx->pc = 0x12E81Cu;
    ctx->pc = 0x12E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E81Cu;
    // 0x12e820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E7D0u, 0x12E81Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x12E824u;
    // 0x12e824: 0x0  nop
    ctx->pc = 0x12e824u;
    // NOP
    ctx->pc = 0x12e828u;
}
