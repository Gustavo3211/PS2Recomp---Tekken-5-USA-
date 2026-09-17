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

// Function: sub_00352A54
// Address: 0x352a54 - 0x352b00
void sub_00352A54_0x352a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352A54_0x352a54");
#endif

    switch (ctx->pc) {
        case 0x352a54u: goto label_352a54;
        case 0x352a58u: goto label_352a58;
        case 0x352a5cu: goto label_352a5c;
        case 0x352a60u: goto label_352a60;
        case 0x352a64u: goto label_352a64;
        case 0x352a68u: goto label_352a68;
        case 0x352a6cu: goto label_352a6c;
        case 0x352a70u: goto label_352a70;
        case 0x352a74u: goto label_352a74;
        case 0x352a78u: goto label_352a78;
        case 0x352a7cu: goto label_352a7c;
        case 0x352a80u: goto label_352a80;
        case 0x352a84u: goto label_352a84;
        case 0x352a88u: goto label_352a88;
        case 0x352a8cu: goto label_352a8c;
        case 0x352a90u: goto label_352a90;
        case 0x352a94u: goto label_352a94;
        case 0x352a98u: goto label_352a98;
        case 0x352a9cu: goto label_352a9c;
        case 0x352aa0u: goto label_352aa0;
        case 0x352aa4u: goto label_352aa4;
        case 0x352aa8u: goto label_352aa8;
        case 0x352aacu: goto label_352aac;
        case 0x352ab0u: goto label_352ab0;
        case 0x352ab4u: goto label_352ab4;
        case 0x352ab8u: goto label_352ab8;
        case 0x352abcu: goto label_352abc;
        case 0x352ac0u: goto label_352ac0;
        case 0x352ac4u: goto label_352ac4;
        case 0x352ac8u: goto label_352ac8;
        case 0x352accu: goto label_352acc;
        case 0x352ad0u: goto label_352ad0;
        case 0x352ad4u: goto label_352ad4;
        case 0x352ad8u: goto label_352ad8;
        case 0x352adcu: goto label_352adc;
        case 0x352ae0u: goto label_352ae0;
        case 0x352ae4u: goto label_352ae4;
        case 0x352ae8u: goto label_352ae8;
        case 0x352aecu: goto label_352aec;
        case 0x352af0u: goto label_352af0;
        case 0x352af4u: goto label_352af4;
        case 0x352af8u: goto label_352af8;
        case 0x352afcu: goto label_352afc;
        default: break;
    }

    ctx->pc = 0x352a54u;

label_352a54:
    // 0x352a54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352a58:
    // 0x352a58: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352a5c:
    // 0x352a5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352a60:
    // 0x352a60: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352a60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352a64:
    // 0x352a64: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352a64u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352a68:
    // 0x352a68: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352a6c:
    // 0x352a6c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352a70:
    // 0x352a70: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352a74:
    // 0x352a74: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352a78:
    // 0x352a78: 0xc0d3242  jal         func_34C908
label_352a7c:
    if (ctx->pc == 0x352A7Cu) {
        ctx->pc = 0x352A80u;
        goto label_352a80;
    }
    ctx->pc = 0x352A78u;
    SET_GPR_U32(ctx, 31, 0x352A80u);
    ctx->pc = 0x34C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C908u, 0x352A78u, 0x352A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352A80u;
label_352a80:
    // 0x352a80: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x352a80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352a84:
    // 0x352a84: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352a88:
    // 0x352a88: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352a8c:
    // 0x352a8c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352a90:
    if (ctx->pc == 0x352A90u) {
        ctx->pc = 0x352A94u;
        goto label_352a94;
    }
    ctx->pc = 0x352A8Cu;
    {
        const bool branch_taken_0x352a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352a8c) {
            ctx->pc = 0x352AE4u;
            goto label_352ae4;
        }
    }
    ctx->pc = 0x352A94u;
label_352a94:
    // 0x352a94: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352a98:
    // 0x352a98: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352a9c:
    // 0x352a9c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352aa0:
    // 0x352aa0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352aa4:
    // 0x352aa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352aa8:
    // 0x352aa8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352aac:
    // 0x352aac: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352ab0:
    // 0x352ab0: 0x40f809  jalr        $v0
label_352ab4:
    if (ctx->pc == 0x352AB4u) {
        ctx->pc = 0x352AB8u;
        goto label_352ab8;
    }
    ctx->pc = 0x352AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352AB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352AB0u, 0x352AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352AB8u;
label_352ab8:
    // 0x352ab8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352abc:
    // 0x352abc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352ac0:
    // 0x352ac0: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352ac4:
    if (ctx->pc == 0x352AC4u) {
        ctx->pc = 0x352AC8u;
        goto label_352ac8;
    }
    ctx->pc = 0x352AC0u;
    {
        const bool branch_taken_0x352ac0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352ac0) {
            ctx->pc = 0x352AE4u;
            goto label_352ae4;
        }
    }
    ctx->pc = 0x352AC8u;
label_352ac8:
    // 0x352ac8: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352acc:
    // 0x352acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352ad0:
    // 0x352ad0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352ad4:
    if (ctx->pc == 0x352AD4u) {
        ctx->pc = 0x352AD8u;
        goto label_352ad8;
    }
    ctx->pc = 0x352AD0u;
    {
        const bool branch_taken_0x352ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352ad0) {
            ctx->pc = 0x352AE4u;
            goto label_352ae4;
        }
    }
    ctx->pc = 0x352AD8u;
label_352ad8:
    // 0x352ad8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352adc:
    // 0x352adc: 0x10000002  b           . + 4 + (0x2 << 2)
label_352ae0:
    if (ctx->pc == 0x352AE0u) {
        ctx->pc = 0x352AE4u;
        goto label_352ae4;
    }
    ctx->pc = 0x352ADCu;
    {
        const bool branch_taken_0x352adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352adc) {
            ctx->pc = 0x352AE8u;
            goto label_352ae8;
        }
    }
    ctx->pc = 0x352AE4u;
label_352ae4:
    // 0x352ae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352ae8:
    // 0x352ae8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352ae8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352aec:
    // 0x352aec: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352aecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352af0:
    // 0x352af0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352af4:
    // 0x352af4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352af8:
    // 0x352af8: 0x3e00008  jr          $ra
label_352afc:
    if (ctx->pc == 0x352AFCu) {
        ctx->pc = 0x352B00u;
        goto label_fallthrough_0x352af8;
    }
    ctx->pc = 0x352AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352af8:
    ctx->pc = 0x352B00u;
}
