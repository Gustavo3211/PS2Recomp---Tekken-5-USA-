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

// Function: sub_00100CD8
// Address: 0x100cd8 - 0x100d28
void sub_00100CD8_0x100cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100CD8_0x100cd8");
#endif

    switch (ctx->pc) {
        case 0x100cf8u: goto label_100cf8;
        default: break;
    }

    ctx->pc = 0x100cd8u;

    // 0x100cd8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x100cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x100cdc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100ce0: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x100ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x100ce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100ce8: 0x8c6583c0  lw          $a1, -0x7C40($v1)
    ctx->pc = 0x100ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100cf0: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x100CF0u;
    SET_GPR_U32(ctx, 31, 0x100CF8u);
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x100CF0u, 0x100CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CF8u;
label_100cf8:
    // 0x100cf8: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x100cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x100cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100d00: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x100D00u;
    {
        const bool branch_taken_0x100d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D00u;
        // 0x100d04: 0x24848b40  addiu       $a0, $a0, -0x74C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d00) {
            ctx->pc = 0x100D18u;
            goto label_100d18;
        }
    }
    ctx->pc = 0x100D08u;
    // 0x100d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d0c: 0x80405ee  j           func_1017B8
    ctx->pc = 0x100D0Cu;
    ctx->pc = 0x100D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D0Cu;
    // 0x100d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017B8u, 0x100D0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x100D14u;
    // 0x100d14: 0x0  nop
    ctx->pc = 0x100d14u;
    // NOP
label_100d18:
    // 0x100d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x100D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D1Cu;
        // 0x100d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100D24u;
    // 0x100d24: 0x0  nop
    ctx->pc = 0x100d24u;
    // NOP
    ctx->pc = 0x100d28u;
}
