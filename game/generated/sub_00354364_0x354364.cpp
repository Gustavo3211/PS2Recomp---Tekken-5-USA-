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

// Function: sub_00354364
// Address: 0x354364 - 0x354400
void sub_00354364_0x354364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354364_0x354364");
#endif

    switch (ctx->pc) {
        case 0x354364u: goto label_354364;
        case 0x354368u: goto label_354368;
        case 0x35436cu: goto label_35436c;
        case 0x354370u: goto label_354370;
        case 0x354374u: goto label_354374;
        case 0x354378u: goto label_354378;
        case 0x35437cu: goto label_35437c;
        case 0x354380u: goto label_354380;
        case 0x354384u: goto label_354384;
        case 0x354388u: goto label_354388;
        case 0x35438cu: goto label_35438c;
        case 0x354390u: goto label_354390;
        case 0x354394u: goto label_354394;
        case 0x354398u: goto label_354398;
        case 0x35439cu: goto label_35439c;
        case 0x3543a0u: goto label_3543a0;
        case 0x3543a4u: goto label_3543a4;
        case 0x3543a8u: goto label_3543a8;
        case 0x3543acu: goto label_3543ac;
        case 0x3543b0u: goto label_3543b0;
        case 0x3543b4u: goto label_3543b4;
        case 0x3543b8u: goto label_3543b8;
        case 0x3543bcu: goto label_3543bc;
        case 0x3543c0u: goto label_3543c0;
        case 0x3543c4u: goto label_3543c4;
        case 0x3543c8u: goto label_3543c8;
        case 0x3543ccu: goto label_3543cc;
        case 0x3543d0u: goto label_3543d0;
        case 0x3543d4u: goto label_3543d4;
        case 0x3543d8u: goto label_3543d8;
        case 0x3543dcu: goto label_3543dc;
        case 0x3543e0u: goto label_3543e0;
        case 0x3543e4u: goto label_3543e4;
        case 0x3543e8u: goto label_3543e8;
        case 0x3543ecu: goto label_3543ec;
        case 0x3543f0u: goto label_3543f0;
        case 0x3543f4u: goto label_3543f4;
        case 0x3543f8u: goto label_3543f8;
        case 0x3543fcu: goto label_3543fc;
        default: break;
    }

    ctx->pc = 0x354364u;

label_354364:
    // 0x354364: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_354368:
    // 0x354368: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x354368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_35436c:
    // 0x35436c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_354370:
    // 0x354370: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354374:
    // 0x354374: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354374u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_354378:
    // 0x354378: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x354378u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_35437c:
    // 0x35437c: 0x8f82cbe0  lw          $v0, -0x3420($gp)
    ctx->pc = 0x35437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953952)));
label_354380:
    // 0x354380: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_354384:
    if (ctx->pc == 0x354384u) {
        ctx->pc = 0x354388u;
        goto label_354388;
    }
    ctx->pc = 0x354380u;
    {
        const bool branch_taken_0x354380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354380) {
            ctx->pc = 0x354398u;
            goto label_354398;
        }
    }
    ctx->pc = 0x354388u;
label_354388:
    // 0x354388: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x354388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_35438c:
    // 0x35438c: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x35438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
label_354390:
    // 0x354390: 0x10000015  b           . + 4 + (0x15 << 2)
label_354394:
    if (ctx->pc == 0x354394u) {
        ctx->pc = 0x354398u;
        goto label_354398;
    }
    ctx->pc = 0x354390u;
    {
        const bool branch_taken_0x354390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354390) {
            ctx->pc = 0x3543E8u;
            goto label_3543e8;
        }
    }
    ctx->pc = 0x354398u;
label_354398:
    // 0x354398: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x354398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_35439c:
    // 0x35439c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x35439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3543a0:
    // 0x3543a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3543a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3543a4:
    // 0x3543a4: 0xc0d521a  jal         func_354868
label_3543a8:
    if (ctx->pc == 0x3543A8u) {
        ctx->pc = 0x3543ACu;
        goto label_3543ac;
    }
    ctx->pc = 0x3543A4u;
    SET_GPR_U32(ctx, 31, 0x3543ACu);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x3543A4u, 0x3543ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3543ACu;
label_3543ac:
    // 0x3543ac: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x3543acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_3543b0:
    // 0x3543b0: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3543b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3543b4:
    // 0x3543b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3543b8:
    if (ctx->pc == 0x3543B8u) {
        ctx->pc = 0x3543BCu;
        goto label_3543bc;
    }
    ctx->pc = 0x3543B4u;
    {
        const bool branch_taken_0x3543b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3543b4) {
            ctx->pc = 0x3543CCu;
            goto label_3543cc;
        }
    }
    ctx->pc = 0x3543BCu;
label_3543bc:
    // 0x3543bc: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3543bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_3543c0:
    // 0x3543c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3543c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3543c4:
    // 0x3543c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3543c8:
    if (ctx->pc == 0x3543C8u) {
        ctx->pc = 0x3543CCu;
        goto label_3543cc;
    }
    ctx->pc = 0x3543C4u;
    {
        const bool branch_taken_0x3543c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3543c4) {
            ctx->pc = 0x3543E8u;
            goto label_3543e8;
        }
    }
    ctx->pc = 0x3543CCu;
label_3543cc:
    // 0x3543cc: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3543ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3543d0:
    // 0x3543d0: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x3543d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_3543d4:
    // 0x3543d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3543d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3543d8:
    // 0x3543d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3543d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3543dc:
    // 0x3543dc: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3543e0:
    // 0x3543e0: 0x40f809  jalr        $v0
label_3543e4:
    if (ctx->pc == 0x3543E4u) {
        ctx->pc = 0x3543E8u;
        goto label_3543e8;
    }
    ctx->pc = 0x3543E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3543E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3543E0u, 0x3543E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3543E8u;
label_3543e8:
    // 0x3543e8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3543e8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3543ec:
    // 0x3543ec: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3543ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3543f0:
    // 0x3543f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3543f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3543f4:
    // 0x3543f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3543f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3543f8:
    // 0x3543f8: 0x3e00008  jr          $ra
label_3543fc:
    if (ctx->pc == 0x3543FCu) {
        ctx->pc = 0x354400u;
        goto label_fallthrough_0x3543f8;
    }
    ctx->pc = 0x3543F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3543F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3543f8:
    ctx->pc = 0x354400u;
}
