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

// Function: sub_003521CC
// Address: 0x3521cc - 0x352288
void sub_003521CC_0x3521cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003521CC_0x3521cc");
#endif

    switch (ctx->pc) {
        case 0x3521ccu: goto label_3521cc;
        case 0x3521d0u: goto label_3521d0;
        case 0x3521d4u: goto label_3521d4;
        case 0x3521d8u: goto label_3521d8;
        case 0x3521dcu: goto label_3521dc;
        case 0x3521e0u: goto label_3521e0;
        case 0x3521e4u: goto label_3521e4;
        case 0x3521e8u: goto label_3521e8;
        case 0x3521ecu: goto label_3521ec;
        case 0x3521f0u: goto label_3521f0;
        case 0x3521f4u: goto label_3521f4;
        case 0x3521f8u: goto label_3521f8;
        case 0x3521fcu: goto label_3521fc;
        case 0x352200u: goto label_352200;
        case 0x352204u: goto label_352204;
        case 0x352208u: goto label_352208;
        case 0x35220cu: goto label_35220c;
        case 0x352210u: goto label_352210;
        case 0x352214u: goto label_352214;
        case 0x352218u: goto label_352218;
        case 0x35221cu: goto label_35221c;
        case 0x352220u: goto label_352220;
        case 0x352224u: goto label_352224;
        case 0x352228u: goto label_352228;
        case 0x35222cu: goto label_35222c;
        case 0x352230u: goto label_352230;
        case 0x352234u: goto label_352234;
        case 0x352238u: goto label_352238;
        case 0x35223cu: goto label_35223c;
        case 0x352240u: goto label_352240;
        case 0x352244u: goto label_352244;
        case 0x352248u: goto label_352248;
        case 0x35224cu: goto label_35224c;
        case 0x352250u: goto label_352250;
        case 0x352254u: goto label_352254;
        case 0x352258u: goto label_352258;
        case 0x35225cu: goto label_35225c;
        case 0x352260u: goto label_352260;
        case 0x352264u: goto label_352264;
        case 0x352268u: goto label_352268;
        case 0x35226cu: goto label_35226c;
        case 0x352270u: goto label_352270;
        case 0x352274u: goto label_352274;
        case 0x352278u: goto label_352278;
        case 0x35227cu: goto label_35227c;
        case 0x352280u: goto label_352280;
        case 0x352284u: goto label_352284;
        default: break;
    }

    ctx->pc = 0x3521ccu;

label_3521cc:
    // 0x3521cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3521ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3521d0:
    // 0x3521d0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3521d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3521d4:
    // 0x3521d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3521d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3521d8:
    // 0x3521d8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3521d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3521dc:
    // 0x3521dc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3521dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3521e0:
    // 0x3521e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3521e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3521e4:
    // 0x3521e4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3521e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3521e8:
    // 0x3521e8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3521e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3521ec:
    // 0x3521ec: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3521ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3521f0:
    // 0x3521f0: 0xc0d2fcf  jal         func_34BF3C
label_3521f4:
    if (ctx->pc == 0x3521F4u) {
        ctx->pc = 0x3521F8u;
        goto label_3521f8;
    }
    ctx->pc = 0x3521F0u;
    SET_GPR_U32(ctx, 31, 0x3521F8u);
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x3521F0u, 0x3521F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521F8u;
label_3521f8:
    // 0x3521f8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3521f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3521fc:
    // 0x3521fc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352200:
    // 0x352200: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x352200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_352204:
    // 0x352204: 0xc0d415e  jal         func_350578
label_352208:
    if (ctx->pc == 0x352208u) {
        ctx->pc = 0x35220Cu;
        goto label_35220c;
    }
    ctx->pc = 0x352204u;
    SET_GPR_U32(ctx, 31, 0x35220Cu);
    ctx->pc = 0x350578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350578u, 0x352204u, 0x35220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35220Cu;
label_35220c:
    // 0x35220c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352210:
    // 0x352210: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_352214:
    // 0x352214: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_352218:
    if (ctx->pc == 0x352218u) {
        ctx->pc = 0x35221Cu;
        goto label_35221c;
    }
    ctx->pc = 0x352214u;
    {
        const bool branch_taken_0x352214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352214) {
            ctx->pc = 0x35226Cu;
            goto label_35226c;
        }
    }
    ctx->pc = 0x35221Cu;
label_35221c:
    // 0x35221c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352220:
    // 0x352220: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352224:
    // 0x352224: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352228:
    // 0x352228: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_35222c:
    // 0x35222c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352230:
    // 0x352230: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352234:
    // 0x352234: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352238:
    // 0x352238: 0x40f809  jalr        $v0
label_35223c:
    if (ctx->pc == 0x35223Cu) {
        ctx->pc = 0x352240u;
        goto label_352240;
    }
    ctx->pc = 0x352238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352238u, 0x352240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352240u;
label_352240:
    // 0x352240: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352240u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352244:
    // 0x352244: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352248:
    // 0x352248: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_35224c:
    if (ctx->pc == 0x35224Cu) {
        ctx->pc = 0x352250u;
        goto label_352250;
    }
    ctx->pc = 0x352248u;
    {
        const bool branch_taken_0x352248 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352248) {
            ctx->pc = 0x35226Cu;
            goto label_35226c;
        }
    }
    ctx->pc = 0x352250u;
label_352250:
    // 0x352250: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352254:
    // 0x352254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352258:
    // 0x352258: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35225c:
    if (ctx->pc == 0x35225Cu) {
        ctx->pc = 0x352260u;
        goto label_352260;
    }
    ctx->pc = 0x352258u;
    {
        const bool branch_taken_0x352258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352258) {
            ctx->pc = 0x35226Cu;
            goto label_35226c;
        }
    }
    ctx->pc = 0x352260u;
label_352260:
    // 0x352260: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352264:
    // 0x352264: 0x10000002  b           . + 4 + (0x2 << 2)
label_352268:
    if (ctx->pc == 0x352268u) {
        ctx->pc = 0x35226Cu;
        goto label_35226c;
    }
    ctx->pc = 0x352264u;
    {
        const bool branch_taken_0x352264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352264) {
            ctx->pc = 0x352270u;
            goto label_352270;
        }
    }
    ctx->pc = 0x35226Cu;
label_35226c:
    // 0x35226c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35226cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352270:
    // 0x352270: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352270u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352274:
    // 0x352274: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352274u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352278:
    // 0x352278: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35227c:
    // 0x35227c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35227cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352280:
    // 0x352280: 0x3e00008  jr          $ra
label_352284:
    if (ctx->pc == 0x352284u) {
        ctx->pc = 0x352288u;
        goto label_fallthrough_0x352280;
    }
    ctx->pc = 0x352280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352280:
    ctx->pc = 0x352288u;
}
