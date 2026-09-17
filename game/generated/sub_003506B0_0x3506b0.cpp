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

// Function: sub_003506B0
// Address: 0x3506b0 - 0x350760
void sub_003506B0_0x3506b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003506B0_0x3506b0");
#endif

    switch (ctx->pc) {
        case 0x3506ccu: goto label_3506cc;
        case 0x3506e4u: goto label_3506e4;
        case 0x350744u: goto label_350744;
        default: break;
    }

    ctx->pc = 0x3506b0u;

    // 0x3506b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3506b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3506b4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3506b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3506b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3506b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3506bc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3506bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506c0: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x3506c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x3506c4: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3506C4u;
    SET_GPR_U32(ctx, 31, 0x3506CCu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3506C4u, 0x3506CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506CCu;
label_3506cc:
    // 0x3506cc: 0x8f82cbdc  lw          $v0, -0x3424($gp)
    ctx->pc = 0x3506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953948)));
    // 0x3506d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3506D0u;
    {
        const bool branch_taken_0x3506d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3506d0) {
            ctx->pc = 0x3506F0u;
            goto label_3506f0;
        }
    }
    ctx->pc = 0x3506D8u;
    // 0x3506d8: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x3506d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x3506dc: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3506DCu;
    SET_GPR_U32(ctx, 31, 0x3506E4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3506DCu, 0x3506E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506E4u;
label_3506e4:
    // 0x3506e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3506e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3506E8u;
    {
        const bool branch_taken_0x3506e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506e8) {
            ctx->pc = 0x350748u;
            goto label_350748;
        }
    }
    ctx->pc = 0x3506F0u;
label_3506f0:
    // 0x3506f0: 0x8f82cbdc  lw          $v0, -0x3424($gp)
    ctx->pc = 0x3506f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953948)));
    // 0x3506f4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3506f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3506f8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3506f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3506fc: 0x8f82cbd4  lw          $v0, -0x342C($gp)
    ctx->pc = 0x3506fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953940)));
    // 0x350700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x350700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x350704: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x350708: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x350708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35070c: 0xaf82cbdc  sw          $v0, -0x3424($gp)
    ctx->pc = 0x35070cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953948), GPR_U32(ctx, 2));
    // 0x350710: 0x8f83cbd4  lw          $v1, -0x342C($gp)
    ctx->pc = 0x350710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953940)));
    // 0x350714: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x350714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x350718: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350718u;
    {
        const bool branch_taken_0x350718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350718) {
            ctx->pc = 0x35072Cu;
            goto label_35072c;
        }
    }
    ctx->pc = 0x350720u;
    // 0x350720: 0xaf80cbd4  sw          $zero, -0x342C($gp)
    ctx->pc = 0x350720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953940), GPR_U32(ctx, 0));
    // 0x350724: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x350724u;
    {
        const bool branch_taken_0x350724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350724) {
            ctx->pc = 0x350738u;
            goto label_350738;
        }
    }
    ctx->pc = 0x35072Cu;
label_35072c:
    // 0x35072c: 0x8f82cbd4  lw          $v0, -0x342C($gp)
    ctx->pc = 0x35072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953940)));
    // 0x350730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x350734: 0xaf82cbd4  sw          $v0, -0x342C($gp)
    ctx->pc = 0x350734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953940), GPR_U32(ctx, 2));
label_350738:
    // 0x350738: 0x8f84cbcc  lw          $a0, -0x3434($gp)
    ctx->pc = 0x350738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953932)));
    // 0x35073c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x35073Cu;
    SET_GPR_U32(ctx, 31, 0x350744u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x35073Cu, 0x350744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350744u;
label_350744:
    // 0x350744: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_350748:
    // 0x350748: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x350748u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35074c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35074cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350750: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350754: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x350754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x350758: 0x3e00008  jr          $ra
    ctx->pc = 0x350758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350760u;
}
