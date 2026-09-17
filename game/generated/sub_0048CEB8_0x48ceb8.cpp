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

// Function: sub_0048CEB8
// Address: 0x48ceb8 - 0x48cf00
void sub_0048CEB8_0x48ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CEB8_0x48ceb8");
#endif

    switch (ctx->pc) {
        case 0x48ced0u: goto label_48ced0;
        case 0x48cee4u: goto label_48cee4;
        default: break;
    }

    ctx->pc = 0x48ceb8u;

    // 0x48ceb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48cebc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48cec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48cec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48cec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cec8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x48cec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x48cecc: 0x0  nop
    ctx->pc = 0x48ceccu;
    // NOP
label_48ced0:
    // 0x48ced0: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x48ced0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x48ced4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48CED4u;
    {
        const bool branch_taken_0x48ced4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CED4u;
        // 0x48ced8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ced4) {
            ctx->pc = 0x48CEF0u;
            goto label_48cef0;
        }
    }
    ctx->pc = 0x48CEDCu;
    // 0x48cedc: 0xc123392  jal         func_48CE48
    ctx->pc = 0x48CEDCu;
    SET_GPR_U32(ctx, 31, 0x48CEE4u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x48CEDCu, 0x48CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CEE4u;
label_48cee4:
    // 0x48cee4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x48CEE4u;
    {
        const bool branch_taken_0x48cee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CEE4u;
        // 0x48cee8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cee4) {
            ctx->pc = 0x48CED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ced0;
        }
    }
    ctx->pc = 0x48CEECu;
    // 0x48ceec: 0x0  nop
    ctx->pc = 0x48ceecu;
    // NOP
label_48cef0:
    // 0x48cef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48cef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48cef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x48CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CEF8u;
        // 0x48cefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CF00u;
}
