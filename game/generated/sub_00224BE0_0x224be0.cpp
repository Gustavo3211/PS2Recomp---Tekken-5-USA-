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

// Function: sub_00224BE0
// Address: 0x224be0 - 0x224ce0
void sub_00224BE0_0x224be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224BE0_0x224be0");
#endif

    switch (ctx->pc) {
        case 0x224c5cu: goto label_224c5c;
        case 0x224c7cu: goto label_224c7c;
        case 0x224c8cu: goto label_224c8c;
        case 0x224c9cu: goto label_224c9c;
        case 0x224cacu: goto label_224cac;
        case 0x224cb4u: goto label_224cb4;
        default: break;
    }

    ctx->pc = 0x224be0u;

    // 0x224be0: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x224be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x224be4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x224be8: 0x8c626150  lw          $v0, 0x6150($v1)
    ctx->pc = 0x224be8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x156150u));
    // 0x224bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x224becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224bf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224bfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x224bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x224c00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x224c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x224c04: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x224C04u;
    {
        const bool branch_taken_0x224c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C04u;
        // 0x224c08: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c04) {
            ctx->pc = 0x224CB8u;
            goto label_224cb8;
        }
    }
    ctx->pc = 0x224C0Cu;
    // 0x224c0c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x224c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x224c10: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x224c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x224c14: 0x244583c0  addiu       $a1, $v0, -0x7C40
    ctx->pc = 0x224c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x224c18: 0x246688d0  addiu       $a2, $v1, -0x7730
    ctx->pc = 0x224c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x224c1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x224c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x224c20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x224c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224c24: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224C24u;
    {
        const bool branch_taken_0x224c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x224C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C24u;
        // 0x224c28: 0x8cd40004  lw          $s4, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c24) {
            ctx->pc = 0x224C3Cu;
            goto label_224c3c;
        }
    }
    ctx->pc = 0x224C2Cu;
    // 0x224c2c: 0x90a3002d  lbu         $v1, 0x2D($a1)
    ctx->pc = 0x224c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x224c30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224c34: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x224C34u;
    {
        const bool branch_taken_0x224c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x224c34) {
            ctx->pc = 0x224C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224C34u;
            // 0x224c38: 0x8cd40000  lw          $s4, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224C3Cu;
            goto label_224c3c;
        }
    }
    ctx->pc = 0x224C3Cu;
label_224c3c:
    // 0x224c3c: 0x9682003c  lhu         $v0, 0x3C($s4)
    ctx->pc = 0x224c3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x224c40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x224c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x224c44: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x224c44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x224c48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x224c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x224c4c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x224c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x224c50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c54: 0xc0404be  jal         func_1012F8
    ctx->pc = 0x224C54u;
    SET_GPR_U32(ctx, 31, 0x224C5Cu);
    ctx->pc = 0x224C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C54u;
    // 0x224c58: 0x26130003  addiu       $s3, $s0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012F8u, 0x224C54u, 0x224C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C5Cu;
label_224c5c:
    // 0x224c5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224c60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c64: 0x9682003c  lhu         $v0, 0x3C($s4)
    ctx->pc = 0x224c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x224c68: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x224c6c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x224c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x224c70: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x224c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x224c74: 0xc0404be  jal         func_1012F8
    ctx->pc = 0x224C74u;
    SET_GPR_U32(ctx, 31, 0x224C7Cu);
    ctx->pc = 0x224C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C74u;
    // 0x224c78: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012F8u, 0x224C74u, 0x224C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C7Cu;
label_224c7c:
    // 0x224c7c: 0x9684003c  lhu         $a0, 0x3C($s4)
    ctx->pc = 0x224c7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x224c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c84: 0xc0892e8  jal         func_224BA0
    ctx->pc = 0x224C84u;
    SET_GPR_U32(ctx, 31, 0x224C8Cu);
    ctx->pc = 0x224C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C84u;
    // 0x224c88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224BA0u, 0x224C84u, 0x224C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C8Cu;
label_224c8c:
    // 0x224c8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x224c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c90: 0x8685003e  lh          $a1, 0x3E($s4)
    ctx->pc = 0x224c90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 62)));
    // 0x224c94: 0xc089700  jal         func_225C00
    ctx->pc = 0x224C94u;
    SET_GPR_U32(ctx, 31, 0x224C9Cu);
    ctx->pc = 0x224C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C94u;
    // 0x224c98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C00u, 0x224C94u, 0x224C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C9Cu;
label_224c9c:
    // 0x224c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ca0: 0x8685003e  lh          $a1, 0x3E($s4)
    ctx->pc = 0x224ca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 62)));
    // 0x224ca4: 0xc089700  jal         func_225C00
    ctx->pc = 0x224CA4u;
    SET_GPR_U32(ctx, 31, 0x224CACu);
    ctx->pc = 0x224CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CA4u;
    // 0x224ca8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C00u, 0x224CA4u, 0x224CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CACu;
label_224cac:
    // 0x224cac: 0xc0990f0  jal         func_2643C0
    ctx->pc = 0x224CACu;
    SET_GPR_U32(ctx, 31, 0x224CB4u);
    ctx->pc = 0x224CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CACu;
    // 0x224cb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x224CACu, 0x224CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CB4u;
label_224cb4:
    // 0x224cb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224cb8:
    // 0x224cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224cbc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x224cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224cc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224cc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x224cc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224ccc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x224cccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224cd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x224cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x224CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CD4u;
        // 0x224cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224CDCu;
    // 0x224cdc: 0x0  nop
    ctx->pc = 0x224cdcu;
    // NOP
    ctx->pc = 0x224ce0u;
}
