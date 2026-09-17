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

// Function: sub_0036F028
// Address: 0x36f028 - 0x36f168
void sub_0036F028_0x36f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F028_0x36f028");
#endif

    ctx->pc = 0x36f028u;

    // 0x36f028: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x36f028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x36f02c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f030: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F030u;
    {
        const bool branch_taken_0x36f030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F030u;
        // 0x36f034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f030) {
            ctx->pc = 0x36F048u;
            goto label_36f048;
        }
    }
    ctx->pc = 0x36F038u;
    // 0x36f038: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f03c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36f040: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F040u;
    {
        const bool branch_taken_0x36f040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f040) {
            ctx->pc = 0x36F054u;
            goto label_36f054;
        }
    }
    ctx->pc = 0x36F048u;
label_36f048:
    // 0x36f048: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36f04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f050: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_36f054:
    // 0x36f054: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x36F054u;
    {
        const bool branch_taken_0x36f054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f054) {
            ctx->pc = 0x36F0ECu;
            goto label_36f0ec;
        }
    }
    ctx->pc = 0x36F05Cu;
    // 0x36f05c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f060: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F060u;
    {
        const bool branch_taken_0x36f060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F060u;
        // 0x36f064: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f060) {
            ctx->pc = 0x36F078u;
            goto label_36f078;
        }
    }
    ctx->pc = 0x36F068u;
    // 0x36f068: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36f068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f06c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36f070: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F070u;
    {
        const bool branch_taken_0x36f070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f070) {
            ctx->pc = 0x36F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F070u;
            // 0x36f074: 0x24c4015c  addiu       $a0, $a2, 0x15C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 348));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F088u;
            goto label_36f088;
        }
    }
    ctx->pc = 0x36F078u;
label_36f078:
    // 0x36f078: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36f07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f080: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36f084: 0x24c4015c  addiu       $a0, $a2, 0x15C
    ctx->pc = 0x36f084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 348));
label_36f088:
    // 0x36f088: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f08c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F08Cu;
    {
        const bool branch_taken_0x36f08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F08Cu;
        // 0x36f090: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f08c) {
            ctx->pc = 0x36F0A4u;
            goto label_36f0a4;
        }
    }
    ctx->pc = 0x36F094u;
    // 0x36f094: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f098: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36f09c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F09Cu;
    {
        const bool branch_taken_0x36f09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f09c) {
            ctx->pc = 0x36F0B0u;
            goto label_36f0b0;
        }
    }
    ctx->pc = 0x36F0A4u;
label_36f0a4:
    // 0x36f0a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36f0a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36f0b0:
    // 0x36f0b0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x36F0B0u;
    {
        const bool branch_taken_0x36f0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0B0u;
        // 0x36f0b4: 0x24c4015c  addiu       $a0, $a2, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0b0) {
            ctx->pc = 0x36F0ECu;
            goto label_36f0ec;
        }
    }
    ctx->pc = 0x36F0B8u;
    // 0x36f0b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F0BCu;
    {
        const bool branch_taken_0x36f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0BCu;
        // 0x36f0c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0bc) {
            ctx->pc = 0x36F0D4u;
            goto label_36f0d4;
        }
    }
    ctx->pc = 0x36F0C4u;
    // 0x36f0c4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f0c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36f0cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F0CCu;
    {
        const bool branch_taken_0x36f0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0CCu;
        // 0x36f0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0cc) {
            ctx->pc = 0x36F0E4u;
            goto label_36f0e4;
        }
    }
    ctx->pc = 0x36F0D4u;
label_36f0d4:
    // 0x36f0d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36f0d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0dc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36f0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f0e4:
    // 0x36f0e4: 0xe4ac0054  swc1        $f12, 0x54($a1)
    ctx->pc = 0x36f0e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x36f0e8: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x36f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_36f0ec:
    // 0x36f0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36F0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F0F4u;
    // 0x36f0f4: 0x0  nop
    ctx->pc = 0x36f0f4u;
    // NOP
    // 0x36f0f8: 0x2484015c  addiu       $a0, $a0, 0x15C
    ctx->pc = 0x36f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    // 0x36f0fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f100: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F100u;
    {
        const bool branch_taken_0x36f100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F100u;
        // 0x36f104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f100) {
            ctx->pc = 0x36F118u;
            goto label_36f118;
        }
    }
    ctx->pc = 0x36F108u;
    // 0x36f108: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f10c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36f110: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F110u;
    {
        const bool branch_taken_0x36f110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f110) {
            ctx->pc = 0x36F124u;
            goto label_36f124;
        }
    }
    ctx->pc = 0x36F118u;
label_36f118:
    // 0x36f118: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36f11c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f120: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_36f124:
    // 0x36f124: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x36F124u;
    {
        const bool branch_taken_0x36f124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f124) {
            ctx->pc = 0x36F160u;
            goto label_36f160;
        }
    }
    ctx->pc = 0x36F12Cu;
    // 0x36f12c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F130u;
    {
        const bool branch_taken_0x36f130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F130u;
        // 0x36f134: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f130) {
            ctx->pc = 0x36F148u;
            goto label_36f148;
        }
    }
    ctx->pc = 0x36F138u;
    // 0x36f138: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f13c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36f140: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F140u;
    {
        const bool branch_taken_0x36f140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F140u;
        // 0x36f144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f140) {
            ctx->pc = 0x36F158u;
            goto label_36f158;
        }
    }
    ctx->pc = 0x36F148u;
label_36f148:
    // 0x36f148: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36f148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36f14c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f150: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36f150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36f154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f158:
    // 0x36f158: 0xe4ac0054  swc1        $f12, 0x54($a1)
    ctx->pc = 0x36f158u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x36f15c: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x36f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_36f160:
    // 0x36f160: 0x3e00008  jr          $ra
    ctx->pc = 0x36F160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F168u;
}
