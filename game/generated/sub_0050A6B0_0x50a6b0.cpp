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

// Function: sub_0050A6B0
// Address: 0x50a6b0 - 0x50a6d8
void sub_0050A6B0_0x50a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A6B0_0x50a6b0");
#endif

    switch (ctx->pc) {
        case 0x50a6c0u: goto label_50a6c0;
        default: break;
    }

    ctx->pc = 0x50a6b0u;

    // 0x50a6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a6b8: 0xc14417a  jal         func_5105E8
    ctx->pc = 0x50A6B8u;
    SET_GPR_U32(ctx, 31, 0x50A6C0u);
    ctx->pc = 0x50A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A6B8u;
    // 0x50a6bc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5105E8u, 0x50A6B8u, 0x50A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A6C0u;
label_50a6c0:
    // 0x50a6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a6c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x50a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x50a6c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x50a6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x50a6cc: 0x8144c5a  j           func_513168
    ctx->pc = 0x50A6CCu;
    ctx->pc = 0x50A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A6CCu;
    // 0x50a6d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50A6D4u;
    // 0x50a6d4: 0x0  nop
    ctx->pc = 0x50a6d4u;
    // NOP
    ctx->pc = 0x50a6d8u;
}
