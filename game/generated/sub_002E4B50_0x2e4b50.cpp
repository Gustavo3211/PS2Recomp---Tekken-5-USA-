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

// Function: sub_002E4B50
// Address: 0x2e4b50 - 0x2e4c00
void sub_002E4B50_0x2e4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4B50_0x2e4b50");
#endif

    switch (ctx->pc) {
        case 0x2e4b94u: goto label_2e4b94;
        case 0x2e4bccu: goto label_2e4bcc;
        case 0x2e4be0u: goto label_2e4be0;
        default: break;
    }

    ctx->pc = 0x2e4b50u;

label_2e4b50:
    // 0x2e4b50: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x2e4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2e4b54: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x2e4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2e4b58: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e4b5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4B5Cu;
    {
        const bool branch_taken_0x2e4b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b5c) {
            ctx->pc = 0x2E4B70u;
            goto label_2e4b70;
        }
    }
    ctx->pc = 0x2E4B64u;
    // 0x2e4b64: 0x908201bb  lbu         $v0, 0x1BB($a0)
    ctx->pc = 0x2e4b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 443)));
    // 0x2e4b68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4B68u;
    {
        const bool branch_taken_0x2e4b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4b68) {
            ctx->pc = 0x2E4B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4B68u;
            // 0x2e4b6c: 0x8f82a530  lw          $v0, -0x5AD0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4B78u;
            goto label_2e4b78;
        }
    }
    ctx->pc = 0x2E4B70u;
label_2e4b70:
    // 0x2e4b70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B70u;
        // 0x2e4b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B78u;
label_2e4b78:
    // 0x2e4b78: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2e4b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2e4b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B7Cu;
        // 0x2e4b80: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4B84u;
    // 0x2e4b84: 0x0  nop
    ctx->pc = 0x2e4b84u;
    // NOP
    // 0x2e4b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4b90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2e4b94:
    // 0x2e4b94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e4b98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b9c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E4B9Cu;
    {
        const bool branch_taken_0x2e4b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B9Cu;
        // 0x2e4ba0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b9c) {
            ctx->pc = 0x2E4BD0u;
            goto label_2e4bd0;
        }
    }
    ctx->pc = 0x2E4BA4u;
    // 0x2e4ba4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4ba8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2e4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2e4bac: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x2e4bacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x2e4bb0: 0x24a5f1f0  addiu       $a1, $a1, -0xE10
    ctx->pc = 0x2e4bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
    // 0x2e4bb4: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x2e4bb4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4bb8: 0x2508dc18  addiu       $t0, $t0, -0x23E8
    ctx->pc = 0x2e4bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958104));
    // 0x2e4bbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e4bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bc4: 0xc0498e2  jal         func_126388
    ctx->pc = 0x2E4BC4u;
    SET_GPR_U32(ctx, 31, 0x2E4BCCu);
    ctx->pc = 0x2E4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BC4u;
    // 0x2e4bc8: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126388u, 0x2E4BC4u, 0x2E4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BCCu;
label_2e4bcc:
    // 0x2e4bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bd0:
    // 0x2e4bd0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4BD0u;
    {
        const bool branch_taken_0x2e4bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BD0u;
        // 0x2e4bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bd0) {
            ctx->pc = 0x2E4BECu;
            goto label_2e4bec;
        }
    }
    ctx->pc = 0x2E4BD8u;
    // 0x2e4bd8: 0xc0b92d4  jal         func_2E4B50
    ctx->pc = 0x2E4BD8u;
    SET_GPR_U32(ctx, 31, 0x2E4BE0u);
    ctx->pc = 0x2E4BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BD8u;
    // 0x2e4bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4B50u;
    goto label_2e4b50;
    ctx->pc = 0x2E4BE0u;
label_2e4be0:
    // 0x2e4be0: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E4BE0u;
    {
        const bool branch_taken_0x2e4be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BE0u;
        // 0x2e4be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4be0) {
            ctx->pc = 0x2E4B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4b94;
        }
    }
    ctx->pc = 0x2E4BE8u;
    // 0x2e4be8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e4be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bec:
    // 0x2e4bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4bf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BF4u;
        // 0x2e4bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4BFCu;
    // 0x2e4bfc: 0x0  nop
    ctx->pc = 0x2e4bfcu;
    // NOP
    ctx->pc = 0x2e4c00u;
}
