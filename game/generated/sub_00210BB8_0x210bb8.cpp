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

// Function: sub_00210BB8
// Address: 0x210bb8 - 0x210c78
void sub_00210BB8_0x210bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210BB8_0x210bb8");
#endif

    switch (ctx->pc) {
        case 0x210c00u: goto label_210c00;
        case 0x210c18u: goto label_210c18;
        case 0x210c48u: goto label_210c48;
        case 0x210c58u: goto label_210c58;
        default: break;
    }

    ctx->pc = 0x210bb8u;

    // 0x210bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210bbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210bc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210bcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210bd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210bd4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210bd8: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x210bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x210bdc: 0x8c520038  lw          $s2, 0x38($v0)
    ctx->pc = 0x210bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x210be0: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x210BE0u;
    {
        const bool branch_taken_0x210be0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE0u;
        // 0x210be4: 0x24030141  addiu       $v1, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210be0) {
            ctx->pc = 0x210C58u;
            goto label_210c58;
        }
    }
    ctx->pc = 0x210BE8u;
    // 0x210be8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x210be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x210bec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x210becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210bf0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x210bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210bf4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x210BF4u;
    {
        const bool branch_taken_0x210bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x210BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF4u;
        // 0x210bf8: 0x8e330064  lw          $s3, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bf4) {
            ctx->pc = 0x210C30u;
            goto label_210c30;
        }
    }
    ctx->pc = 0x210BFCu;
    // 0x210bfc: 0x24140141  addiu       $s4, $zero, 0x141
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
label_210c00:
    // 0x210c00: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210C00u;
    {
        const bool branch_taken_0x210c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C00u;
        // 0x210c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c00) {
            ctx->pc = 0x210C1Cu;
            goto label_210c1c;
        }
    }
    ctx->pc = 0x210C08u;
    // 0x210c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c10: 0xc080b98  jal         func_202E60
    ctx->pc = 0x210C10u;
    SET_GPR_U32(ctx, 31, 0x210C18u);
    ctx->pc = 0x210C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C10u;
    // 0x210c14: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202E60u, 0x210C10u, 0x210C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C18u;
label_210c18:
    // 0x210c18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x210c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210c1c:
    // 0x210c1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x210c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x210c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c24: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x210c24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x210c28: 0x1454fff5  bne         $v0, $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x210C28u;
    {
        const bool branch_taken_0x210c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x210c28) {
            ctx->pc = 0x210C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210c00;
        }
    }
    ctx->pc = 0x210C30u;
label_210c30:
    // 0x210c30: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x210C30u;
    {
        const bool branch_taken_0x210c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C30u;
        // 0x210c34: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c30) {
            ctx->pc = 0x210C58u;
            goto label_210c58;
        }
    }
    ctx->pc = 0x210C38u;
    // 0x210c38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c40: 0xc083892  jal         func_20E248
    ctx->pc = 0x210C40u;
    SET_GPR_U32(ctx, 31, 0x210C48u);
    ctx->pc = 0x210C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C40u;
    // 0x210c44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x210C40u, 0x210C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C48u;
label_210c48:
    // 0x210c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c50: 0xc083892  jal         func_20E248
    ctx->pc = 0x210C50u;
    SET_GPR_U32(ctx, 31, 0x210C58u);
    ctx->pc = 0x210C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C50u;
    // 0x210c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x210C50u, 0x210C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C58u;
label_210c58:
    // 0x210c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210c5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210c60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210c64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210c68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210c68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210c6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210c70: 0x3e00008  jr          $ra
    ctx->pc = 0x210C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C70u;
        // 0x210c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C78u;
}
