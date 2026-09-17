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

// Function: sub_0034B838
// Address: 0x34b838 - 0x34b8c8
void sub_0034B838_0x34b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B838_0x34b838");
#endif

    switch (ctx->pc) {
        case 0x34b868u: goto label_34b868;
        case 0x34b898u: goto label_34b898;
        case 0x34b8a4u: goto label_34b8a4;
        case 0x34b8b0u: goto label_34b8b0;
        default: break;
    }

    ctx->pc = 0x34b838u;

    // 0x34b838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34b83c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x34b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x34b840: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34b844: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34b844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b848: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x34b848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x34b84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b850: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34b850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x34b854: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x34b854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x34b858: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x34b858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x34b85c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x34b85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b860: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34B860u;
    SET_GPR_U32(ctx, 31, 0x34B868u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34B860u, 0x34B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B868u;
label_34b868:
    // 0x34b868: 0xaf82cbc4  sw          $v0, -0x343C($gp)
    ctx->pc = 0x34b868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953924), GPR_U32(ctx, 2));
    // 0x34b86c: 0x8f82cbc4  lw          $v0, -0x343C($gp)
    ctx->pc = 0x34b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953924)));
    // 0x34b870: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B870u;
    {
        const bool branch_taken_0x34b870 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34b870) {
            ctx->pc = 0x34B880u;
            goto label_34b880;
        }
    }
    ctx->pc = 0x34B878u;
    // 0x34b878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34B878u;
    {
        const bool branch_taken_0x34b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b878) {
            ctx->pc = 0x34B8B0u;
            goto label_34b8b0;
        }
    }
    ctx->pc = 0x34B880u;
label_34b880:
    // 0x34b880: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x34b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x34b884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34b88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b890: 0xc0d2e32  jal         func_34B8C8
    ctx->pc = 0x34B890u;
    SET_GPR_U32(ctx, 31, 0x34B898u);
    ctx->pc = 0x34B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B8C8u, 0x34B890u, 0x34B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B898u;
label_34b898:
    // 0x34b898: 0x8f84cbc4  lw          $a0, -0x343C($gp)
    ctx->pc = 0x34b898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953924)));
    // 0x34b89c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34B89Cu;
    SET_GPR_U32(ctx, 31, 0x34B8A4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34B89Cu, 0x34B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8A4u;
label_34b8a4:
    // 0x34b8a4: 0x8f84cbc4  lw          $a0, -0x343C($gp)
    ctx->pc = 0x34b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953924)));
    // 0x34b8a8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34B8A8u;
    SET_GPR_U32(ctx, 31, 0x34B8B0u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34B8A8u, 0x34B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8B0u;
label_34b8b0:
    // 0x34b8b0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34b8b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b8b4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x34b8b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b8b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34b8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b8bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34b8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34b8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x34B8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B8C8u;
}
