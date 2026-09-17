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

// Function: sub_0036E400
// Address: 0x36e400 - 0x36e430
void sub_0036E400_0x36e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E400_0x36e400");
#endif

    switch (ctx->pc) {
        case 0x36e424u: goto label_36e424;
        default: break;
    }

    ctx->pc = 0x36e400u;

    // 0x36e400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e40c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36e40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36e410: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e414: 0x2442eb98  addiu       $v0, $v0, -0x1468
    ctx->pc = 0x36e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962072));
    // 0x36e418: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x36e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x36e41c: 0xc0c0ff6  jal         func_303FD8
    ctx->pc = 0x36E41Cu;
    SET_GPR_U32(ctx, 31, 0x36E424u);
    ctx->pc = 0x36E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E41Cu;
    // 0x36e420: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303FD8u, 0x36E41Cu, 0x36E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E424u;
label_36e424:
    // 0x36e424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36E424u;
    {
        const bool branch_taken_0x36e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E424u;
        // 0x36e428: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e424) {
            ctx->pc = 0x36E448u;
            return;
        }
    }
    ctx->pc = 0x36E42Cu;
    // 0x36e42c: 0x0  nop
    ctx->pc = 0x36e42cu;
    // NOP
    ctx->pc = 0x36e430u;
}
