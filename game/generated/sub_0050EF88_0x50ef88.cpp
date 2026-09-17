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

// Function: sub_0050EF88
// Address: 0x50ef88 - 0x50efa8
void sub_0050EF88_0x50ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050EF88_0x50ef88");
#endif

    ctx->pc = 0x50ef88u;

    // 0x50ef88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50ef88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ef8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50ef8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50ef90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50ef90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50ef94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50ef94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50ef98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50ef98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50ef9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50ef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50efa0: 0x8142ada  j           func_50AB68
    ctx->pc = 0x50EFA0u;
    ctx->pc = 0x50EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EFA0u;
    // 0x50efa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50AB68u, 0x50EFA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50EFA8u;
}
