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

// Function: sub_0010EE50
// Address: 0x10ee50 - 0x10ef10
void sub_0010EE50_0x10ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE50_0x10ee50");
#endif

    switch (ctx->pc) {
        case 0x10ee78u: goto label_10ee78;
        case 0x10ee94u: goto label_10ee94;
        case 0x10eeb8u: goto label_10eeb8;
        case 0x10eec0u: goto label_10eec0;
        case 0x10eed8u: goto label_10eed8;
        case 0x10eee0u: goto label_10eee0;
        default: break;
    }

    ctx->pc = 0x10ee50u;

label_10ee50:
    // 0x10ee50: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x10ee50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee54: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x10ee54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x10ee58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE58u;
    {
        const bool branch_taken_0x10ee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE58u;
        // 0x10ee5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee58) {
            ctx->pc = 0x10EE6Cu;
            goto label_10ee6c;
        }
    }
    ctx->pc = 0x10EE60u;
    // 0x10ee60: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x10ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10ee64: 0x8043b5e  j           func_10ED78
    ctx->pc = 0x10EE64u;
    ctx->pc = 0x10EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE64u;
    // 0x10ee68: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED78u, 0x10EE64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x10EE6Cu;
label_10ee6c:
    // 0x10ee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE6Cu;
        // 0x10ee70: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE74u;
    // 0x10ee74: 0x0  nop
    ctx->pc = 0x10ee74u;
    // NOP
label_10ee78:
    // 0x10ee78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ee7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ee80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ee84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ee84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ee8c: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x10EE8Cu;
    SET_GPR_U32(ctx, 31, 0x10EE94u);
    ctx->pc = 0x10EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE8Cu;
    // 0x10ee90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EBF0u, 0x10EE8Cu, 0x10EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE94u;
label_10ee94:
    // 0x10ee94: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x10ee94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10ee98: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x10ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10ee9c: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x10EE9Cu;
    {
        const bool branch_taken_0x10ee9c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x10ee9c) {
            ctx->pc = 0x10EEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EE9Cu;
            // 0x10eea0: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EED8u;
            goto label_10eed8;
        }
    }
    ctx->pc = 0x10EEA4u;
    // 0x10eea4: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x10eea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x10eea8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10EEA8u;
    {
        const bool branch_taken_0x10eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10eea8) {
            ctx->pc = 0x10EEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EEA8u;
            // 0x10eeac: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EEECu;
            goto label_10eeec;
        }
    }
    ctx->pc = 0x10EEB0u;
    // 0x10eeb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eeb4: 0x0  nop
    ctx->pc = 0x10eeb4u;
    // NOP
label_10eeb8:
    // 0x10eeb8: 0xc043b88  jal         func_10EE20
    ctx->pc = 0x10EEB8u;
    SET_GPR_U32(ctx, 31, 0x10EEC0u);
    ctx->pc = 0x10EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEB8u;
    // 0x10eebc: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE20u, 0x10EEB8u, 0x10EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EEC0u;
label_10eec0:
    // 0x10eec0: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x10eec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x10eec4: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x10EEC4u;
    {
        const bool branch_taken_0x10eec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEC4u;
        // 0x10eec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eec4) {
            ctx->pc = 0x10EEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eeb8;
        }
    }
    ctx->pc = 0x10EECCu;
    // 0x10eecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10EECCu;
    {
        const bool branch_taken_0x10eecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EECCu;
        // 0x10eed0: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eecc) {
            ctx->pc = 0x10EEF0u;
            goto label_10eef0;
        }
    }
    ctx->pc = 0x10EED4u;
    // 0x10eed4: 0x0  nop
    ctx->pc = 0x10eed4u;
    // NOP
label_10eed8:
    // 0x10eed8: 0xc043b94  jal         func_10EE50
    ctx->pc = 0x10EED8u;
    SET_GPR_U32(ctx, 31, 0x10EEE0u);
    ctx->pc = 0x10EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EED8u;
    // 0x10eedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE50u;
    goto label_10ee50;
    ctx->pc = 0x10EEE0u;
label_10eee0:
    // 0x10eee0: 0x602fffd  bltzl       $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x10EEE0u;
    {
        const bool branch_taken_0x10eee0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x10eee0) {
            ctx->pc = 0x10EEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EEE0u;
            // 0x10eee4: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eed8;
        }
    }
    ctx->pc = 0x10EEE8u;
    // 0x10eee8: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x10eee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_10eeec:
    // 0x10eeec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eef0:
    // 0x10eef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eef4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10eef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eefc: 0x8043b16  j           func_10EC58
    ctx->pc = 0x10EEFCu;
    ctx->pc = 0x10EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEFCu;
    // 0x10ef00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC58u, 0x10EEFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x10EF04u;
    // 0x10ef04: 0x0  nop
    ctx->pc = 0x10ef04u;
    // NOP
    // 0x10ef08: 0x8043b9e  j           func_10EE78
    ctx->pc = 0x10EF08u;
    ctx->pc = 0x10EF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF08u;
    // 0x10ef0c: 0x2405fde4  addiu       $a1, $zero, -0x21C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE78u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_10ee78;
    ctx->pc = 0x10EF10u;
}
