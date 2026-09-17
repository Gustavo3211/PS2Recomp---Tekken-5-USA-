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

// Function: sub_00495568
// Address: 0x495568 - 0x495578
void sub_00495568_0x495568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495568_0x495568");
#endif

    ctx->pc = 0x495568u;

    // 0x495568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x495568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49556c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x49556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495570: 0x8125332  j           func_494CC8
    ctx->pc = 0x495570u;
    ctx->pc = 0x495574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495570u;
    // 0x495574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494CC8u, 0x495570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x495578u;
}
