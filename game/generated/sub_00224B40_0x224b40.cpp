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

// Function: sub_00224B40
// Address: 0x224b40 - 0x224b60
void sub_00224B40_0x224b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B40_0x224b40");
#endif

    ctx->pc = 0x224b40u;

    // 0x224b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224b44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x224b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224b4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x224b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x224b50: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x224b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x224b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b58: 0x80892be  j           func_224AF8
    ctx->pc = 0x224B58u;
    ctx->pc = 0x224B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B58u;
    // 0x224b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224AF8u, 0x224B58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x224B60u;
}
