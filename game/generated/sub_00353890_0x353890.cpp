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

// Function: sub_00353890
// Address: 0x353890 - 0x353934
void sub_00353890_0x353890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353890_0x353890");
#endif

    switch (ctx->pc) {
        case 0x3538b0u: goto label_3538b0;
        case 0x3538e4u: goto label_3538e4;
        case 0x353914u: goto label_353914;
        default: break;
    }

    ctx->pc = 0x353890u;

    // 0x353890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353894: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x353894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x353898: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x353898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35389c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35389cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538a0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3538a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3538a4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3538a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3538a8: 0xc0d5025  jal         func_354094
    ctx->pc = 0x3538A8u;
    SET_GPR_U32(ctx, 31, 0x3538B0u);
    ctx->pc = 0x354094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354094u, 0x3538A8u, 0x3538B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3538B0u;
label_3538b0:
    // 0x3538b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3538B0u;
    {
        const bool branch_taken_0x3538b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3538b0) {
            ctx->pc = 0x3538C8u;
            goto label_3538c8;
        }
    }
    ctx->pc = 0x3538B8u;
    // 0x3538b8: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3538b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3538bc: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x3538bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x3538c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3538C0u;
    {
        const bool branch_taken_0x3538c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538c0) {
            ctx->pc = 0x35391Cu;
            goto label_35391c;
        }
    }
    ctx->pc = 0x3538C8u;
label_3538c8:
    // 0x3538c8: 0x27c2000c  addiu       $v0, $fp, 0xC
    ctx->pc = 0x3538c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x3538cc: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x3538ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x3538d0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3538d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3538d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3538d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3538d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3538dc: 0xc0d4f63  jal         func_353D8C
    ctx->pc = 0x3538DCu;
    SET_GPR_U32(ctx, 31, 0x3538E4u);
    ctx->pc = 0x353D8Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353D8Cu, 0x3538DCu, 0x3538E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3538E4u;
label_3538e4:
    // 0x3538e4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3538e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3538e8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3538e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3538ec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3538ECu;
    {
        const bool branch_taken_0x3538ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3538ec) {
            ctx->pc = 0x353900u;
            goto label_353900;
        }
    }
    ctx->pc = 0x3538F4u;
    // 0x3538f4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3538f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3538f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3538F8u;
    {
        const bool branch_taken_0x3538f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3538f8) {
            ctx->pc = 0x35391Cu;
            goto label_35391c;
        }
    }
    ctx->pc = 0x353900u;
label_353900:
    // 0x353900: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x353900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x353904: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x353904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x353908: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x353908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35390c: 0xc0d5e67  jal         func_35799C
    ctx->pc = 0x35390Cu;
    SET_GPR_U32(ctx, 31, 0x353914u);
    ctx->pc = 0x35799Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35799Cu, 0x35390Cu, 0x353914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353914u;
label_353914:
    // 0x353914: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353914u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x353918: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35391c:
    // 0x35391c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35391cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353920: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x353920u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353924: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x353924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x353928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35392c: 0x3e00008  jr          $ra
    ctx->pc = 0x35392Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35392Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353934u;
}
