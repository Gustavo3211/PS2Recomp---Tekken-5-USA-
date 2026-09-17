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

// Function: sub_00353790
// Address: 0x353790 - 0x353818
void sub_00353790_0x353790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353790_0x353790");
#endif

    switch (ctx->pc) {
        case 0x3537b4u: goto label_3537b4;
        case 0x3537f8u: goto label_3537f8;
        default: break;
    }

    ctx->pc = 0x353790u;

    // 0x353790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353794: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x353794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x353798: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x353798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35379c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35379cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3537a0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3537a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3537a4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3537a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3537a8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3537a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3537ac: 0xc0d5025  jal         func_354094
    ctx->pc = 0x3537ACu;
    SET_GPR_U32(ctx, 31, 0x3537B4u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x3537ACu, 0x3537B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537B4u;
label_3537b4:
    // 0x3537b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3537B4u;
    {
        const bool branch_taken_0x3537b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3537b4) {
            ctx->pc = 0x3537CCu;
            goto label_3537cc;
        }
    }
    ctx->pc = 0x3537BCu;
    // 0x3537bc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3537bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3537c0: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x3537c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x3537c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3537C4u;
    {
        const bool branch_taken_0x3537c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3537c4) {
            ctx->pc = 0x353800u;
            goto label_353800;
        }
    }
    ctx->pc = 0x3537CCu;
label_3537cc:
    // 0x3537cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3537ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3537d0: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x3537d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3537d4: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x3537d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x3537d8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3537d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3537dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3537dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3537e0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3537e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3537e4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x3537e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3537e8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3537e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3537ec: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3537ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3537f0: 0xc0d5e14  jal         func_357850
    ctx->pc = 0x3537F0u;
    SET_GPR_U32(ctx, 31, 0x3537F8u);
    ctx->pc = 0x357850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357850u, 0x3537F0u, 0x3537F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3537F8u;
label_3537f8:
    // 0x3537f8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3537f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3537fc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3537fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_353800:
    // 0x353800: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353800u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353804: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x353804u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353808: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x353808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35380c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35380cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353810: 0x3e00008  jr          $ra
    ctx->pc = 0x353810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353818u;
}
