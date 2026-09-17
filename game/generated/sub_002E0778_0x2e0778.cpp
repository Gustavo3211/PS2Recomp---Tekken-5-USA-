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

// Function: sub_002E0778
// Address: 0x2e0778 - 0x2e0810
void sub_002E0778_0x2e0778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0778_0x2e0778");
#endif

    switch (ctx->pc) {
        case 0x2e07c4u: goto label_2e07c4;
        case 0x2e07d0u: goto label_2e07d0;
        case 0x2e07e8u: goto label_2e07e8;
        default: break;
    }

    ctx->pc = 0x2e0778u;

    // 0x2e0778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e077c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0780: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e0780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e0784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e0784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e078c: 0x2651007c  addiu       $s1, $s2, 0x7C
    ctx->pc = 0x2e078cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x2e0790: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e0790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e0794: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e0794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e0798: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0798u;
    {
        const bool branch_taken_0x2e0798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0798) {
            ctx->pc = 0x2E079Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0798u;
            // 0x2e079c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E07B4u;
            goto label_2e07b4;
        }
    }
    ctx->pc = 0x2E07A0u;
    // 0x2e07a0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e07a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e07a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E07A8u;
    {
        const bool branch_taken_0x2e07a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e07a8) {
            ctx->pc = 0x2E07BCu;
            goto label_2e07bc;
        }
    }
    ctx->pc = 0x2E07B0u;
    // 0x2e07b0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e07b4:
    // 0x2e07b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e07b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07b8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e07b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e07bc:
    // 0x2e07bc: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E07BCu;
    SET_GPR_U32(ctx, 31, 0x2E07C4u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E07BCu, 0x2E07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07C4u;
label_2e07c4:
    // 0x2e07c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e07c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07c8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E07C8u;
    SET_GPR_U32(ctx, 31, 0x2E07D0u);
    ctx->pc = 0x2E07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E07C8u;
    // 0x2e07cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E07C8u, 0x2E07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07D0u;
label_2e07d0:
    // 0x2e07d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e07d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e07d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e07d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e07dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07e0: 0xc090aa2  jal         func_242A88
    ctx->pc = 0x2E07E0u;
    SET_GPR_U32(ctx, 31, 0x2E07E8u);
    ctx->pc = 0x2E07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E07E0u;
    // 0x2e07e4: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A88u, 0x2E07E0u, 0x2E07E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E07E8u;
label_2e07e8:
    // 0x2e07e8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e07ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e07ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e07f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e07f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e07f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e07f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e07fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e07fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0804: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0804u;
        // 0x2e0808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E080Cu;
    // 0x2e080c: 0x0  nop
    ctx->pc = 0x2e080cu;
    // NOP
    ctx->pc = 0x2e0810u;
}
