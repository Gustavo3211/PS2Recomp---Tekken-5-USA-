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

// Function: sub_00352288
// Address: 0x352288 - 0x352344
void sub_00352288_0x352288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352288_0x352288");
#endif

    switch (ctx->pc) {
        case 0x352288u: goto label_352288;
        case 0x35228cu: goto label_35228c;
        case 0x352290u: goto label_352290;
        case 0x352294u: goto label_352294;
        case 0x352298u: goto label_352298;
        case 0x35229cu: goto label_35229c;
        case 0x3522a0u: goto label_3522a0;
        case 0x3522a4u: goto label_3522a4;
        case 0x3522a8u: goto label_3522a8;
        case 0x3522acu: goto label_3522ac;
        case 0x3522b0u: goto label_3522b0;
        case 0x3522b4u: goto label_3522b4;
        case 0x3522b8u: goto label_3522b8;
        case 0x3522bcu: goto label_3522bc;
        case 0x3522c0u: goto label_3522c0;
        case 0x3522c4u: goto label_3522c4;
        case 0x3522c8u: goto label_3522c8;
        case 0x3522ccu: goto label_3522cc;
        case 0x3522d0u: goto label_3522d0;
        case 0x3522d4u: goto label_3522d4;
        case 0x3522d8u: goto label_3522d8;
        case 0x3522dcu: goto label_3522dc;
        case 0x3522e0u: goto label_3522e0;
        case 0x3522e4u: goto label_3522e4;
        case 0x3522e8u: goto label_3522e8;
        case 0x3522ecu: goto label_3522ec;
        case 0x3522f0u: goto label_3522f0;
        case 0x3522f4u: goto label_3522f4;
        case 0x3522f8u: goto label_3522f8;
        case 0x3522fcu: goto label_3522fc;
        case 0x352300u: goto label_352300;
        case 0x352304u: goto label_352304;
        case 0x352308u: goto label_352308;
        case 0x35230cu: goto label_35230c;
        case 0x352310u: goto label_352310;
        case 0x352314u: goto label_352314;
        case 0x352318u: goto label_352318;
        case 0x35231cu: goto label_35231c;
        case 0x352320u: goto label_352320;
        case 0x352324u: goto label_352324;
        case 0x352328u: goto label_352328;
        case 0x35232cu: goto label_35232c;
        case 0x352330u: goto label_352330;
        case 0x352334u: goto label_352334;
        case 0x352338u: goto label_352338;
        case 0x35233cu: goto label_35233c;
        case 0x352340u: goto label_352340;
        default: break;
    }

    ctx->pc = 0x352288u;

label_352288:
    // 0x352288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35228c:
    // 0x35228c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_352290:
    // 0x352290: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_352294:
    // 0x352294: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x352294u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_352298:
    // 0x352298: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x352298u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_35229c:
    // 0x35229c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x35229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3522a0:
    // 0x3522a0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3522a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3522a4:
    // 0x3522a4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522a8:
    // 0x3522a8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3522a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522ac:
    // 0x3522ac: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3522acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522b0:
    // 0x3522b0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3522b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3522b4:
    // 0x3522b4: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x3522b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3522b8:
    // 0x3522b8: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x3522b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3522bc:
    // 0x3522bc: 0xc0d2fed  jal         func_34BFB4
label_3522c0:
    if (ctx->pc == 0x3522C0u) {
        ctx->pc = 0x3522C4u;
        goto label_3522c4;
    }
    ctx->pc = 0x3522BCu;
    SET_GPR_U32(ctx, 31, 0x3522C4u);
    ctx->pc = 0x34BFB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFB4u, 0x3522BCu, 0x3522C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522C4u;
label_3522c4:
    // 0x3522c4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3522c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3522c8:
    // 0x3522c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3522c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522cc:
    // 0x3522cc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3522ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3522d0:
    // 0x3522d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3522d4:
    if (ctx->pc == 0x3522D4u) {
        ctx->pc = 0x3522D8u;
        goto label_3522d8;
    }
    ctx->pc = 0x3522D0u;
    {
        const bool branch_taken_0x3522d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3522d0) {
            ctx->pc = 0x352328u;
            goto label_352328;
        }
    }
    ctx->pc = 0x3522D8u;
label_3522d8:
    // 0x3522d8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3522d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522dc:
    // 0x3522dc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3522dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522e0:
    // 0x3522e0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3522e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3522e4:
    // 0x3522e4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3522e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3522e8:
    // 0x3522e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3522e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3522ec:
    // 0x3522ec: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3522ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3522f0:
    // 0x3522f0: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x3522f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_3522f4:
    // 0x3522f4: 0x40f809  jalr        $v0
label_3522f8:
    if (ctx->pc == 0x3522F8u) {
        ctx->pc = 0x3522FCu;
        goto label_3522fc;
    }
    ctx->pc = 0x3522F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3522FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3522F4u, 0x3522FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3522FCu;
label_3522fc:
    // 0x3522fc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3522fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352300:
    // 0x352300: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352304:
    // 0x352304: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352308:
    if (ctx->pc == 0x352308u) {
        ctx->pc = 0x35230Cu;
        goto label_35230c;
    }
    ctx->pc = 0x352304u;
    {
        const bool branch_taken_0x352304 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352304) {
            ctx->pc = 0x352328u;
            goto label_352328;
        }
    }
    ctx->pc = 0x35230Cu;
label_35230c:
    // 0x35230c: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x35230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352310:
    // 0x352310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352314:
    // 0x352314: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352318:
    if (ctx->pc == 0x352318u) {
        ctx->pc = 0x35231Cu;
        goto label_35231c;
    }
    ctx->pc = 0x352314u;
    {
        const bool branch_taken_0x352314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352314) {
            ctx->pc = 0x352328u;
            goto label_352328;
        }
    }
    ctx->pc = 0x35231Cu;
label_35231c:
    // 0x35231c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352320:
    // 0x352320: 0x10000002  b           . + 4 + (0x2 << 2)
label_352324:
    if (ctx->pc == 0x352324u) {
        ctx->pc = 0x352328u;
        goto label_352328;
    }
    ctx->pc = 0x352320u;
    {
        const bool branch_taken_0x352320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352320) {
            ctx->pc = 0x35232Cu;
            goto label_35232c;
        }
    }
    ctx->pc = 0x352328u;
label_352328:
    // 0x352328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35232c:
    // 0x35232c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35232cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352330:
    // 0x352330: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352330u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352334:
    // 0x352334: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352338:
    // 0x352338: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35233c:
    // 0x35233c: 0x3e00008  jr          $ra
label_352340:
    if (ctx->pc == 0x352340u) {
        ctx->pc = 0x352344u;
        goto label_fallthrough_0x35233c;
    }
    ctx->pc = 0x35233Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35233Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35233c:
    ctx->pc = 0x352344u;
}
