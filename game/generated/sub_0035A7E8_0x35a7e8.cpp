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

// Function: sub_0035A7E8
// Address: 0x35a7e8 - 0x35a818
void sub_0035A7E8_0x35a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A7E8_0x35a7e8");
#endif

    ctx->pc = 0x35a7e8u;

    // 0x35a7e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x35a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a7ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a7f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35a7fc: 0x8f83c7ac  lw          $v1, -0x3854($gp)
    ctx->pc = 0x35a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a800: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a808: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x35a808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x35a80c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x35a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a810: 0x80d9878  j           func_3661E0
    ctx->pc = 0x35A810u;
    ctx->pc = 0x35A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A810u;
    // 0x35a814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3661E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3661E0u, 0x35A810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A818u;
}
