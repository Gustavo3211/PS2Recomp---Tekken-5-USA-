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

// Function: sub_0035A7B8
// Address: 0x35a7b8 - 0x35a7e8
void sub_0035A7B8_0x35a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A7B8_0x35a7b8");
#endif

    ctx->pc = 0x35a7b8u;

    // 0x35a7b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x35a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a7bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a7bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a7c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35a7cc: 0x8f83c7ac  lw          $v1, -0x3854($gp)
    ctx->pc = 0x35a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a7d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a7d8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x35a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x35a7dc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35a7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a7e0: 0x80d986c  j           func_3661B0
    ctx->pc = 0x35A7E0u;
    ctx->pc = 0x35A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A7E0u;
    // 0x35a7e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3661B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3661B0u, 0x35A7E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A7E8u;
}
