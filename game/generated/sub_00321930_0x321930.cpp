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

// Function: sub_00321930
// Address: 0x321930 - 0x321948
void sub_00321930_0x321930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321930_0x321930");
#endif

    ctx->pc = 0x321930u;

    // 0x321930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321934: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x321934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x321938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32193c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32193cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321940: 0x80ce8b4  j           func_33A2D0
    ctx->pc = 0x321940u;
    ctx->pc = 0x321944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321940u;
    // 0x321944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A2D0u, 0x321940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x321948u;
}
