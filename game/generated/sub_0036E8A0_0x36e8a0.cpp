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

// Function: sub_0036E8A0
// Address: 0x36e8a0 - 0x36e8f0
void sub_0036E8A0_0x36e8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E8A0_0x36e8a0");
#endif

    switch (ctx->pc) {
        case 0x36e8c4u: goto label_36e8c4;
        case 0x36e8d8u: goto label_36e8d8;
        default: break;
    }

    ctx->pc = 0x36e8a0u;

    // 0x36e8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e8a4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e8ac: 0x24507280  addiu       $s0, $v0, 0x7280
    ctx->pc = 0x36e8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29312));
    // 0x36e8b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7280u));
    // 0x36e8b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E8B4u;
    {
        const bool branch_taken_0x36e8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8B4u;
        // 0x36e8b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8b4) {
            ctx->pc = 0x36E8D8u;
            goto label_36e8d8;
        }
    }
    ctx->pc = 0x36E8BCu;
    // 0x36e8bc: 0xc0dccd2  jal         func_373348
    ctx->pc = 0x36E8BCu;
    SET_GPR_U32(ctx, 31, 0x36E8C4u);
    ctx->pc = 0x373348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373348u, 0x36E8BCu, 0x36E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8C4u;
label_36e8c4:
    // 0x36e8c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e8c8: 0x24a5fc20  addiu       $a1, $a1, -0x3E0
    ctx->pc = 0x36e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966304));
    // 0x36e8cc: 0x2786cca0  addiu       $a2, $gp, -0x3360
    ctx->pc = 0x36e8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954144));
    // 0x36e8d0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E8D0u;
    SET_GPR_U32(ctx, 31, 0x36E8D8u);
    ctx->pc = 0x36E8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E8D0u;
    // 0x36e8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E8D0u, 0x36E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8D8u;
label_36e8d8:
    // 0x36e8d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e8e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8E4u;
        // 0x36e8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E8ECu;
    // 0x36e8ec: 0x0  nop
    ctx->pc = 0x36e8ecu;
    // NOP
    ctx->pc = 0x36e8f0u;
}
