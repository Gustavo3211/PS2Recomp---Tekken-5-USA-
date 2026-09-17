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

// Function: sub_0031E738
// Address: 0x31e738 - 0x31e778
void sub_0031E738_0x31e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E738_0x31e738");
#endif

    switch (ctx->pc) {
        case 0x31e750u: goto label_31e750;
        default: break;
    }

    ctx->pc = 0x31e738u;

    // 0x31e738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e73c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x31e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x31e740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e744: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e748: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x31e74c: 0x0  nop
    ctx->pc = 0x31e74cu;
    // NOP
label_31e750:
    // 0x31e750: 0x0  nop
    ctx->pc = 0x31e750u;
    // NOP
    // 0x31e754: 0x0  nop
    ctx->pc = 0x31e754u;
    // NOP
    // 0x31e758: 0x0  nop
    ctx->pc = 0x31e758u;
    // NOP
    // 0x31e75c: 0x0  nop
    ctx->pc = 0x31e75cu;
    // NOP
    // 0x31e760: 0x0  nop
    ctx->pc = 0x31e760u;
    // NOP
    // 0x31e764: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E764u;
    {
        const bool branch_taken_0x31e764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31e764) {
            ctx->pc = 0x31E768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E764u;
            // 0x31e768: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e750;
        }
    }
    ctx->pc = 0x31E76Cu;
    // 0x31e76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e770: 0x80c7a12  j           func_31E848
    ctx->pc = 0x31E770u;
    ctx->pc = 0x31E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E770u;
    // 0x31e774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E848u, 0x31E770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31E778u;
}
