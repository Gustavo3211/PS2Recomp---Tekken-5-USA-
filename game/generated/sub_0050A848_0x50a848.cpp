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

// Function: sub_0050A848
// Address: 0x50a848 - 0x50a868
void sub_0050A848_0x50a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A848_0x50a848");
#endif

    switch (ctx->pc) {
        case 0x50a858u: goto label_50a858;
        default: break;
    }

    ctx->pc = 0x50a848u;

    // 0x50a848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a84c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a850: 0xc144432  jal         func_5110C8
    ctx->pc = 0x50A850u;
    SET_GPR_U32(ctx, 31, 0x50A858u);
    ctx->pc = 0x50A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A850u;
    // 0x50a854: 0x3c040011  lui         $a0, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x50A850u, 0x50A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A858u;
label_50a858:
    // 0x50a858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a85c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x50a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x50a860: 0x8143512  j           func_50D448
    ctx->pc = 0x50A860u;
    ctx->pc = 0x50A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A860u;
    // 0x50a864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50D448u;
    sub_0050D448_0x50d448(rdram, ctx, runtime); return;
    ctx->pc = 0x50A868u;
}
