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

// Function: sub_00341410
// Address: 0x341410 - 0x341430
void sub_00341410_0x341410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341410_0x341410");
#endif

    ctx->pc = 0x341410u;

    // 0x341410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341414: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x341414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34141c: 0x24a51430  addiu       $a1, $a1, 0x1430
    ctx->pc = 0x34141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5168));
    // 0x341420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341424: 0x80d04d6  j           func_341358
    ctx->pc = 0x341424u;
    ctx->pc = 0x341428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341424u;
    // 0x341428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x341424u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34142Cu;
    // 0x34142c: 0x0  nop
    ctx->pc = 0x34142cu;
    // NOP
    ctx->pc = 0x341430u;
}
