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

// Function: sub_004AA7B0
// Address: 0x4aa7b0 - 0x4aa910
void sub_004AA7B0_0x4aa7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA7B0_0x4aa7b0");
#endif

    switch (ctx->pc) {
        case 0x4aa804u: goto label_4aa804;
        case 0x4aa838u: goto label_4aa838;
        case 0x4aa850u: goto label_4aa850;
        case 0x4aa864u: goto label_4aa864;
        case 0x4aa8b8u: goto label_4aa8b8;
        case 0x4aa8d0u: goto label_4aa8d0;
        case 0x4aa8e4u: goto label_4aa8e4;
        default: break;
    }

    ctx->pc = 0x4aa7b0u;

label_4aa7b0:
    // 0x4aa7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aa7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aa7b4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4aa7b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4aa7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4aa7bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4aa7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa7c0: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x4aa7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa7c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4aa7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa7c8: 0x85270016  lh          $a3, 0x16($t1)
    ctx->pc = 0x4aa7c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 22)));
    // 0x4aa7cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4aa7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa7d0: 0x85220014  lh          $v0, 0x14($t1)
    ctx->pc = 0x4aa7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4aa7d4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4aa7d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4aa7d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aa7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa7dc: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x4aa7dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x4aa7e0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4aa7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4aa7e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4aa7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa7e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aa7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aa7ec: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4aa7ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4aa7f0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4aa7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4aa7f4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x4aa7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aa7f8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4aa7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4aa7fc: 0xc12a71c  jal         func_4A9C70
    ctx->pc = 0x4AA7FCu;
    SET_GPR_U32(ctx, 31, 0x4AA804u);
    ctx->pc = 0x4AA800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA7FCu;
    // 0x4aa800: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C70u, 0x4AA7FCu, 0x4AA804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA804u;
label_4aa804:
    // 0x4aa804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aa804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa808: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA808u;
        // 0x4aa80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA810u;
    // 0x4aa810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa824: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa828: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa82c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa830: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA830u;
    SET_GPR_U32(ctx, 31, 0x4AA838u);
    ctx->pc = 0x4AA834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA830u;
    // 0x4aa834: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA830u, 0x4AA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA838u;
label_4aa838:
    // 0x4aa838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa83c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa844: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa848: 0xc12a9bc  jal         func_4AA6F0
    ctx->pc = 0x4AA848u;
    SET_GPR_U32(ctx, 31, 0x4AA850u);
    ctx->pc = 0x4AA84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA848u;
    // 0x4aa84c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA6F0u, 0x4AA848u, 0x4AA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA850u;
label_4aa850:
    // 0x4aa850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa854: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa858: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa85c: 0xc12a9d4  jal         func_4AA750
    ctx->pc = 0x4AA85Cu;
    SET_GPR_U32(ctx, 31, 0x4AA864u);
    ctx->pc = 0x4AA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA85Cu;
    // 0x4aa860: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA750u, 0x4AA85Cu, 0x4AA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA864u;
label_4aa864:
    // 0x4aa864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa870: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa878: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa87c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa87cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa888: 0x812a9ec  j           func_4AA7B0
    ctx->pc = 0x4AA888u;
    ctx->pc = 0x4AA88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA888u;
    // 0x4aa88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA7B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4aa7b0;
    ctx->pc = 0x4AA890u;
    // 0x4aa890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa898: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa8a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa8ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa8b0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA8B0u;
    SET_GPR_U32(ctx, 31, 0x4AA8B8u);
    ctx->pc = 0x4AA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA8B0u;
    // 0x4aa8b4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA8B0u, 0x4AA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA8B8u;
label_4aa8b8:
    // 0x4aa8b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8c8: 0xc12a9bc  jal         func_4AA6F0
    ctx->pc = 0x4AA8C8u;
    SET_GPR_U32(ctx, 31, 0x4AA8D0u);
    ctx->pc = 0x4AA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA8C8u;
    // 0x4aa8cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA6F0u, 0x4AA8C8u, 0x4AA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA8D0u;
label_4aa8d0:
    // 0x4aa8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8dc: 0xc12a9ec  jal         func_4AA7B0
    ctx->pc = 0x4AA8DCu;
    SET_GPR_U32(ctx, 31, 0x4AA8E4u);
    ctx->pc = 0x4AA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA8DCu;
    // 0x4aa8e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA7B0u;
    goto label_4aa7b0;
    ctx->pc = 0x4AA8E4u;
label_4aa8e4:
    // 0x4aa8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa8f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa8f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa8fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa908: 0x812a9d4  j           func_4AA750
    ctx->pc = 0x4AA908u;
    ctx->pc = 0x4AA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA908u;
    // 0x4aa90c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA750u;
    sub_004AA750_0x4aa750(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA910u;
}
