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

// Function: sub_00358C28
// Address: 0x358c28 - 0x358c48
void sub_00358C28_0x358c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358C28_0x358c28");
#endif

    ctx->pc = 0x358c28u;

    // 0x358c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358c2c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x358c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x358c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358c34: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x358c34u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x358c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358c3c: 0x80d8a7a  j           func_3629E8
    ctx->pc = 0x358C3Cu;
    ctx->pc = 0x358C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C3Cu;
    // 0x358c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3629E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3629E8u, 0x358C3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358C44u;
    // 0x358c44: 0x0  nop
    ctx->pc = 0x358c44u;
    // NOP
    ctx->pc = 0x358c48u;
}
