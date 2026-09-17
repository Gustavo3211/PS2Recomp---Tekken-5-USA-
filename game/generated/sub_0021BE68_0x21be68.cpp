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

// Function: sub_0021BE68
// Address: 0x21be68 - 0x21bf78
void sub_0021BE68_0x21be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BE68_0x21be68");
#endif

    switch (ctx->pc) {
        case 0x21bea0u: goto label_21bea0;
        case 0x21bed4u: goto label_21bed4;
        case 0x21bee0u: goto label_21bee0;
        case 0x21bee8u: goto label_21bee8;
        case 0x21bef0u: goto label_21bef0;
        case 0x21bef8u: goto label_21bef8;
        case 0x21bf0cu: goto label_21bf0c;
        case 0x21bf18u: goto label_21bf18;
        case 0x21bf28u: goto label_21bf28;
        case 0x21bf48u: goto label_21bf48;
        default: break;
    }

    ctx->pc = 0x21be68u;

    // 0x21be68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21be6c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21be70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21be74: 0x24548858  addiu       $s4, $v0, -0x77A8
    ctx->pc = 0x21be74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21be78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21be7c: 0x8e90002c  lw          $s0, 0x2C($s4)
    ctx->pc = 0x21be7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A8884u));
    // 0x21be80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21be80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21be84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21be84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21be8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21be8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21be90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21be94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21be98: 0xc086b1e  jal         func_21AC78
    ctx->pc = 0x21BE98u;
    SET_GPR_U32(ctx, 31, 0x21BEA0u);
    ctx->pc = 0x21BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BE98u;
    // 0x21be9c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC78u, 0x21BE98u, 0x21BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEA0u;
label_21bea0:
    // 0x21bea0: 0x5050002d  beql        $v0, $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x21BEA0u;
    {
        const bool branch_taken_0x21bea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x21bea0) {
            ctx->pc = 0x21BEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BEA0u;
            // 0x21bea4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF58u;
            goto label_21bf58;
        }
    }
    ctx->pc = 0x21BEA8u;
    // 0x21bea8: 0x1650002b  bne         $s2, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21BEA8u;
    {
        const bool branch_taken_0x21bea8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x21BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BEA8u;
        // 0x21beac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bea8) {
            ctx->pc = 0x21BF58u;
            goto label_21bf58;
        }
    }
    ctx->pc = 0x21BEB0u;
    // 0x21beb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21beb4: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x21beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x21beb8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x21beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x21bebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21bebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bec0: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x21bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x21bec4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x21bec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21bec8: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x21bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x21becc: 0xc08562a  jal         func_2158A8
    ctx->pc = 0x21BECCu;
    SET_GPR_U32(ctx, 31, 0x21BED4u);
    ctx->pc = 0x21BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BECCu;
    // 0x21bed0: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2158A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2158A8u, 0x21BECCu, 0x21BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BED4u;
label_21bed4:
    // 0x21bed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bed8: 0xc086ace  jal         func_21AB38
    ctx->pc = 0x21BED8u;
    SET_GPR_U32(ctx, 31, 0x21BEE0u);
    ctx->pc = 0x21BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BED8u;
    // 0x21bedc: 0x92250028  lbu         $a1, 0x28($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AB38u, 0x21BED8u, 0x21BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEE0u;
label_21bee0:
    // 0x21bee0: 0xc0868b0  jal         func_21A2C0
    ctx->pc = 0x21BEE0u;
    SET_GPR_U32(ctx, 31, 0x21BEE8u);
    ctx->pc = 0x21BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEE0u;
    // 0x21bee4: 0x92240028  lbu         $a0, 0x28($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2C0u, 0x21BEE0u, 0x21BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEE8u;
label_21bee8:
    // 0x21bee8: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x21BEE8u;
    SET_GPR_U32(ctx, 31, 0x21BEF0u);
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x21BEE8u, 0x21BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEF0u;
label_21bef0:
    // 0x21bef0: 0xc086b20  jal         func_21AC80
    ctx->pc = 0x21BEF0u;
    SET_GPR_U32(ctx, 31, 0x21BEF8u);
    ctx->pc = 0x21BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BEF0u;
    // 0x21bef4: 0x8e84002c  lw          $a0, 0x2C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC80u, 0x21BEF0u, 0x21BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BEF8u;
label_21bef8:
    // 0x21bef8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x21bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x21befc: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BEFCu;
    {
        const bool branch_taken_0x21befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x21befc) {
            ctx->pc = 0x21BF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BEFCu;
            // 0x21bf00: 0xae3000dc  sw          $s0, 0xDC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF20u;
            goto label_21bf20;
        }
    }
    ctx->pc = 0x21BF04u;
    // 0x21bf04: 0xc086644  jal         func_219910
    ctx->pc = 0x21BF04u;
    SET_GPR_U32(ctx, 31, 0x21BF0Cu);
    ctx->pc = 0x21BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF04u;
    // 0x21bf08: 0x9224002d  lbu         $a0, 0x2D($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21BF04u, 0x21BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF0Cu;
label_21bf0c:
    // 0x21bf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf10: 0xc086b22  jal         func_21AC88
    ctx->pc = 0x21BF10u;
    SET_GPR_U32(ctx, 31, 0x21BF18u);
    ctx->pc = 0x21BF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF10u;
    // 0x21bf14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC88u, 0x21BF10u, 0x21BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF18u;
label_21bf18:
    // 0x21bf18: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x21bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x21bf1c: 0xae3000dc  sw          $s0, 0xDC($s1)
    ctx->pc = 0x21bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 16));
label_21bf20:
    // 0x21bf20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21bf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf24: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x21bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21bf28:
    // 0x21bf28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21bf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf2c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x21bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x21bf30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21bf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21bf34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21bf38: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x21bf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21bf3c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x21bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x21bf40: 0xc04a151  jal         func_128544
    ctx->pc = 0x21BF40u;
    SET_GPR_U32(ctx, 31, 0x21BF48u);
    ctx->pc = 0x21BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF40u;
    // 0x21bf44: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x21BF40u, 0x21BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF48u;
label_21bf48:
    // 0x21bf48: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x21bf48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x21bf4c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x21BF4Cu;
    {
        const bool branch_taken_0x21bf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bf4c) {
            ctx->pc = 0x21BF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BF4Cu;
            // 0x21bf50: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bf28;
        }
    }
    ctx->pc = 0x21BF54u;
    // 0x21bf54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21bf58:
    // 0x21bf58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bf5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21bf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bf60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21bf60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21bf64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21bf64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21bf68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21bf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21bf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF6Cu;
        // 0x21bf70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BF74u;
    // 0x21bf74: 0x0  nop
    ctx->pc = 0x21bf74u;
    // NOP
    ctx->pc = 0x21bf78u;
}
