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

// Function: sub_0026EE58
// Address: 0x26ee58 - 0x26ef10
void sub_0026EE58_0x26ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EE58_0x26ee58");
#endif

    switch (ctx->pc) {
        case 0x26eed4u: goto label_26eed4;
        case 0x26eee4u: goto label_26eee4;
        default: break;
    }

    ctx->pc = 0x26ee58u;

    // 0x26ee58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26ee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26ee5c: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x26ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ee60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ee64: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x26ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x26ee68: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26EE68u;
    {
        const bool branch_taken_0x26ee68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE68u;
        // 0x26ee6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee68) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EE70u;
    // 0x26ee70: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x26ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x26ee74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EE74u;
    {
        const bool branch_taken_0x26ee74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE74u;
        // 0x26ee78: 0x8f87aa7c  lw          $a3, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee74) {
            ctx->pc = 0x26EE88u;
            goto label_26ee88;
        }
    }
    ctx->pc = 0x26EE7Cu;
    // 0x26ee7c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26EE7Cu;
    {
        const bool branch_taken_0x26ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE7Cu;
        // 0x26ee80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee7c) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EE84u;
    // 0x26ee84: 0x0  nop
    ctx->pc = 0x26ee84u;
    // NOP
label_26ee88:
    // 0x26ee88: 0x8cc30298  lw          $v1, 0x298($a2)
    ctx->pc = 0x26ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
    // 0x26ee8c: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x26ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x26ee90: 0x84e50096  lh          $a1, 0x96($a3)
    ctx->pc = 0x26ee90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x26ee94: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26ee94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26ee98: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x26ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26ee9c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x26ee9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26eea0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x26EEA0u;
    {
        const bool branch_taken_0x26eea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eea0) {
            ctx->pc = 0x26EEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EEA0u;
            // 0x26eea4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EECCu;
            goto label_26eecc;
        }
    }
    ctx->pc = 0x26EEA8u;
    // 0x26eea8: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x26eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x26eeac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x26eeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26eeb0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EEB0u;
    {
        const bool branch_taken_0x26eeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eeb0) {
            ctx->pc = 0x26EEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EEB0u;
            // 0x26eeb4: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EECCu;
            goto label_26eecc;
        }
    }
    ctx->pc = 0x26EEB8u;
    // 0x26eeb8: 0x84e30086  lh          $v1, 0x86($a3)
    ctx->pc = 0x26eeb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 134)));
    // 0x26eebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26eec0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26EEC0u;
    {
        const bool branch_taken_0x26eec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEC0u;
        // 0x26eec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eec0) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EEC8u;
    // 0x26eec8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_26eecc:
    // 0x26eecc: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x26EECCu;
    SET_GPR_U32(ctx, 31, 0x26EED4u);
    ctx->pc = 0x26EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EECCu;
    // 0x26eed0: 0x2484bd40  addiu       $a0, $a0, -0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x26EECCu, 0x26EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EED4u;
label_26eed4:
    // 0x26eed4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26EED4u;
    {
        const bool branch_taken_0x26eed4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EED4u;
        // 0x26eed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eed4) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EEDCu;
    // 0x26eedc: 0xc09b492  jal         func_26D248
    ctx->pc = 0x26EEDCu;
    SET_GPR_U32(ctx, 31, 0x26EEE4u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x26EEDCu, 0x26EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEE4u;
label_26eee4:
    // 0x26eee4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EEE4u;
    {
        const bool branch_taken_0x26eee4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEE4u;
        // 0x26eee8: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eee4) {
            ctx->pc = 0x26EF00u;
            goto label_26ef00;
        }
    }
    ctx->pc = 0x26EEECu;
    // 0x26eeec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26eef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eef4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EEF4u;
    {
        const bool branch_taken_0x26eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEF4u;
        // 0x26eef8: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eef4) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EEFCu;
    // 0x26eefc: 0x0  nop
    ctx->pc = 0x26eefcu;
    // NOP
label_26ef00:
    // 0x26ef00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ef04:
    // 0x26ef04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ef04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ef08: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF08u;
        // 0x26ef0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EF10u;
}
