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

// Function: sub_00248050
// Address: 0x248050 - 0x2480e8
void sub_00248050_0x248050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248050_0x248050");
#endif

    switch (ctx->pc) {
        case 0x2480a8u: goto label_2480a8;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480d8u: goto label_2480d8;
        default: break;
    }

    ctx->pc = 0x248050u;

    // 0x248050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248054: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x248054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24805c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x24805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x248060: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x248060u;
    {
        const bool branch_taken_0x248060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248060) {
            ctx->pc = 0x248064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248060u;
            // 0x248064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2480DCu;
            goto label_2480dc;
        }
    }
    ctx->pc = 0x248068u;
    // 0x248068: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x248068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x24806c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24806cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248070: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x248070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248074: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x248074u;
    {
        const bool branch_taken_0x248074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x248074) {
            ctx->pc = 0x2480B0u;
            goto label_2480b0;
        }
    }
    ctx->pc = 0x24807Cu;
    // 0x24807c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24807Cu;
    {
        const bool branch_taken_0x24807c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x248080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24807Cu;
        // 0x248080: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24807c) {
            ctx->pc = 0x2480A0u;
            goto label_2480a0;
        }
    }
    ctx->pc = 0x248084u;
    // 0x248084: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x248084u;
    {
        const bool branch_taken_0x248084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x248088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248084u;
        // 0x248088: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248084) {
            ctx->pc = 0x2480C0u;
            goto label_2480c0;
        }
    }
    ctx->pc = 0x24808Cu;
    // 0x24808c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24808Cu;
    {
        const bool branch_taken_0x24808c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x248090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24808Cu;
        // 0x248090: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24808c) {
            ctx->pc = 0x2480D0u;
            goto label_2480d0;
        }
    }
    ctx->pc = 0x248094u;
    // 0x248094: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x248094u;
    {
        const bool branch_taken_0x248094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248094) {
            ctx->pc = 0x2480DCu;
            goto label_2480dc;
        }
    }
    ctx->pc = 0x24809Cu;
    // 0x24809c: 0x0  nop
    ctx->pc = 0x24809cu;
    // NOP
label_2480a0:
    // 0x2480a0: 0xc091eae  jal         func_247AB8
    ctx->pc = 0x2480A0u;
    SET_GPR_U32(ctx, 31, 0x2480A8u);
    ctx->pc = 0x247AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247AB8u, 0x2480A0u, 0x2480A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480A8u;
label_2480a8:
    // 0x2480a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2480A8u;
    {
        const bool branch_taken_0x2480a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480A8u;
        // 0x2480ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480a8) {
            ctx->pc = 0x2480DCu;
            goto label_2480dc;
        }
    }
    ctx->pc = 0x2480B0u;
label_2480b0:
    // 0x2480b0: 0xc091f20  jal         func_247C80
    ctx->pc = 0x2480B0u;
    SET_GPR_U32(ctx, 31, 0x2480B8u);
    ctx->pc = 0x247C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C80u, 0x2480B0u, 0x2480B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480B8u;
label_2480b8:
    // 0x2480b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2480B8u;
    {
        const bool branch_taken_0x2480b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480B8u;
        // 0x2480bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480b8) {
            ctx->pc = 0x2480DCu;
            goto label_2480dc;
        }
    }
    ctx->pc = 0x2480C0u;
label_2480c0:
    // 0x2480c0: 0xc091f58  jal         func_247D60
    ctx->pc = 0x2480C0u;
    SET_GPR_U32(ctx, 31, 0x2480C8u);
    ctx->pc = 0x247D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D60u, 0x2480C0u, 0x2480C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480C8u;
label_2480c8:
    // 0x2480c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2480C8u;
    {
        const bool branch_taken_0x2480c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2480CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480C8u;
        // 0x2480cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2480c8) {
            ctx->pc = 0x2480DCu;
            goto label_2480dc;
        }
    }
    ctx->pc = 0x2480D0u;
label_2480d0:
    // 0x2480d0: 0xc091fbc  jal         func_247EF0
    ctx->pc = 0x2480D0u;
    SET_GPR_U32(ctx, 31, 0x2480D8u);
    ctx->pc = 0x247EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247EF0u, 0x2480D0u, 0x2480D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480D8u;
label_2480d8:
    // 0x2480d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2480d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2480dc:
    // 0x2480dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2480DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2480E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2480DCu;
        // 0x2480e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2480DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2480E4u;
    // 0x2480e4: 0x0  nop
    ctx->pc = 0x2480e4u;
    // NOP
    ctx->pc = 0x2480e8u;
}
