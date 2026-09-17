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

// Function: sub_00113020
// Address: 0x113020 - 0x1130b0
void sub_00113020_0x113020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113020_0x113020");
#endif

    ctx->pc = 0x113020u;

    // 0x113020: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x113020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x113024: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x113024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x113028: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x113028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11302c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11302Cu;
    {
        const bool branch_taken_0x11302c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11302c) {
            ctx->pc = 0x113030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11302Cu;
            // 0x113030: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11303Cu;
            goto label_11303c;
        }
    }
    ctx->pc = 0x113034u;
    // 0x113034: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113034u;
    {
        const bool branch_taken_0x113034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113034u;
        // 0x113038: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113034) {
            ctx->pc = 0x113040u;
            goto label_113040;
        }
    }
    ctx->pc = 0x11303Cu;
label_11303c:
    // 0x11303c: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x11303cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_113040:
    // 0x113040: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x113040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x113044: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x113048: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x113048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11304c: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x11304cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x113050: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x113050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x113054: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x113054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x113058: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x113058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x11305c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x11305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x113060: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x113060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x113064: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x113064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x113068: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x113068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x11306c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x11306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x113070: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x113070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x113074: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x113074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x113078: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x113078u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x11307c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113080: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x113080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x113084: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x113088: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113088u;
    {
        const bool branch_taken_0x113088 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x113088) {
            ctx->pc = 0x1130A4u;
            goto label_1130a4;
        }
    }
    ctx->pc = 0x113090u;
    // 0x113090: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x113094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113094u;
    {
        const bool branch_taken_0x113094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113094) {
            ctx->pc = 0x1130A4u;
            goto label_1130a4;
        }
    }
    ctx->pc = 0x11309Cu;
    // 0x11309c: 0x804409a  j           func_110268
    ctx->pc = 0x11309Cu;
    ctx->pc = 0x110268u;
    sub_00110268_0x110268(rdram, ctx, runtime); return;
    ctx->pc = 0x1130A4u;
label_1130a4:
    // 0x1130a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1130A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1130ACu;
    // 0x1130ac: 0x0  nop
    ctx->pc = 0x1130acu;
    // NOP
    ctx->pc = 0x1130b0u;
}
