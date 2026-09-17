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

// Function: sub_004AD770
// Address: 0x4ad770 - 0x4ad790
void sub_004AD770_0x4ad770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD770_0x4ad770");
#endif

    ctx->pc = 0x4ad770u;

    // 0x4ad770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad774: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ad774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad77c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ad77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad784: 0x812b5bc  j           func_4AD6F0
    ctx->pc = 0x4AD784u;
    ctx->pc = 0x4AD788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD784u;
    // 0x4ad788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6F0u, 0x4AD784u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AD78Cu;
    // 0x4ad78c: 0x0  nop
    ctx->pc = 0x4ad78cu;
    // NOP
    ctx->pc = 0x4ad790u;
}
