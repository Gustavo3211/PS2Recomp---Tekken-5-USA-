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

// Function: sub_005000B0
// Address: 0x5000b0 - 0x5000ec
void sub_005000B0_0x5000b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005000B0_0x5000b0");
#endif

    switch (ctx->pc) {
        case 0x5000c4u: goto label_5000c4;
        case 0x5000c8u: goto label_5000c8;
        default: break;
    }

    ctx->pc = 0x5000b0u;

    // 0x5000b0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5000b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x5000b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5000b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5000b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5000b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5000bc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5000BCu;
    SET_GPR_U32(ctx, 31, 0x5000C4u);
    ctx->pc = 0x5000C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5000BCu;
    // 0x5000c0: 0x2484c6a0  addiu       $a0, $a0, -0x3960 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5000BCu, 0x5000C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5000C4u;
label_5000c4:
    // 0x5000c4: 0x0  nop
    ctx->pc = 0x5000c4u;
    // NOP
label_5000c8:
    // 0x5000c8: 0x0  nop
    ctx->pc = 0x5000c8u;
    // NOP
    // 0x5000cc: 0x0  nop
    ctx->pc = 0x5000ccu;
    // NOP
    // 0x5000d0: 0x0  nop
    ctx->pc = 0x5000d0u;
    // NOP
    // 0x5000d4: 0x0  nop
    ctx->pc = 0x5000d4u;
    // NOP
    // 0x5000d8: 0x0  nop
    ctx->pc = 0x5000d8u;
    // NOP
    // 0x5000dc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x5000DCu;
    {
        const bool branch_taken_0x5000dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5000dc) {
            ctx->pc = 0x5000C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5000c8;
        }
    }
    ctx->pc = 0x5000E4u;
    // 0x5000e4: 0x0  nop
    ctx->pc = 0x5000e4u;
    // NOP
    // 0x5000e8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x5000e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    ctx->pc = 0x5000ecu;
}
