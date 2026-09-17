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

// Function: sub_002E0810
// Address: 0x2e0810 - 0x2e0890
void sub_002E0810_0x2e0810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0810_0x2e0810");
#endif

    switch (ctx->pc) {
        case 0x2e0858u: goto label_2e0858;
        case 0x2e0864u: goto label_2e0864;
        case 0x2e0870u: goto label_2e0870;
        default: break;
    }

    ctx->pc = 0x2e0810u;

    // 0x2e0810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e081c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0820: 0x26110084  addiu       $s1, $s0, 0x84
    ctx->pc = 0x2e0820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2e0824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0828: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e0828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e082c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E082Cu;
    {
        const bool branch_taken_0x2e082c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e082c) {
            ctx->pc = 0x2E0830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E082Cu;
            // 0x2e0830: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0848u;
            goto label_2e0848;
        }
    }
    ctx->pc = 0x2E0834u;
    // 0x2e0834: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e0834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e0838: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e083c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E083Cu;
    {
        const bool branch_taken_0x2e083c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e083c) {
            ctx->pc = 0x2E0850u;
            goto label_2e0850;
        }
    }
    ctx->pc = 0x2E0844u;
    // 0x2e0844: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e0844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e0848:
    // 0x2e0848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e084c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e084cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e0850:
    // 0x2e0850: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x2E0850u;
    SET_GPR_U32(ctx, 31, 0x2E0858u);
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x2E0850u, 0x2E0858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0858u;
label_2e0858:
    // 0x2e0858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e085c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E085Cu;
    SET_GPR_U32(ctx, 31, 0x2E0864u);
    ctx->pc = 0x2E0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E085Cu;
    // 0x2e0860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E085Cu, 0x2E0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0864u;
label_2e0864:
    // 0x2e0864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0868: 0xc09206e  jal         func_2481B8
    ctx->pc = 0x2E0868u;
    SET_GPR_U32(ctx, 31, 0x2E0870u);
    ctx->pc = 0x2E086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0868u;
    // 0x2e086c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2481B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2481B8u, 0x2E0868u, 0x2E0870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0870u;
label_2e0870:
    // 0x2e0870: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e0870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e0874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0878: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e087c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e087cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0880: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e0880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e0884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0888: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0888u;
        // 0x2e088c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0890u;
}
