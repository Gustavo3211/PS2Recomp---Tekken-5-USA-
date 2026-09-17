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

// Function: sub_003541B0
// Address: 0x3541b0 - 0x3542c0
void sub_003541B0_0x3541b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003541B0_0x3541b0");
#endif

    switch (ctx->pc) {
        case 0x3541b0u: goto label_3541b0;
        case 0x3541b4u: goto label_3541b4;
        case 0x3541b8u: goto label_3541b8;
        case 0x3541bcu: goto label_3541bc;
        case 0x3541c0u: goto label_3541c0;
        case 0x3541c4u: goto label_3541c4;
        case 0x3541c8u: goto label_3541c8;
        case 0x3541ccu: goto label_3541cc;
        case 0x3541d0u: goto label_3541d0;
        case 0x3541d4u: goto label_3541d4;
        case 0x3541d8u: goto label_3541d8;
        case 0x3541dcu: goto label_3541dc;
        case 0x3541e0u: goto label_3541e0;
        case 0x3541e4u: goto label_3541e4;
        case 0x3541e8u: goto label_3541e8;
        case 0x3541ecu: goto label_3541ec;
        case 0x3541f0u: goto label_3541f0;
        case 0x3541f4u: goto label_3541f4;
        case 0x3541f8u: goto label_3541f8;
        case 0x3541fcu: goto label_3541fc;
        case 0x354200u: goto label_354200;
        case 0x354204u: goto label_354204;
        case 0x354208u: goto label_354208;
        case 0x35420cu: goto label_35420c;
        case 0x354210u: goto label_354210;
        case 0x354214u: goto label_354214;
        case 0x354218u: goto label_354218;
        case 0x35421cu: goto label_35421c;
        case 0x354220u: goto label_354220;
        case 0x354224u: goto label_354224;
        case 0x354228u: goto label_354228;
        case 0x35422cu: goto label_35422c;
        case 0x354230u: goto label_354230;
        case 0x354234u: goto label_354234;
        case 0x354238u: goto label_354238;
        case 0x35423cu: goto label_35423c;
        case 0x354240u: goto label_354240;
        case 0x354244u: goto label_354244;
        case 0x354248u: goto label_354248;
        case 0x35424cu: goto label_35424c;
        case 0x354250u: goto label_354250;
        case 0x354254u: goto label_354254;
        case 0x354258u: goto label_354258;
        case 0x35425cu: goto label_35425c;
        case 0x354260u: goto label_354260;
        case 0x354264u: goto label_354264;
        case 0x354268u: goto label_354268;
        case 0x35426cu: goto label_35426c;
        case 0x354270u: goto label_354270;
        case 0x354274u: goto label_354274;
        case 0x354278u: goto label_354278;
        case 0x35427cu: goto label_35427c;
        case 0x354280u: goto label_354280;
        case 0x354284u: goto label_354284;
        case 0x354288u: goto label_354288;
        case 0x35428cu: goto label_35428c;
        case 0x354290u: goto label_354290;
        case 0x354294u: goto label_354294;
        case 0x354298u: goto label_354298;
        case 0x35429cu: goto label_35429c;
        case 0x3542a0u: goto label_3542a0;
        case 0x3542a4u: goto label_3542a4;
        case 0x3542a8u: goto label_3542a8;
        case 0x3542acu: goto label_3542ac;
        case 0x3542b0u: goto label_3542b0;
        case 0x3542b4u: goto label_3542b4;
        case 0x3542b8u: goto label_3542b8;
        case 0x3542bcu: goto label_3542bc;
        default: break;
    }

    ctx->pc = 0x3541b0u;

label_3541b0:
    // 0x3541b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3541b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3541b4:
    // 0x3541b4: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3541b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_3541b8:
    // 0x3541b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3541b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_3541bc:
    // 0x3541bc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3541bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3541c0:
    // 0x3541c0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3541c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3541c4:
    // 0x3541c4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3541c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_3541c8:
    // 0x3541c8: 0x8f82cbe0  lw          $v0, -0x3420($gp)
    ctx->pc = 0x3541c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953952)));
label_3541cc:
    // 0x3541cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3541d0:
    if (ctx->pc == 0x3541D0u) {
        ctx->pc = 0x3541D4u;
        goto label_3541d4;
    }
    ctx->pc = 0x3541CCu;
    {
        const bool branch_taken_0x3541cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3541cc) {
            ctx->pc = 0x3541E0u;
            goto label_3541e0;
        }
    }
    ctx->pc = 0x3541D4u;
label_3541d4:
    // 0x3541d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3541d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3541d8:
    // 0x3541d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_3541dc:
    if (ctx->pc == 0x3541DCu) {
        ctx->pc = 0x3541E0u;
        goto label_3541e0;
    }
    ctx->pc = 0x3541D8u;
    {
        const bool branch_taken_0x3541d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541d8) {
            ctx->pc = 0x35422Cu;
            goto label_35422c;
        }
    }
    ctx->pc = 0x3541E0u;
label_3541e0:
    // 0x3541e0: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x3541e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_3541e4:
    // 0x3541e4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3541e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3541e8:
    // 0x3541e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3541e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3541ec:
    // 0x3541ec: 0xc0d521a  jal         func_354868
