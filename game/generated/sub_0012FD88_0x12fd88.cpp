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

// Function: sub_0012FD88
// Address: 0x12fd88 - 0x12fda8
void sub_0012FD88_0x12fd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FD88_0x12fd88");
#endif

    ctx->pc = 0x12fd88u;

    // 0x12fd88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fd90: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x12fd90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12fd94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fd98: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12fd9c: 0x804bfb0  j           func_12FEC0
    ctx->pc = 0x12FD9Cu;
    ctx->pc = 0x12FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD9Cu;
    // 0x12fda0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEC0u, 0x12FD9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x12FDA4u;
    // 0x12fda4: 0x0  nop
    ctx->pc = 0x12fda4u;
    // NOP
    ctx->pc = 0x12fda8u;
}
