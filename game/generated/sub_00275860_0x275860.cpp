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

// Function: sub_00275860
// Address: 0x275860 - 0x275908
void sub_00275860_0x275860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275860_0x275860");
#endif

    switch (ctx->pc) {
        case 0x275884u: goto label_275884;
        case 0x275898u: goto label_275898;
        case 0x2758ccu: goto label_2758cc;
        default: break;
    }

    ctx->pc = 0x275860u;

    // 0x275860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x275868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27586c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27586cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x275870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x275870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x275874: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x275874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x275878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27587c: 0xc09d486  jal         func_275218
    ctx->pc = 0x27587Cu;
    SET_GPR_U32(ctx, 31, 0x275884u);
    ctx->pc = 0x275880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27587Cu;
    // 0x275880: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x27587Cu, 0x275884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275884u;
label_275884:
    // 0x275884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275888: 0x8f82ae98  lw          $v0, -0x5168($gp)
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946456)));
    // 0x27588c: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x27588Cu;
    {
        const bool branch_taken_0x27588c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x275890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27588Cu;
        // 0x275890: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27588c) {
            ctx->pc = 0x2758ECu;
            goto label_2758ec;
        }
    }
    ctx->pc = 0x275894u;
    // 0x275894: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x275894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_275898:
    // 0x275898: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x275898u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27589c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27589cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2758a0: 0x2781ca48  addiu       $at, $gp, -0x35B8
    ctx->pc = 0x2758a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953544));
    // 0x2758a4: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x2758a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2758a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2758a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2758acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2758b0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2758b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2758b4: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x2758b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x2758b8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2758b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x2758bc: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x2758bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x2758c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2758c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2758c4: 0xc07ce16  jal         func_1F3858
    ctx->pc = 0x2758C4u;
    SET_GPR_U32(ctx, 31, 0x2758CCu);
    ctx->pc = 0x2758C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2758C4u;
    // 0x2758c8: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3858u, 0x2758C4u, 0x2758CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758CCu;
label_2758cc:
    // 0x2758cc: 0xae330048  sw          $s3, 0x48($s1)
    ctx->pc = 0x2758ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x2758d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2758d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2758d4: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x2758d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
    // 0x2758d8: 0x8f82ae98  lw          $v0, -0x5168($gp)
    ctx->pc = 0x2758d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946456)));
    // 0x2758dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2758dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2758e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2758E0u;
    {
        const bool branch_taken_0x2758e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2758E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758E0u;
        // 0x2758e4: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758e0) {
            ctx->pc = 0x275898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275898;
        }
    }
    ctx->pc = 0x2758E8u;
    // 0x2758e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2758e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2758ec:
    // 0x2758ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2758ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2758f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2758f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2758f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2758f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2758f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2758f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2758fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2758FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758FCu;
        // 0x275900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2758FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275904u;
    // 0x275904: 0x0  nop
    ctx->pc = 0x275904u;
    // NOP
    ctx->pc = 0x275908u;
}