label_3541f0:
    if (ctx->pc == 0x3541F0u) {
        ctx->pc = 0x3541F4u;
        goto label_3541f4;
    }
    ctx->pc = 0x3541ECu;
    SET_GPR_U32(ctx, 31, 0x3541F4u);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x3541ECu, 0x3541F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3541F4u;
label_3541f4:
    // 0x3541f4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x3541f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_3541f8:
    // 0x3541f8: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3541f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3541fc:
    // 0x3541fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_354200:
    if (ctx->pc == 0x354200u) {
        ctx->pc = 0x354204u;
        goto label_354204;
    }
    ctx->pc = 0x3541FCu;
    {
        const bool branch_taken_0x3541fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3541fc) {
            ctx->pc = 0x354210u;
            goto label_354210;
        }
    }
    ctx->pc = 0x354204u;
label_354204:
    // 0x354204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354208:
    // 0x354208: 0x10000008  b           . + 4 + (0x8 << 2)
label_35420c:
    if (ctx->pc == 0x35420Cu) {
        ctx->pc = 0x354210u;
        goto label_354210;
    }
    ctx->pc = 0x354208u;
    {
        const bool branch_taken_0x354208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354208) {
            ctx->pc = 0x35422Cu;
            goto label_35422c;
        }
    }
    ctx->pc = 0x354210u;
label_354210:
    // 0x354210: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354214:
    // 0x354214: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x354214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354218:
    // 0x354218: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x354218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35421c:
    // 0x35421c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x35421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_354220:
    // 0x354220: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x354220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_354224:
    // 0x354224: 0x40f809  jalr        $v0
label_354228:
    if (ctx->pc == 0x354228u) {
        ctx->pc = 0x35422Cu;
        goto label_35422c;
    }
    ctx->pc = 0x354224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35422Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354224u, 0x35422Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35422Cu;
label_35422c:
    // 0x35422c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35422cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_354230:
    // 0x354230: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x354230u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_354234:
    // 0x354234: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x354234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_354238:
    // 0x354238: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x354238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35423c:
    // 0x35423c: 0x3e00008  jr          $ra
label_354240:
    if (ctx->pc == 0x354240u) {
        ctx->pc = 0x354244u;
        goto label_354244;
    }
    ctx->pc = 0x35423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354244u;
label_354244:
    // 0x354244: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_354248:
    // 0x354248: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x354248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_35424c:
    // 0x35424c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x35424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_354250:
    // 0x354250: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354250u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_354254:
    // 0x354254: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354254u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_354258:
    // 0x354258: 0xffc50008  sd          $a1, 0x8($fp)
    ctx->pc = 0x354258u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 5));
label_35425c:
    // 0x35425c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x35425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354260:
    // 0x354260: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_354264:
    // 0x354264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354268:
    // 0x354268: 0xc0d521a  jal         func_354868
label_35426c:
    if (ctx->pc == 0x35426Cu) {
        ctx->pc = 0x354270u;
        goto label_354270;
    }
    ctx->pc = 0x354268u;
    SET_GPR_U32(ctx, 31, 0x354270u);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x354268u, 0x354270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354270u;
label_354270:
    // 0x354270: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x354270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_354274:
    // 0x354274: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354278:
    // 0x354278: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_35427c:
    if (ctx->pc == 0x35427Cu) {
        ctx->pc = 0x354280u;
        goto label_354280;
    }
    ctx->pc = 0x354278u;
    {
        const bool branch_taken_0x354278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354278) {
            ctx->pc = 0x35428Cu;
            goto label_35428c;
        }
    }
    ctx->pc = 0x354280u;
label_354280:
    // 0x354280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354284:
    // 0x354284: 0x10000008  b           . + 4 + (0x8 << 2)
label_354288:
    if (ctx->pc == 0x354288u) {
        ctx->pc = 0x35428Cu;
        goto label_35428c;
    }
    ctx->pc = 0x354284u;
    {
        const bool branch_taken_0x354284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354284) {
            ctx->pc = 0x3542A8u;
            goto label_3542a8;
        }
    }
    ctx->pc = 0x35428Cu;
label_35428c:
    // 0x35428c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x35428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_354290:
    // 0x354290: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x354290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354294:
    // 0x354294: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x354294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_354298:
    // 0x354298: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x354298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35429c:
    // 0x35429c: 0xdfc50008  ld          $a1, 0x8($fp)
    ctx->pc = 0x35429cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 8)));
label_3542a0:
    // 0x3542a0: 0x40f809  jalr        $v0
label_3542a4:
    if (ctx->pc == 0x3542A4u) {
        ctx->pc = 0x3542A8u;
        goto label_3542a8;
    }
    ctx->pc = 0x3542A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3542A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3542A0u, 0x3542A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3542A8u;
label_3542a8:
    // 0x3542a8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3542a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3542ac:
    // 0x3542ac: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3542acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3542b0:
    // 0x3542b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3542b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3542b4:
    // 0x3542b4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3542b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3542b8:
    // 0x3542b8: 0x3e00008  jr          $ra
label_3542bc:
    if (ctx->pc == 0x3542BCu) {
        ctx->pc = 0x3542C0u;
        goto label_fallthrough_0x3542b8;
    }
    ctx->pc = 0x3542B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3542B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3542b8:
    ctx->pc = 0x3542C0u;
}
