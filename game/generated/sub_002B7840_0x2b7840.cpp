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

// Function: sub_002B7840
// Address: 0x2b7840 - 0x2b7928
void sub_002B7840_0x2b7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7840_0x2b7840");
#endif

    switch (ctx->pc) {
        case 0x2b786cu: goto label_2b786c;
        case 0x2b787cu: goto label_2b787c;
        case 0x2b7894u: goto label_2b7894;
        case 0x2b78b8u: goto label_2b78b8;
        case 0x2b78d0u: goto label_2b78d0;
        case 0x2b78dcu: goto label_2b78dc;
        case 0x2b7900u: goto label_2b7900;
        case 0x2b790cu: goto label_2b790c;
        default: break;
    }

    ctx->pc = 0x2b7840u;

    // 0x2b7840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b7844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7848: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b7848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b784c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b784cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7850: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2b7850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2b7854: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b7854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b7858: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2b7858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2b785c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b7860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b7864: 0xc0adcf0  jal         func_2B73C0
    ctx->pc = 0x2B7864u;
    SET_GPR_U32(ctx, 31, 0x2B786Cu);
    ctx->pc = 0x2B7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7864u;
    // 0x2b7868: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B73C0u, 0x2B7864u, 0x2B786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B786Cu;
label_2b786c:
    // 0x2b786c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b7870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7874: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B7874u;
    SET_GPR_U32(ctx, 31, 0x2B787Cu);
    ctx->pc = 0x2B7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7874u;
    // 0x2b7878: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B7874u, 0x2B787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B787Cu;
label_2b787c:
    // 0x2b787c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7880: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x2b7880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2b7884: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x2b7884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2b7888: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b788c: 0xc0adc0c  jal         func_2B7030
    ctx->pc = 0x2B788Cu;
    SET_GPR_U32(ctx, 31, 0x2B7894u);
    ctx->pc = 0x2B7890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B788Cu;
    // 0x2b7890: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7030u, 0x2B788Cu, 0x2B7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7894u;
label_2b7894:
    // 0x2b7894: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2b7894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2b7898: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B7898u;
    {
        const bool branch_taken_0x2b7898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7898u;
        // 0x2b789c: 0x24a54320  addiu       $a1, $a1, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7898) {
            ctx->pc = 0x2B78F0u;
            goto label_2b78f0;
        }
    }
    ctx->pc = 0x2B78A0u;
    // 0x2b78a0: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2b78a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b78a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b78a8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2b78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b78ac: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x2b78acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b78b0: 0xc0adc86  jal         func_2B7218
    ctx->pc = 0x2B78B0u;
    SET_GPR_U32(ctx, 31, 0x2B78B8u);
    ctx->pc = 0x2B78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B78B0u;
    // 0x2b78b4: 0x43300a  movz        $a2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7218u, 0x2B78B0u, 0x2B78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B78B8u;
label_2b78b8:
    // 0x2b78b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b78b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b78bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B78C0u;
    {
        const bool branch_taken_0x2b78c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78C0u;
        // 0x2b78c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78c0) {
            ctx->pc = 0x2B78F0u;
            goto label_2b78f0;
        }
    }
    ctx->pc = 0x2B78C8u;
    // 0x2b78c8: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B78C8u;
    SET_GPR_U32(ctx, 31, 0x2B78D0u);
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B78C8u, 0x2B78D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B78D0u;
label_2b78d0:
    // 0x2b78d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b78d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b78d4: 0xc0ada6c  jal         func_2B69B0
    ctx->pc = 0x2B78D4u;
    SET_GPR_U32(ctx, 31, 0x2B78DCu);
    ctx->pc = 0x2B78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B78D4u;
    // 0x2b78d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69B0u, 0x2B78D4u, 0x2B78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B78DCu;
label_2b78dc:
    // 0x2b78dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b78e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b78e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b78e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B78E8u;
    {
        const bool branch_taken_0x2b78e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78E8u;
        // 0x2b78ec: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b78e8) {
            ctx->pc = 0x2B78F8u;
            goto label_2b78f8;
        }
    }
    ctx->pc = 0x2B78F0u;
label_2b78f0:
    // 0x2b78f0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b78f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b78f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2b78f8:
    // 0x2b78f8: 0xc0adccc  jal         func_2B7330
    ctx->pc = 0x2B78F8u;
    SET_GPR_U32(ctx, 31, 0x2B7900u);
    ctx->pc = 0x2B78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B78F8u;
    // 0x2b78fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7330u, 0x2B78F8u, 0x2B7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7900u;
label_2b7900:
    // 0x2b7900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7904: 0xc0adcf0  jal         func_2B73C0
    ctx->pc = 0x2B7904u;
    SET_GPR_U32(ctx, 31, 0x2B790Cu);
    ctx->pc = 0x2B7908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7904u;
    // 0x2b7908: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B73C0u, 0x2B7904u, 0x2B790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B790Cu;
label_2b790c:
    // 0x2b790c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b790cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7910: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2b7910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7914: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b7914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7918: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2b7918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b791c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B791Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B791Cu;
        // 0x2b7920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B791Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7924u;
    // 0x2b7924: 0x0  nop
    ctx->pc = 0x2b7924u;
    // NOP
    ctx->pc = 0x2b7928u;
}
