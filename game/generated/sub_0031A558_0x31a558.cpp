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

// Function: sub_0031A558
// Address: 0x31a558 - 0x31a570
void sub_0031A558_0x31a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A558_0x31a558");
#endif

    ctx->pc = 0x31a558u;

    // 0x31a558: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a55c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a560: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x31a560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x31a564: 0x80c8206  j           func_320818
    ctx->pc = 0x31A564u;
    ctx->pc = 0x31A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A564u;
    // 0x31a568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320818u, 0x31A564u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31A56Cu;
    // 0x31a56c: 0x0  nop
    ctx->pc = 0x31a56cu;
    // NOP
    ctx->pc = 0x31a570u;
}
