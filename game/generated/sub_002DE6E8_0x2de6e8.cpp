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

// Function: sub_002DE6E8
// Address: 0x2de6e8 - 0x2de790
void sub_002DE6E8_0x2de6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE6E8_0x2de6e8");
#endif

    switch (ctx->pc) {
        case 0x2de6fcu: goto label_2de6fc;
        case 0x2de74cu: goto label_2de74c;
        case 0x2de778u: goto label_2de778;
        default: break;
    }

    ctx->pc = 0x2de6e8u;

    // 0x2de6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de6ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de6f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2de6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2de6f4: 0xc0b79e4  jal         func_2DE790
    ctx->pc = 0x2DE6F4u;
    SET_GPR_U32(ctx, 31, 0x2DE6FCu);
    ctx->pc = 0x2DE6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE6F4u;
    // 0x2de6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE790u, 0x2DE6F4u, 0x2DE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE6FCu;
label_2de6fc:
    // 0x2de6fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2de6fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de708: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DE708u;
    {
        const bool branch_taken_0x2de708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE708u;
        // 0x2de70c: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de708) {
            ctx->pc = 0x2DE760u;
            goto label_2de760;
        }
    }
    ctx->pc = 0x2DE710u;
    // 0x2de710: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE710u;
    {
        const bool branch_taken_0x2de710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de710) {
            ctx->pc = 0x2DE714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE710u;
            // 0x2de714: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE728u;
            goto label_2de728;
        }
    }
    ctx->pc = 0x2DE718u;
    // 0x2de718: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2de718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2de71c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DE71Cu;
    {
        const bool branch_taken_0x2de71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2de71c) {
            ctx->pc = 0x2DE770u;
            goto label_2de770;
        }
    }
    ctx->pc = 0x2DE724u;
    // 0x2de724: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2de728:
    // 0x2de728: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2de728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2de72c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2de72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2de730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de734: 0x30440020  andi        $a0, $v0, 0x20
    ctx->pc = 0x2de734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2de738: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x2de738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x2de73c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE73Cu;
    {
        const bool branch_taken_0x2de73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE73Cu;
        // 0x2de740: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de73c) {
            ctx->pc = 0x2DE758u;
            goto label_2de758;
        }
    }
    ctx->pc = 0x2DE744u;
    // 0x2de744: 0xc0b7ad8  jal         func_2DEB60
    ctx->pc = 0x2DE744u;
    SET_GPR_U32(ctx, 31, 0x2DE74Cu);
    ctx->pc = 0x2DE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE744u;
    // 0x2de748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEB60u, 0x2DE744u, 0x2DE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE74Cu;
label_2de74c:
    // 0x2de74c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE74Cu;
    {
        const bool branch_taken_0x2de74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE74Cu;
        // 0x2de750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de74c) {
            ctx->pc = 0x2DE77Cu;
            goto label_2de77c;
        }
    }
    ctx->pc = 0x2DE754u;
    // 0x2de754: 0x0  nop
    ctx->pc = 0x2de754u;
    // NOP
label_2de758:
    // 0x2de758: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE758u;
    {
        const bool branch_taken_0x2de758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE758u;
        // 0x2de75c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de758) {
            ctx->pc = 0x2DE778u;
            goto label_2de778;
        }
    }
    ctx->pc = 0x2DE760u;
label_2de760:
    // 0x2de760: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2de760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2de764: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2de764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2de768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE768u;
    {
        const bool branch_taken_0x2de768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE768u;
        // 0x2de76c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de768) {
            ctx->pc = 0x2DE77Cu;
            goto label_2de77c;
        }
    }
    ctx->pc = 0x2DE770u;
label_2de770:
    // 0x2de770: 0xc0b7a38  jal         func_2DE8E0
    ctx->pc = 0x2DE770u;
    SET_GPR_U32(ctx, 31, 0x2DE778u);
    ctx->pc = 0x2DE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE770u;
    // 0x2de774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8E0u, 0x2DE770u, 0x2DE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE778u;
label_2de778:
    // 0x2de778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de77c:
    // 0x2de77c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de780: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2de780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de784: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2de784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de788: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE788u;
        // 0x2de78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE790u;
}
