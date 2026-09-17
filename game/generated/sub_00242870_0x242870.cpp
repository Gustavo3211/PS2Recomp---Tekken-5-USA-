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

// Function: sub_00242870
// Address: 0x242870 - 0x242960
void sub_00242870_0x242870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242870_0x242870");
#endif

    switch (ctx->pc) {
        case 0x2428b0u: goto label_2428b0;
        case 0x2428c0u: goto label_2428c0;
        case 0x2428d0u: goto label_2428d0;
        case 0x2428dcu: goto label_2428dc;
        case 0x2428e8u: goto label_2428e8;
        case 0x2428f4u: goto label_2428f4;
        default: break;
    }

    ctx->pc = 0x242870u;

    // 0x242870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x242874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24287c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x242880: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x242880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242884: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x242884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x242888: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x242888u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24288c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x242890: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x242890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x242894: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x242894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x242898: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x242898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24289c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x24289Cu;
    {
        const bool branch_taken_0x24289c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2428A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24289Cu;
        // 0x2428a0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24289c) {
            ctx->pc = 0x242938u;
            goto label_242938;
        }
    }
    ctx->pc = 0x2428A4u;
    // 0x2428a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2428a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428a8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2428A8u;
    SET_GPR_U32(ctx, 31, 0x2428B0u);
    ctx->pc = 0x2428ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428A8u;
    // 0x2428ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2428A8u, 0x2428B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428B0u;
label_2428b0:
    // 0x2428b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2428b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2428b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428b8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2428B8u;
    SET_GPR_U32(ctx, 31, 0x2428C0u);
    ctx->pc = 0x2428BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428B8u;
    // 0x2428bc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2428B8u, 0x2428C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428C0u;
label_2428c0:
    // 0x2428c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2428c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2428c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2428c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428c8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x2428C8u;
    SET_GPR_U32(ctx, 31, 0x2428D0u);
    ctx->pc = 0x2428CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428C8u;
    // 0x2428cc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x2428C8u, 0x2428D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428D0u;
label_2428d0:
    // 0x2428d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2428d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428d4: 0xc097d14  jal         func_25F450
    ctx->pc = 0x2428D4u;
    SET_GPR_U32(ctx, 31, 0x2428DCu);
    ctx->pc = 0x2428D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428D4u;
    // 0x2428d8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2428D4u, 0x2428DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428DCu;
label_2428dc:
    // 0x2428dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2428dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428e0: 0xc097d14  jal         func_25F450
    ctx->pc = 0x2428E0u;
    SET_GPR_U32(ctx, 31, 0x2428E8u);
    ctx->pc = 0x2428E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428E0u;
    // 0x2428e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2428E0u, 0x2428E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428E8u;
label_2428e8:
    // 0x2428e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2428e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428ec: 0xc097d14  jal         func_25F450
    ctx->pc = 0x2428ECu;
    SET_GPR_U32(ctx, 31, 0x2428F4u);
    ctx->pc = 0x2428F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2428ECu;
    // 0x2428f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F450u, 0x2428ECu, 0x2428F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2428F4u;
label_2428f4:
    // 0x2428f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2428f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428f8: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x2428f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2428fc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2428FCu;
    {
        const bool branch_taken_0x2428fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2428fc) {
            ctx->pc = 0x242900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2428FCu;
            // 0x242900: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24293Cu;
            goto label_24293c;
        }
    }
    ctx->pc = 0x242904u;
    // 0x242904: 0x5612000d  bnel        $s0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x242904u;
    {
        const bool branch_taken_0x242904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x242904) {
            ctx->pc = 0x242908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242904u;
            // 0x242908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24293Cu;
            goto label_24293c;
        }
    }
    ctx->pc = 0x24290Cu;
    // 0x24290c: 0x5603000b  bnel        $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24290Cu;
    {
        const bool branch_taken_0x24290c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x24290c) {
            ctx->pc = 0x242910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24290Cu;
            // 0x242910: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24293Cu;
            goto label_24293c;
        }
    }
    ctx->pc = 0x242914u;
    // 0x242914: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x242914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x242918: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242918u;
    {
        const bool branch_taken_0x242918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242918) {
            ctx->pc = 0x24291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242918u;
            // 0x24291c: 0xae350054  sw          $s5, 0x54($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242920u;
            goto label_242920;
        }
    }
    ctx->pc = 0x242920u;
label_242920:
    // 0x242920: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x242920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x242924: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242924u;
    {
        const bool branch_taken_0x242924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242924) {
            ctx->pc = 0x242928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242924u;
            // 0x242928: 0xae340058  sw          $s4, 0x58($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24292Cu;
            goto label_24292c;
        }
    }
    ctx->pc = 0x24292Cu;
label_24292c:
    // 0x24292c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x24292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x242930: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x242930u;
    {
        const bool branch_taken_0x242930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242930) {
            ctx->pc = 0x242934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242930u;
            // 0x242934: 0xae33005c  sw          $s3, 0x5C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242938u;
            goto label_242938;
        }
    }
    ctx->pc = 0x242938u;
label_242938:
    // 0x242938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24293c:
    // 0x24293c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24293cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x242944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x242948: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x242948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24294c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24294cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x242950: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x242950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242954: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x242954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x242958: 0x3e00008  jr          $ra
    ctx->pc = 0x242958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242958u;
        // 0x24295c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242960u;
}
