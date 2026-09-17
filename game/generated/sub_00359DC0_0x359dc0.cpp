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

// Function: sub_00359DC0
// Address: 0x359dc0 - 0x359dd8
void sub_00359DC0_0x359dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359DC0_0x359dc0");
#endif

    ctx->pc = 0x359dc0u;

    // 0x359dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359dc4: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x359dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359dd0: 0x80d9d3a  j           func_3674E8
    ctx->pc = 0x359DD0u;
    ctx->pc = 0x359DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359DD0u;
    // 0x359dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3674E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3674E8u, 0x359DD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359DD8u;
}
