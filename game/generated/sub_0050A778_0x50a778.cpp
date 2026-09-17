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

// Function: sub_0050A778
// Address: 0x50a778 - 0x50a7a0
void sub_0050A778_0x50a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A778_0x50a778");
#endif

    switch (ctx->pc) {
        case 0x50a788u: goto label_50a788;
        default: break;
    }

    ctx->pc = 0x50a778u;

    // 0x50a778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a77c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a780: 0xc14417a  jal         func_5105E8
    ctx->pc = 0x50A780u;
    SET_GPR_U32(ctx, 31, 0x50A788u);
    ctx->pc = 0x50A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A780u;
    // 0x50a784: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5105E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5105E8u, 0x50A780u, 0x50A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A788u;
label_50a788:
    // 0x50a788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a78c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x50a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x50a790: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x50a790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x50a794: 0x8144c5a  j           func_513168
    ctx->pc = 0x50A794u;
    ctx->pc = 0x50A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A794u;
    // 0x50a798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50A79Cu;
    // 0x50a79c: 0x0  nop
    ctx->pc = 0x50a79cu;
    // NOP
    ctx->pc = 0x50a7a0u;
}
