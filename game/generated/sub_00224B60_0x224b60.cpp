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

// Function: sub_00224B60
// Address: 0x224b60 - 0x224b80
void sub_00224B60_0x224b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B60_0x224b60");
#endif

    ctx->pc = 0x224b60u;

    // 0x224b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224b64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x224b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224b6c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x224b70: 0x24846170  addiu       $a0, $a0, 0x6170
    ctx->pc = 0x224b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24944));
    // 0x224b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b78: 0x80892be  j           func_224AF8
    ctx->pc = 0x224B78u;
    ctx->pc = 0x224B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B78u;
    // 0x224b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224AF8u, 0x224B78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x224B80u;
}
