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

// Function: sub_00210AF8
// Address: 0x210af8 - 0x210bb8
void sub_00210AF8_0x210af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210AF8_0x210af8");
#endif

    switch (ctx->pc) {
        case 0x210b40u: goto label_210b40;
        case 0x210b58u: goto label_210b58;
        case 0x210b88u: goto label_210b88;
        case 0x210b98u: goto label_210b98;
        default: break;
    }

    ctx->pc = 0x210af8u;

    // 0x210af8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210b08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210b0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210b10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210b14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210b18: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x210b1c: 0x8c520034  lw          $s2, 0x34($v0)
    ctx->pc = 0x210b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x210b20: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x210B20u;
    {
        const bool branch_taken_0x210b20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B20u;
        // 0x210b24: 0x24030141  addiu       $v1, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b20) {
            ctx->pc = 0x210B98u;
            goto label_210b98;
        }
    }
    ctx->pc = 0x210B28u;
    // 0x210b28: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x210b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x210b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210b30: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x210b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210b34: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x210B34u;
    {
        const bool branch_taken_0x210b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x210B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B34u;
        // 0x210b38: 0x8e330064  lw          $s3, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b34) {
            ctx->pc = 0x210B70u;
            goto label_210b70;
        }
    }
    ctx->pc = 0x210B3Cu;
    // 0x210b3c: 0x24140141  addiu       $s4, $zero, 0x141
    ctx->pc = 0x210b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
label_210b40:
    // 0x210b40: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210B40u;
    {
        const bool branch_taken_0x210b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B40u;
        // 0x210b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b40) {
            ctx->pc = 0x210B5Cu;
            goto label_210b5c;
        }
    }
    ctx->pc = 0x210B48u;
    // 0x210b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b50: 0xc080b98  jal         func_202E60
    ctx->pc = 0x210B50u;
    SET_GPR_U32(ctx, 31, 0x210B58u);
    ctx->pc = 0x210B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B50u;
    // 0x210b54: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E60u, 0x210B50u, 0x210B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B58u;
label_210b58:
    // 0x210b58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x210b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210b5c:
    // 0x210b5c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x210b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x210b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b64: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x210b64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210b68: 0x1454fff5  bne         $v0, $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x210B68u;
    {
        const bool branch_taken_0x210b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x210b68) {
            ctx->pc = 0x210B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210b40;
        }
    }
    ctx->pc = 0x210B70u;
label_210b70:
    // 0x210b70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x210B70u;
    {
        const bool branch_taken_0x210b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B70u;
        // 0x210b74: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b70) {
            ctx->pc = 0x210B98u;
            goto label_210b98;
        }
    }
    ctx->pc = 0x210B78u;
    // 0x210b78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b80: 0xc083892  jal         func_20E248
    ctx->pc = 0x210B80u;
    SET_GPR_U32(ctx, 31, 0x210B88u);
    ctx->pc = 0x210B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B80u;
    // 0x210b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x210B80u, 0x210B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B88u;
label_210b88:
    // 0x210b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b90: 0xc083892  jal         func_20E248
    ctx->pc = 0x210B90u;
    SET_GPR_U32(ctx, 31, 0x210B98u);
    ctx->pc = 0x210B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B90u;
    // 0x210b94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x210B90u, 0x210B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B98u;
label_210b98:
    // 0x210b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210ba0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ba4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210ba8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210ba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210bac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x210BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BB0u;
        // 0x210bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210BB8u;
}
