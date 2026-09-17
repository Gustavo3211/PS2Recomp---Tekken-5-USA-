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

// Function: sub_0036E850
// Address: 0x36e850 - 0x36e8a0
void sub_0036E850_0x36e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E850_0x36e850");
#endif

    switch (ctx->pc) {
        case 0x36e874u: goto label_36e874;
        case 0x36e88cu: goto label_36e88c;
        default: break;
    }

    ctx->pc = 0x36e850u;

    // 0x36e850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e854: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e85c: 0x24507220  addiu       $s0, $v0, 0x7220
    ctx->pc = 0x36e85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29216));
    // 0x36e860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7220u));
    // 0x36e864: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E864u;
    {
        const bool branch_taken_0x36e864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E864u;
        // 0x36e868: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e864) {
            ctx->pc = 0x36E88Cu;
            goto label_36e88c;
        }
    }
    ctx->pc = 0x36E86Cu;
    // 0x36e86c: 0xc0dcc20  jal         func_373080
    ctx->pc = 0x36E86Cu;
    SET_GPR_U32(ctx, 31, 0x36E874u);
    ctx->pc = 0x373080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373080u, 0x36E86Cu, 0x36E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E874u;
label_36e874:
    // 0x36e874: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e878: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36e878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36e87c: 0x24a5fc08  addiu       $a1, $a1, -0x3F8
    ctx->pc = 0x36e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966280));
    // 0x36e880: 0x24c67700  addiu       $a2, $a2, 0x7700
    ctx->pc = 0x36e880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30464));
    // 0x36e884: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E884u;
    SET_GPR_U32(ctx, 31, 0x36E88Cu);
    ctx->pc = 0x36E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E884u;
    // 0x36e888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E884u, 0x36E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E88Cu;
label_36e88c:
    // 0x36e88c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e898: 0x3e00008  jr          $ra
    ctx->pc = 0x36E898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E898u;
        // 0x36e89c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E8A0u;
}
