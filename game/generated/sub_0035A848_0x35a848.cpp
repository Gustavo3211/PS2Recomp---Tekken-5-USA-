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

// Function: sub_0035A848
// Address: 0x35a848 - 0x35a878
void sub_0035A848_0x35a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A848_0x35a848");
#endif

    ctx->pc = 0x35a848u;

    // 0x35a848: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x35a848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a84c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a850: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35a858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35a85c: 0x8f83c7ac  lw          $v1, -0x3854($gp)
    ctx->pc = 0x35a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a860: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a868: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x35a868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x35a86c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a870: 0x80d9898  j           func_366260
    ctx->pc = 0x35A870u;
    ctx->pc = 0x35A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A870u;
    // 0x35a874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366260u, 0x35A870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A878u;
}
