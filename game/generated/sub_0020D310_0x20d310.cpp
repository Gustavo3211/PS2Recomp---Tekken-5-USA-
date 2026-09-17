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

// Function: sub_0020D310
// Address: 0x20d310 - 0x20d3f8
void sub_0020D310_0x20d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D310_0x20d310");
#endif

    switch (ctx->pc) {
        case 0x20d338u: goto label_20d338;
        case 0x20d344u: goto label_20d344;
        case 0x20d350u: goto label_20d350;
        case 0x20d358u: goto label_20d358;
        case 0x20d374u: goto label_20d374;
        case 0x20d380u: goto label_20d380;
        case 0x20d388u: goto label_20d388;
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3ccu: goto label_20d3cc;
        default: break;
    }

    ctx->pc = 0x20d310u;

    // 0x20d310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d318: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x20d318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x20d31c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20d320: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20d320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20d324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20d328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20d32c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20d32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20d330: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x20D330u;
    SET_GPR_U32(ctx, 31, 0x20D338u);
    ctx->pc = 0x20D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D330u;
    // 0x20d334: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x20D330u, 0x20D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D338u;
label_20d338:
    // 0x20d338: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d33c: 0xc09d486  jal         func_275218
    ctx->pc = 0x20D33Cu;
    SET_GPR_U32(ctx, 31, 0x20D344u);
    ctx->pc = 0x20D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D33Cu;
    // 0x20d340: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x20D33Cu, 0x20D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D344u;
label_20d344:
    // 0x20d344: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d348: 0xc0832d6  jal         func_20CB58
    ctx->pc = 0x20D348u;
    SET_GPR_U32(ctx, 31, 0x20D350u);
    ctx->pc = 0x20D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D348u;
    // 0x20d34c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB58u, 0x20D348u, 0x20D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D350u;
label_20d350:
    // 0x20d350: 0xc0832d6  jal         func_20CB58
    ctx->pc = 0x20D350u;
    SET_GPR_U32(ctx, 31, 0x20D358u);
    ctx->pc = 0x20D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D350u;
    // 0x20d354: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB58u, 0x20D350u, 0x20D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D358u;
label_20d358:
    // 0x20d358: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20d358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20d35c: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x20d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x20d360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d364: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x20D364u;
    {
        const bool branch_taken_0x20d364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d364) {
            ctx->pc = 0x20D3B0u;
            goto label_20d3b0;
        }
    }
    ctx->pc = 0x20D36Cu;
    // 0x20d36c: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x20D36Cu;
    SET_GPR_U32(ctx, 31, 0x20D374u);
    ctx->pc = 0x20D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D36Cu;
    // 0x20d370: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x20D36Cu, 0x20D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D374u;
label_20d374:
    // 0x20d374: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d378: 0xc09d480  jal         func_275200
    ctx->pc = 0x20D378u;
    SET_GPR_U32(ctx, 31, 0x20D380u);
    ctx->pc = 0x20D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D378u;
    // 0x20d37c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x20D378u, 0x20D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D380u;
label_20d380:
    // 0x20d380: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x20D380u;
    {
        const bool branch_taken_0x20d380 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x20D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D380u;
        // 0x20d384: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d380) {
            ctx->pc = 0x20D3B0u;
            goto label_20d3b0;
        }
    }
    ctx->pc = 0x20D388u;
label_20d388:
    // 0x20d388: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x20d38c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x20d390: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D390u;
    {
        const bool branch_taken_0x20d390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d390) {
            ctx->pc = 0x20D394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D390u;
            // 0x20d394: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D3A4u;
            goto label_20d3a4;
        }
    }
    ctx->pc = 0x20D398u;
    // 0x20d398: 0xc0832d6  jal         func_20CB58
    ctx->pc = 0x20D398u;
    SET_GPR_U32(ctx, 31, 0x20D3A0u);
    ctx->pc = 0x20D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D398u;
    // 0x20d39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB58u, 0x20D398u, 0x20D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3A0u;
label_20d3a0:
    // 0x20d3a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20d3a4:
    // 0x20d3a4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x20d3a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20D3A8u;
    {
        const bool branch_taken_0x20d3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3A8u;
        // 0x20d3ac: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3a8) {
            ctx->pc = 0x20D388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d388;
        }
    }
    ctx->pc = 0x20D3B0u;
label_20d3b0:
    // 0x20d3b0: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D3B0u;
    {
        const bool branch_taken_0x20d3b0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3B0u;
        // 0x20d3b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3b0) {
            ctx->pc = 0x20D3D8u;
            goto label_20d3d8;
        }
    }
    ctx->pc = 0x20D3B8u;
    // 0x20d3b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3bc: 0x0  nop
    ctx->pc = 0x20d3bcu;
    // NOP
label_20d3c0:
    // 0x20d3c0: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x20d3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x20d3c4: 0xc0832d6  jal         func_20CB58
    ctx->pc = 0x20D3C4u;
    SET_GPR_U32(ctx, 31, 0x20D3CCu);
    ctx->pc = 0x20D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3C4u;
    // 0x20d3c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB58u, 0x20D3C4u, 0x20D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3CCu;
label_20d3cc:
    // 0x20d3cc: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x20d3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x20d3d0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20D3D0u;
    {
        const bool branch_taken_0x20d3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3D0u;
        // 0x20d3d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3d0) {
            ctx->pc = 0x20D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d3c0;
        }
    }
    ctx->pc = 0x20D3D8u;
label_20d3d8:
    // 0x20d3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d3dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d3dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d3e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20d3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d3e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20d3e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d3e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20d3e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d3ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3F0u;
        // 0x20d3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D3F8u;
}
