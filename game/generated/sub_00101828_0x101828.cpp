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

// Function: sub_00101828
// Address: 0x101828 - 0x101898
void sub_00101828_0x101828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101828_0x101828");
#endif

    switch (ctx->pc) {
        case 0x101858u: goto label_101858;
        case 0x101868u: goto label_101868;
        case 0x101870u: goto label_101870;
        default: break;
    }

    ctx->pc = 0x101828u;

    // 0x101828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10182c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x101830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101834: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x101834u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x101838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10183c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10183cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101840: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x101840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x101844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x101844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101848: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10184c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10184Cu;
    {
        const bool branch_taken_0x10184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10184Cu;
        // 0x101850: 0x3c120015  lui         $s2, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10184c) {
            ctx->pc = 0x101880u;
            goto label_101880;
        }
    }
    ctx->pc = 0x101854u;
    // 0x101854: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x101854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_101858:
    // 0x101858: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x101858u;
    {
        const bool branch_taken_0x101858 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x101858) {
            ctx->pc = 0x101870u;
            goto label_101870;
        }
    }
    ctx->pc = 0x101860u;
    // 0x101860: 0xc044794  jal         func_111E50
    ctx->pc = 0x101860u;
    SET_GPR_U32(ctx, 31, 0x101868u);
    ctx->pc = 0x101864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101860u;
    // 0x101864: 0x2644d368  addiu       $a0, $s2, -0x2C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x101860u, 0x101868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101868u;
label_101868:
    // 0x101868: 0xc0407f0  jal         func_101FC0
    ctx->pc = 0x101868u;
    SET_GPR_U32(ctx, 31, 0x101870u);
    ctx->pc = 0x10186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101868u;
    // 0x10186c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101FC0u, 0x101868u, 0x101870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101870u;
label_101870:
    // 0x101870: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x101870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101874: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101878: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x101878u;
    {
        const bool branch_taken_0x101878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101878u;
        // 0x10187c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101878) {
            ctx->pc = 0x101858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101858;
        }
    }
    ctx->pc = 0x101880u;
label_101880:
    // 0x101880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101884: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x101884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x101888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10188c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10188cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101890: 0x3e00008  jr          $ra
    ctx->pc = 0x101890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101890u;
        // 0x101894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101898u;
}
