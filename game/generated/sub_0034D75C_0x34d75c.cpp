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

// Function: sub_0034D75C
// Address: 0x34d75c - 0x34d830
void sub_0034D75C_0x34d75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D75C_0x34d75c");
#endif

    switch (ctx->pc) {
        case 0x34d7a0u: goto label_34d7a0;
        case 0x34d7e0u: goto label_34d7e0;
        case 0x34d808u: goto label_34d808;
        case 0x34d814u: goto label_34d814;
        default: break;
    }

    ctx->pc = 0x34d75cu;

    // 0x34d75c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34d75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34d760: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34d764: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34d768: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34d768u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d76c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34d770: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34d770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34d774: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34d774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34d778: 0xafc00028  sw          $zero, 0x28($fp)
    ctx->pc = 0x34d778u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
    // 0x34d77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d780: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x34d780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x34d784: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34d784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x34d788: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34d788u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x34d78c: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x34d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x34d790: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34d790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x34d794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34d794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d798: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x34D798u;
    SET_GPR_U32(ctx, 31, 0x34D7A0u);
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x34D798u, 0x34D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7A0u;
label_34d7a0:
    // 0x34d7a0: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x34d7a4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d7a8: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D7A8u;
    {
        const bool branch_taken_0x34d7a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34d7a8) {
            ctx->pc = 0x34D7C0u;
            goto label_34d7c0;
        }
    }
    ctx->pc = 0x34D7B0u;
    // 0x34d7b0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x34d7b4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x34d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x34d7b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x34D7B8u;
    {
        const bool branch_taken_0x34d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d7b8) {
            ctx->pc = 0x34D818u;
            goto label_34d818;
        }
    }
    ctx->pc = 0x34D7C0u;
label_34d7c0:
    // 0x34d7c0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d7c4: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34d7c8: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34d7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34d7cc: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x34d7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x34d7d0: 0x24e7f09c  addiu       $a3, $a3, -0xF64
    ctx->pc = 0x34d7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963356));
    // 0x34d7d4: 0x8fc80014  lw          $t0, 0x14($fp)
    ctx->pc = 0x34d7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d7d8: 0xc0d360c  jal         func_34D830
    ctx->pc = 0x34D7D8u;
    SET_GPR_U32(ctx, 31, 0x34D7E0u);
    ctx->pc = 0x34D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D830u, 0x34D7D8u, 0x34D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D7E0u;
label_34d7e0:
    // 0x34d7e0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34d7e4: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d7e8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D7E8u;
    {
        const bool branch_taken_0x34d7e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34d7e8) {
            ctx->pc = 0x34D7FCu;
            goto label_34d7fc;
        }
    }
    ctx->pc = 0x34D7F0u;
    // 0x34d7f0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34d7f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34D7F4u;
    {
        const bool branch_taken_0x34d7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d7f4) {
            ctx->pc = 0x34D818u;
            goto label_34d818;
        }
    }
    ctx->pc = 0x34D7FCu;
label_34d7fc:
    // 0x34d7fc: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d800: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x34D800u;
    SET_GPR_U32(ctx, 31, 0x34D808u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x34D800u, 0x34D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D808u;
label_34d808:
    // 0x34d808: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x34d808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x34d80c: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x34D80Cu;
    SET_GPR_U32(ctx, 31, 0x34D814u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x34D80Cu, 0x34D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D814u;
label_34d814:
    // 0x34d814: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34d818:
    // 0x34d818: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34d818u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d81c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34d81cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d820: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34d820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34d824: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34d824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34d828: 0x3e00008  jr          $ra
    ctx->pc = 0x34D828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D830u;
}
