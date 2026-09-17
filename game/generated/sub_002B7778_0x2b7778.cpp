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

// Function: sub_002B7778
// Address: 0x2b7778 - 0x2b7840
void sub_002B7778_0x2b7778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7778_0x2b7778");
#endif

    switch (ctx->pc) {
        case 0x2b77a4u: goto label_2b77a4;
        case 0x2b77bcu: goto label_2b77bc;
        case 0x2b77e0u: goto label_2b77e0;
        case 0x2b77f8u: goto label_2b77f8;
        case 0x2b7804u: goto label_2b7804;
        case 0x2b7828u: goto label_2b7828;
        default: break;
    }

    ctx->pc = 0x2b7778u;

    // 0x2b7778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b777c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b777cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b7780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7784: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2b7784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2b7788: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b7788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b778c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2b778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2b7790: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x2b7790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b7794: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2b7794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2b7798: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2b7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2b779c: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B779Cu;
    SET_GPR_U32(ctx, 31, 0x2B77A4u);
    ctx->pc = 0x2B77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B779Cu;
    // 0x2b77a0: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B779Cu, 0x2B77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77A4u;
label_2b77a4:
    // 0x2b77a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b77a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b77a8: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x2b77a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2b77ac: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x2b77acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2b77b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b77b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b77b4: 0xc0adc0c  jal         func_2B7030
    ctx->pc = 0x2B77B4u;
    SET_GPR_U32(ctx, 31, 0x2B77BCu);
    ctx->pc = 0x2B77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77B4u;
    // 0x2b77b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7030u, 0x2B77B4u, 0x2B77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77BCu;
label_2b77bc:
    // 0x2b77bc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2b77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2b77c0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B77C0u;
    {
        const bool branch_taken_0x2b77c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77C0u;
        // 0x2b77c4: 0x24a54320  addiu       $a1, $a1, 0x4320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77c0) {
            ctx->pc = 0x2B7818u;
            goto label_2b7818;
        }
    }
    ctx->pc = 0x2B77C8u;
    // 0x2b77c8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2b77c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2b77cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b77d0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2b77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b77d4: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x2b77d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b77d8: 0xc0adc86  jal         func_2B7218
    ctx->pc = 0x2B77D8u;
    SET_GPR_U32(ctx, 31, 0x2B77E0u);
    ctx->pc = 0x2B77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77D8u;
    // 0x2b77dc: 0x43300a  movz        $a2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7218u, 0x2B77D8u, 0x2B77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77E0u;
label_2b77e0:
    // 0x2b77e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b77e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b77e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b77e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b77e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B77E8u;
    {
        const bool branch_taken_0x2b77e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B77E8u;
        // 0x2b77ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b77e8) {
            ctx->pc = 0x2B7818u;
            goto label_2b7818;
        }
    }
    ctx->pc = 0x2B77F0u;
    // 0x2b77f0: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B77F0u;
    SET_GPR_U32(ctx, 31, 0x2B77F8u);
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B77F0u, 0x2B77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B77F8u;
label_2b77f8:
    // 0x2b77f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b77f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b77fc: 0xc0ada6c  jal         func_2B69B0
    ctx->pc = 0x2B77FCu;
    SET_GPR_U32(ctx, 31, 0x2B7804u);
    ctx->pc = 0x2B7800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B77FCu;
    // 0x2b7800: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69B0u, 0x2B77FCu, 0x2B7804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7804u;
label_2b7804:
    // 0x2b7804: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b7804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7808: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b7808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b780c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2b780cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2b7810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7810u;
    {
        const bool branch_taken_0x2b7810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7810u;
        // 0x2b7814: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7810) {
            ctx->pc = 0x2B7820u;
            goto label_2b7820;
        }
    }
    ctx->pc = 0x2B7818u;
label_2b7818:
    // 0x2b7818: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b7818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b781c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b781cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2b7820:
    // 0x2b7820: 0xc0adccc  jal         func_2B7330
    ctx->pc = 0x2B7820u;
    SET_GPR_U32(ctx, 31, 0x2B7828u);
    ctx->pc = 0x2B7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7820u;
    // 0x2b7824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7330u, 0x2B7820u, 0x2B7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7828u;
label_2b7828:
    // 0x2b7828: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b7828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b782c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2b782cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b7830: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2b7830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7834: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2b7834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b7838: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7838u;
        // 0x2b783c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7840u;
}
