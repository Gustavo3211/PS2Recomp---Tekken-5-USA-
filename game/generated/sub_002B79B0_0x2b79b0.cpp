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

// Function: sub_002B79B0
// Address: 0x2b79b0 - 0x2b7a00
void sub_002B79B0_0x2b79b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B79B0_0x2b79b0");
#endif

    switch (ctx->pc) {
        case 0x2b79c8u: goto label_2b79c8;
        case 0x2b79d0u: goto label_2b79d0;
        default: break;
    }

    ctx->pc = 0x2b79b0u;

    // 0x2b79b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b79b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b79b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b79b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b79b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b79bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b79c0: 0xc049a5c  jal         func_126970
    ctx->pc = 0x2B79C0u;
    SET_GPR_U32(ctx, 31, 0x2B79C8u);
    ctx->pc = 0x2B79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79C0u;
    // 0x2b79c4: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126970u, 0x2B79C0u, 0x2B79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79C8u;
label_2b79c8:
    // 0x2b79c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b79c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b79ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b79d0:
    // 0x2b79d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b79d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2b79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b79d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b79d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b79dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b79dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b79e0: 0x28a40400  slti        $a0, $a1, 0x400
    ctx->pc = 0x2b79e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2b79e4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B79E4u;
    {
        const bool branch_taken_0x2b79e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79E4u;
        // 0x2b79e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b79e4) {
            ctx->pc = 0x2B79D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b79d0;
        }
    }
    ctx->pc = 0x2B79ECu;
    // 0x2b79ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b79ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b79f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b79f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b79f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B79F4u;
        // 0x2b79f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B79F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B79FCu;
    // 0x2b79fc: 0x0  nop
    ctx->pc = 0x2b79fcu;
    // NOP
    ctx->pc = 0x2b7a00u;
}
