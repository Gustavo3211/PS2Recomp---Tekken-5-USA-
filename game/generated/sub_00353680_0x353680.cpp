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

// Function: sub_00353680
// Address: 0x353680 - 0x353708
void sub_00353680_0x353680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353680_0x353680");
#endif

    switch (ctx->pc) {
        case 0x3536a4u: goto label_3536a4;
        case 0x3536e8u: goto label_3536e8;
        default: break;
    }

    ctx->pc = 0x353680u;

    // 0x353680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353684: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x353684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x353688: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x353688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35368c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35368cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353690: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353690u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353694: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353698: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x353698u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35369c: 0xc0d5025  jal         func_354094
    ctx->pc = 0x35369Cu;
    SET_GPR_U32(ctx, 31, 0x3536A4u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x35369Cu, 0x3536A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536A4u;
label_3536a4:
    // 0x3536a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3536A4u;
    {
        const bool branch_taken_0x3536a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3536a4) {
            ctx->pc = 0x3536BCu;
            goto label_3536bc;
        }
    }
    ctx->pc = 0x3536ACu;
    // 0x3536ac: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3536acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3536b0: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x3536b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x3536b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3536B4u;
    {
        const bool branch_taken_0x3536b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3536b4) {
            ctx->pc = 0x3536F0u;
            goto label_3536f0;
        }
    }
    ctx->pc = 0x3536BCu;
label_3536bc:
    // 0x3536bc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3536bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3536c0: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x3536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3536c4: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x3536c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x3536c8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3536cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3536ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3536d0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3536d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3536d4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x3536d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3536d8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3536d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3536dc: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3536dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3536e0: 0xc0d5c84  jal         func_357210
    ctx->pc = 0x3536E0u;
    SET_GPR_U32(ctx, 31, 0x3536E8u);
    ctx->pc = 0x357210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357210u, 0x3536E0u, 0x3536E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536E8u;
label_3536e8:
    // 0x3536e8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3536e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3536ec: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3536ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_3536f0:
    // 0x3536f0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3536f0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3536f4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3536f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3536f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3536f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3536fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3536fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353700: 0x3e00008  jr          $ra
    ctx->pc = 0x353700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353708u;
}
