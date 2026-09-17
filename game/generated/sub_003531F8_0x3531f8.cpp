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

// Function: sub_003531F8
// Address: 0x3531f8 - 0x3532ac
void sub_003531F8_0x3531f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003531F8_0x3531f8");
#endif

    switch (ctx->pc) {
        case 0x3531f8u: goto label_3531f8;
        case 0x3531fcu: goto label_3531fc;
        case 0x353200u: goto label_353200;
        case 0x353204u: goto label_353204;
        case 0x353208u: goto label_353208;
        case 0x35320cu: goto label_35320c;
        case 0x353210u: goto label_353210;
        case 0x353214u: goto label_353214;
        case 0x353218u: goto label_353218;
        case 0x35321cu: goto label_35321c;
        case 0x353220u: goto label_353220;
        case 0x353224u: goto label_353224;
        case 0x353228u: goto label_353228;
        case 0x35322cu: goto label_35322c;
        case 0x353230u: goto label_353230;
        case 0x353234u: goto label_353234;
        case 0x353238u: goto label_353238;
        case 0x35323cu: goto label_35323c;
        case 0x353240u: goto label_353240;
        case 0x353244u: goto label_353244;
        case 0x353248u: goto label_353248;
        case 0x35324cu: goto label_35324c;
        case 0x353250u: goto label_353250;
        case 0x353254u: goto label_353254;
        case 0x353258u: goto label_353258;
        case 0x35325cu: goto label_35325c;
        case 0x353260u: goto label_353260;
        case 0x353264u: goto label_353264;
        case 0x353268u: goto label_353268;
        case 0x35326cu: goto label_35326c;
        case 0x353270u: goto label_353270;
        case 0x353274u: goto label_353274;
        case 0x353278u: goto label_353278;
        case 0x35327cu: goto label_35327c;
        case 0x353280u: goto label_353280;
        case 0x353284u: goto label_353284;
        case 0x353288u: goto label_353288;
        case 0x35328cu: goto label_35328c;
        case 0x353290u: goto label_353290;
        case 0x353294u: goto label_353294;
        case 0x353298u: goto label_353298;
        case 0x35329cu: goto label_35329c;
        case 0x3532a0u: goto label_3532a0;
        case 0x3532a4u: goto label_3532a4;
        case 0x3532a8u: goto label_3532a8;
        default: break;
    }

    ctx->pc = 0x3531f8u;

label_3531f8:
    // 0x3531f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3531f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3531fc:
    // 0x3531fc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3531fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_353200:
    // 0x353200: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_353204:
    // 0x353204: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353204u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_353208:
    // 0x353208: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353208u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_35320c:
    // 0x35320c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35320cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_353210:
    // 0x353210: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x353210u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_353214:
    // 0x353214: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353218:
    // 0x353218: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35321c:
    // 0x35321c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x35321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_353220:
    // 0x353220: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x353220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_353224:
    // 0x353224: 0xc0d5174  jal         func_3545D0
label_353228:
    if (ctx->pc == 0x353228u) {
        ctx->pc = 0x35322Cu;
        goto label_35322c;
    }
    ctx->pc = 0x353224u;
    SET_GPR_U32(ctx, 31, 0x35322Cu);
    ctx->pc = 0x3545D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3545D0u, 0x353224u, 0x35322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35322Cu;
label_35322c:
    // 0x35322c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35322cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_353230:
    // 0x353230: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353234:
    // 0x353234: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x353234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_353238:
    // 0x353238: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_35323c:
    if (ctx->pc == 0x35323Cu) {
        ctx->pc = 0x353240u;
        goto label_353240;
    }
    ctx->pc = 0x353238u;
    {
        const bool branch_taken_0x353238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353238) {
            ctx->pc = 0x353290u;
            goto label_353290;
        }
    }
    ctx->pc = 0x353240u;
label_353240:
    // 0x353240: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x353240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353244:
    // 0x353244: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x353244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_353248:
    // 0x353248: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x353248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35324c:
    // 0x35324c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x35324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_353250:
    // 0x353250: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x353250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353254:
    // 0x353254: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x353254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_353258:
    // 0x353258: 0x8cc60020  lw          $a2, 0x20($a2)
    ctx->pc = 0x353258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_35325c:
    // 0x35325c: 0x40f809  jalr        $v0
label_353260:
    if (ctx->pc == 0x353260u) {
        ctx->pc = 0x353264u;
        goto label_353264;
    }
    ctx->pc = 0x35325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35325Cu, 0x353264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353264u;
label_353264:
    // 0x353264: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353264u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_353268:
    // 0x353268: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35326c:
    // 0x35326c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_353270:
    if (ctx->pc == 0x353270u) {
        ctx->pc = 0x353274u;
        goto label_353274;
    }
    ctx->pc = 0x35326Cu;
    {
        const bool branch_taken_0x35326c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35326c) {
            ctx->pc = 0x353290u;
            goto label_353290;
        }
    }
    ctx->pc = 0x353274u;
label_353274:
    // 0x353274: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x353274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_353278:
    // 0x353278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35327c:
    // 0x35327c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_353280:
    if (ctx->pc == 0x353280u) {
        ctx->pc = 0x353284u;
        goto label_353284;
    }
    ctx->pc = 0x35327Cu;
    {
        const bool branch_taken_0x35327c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35327c) {
            ctx->pc = 0x353290u;
            goto label_353290;
        }
    }
    ctx->pc = 0x353284u;
label_353284:
    // 0x353284: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_353288:
    // 0x353288: 0x10000002  b           . + 4 + (0x2 << 2)
label_35328c:
    if (ctx->pc == 0x35328Cu) {
        ctx->pc = 0x353290u;
        goto label_353290;
    }
    ctx->pc = 0x353288u;
    {
        const bool branch_taken_0x353288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353288) {
            ctx->pc = 0x353294u;
            goto label_353294;
        }
    }
    ctx->pc = 0x353290u;
label_353290:
    // 0x353290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353294:
    // 0x353294: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353294u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_353298:
    // 0x353298: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353298u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35329c:
    // 0x35329c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35329cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3532a0:
    // 0x3532a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3532a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3532a4:
    // 0x3532a4: 0x3e00008  jr          $ra
label_3532a8:
    if (ctx->pc == 0x3532A8u) {
        ctx->pc = 0x3532ACu;
        goto label_fallthrough_0x3532a4;
    }
    ctx->pc = 0x3532A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3532A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3532a4:
    ctx->pc = 0x3532ACu;
}
