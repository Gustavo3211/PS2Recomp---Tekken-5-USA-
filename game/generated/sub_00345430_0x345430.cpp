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

// Function: sub_00345430
// Address: 0x345430 - 0x345498
void sub_00345430_0x345430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345430_0x345430");
#endif

    switch (ctx->pc) {
        case 0x345460u: goto label_345460;
        case 0x345468u: goto label_345468;
        default: break;
    }

    ctx->pc = 0x345430u;

    // 0x345430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x345438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34543c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345444: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x345444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x345448: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x345448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34544c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34544Cu;
    {
        const bool branch_taken_0x34544c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34544Cu;
        // 0x345450: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34544c) {
            ctx->pc = 0x34547Cu;
            goto label_34547c;
        }
    }
    ctx->pc = 0x345454u;
    // 0x345454: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x345454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x345458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34545c: 0x0  nop
    ctx->pc = 0x34545cu;
    // NOP
label_345460:
    // 0x345460: 0xc0d130c  jal         func_344C30
    ctx->pc = 0x345460u;
    SET_GPR_U32(ctx, 31, 0x345468u);
    ctx->pc = 0x345464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345460u;
    // 0x345464: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344C30u, 0x345460u, 0x345468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345468u;
label_345468:
    // 0x345468: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x345468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34546c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34546cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x345470: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x345470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x345474: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x345474u;
    {
        const bool branch_taken_0x345474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345474u;
        // 0x345478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345474) {
            ctx->pc = 0x345460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345460;
        }
    }
    ctx->pc = 0x34547Cu;
label_34547c:
    // 0x34547c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34547cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345488: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x345488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34548c: 0x3e00008  jr          $ra
    ctx->pc = 0x34548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34548Cu;
        // 0x345490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34548Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345494u;
    // 0x345494: 0x0  nop
    ctx->pc = 0x345494u;
    // NOP
    ctx->pc = 0x345498u;
}
