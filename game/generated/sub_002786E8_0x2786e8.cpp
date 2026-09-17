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

// Function: sub_002786E8
// Address: 0x2786e8 - 0x278770
void sub_002786E8_0x2786e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002786E8_0x2786e8");
#endif

    switch (ctx->pc) {
        case 0x278700u: goto label_278700;
        case 0x278710u: goto label_278710;
        case 0x278734u: goto label_278734;
        case 0x278748u: goto label_278748;
        default: break;
    }

    ctx->pc = 0x2786e8u;

    // 0x2786e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2786e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2786ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2786ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2786f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2786f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2786f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2786f8: 0xc084ec6  jal         func_213B18
    ctx->pc = 0x2786F8u;
    SET_GPR_U32(ctx, 31, 0x278700u);
    ctx->pc = 0x2786FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786F8u;
    // 0x2786fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B18u, 0x2786F8u, 0x278700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278700u;
label_278700:
    // 0x278700: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278700u;
    {
        const bool branch_taken_0x278700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278700u;
        // 0x278704: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278700) {
            ctx->pc = 0x278718u;
            goto label_278718;
        }
    }
    ctx->pc = 0x278708u;
    // 0x278708: 0xc084ec6  jal         func_213B18
    ctx->pc = 0x278708u;
    SET_GPR_U32(ctx, 31, 0x278710u);
    ctx->pc = 0x213B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B18u, 0x278708u, 0x278710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278710u;
label_278710:
    // 0x278710: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x278710u;
    {
        const bool branch_taken_0x278710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278710) {
            ctx->pc = 0x278714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278710u;
            // 0x278714: 0x8f82ca5c  lw          $v0, -0x35A4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278720u;
            goto label_278720;
        }
    }
    ctx->pc = 0x278718u;
label_278718:
    // 0x278718: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x278718u;
    {
        const bool branch_taken_0x278718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278718u;
        // 0x27871c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278718) {
            ctx->pc = 0x278760u;
            goto label_278760;
        }
    }
    ctx->pc = 0x278720u;
label_278720:
    // 0x278720: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278720u;
    {
        const bool branch_taken_0x278720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278720u;
        // 0x278724: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278720) {
            ctx->pc = 0x278740u;
            goto label_278740;
        }
    }
    ctx->pc = 0x278728u;
    // 0x278728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x278728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27872c: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x27872Cu;
    SET_GPR_U32(ctx, 31, 0x278734u);
    ctx->pc = 0x278730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27872Cu;
    // 0x278730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x27872Cu, 0x278734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278734u;
label_278734:
    // 0x278734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278738: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278738u;
    {
        const bool branch_taken_0x278738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278738u;
        // 0x27873c: 0xaf82ca5c  sw          $v0, -0x35A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278738) {
            ctx->pc = 0x27875Cu;
            goto label_27875c;
        }
    }
    ctx->pc = 0x278740u;
label_278740:
    // 0x278740: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x278740u;
    SET_GPR_U32(ctx, 31, 0x278748u);
    ctx->pc = 0x278744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278740u;
    // 0x278744: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x278740u, 0x278748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278748u;
label_278748:
    // 0x278748: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x278748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27874c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27874Cu;
    {
        const bool branch_taken_0x27874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x278750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27874Cu;
        // 0x278750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27874c) {
            ctx->pc = 0x278760u;
            goto label_278760;
        }
    }
    ctx->pc = 0x278754u;
    // 0x278754: 0xaf80ca5c  sw          $zero, -0x35A4($gp)
    ctx->pc = 0x278754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953564), GPR_U32(ctx, 0));
    // 0x278758: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x278758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27875c:
    // 0x27875c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27875cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278760:
    // 0x278760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x278764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278768: 0x3e00008  jr          $ra
    ctx->pc = 0x278768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278768u;
        // 0x27876c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278770u;
}
