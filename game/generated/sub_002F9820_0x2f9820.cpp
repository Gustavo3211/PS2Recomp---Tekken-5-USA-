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

// Function: sub_002F9820
// Address: 0x2f9820 - 0x2f98b0
void sub_002F9820_0x2f9820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9820_0x2f9820");
#endif

    switch (ctx->pc) {
        case 0x2f9880u: goto label_2f9880;
        case 0x2f9890u: goto label_2f9890;
        case 0x2f98a0u: goto label_2f98a0;
        default: break;
    }

    ctx->pc = 0x2f9820u;

    // 0x2f9820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9824: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f9824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f982c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2f982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2f9830: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2f9830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2f9834: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F9834u;
    {
        const bool branch_taken_0x2f9834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9834) {
            ctx->pc = 0x2F9838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9834u;
            // 0x2f9838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F98A4u;
            goto label_2f98a4;
        }
    }
    ctx->pc = 0x2F983Cu;
    // 0x2f983c: 0x8c630164  lw          $v1, 0x164($v1)
    ctx->pc = 0x2f983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x2f9840: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f9840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f9844: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F9844u;
    {
        const bool branch_taken_0x2f9844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9844u;
        // 0x2f9848: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9844) {
            ctx->pc = 0x2F9888u;
            goto label_2f9888;
        }
    }
    ctx->pc = 0x2F984Cu;
    // 0x2f984c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F984Cu;
    {
        const bool branch_taken_0x2f984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F984Cu;
        // 0x2f9850: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f984c) {
            ctx->pc = 0x2F9868u;
            goto label_2f9868;
        }
    }
    ctx->pc = 0x2F9854u;
    // 0x2f9854: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f9854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9858: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9858u;
    {
        const bool branch_taken_0x2f9858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9858u;
        // 0x2f985c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9858) {
            ctx->pc = 0x2F9878u;
            goto label_2f9878;
        }
    }
    ctx->pc = 0x2F9860u;
    // 0x2f9860: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F9860u;
    {
        const bool branch_taken_0x2f9860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9860) {
            ctx->pc = 0x2F98A4u;
            goto label_2f98a4;
        }
    }
    ctx->pc = 0x2F9868u;
label_2f9868:
    // 0x2f9868: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9868u;
    {
        const bool branch_taken_0x2f9868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9868u;
        // 0x2f986c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9868) {
            ctx->pc = 0x2F9898u;
            goto label_2f9898;
        }
    }
    ctx->pc = 0x2F9870u;
    // 0x2f9870: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F9870u;
    {
        const bool branch_taken_0x2f9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9870) {
            ctx->pc = 0x2F98A4u;
            goto label_2f98a4;
        }
    }
    ctx->pc = 0x2F9878u;
label_2f9878:
    // 0x2f9878: 0xc0be4e4  jal         func_2F9390
    ctx->pc = 0x2F9878u;
    SET_GPR_U32(ctx, 31, 0x2F9880u);
    ctx->pc = 0x2F9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9390u, 0x2F9878u, 0x2F9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9880u;
label_2f9880:
    // 0x2f9880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F9880u;
    {
        const bool branch_taken_0x2f9880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9880u;
        // 0x2f9884: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9880) {
            ctx->pc = 0x2F98A4u;
            goto label_2f98a4;
        }
    }
    ctx->pc = 0x2F9888u;
label_2f9888:
    // 0x2f9888: 0xc0be670  jal         func_2F99C0
    ctx->pc = 0x2F9888u;
    SET_GPR_U32(ctx, 31, 0x2F9890u);
    ctx->pc = 0x2F99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F99C0u, 0x2F9888u, 0x2F9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9890u;
label_2f9890:
    // 0x2f9890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9890u;
    {
        const bool branch_taken_0x2f9890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9890u;
        // 0x2f9894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9890) {
            ctx->pc = 0x2F98A4u;
            goto label_2f98a4;
        }
    }
    ctx->pc = 0x2F9898u;
label_2f9898:
    // 0x2f9898: 0xc0be6c4  jal         func_2F9B10
    ctx->pc = 0x2F9898u;
    SET_GPR_U32(ctx, 31, 0x2F98A0u);
    ctx->pc = 0x2F9B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9B10u, 0x2F9898u, 0x2F98A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F98A0u;
label_2f98a0:
    // 0x2f98a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f98a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f98a4:
    // 0x2f98a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F98A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F98A4u;
        // 0x2f98a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F98A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F98ACu;
    // 0x2f98ac: 0x0  nop
    ctx->pc = 0x2f98acu;
    // NOP
    ctx->pc = 0x2f98b0u;
}
