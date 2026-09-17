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

// Function: sub_0022E330
// Address: 0x22e330 - 0x22e418
void sub_0022E330_0x22e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E330_0x22e330");
#endif

    switch (ctx->pc) {
        case 0x22e358u: goto label_22e358;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3fcu: goto label_22e3fc;
        default: break;
    }

    ctx->pc = 0x22e330u;

    // 0x22e330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22e334: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22e334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22e338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22e338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22e33c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22e33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22e340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22e348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22e34c: 0x24519338  addiu       $s1, $v0, -0x6CC8
    ctx->pc = 0x22e34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939448));
    // 0x22e350: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x22e350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22e354: 0x0  nop
    ctx->pc = 0x22e354u;
    // NOP
label_22e358:
    // 0x22e358: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22e35c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e360: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22e364: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22e368: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E368u;
    {
        const bool branch_taken_0x22e368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e368) {
            ctx->pc = 0x22E36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E368u;
            // 0x22e36c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E380u;
            goto label_22e380;
        }
    }
    ctx->pc = 0x22E370u;
    // 0x22e370: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x22e370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x22e374: 0xc0895f8  jal         func_2257E0
    ctx->pc = 0x22E374u;
    SET_GPR_U32(ctx, 31, 0x22E37Cu);
    ctx->pc = 0x22E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E374u;
    // 0x22e378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257E0u, 0x22E374u, 0x22E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E37Cu;
label_22e37c:
    // 0x22e37c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22e380:
    // 0x22e380: 0x2a020096  slti        $v0, $s0, 0x96
    ctx->pc = 0x22e380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x22e384: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22E384u;
    {
        const bool branch_taken_0x22e384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E384u;
        // 0x22e388: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e384) {
            ctx->pc = 0x22E358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e358;
        }
    }
    ctx->pc = 0x22E38Cu;
    // 0x22e38c: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x22e38cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x22e390: 0x2650dc50  addiu       $s0, $s2, -0x23B0
    ctx->pc = 0x22e390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958160));
    // 0x22e394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22e394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3ADC50u));
    // 0x22e398: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E398u;
    {
        const bool branch_taken_0x22e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e398) {
            ctx->pc = 0x22E39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E398u;
            // 0x22e39c: 0x26110004  addiu       $s1, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E3ACu;
            goto label_22e3ac;
        }
    }
    ctx->pc = 0x22E3A0u;
    // 0x22e3a0: 0xc093710  jal         func_24DC40
    ctx->pc = 0x22E3A0u;
    SET_GPR_U32(ctx, 31, 0x22E3A8u);
    ctx->pc = 0x22E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3A0u;
    // 0x22e3a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC40u, 0x22E3A0u, 0x22E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3A8u;
label_22e3a8:
    // 0x22e3a8: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x22e3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_22e3ac:
    // 0x22e3ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e3b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22e3b4: 0x0  nop
    ctx->pc = 0x22e3b4u;
    // NOP
label_22e3b8:
    // 0x22e3b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22e3bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e3c0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22E3C0u;
    {
        const bool branch_taken_0x22e3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3c0) {
            ctx->pc = 0x22E3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E3C0u;
            // 0x22e3c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E3D8u;
            goto label_22e3d8;
        }
    }
    ctx->pc = 0x22E3C8u;
    // 0x22e3c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22e3cc: 0xc094708  jal         func_251C20
    ctx->pc = 0x22E3CCu;
    SET_GPR_U32(ctx, 31, 0x22E3D4u);
    ctx->pc = 0x22E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3CCu;
    // 0x22e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C20u, 0x22E3CCu, 0x22E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3D4u;
label_22e3d4:
    // 0x22e3d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22e3d8:
    // 0x22e3d8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x22e3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22e3dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22E3DCu;
    {
        const bool branch_taken_0x22e3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3DCu;
        // 0x22e3e0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3dc) {
            ctx->pc = 0x22E3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e3b8;
        }
    }
    ctx->pc = 0x22E3E4u;
    // 0x22e3e4: 0x2643dc50  addiu       $v1, $s2, -0x23B0
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958160));
    // 0x22e3e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x22e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x22e3ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E3ECu;
    {
        const bool branch_taken_0x22e3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e3ec) {
            ctx->pc = 0x22E3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E3ECu;
            // 0x22e3f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E400u;
            goto label_22e400;
        }
    }
    ctx->pc = 0x22E3F4u;
    // 0x22e3f4: 0xc08ebca  jal         func_23AF28
    ctx->pc = 0x22E3F4u;
    SET_GPR_U32(ctx, 31, 0x22E3FCu);
    ctx->pc = 0x22E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3F4u;
    // 0x22e3f8: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF28u, 0x22E3F4u, 0x22E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3FCu;
label_22e3fc:
    // 0x22e3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e400:
    // 0x22e400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22e400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22e404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22e404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e408: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22e408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e40c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E40Cu;
        // 0x22e410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E414u;
    // 0x22e414: 0x0  nop
    ctx->pc = 0x22e414u;
    // NOP
    ctx->pc = 0x22e418u;
}
