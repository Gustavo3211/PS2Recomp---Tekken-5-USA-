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

// Function: sub_00352FDC
// Address: 0x352fdc - 0x353090
void sub_00352FDC_0x352fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352FDC_0x352fdc");
#endif

    switch (ctx->pc) {
        case 0x352fdcu: goto label_352fdc;
        case 0x352fe0u: goto label_352fe0;
        case 0x352fe4u: goto label_352fe4;
        case 0x352fe8u: goto label_352fe8;
        case 0x352fecu: goto label_352fec;
        case 0x352ff0u: goto label_352ff0;
        case 0x352ff4u: goto label_352ff4;
        case 0x352ff8u: goto label_352ff8;
        case 0x352ffcu: goto label_352ffc;
        case 0x353000u: goto label_353000;
        case 0x353004u: goto label_353004;
        case 0x353008u: goto label_353008;
        case 0x35300cu: goto label_35300c;
        case 0x353010u: goto label_353010;
        case 0x353014u: goto label_353014;
        case 0x353018u: goto label_353018;
        case 0x35301cu: goto label_35301c;
        case 0x353020u: goto label_353020;
        case 0x353024u: goto label_353024;
        case 0x353028u: goto label_353028;
        case 0x35302cu: goto label_35302c;
        case 0x353030u: goto label_353030;
        case 0x353034u: goto label_353034;
        case 0x353038u: goto label_353038;
        case 0x35303cu: goto label_35303c;
        case 0x353040u: goto label_353040;
        case 0x353044u: goto label_353044;
        case 0x353048u: goto label_353048;
        case 0x35304cu: goto label_35304c;
        case 0x353050u: goto label_353050;
        case 0x353054u: goto label_353054;
        case 0x353058u: goto label_353058;
        case 0x35305cu: goto label_35305c;
        case 0x353060u: goto label_353060;
        case 0x353064u: goto label_353064;
        case 0x353068u: goto label_353068;
        case 0x35306cu: goto label_35306c;
        case 0x353070u: goto label_353070;
        case 0x353074u: goto label_353074;
        case 0x353078u: goto label_353078;
        case 0x35307cu: goto label_35307c;
        case 0x353080u: goto label_353080;
        case 0x353084u: goto label_353084;
        case 0x353088u: goto label_353088;
        case 0x35308cu: goto label_35308c;
        default: break;
    }

    ctx->pc = 0x352fdcu;

label_352fdc:
    // 0x352fdc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_352fe0:
    // 0x352fe0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x352fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352fe4:
    // 0x352fe4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352fe8:
    // 0x352fe8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352fe8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352fec:
    // 0x352fec: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352fecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_352ff0:
    // 0x352ff0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x352ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_352ff4:
    // 0x352ff4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x352ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_352ff8:
    // 0x352ff8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352ffc:
    // 0x352ffc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353000:
    // 0x353000: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x353000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_353004:
    // 0x353004: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x353004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_353008:
    // 0x353008: 0xc0d50d9  jal         func_354364
label_35300c:
    if (ctx->pc == 0x35300Cu) {
        ctx->pc = 0x353010u;
        goto label_353010;
    }
    ctx->pc = 0x353008u;
    SET_GPR_U32(ctx, 31, 0x353010u);
    ctx->pc = 0x354364u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354364u, 0x353008u, 0x353010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353010u;
label_353010:
    // 0x353010: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x353010u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_353014:
    // 0x353014: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353018:
    // 0x353018: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x353018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_35301c:
    // 0x35301c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_353020:
    if (ctx->pc == 0x353020u) {
        ctx->pc = 0x353024u;
        goto label_353024;
    }
    ctx->pc = 0x35301Cu;
    {
        const bool branch_taken_0x35301c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35301c) {
            ctx->pc = 0x353074u;
            goto label_353074;
        }
    }
    ctx->pc = 0x353024u;
label_353024:
    // 0x353024: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353028:
    // 0x353028: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35302c:
    // 0x35302c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x35302cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353030:
    // 0x353030: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x353030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_353034:
    // 0x353034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x353034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353038:
    // 0x353038: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x353038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35303c:
    // 0x35303c: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x35303cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_353040:
    // 0x353040: 0x40f809  jalr        $v0
label_353044:
    if (ctx->pc == 0x353044u) {
        ctx->pc = 0x353048u;
        goto label_353048;
    }
    ctx->pc = 0x353040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353040u, 0x353048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353048u;
label_353048:
    // 0x353048: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353048u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_35304c:
    // 0x35304c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_353050:
    // 0x353050: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_353054:
    if (ctx->pc == 0x353054u) {
        ctx->pc = 0x353058u;
        goto label_353058;
    }
    ctx->pc = 0x353050u;
    {
        const bool branch_taken_0x353050 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353050) {
            ctx->pc = 0x353074u;
            goto label_353074;
        }
    }
    ctx->pc = 0x353058u;
label_353058:
    // 0x353058: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x353058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_35305c:
    // 0x35305c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353060:
    // 0x353060: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_353064:
    if (ctx->pc == 0x353064u) {
        ctx->pc = 0x353068u;
        goto label_353068;
    }
    ctx->pc = 0x353060u;
    {
        const bool branch_taken_0x353060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353060) {
            ctx->pc = 0x353074u;
            goto label_353074;
        }
    }
    ctx->pc = 0x353068u;
label_353068:
    // 0x353068: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35306c:
    // 0x35306c: 0x10000002  b           . + 4 + (0x2 << 2)
label_353070:
    if (ctx->pc == 0x353070u) {
        ctx->pc = 0x353074u;
        goto label_353074;
    }
    ctx->pc = 0x35306Cu;
    {
        const bool branch_taken_0x35306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35306c) {
            ctx->pc = 0x353078u;
            goto label_353078;
        }
    }
    ctx->pc = 0x353074u;
label_353074:
    // 0x353074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353078:
    // 0x353078: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353078u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_35307c:
    // 0x35307c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x35307cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_353080:
    // 0x353080: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_353084:
    // 0x353084: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_353088:
    // 0x353088: 0x3e00008  jr          $ra
label_35308c:
    if (ctx->pc == 0x35308Cu) {
        ctx->pc = 0x353090u;
        goto label_fallthrough_0x353088;
    }
    ctx->pc = 0x353088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x353088:
    ctx->pc = 0x353090u;
}
