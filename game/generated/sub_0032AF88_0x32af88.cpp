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

// Function: sub_0032AF88
// Address: 0x32af88 - 0x32afa8
void sub_0032AF88_0x32af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AF88_0x32af88");
#endif

    ctx->pc = 0x32af88u;

    // 0x32af88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32af8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x32af90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32af94: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x32af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x32af98: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x32af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x32af9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32af9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32afa0: 0x80c89a4  j           func_322690
    ctx->pc = 0x32AFA0u;
    ctx->pc = 0x32AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFA0u;
    // 0x32afa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322690u, 0x32AFA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AFA8u;
}
