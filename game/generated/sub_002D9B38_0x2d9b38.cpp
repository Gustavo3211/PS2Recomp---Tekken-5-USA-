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

// Function: sub_002D9B38
// Address: 0x2d9b38 - 0x2d9b58
void sub_002D9B38_0x2d9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9B38_0x2d9b38");
#endif

    ctx->pc = 0x2d9b38u;

    // 0x2d9b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9b3c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d9b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d9b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9b44: 0x2484e7e0  addiu       $a0, $a0, -0x1820
    ctx->pc = 0x2d9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d9b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9b4c: 0x80b5ab8  j           func_2D6AE0
    ctx->pc = 0x2D9B4Cu;
    ctx->pc = 0x2D9B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B4Cu;
    // 0x2d9b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6AE0u, 0x2D9B4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D9B54u;
    // 0x2d9b54: 0x0  nop
    ctx->pc = 0x2d9b54u;
    // NOP
    ctx->pc = 0x2d9b58u;
}
