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

// Function: sub_003532AC
// Address: 0x3532ac - 0x353358
void sub_003532AC_0x3532ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003532AC_0x3532ac");
#endif

    switch (ctx->pc) {
        case 0x3532acu: goto label_3532ac;
        case 0x3532b0u: goto label_3532b0;
        case 0x3532b4u: goto label_3532b4;
        case 0x3532b8u: goto label_3532b8;
        case 0x3532bcu: goto label_3532bc;
        case 0x3532c0u: goto label_3532c0;
        case 0x3532c4u: goto label_3532c4;
        case 0x3532c8u: goto label_3532c8;
        case 0x3532ccu: goto label_3532cc;
        case 0x3532d0u: goto label_3532d0;
        case 0x3532d4u: goto label_3532d4;
        case 0x3532d8u: goto label_3532d8;
        case 0x3532dcu: goto label_3532dc;
        case 0x3532e0u: goto label_3532e0;
        case 0x3532e4u: goto label_3532e4;
        case 0x3532e8u: goto label_3532e8;
        case 0x3532ecu: goto label_3532ec;
        case 0x3532f0u: goto label_3532f0;
        case 0x3532f4u: goto label_3532f4;
        case 0x3532f8u: goto label_3532f8;
        case 0x3532fcu: goto label_3532fc;
        case 0x353300u: goto label_353300;
        case 0x353304u: goto label_353304;
        case 0x353308u: goto label_353308;
        case 0x35330cu: goto label_35330c;
        case 0x353310u: goto label_353310;
        case 0x353314u: goto label_353314;
        case 0x353318u: goto label_353318;
        case 0x35331cu: goto label_35331c;
        case 0x353320u: goto label_353320;
        case 0x353324u: goto label_353324;
        case 0x353328u: goto label_353328;
        case 0x35332cu: goto label_35332c;
        case 0x353330u: goto label_353330;
        case 0x353334u: goto label_353334;
        case 0x353338u: goto label_353338;
        case 0x35333cu: goto label_35333c;
        case 0x353340u: goto label_353340;
        case 0x353344u: goto label_353344;
        case 0x353348u: goto label_353348;
        case 0x35334cu: goto label_35334c;
        case 0x353350u: goto label_353350;
        case 0x353354u: goto label_353354;
        default: break;
    }

    ctx->pc = 0x3532acu;

label_3532ac:
    // 0x3532ac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3532acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3532b0:
    // 0x3532b0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3532b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3532b4:
    // 0x3532b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3532b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3532b8:
    // 0x3532b8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3532b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3532bc:
    // 0x3532bc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3532bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3532c0:
    // 0x3532c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3532c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3532c4:
    // 0x3532c4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3532c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3532c8:
    // 0x3532c8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3532c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3532cc:
    // 0x3532cc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3532ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3532d0:
    // 0x3532d0: 0xc0d51a4  jal         func_354690
label_3532d4:
    if (ctx->pc == 0x3532D4u) {
        ctx->pc = 0x3532D8u;
        goto label_3532d8;
    }
    ctx->pc = 0x3532D0u;
    SET_GPR_U32(ctx, 31, 0x3532D8u);
    ctx->pc = 0x354690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354690u, 0x3532D0u, 0x3532D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3532D8u;
label_3532d8:
    // 0x3532d8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3532d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3532dc:
    // 0x3532dc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3532dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3532e0:
    // 0x3532e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3532e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3532e4:
    // 0x3532e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3532e8:
    if (ctx->pc == 0x3532E8u) {
        ctx->pc = 0x3532ECu;
        goto label_3532ec;
    }
    ctx->pc = 0x3532E4u;
    {
        const bool branch_taken_0x3532e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3532e4) {
            ctx->pc = 0x35333Cu;
            goto label_35333c;
        }
    }
    ctx->pc = 0x3532ECu;
label_3532ec:
    // 0x3532ec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3532ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3532f0:
    // 0x3532f0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3532f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3532f4:
    // 0x3532f4: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3532f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3532f8:
    // 0x3532f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3532f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3532fc:
    // 0x3532fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3532fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_353300:
    // 0x353300: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x353300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_353304:
    // 0x353304: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x353304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_353308:
    // 0x353308: 0x40f809  jalr        $v0
label_35330c:
    if (ctx->pc == 0x35330Cu) {
        ctx->pc = 0x353310u;
        goto label_353310;
    }
    ctx->pc = 0x353308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353308u, 0x353310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353310u;
label_353310:
    // 0x353310: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x353310u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_353314:
    // 0x353314: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_353318:
    // 0x353318: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_35331c:
    if (ctx->pc == 0x35331Cu) {
        ctx->pc = 0x353320u;
        goto label_353320;
    }
    ctx->pc = 0x353318u;
    {
        const bool branch_taken_0x353318 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x353318) {
            ctx->pc = 0x35333Cu;
            goto label_35333c;
        }
    }
    ctx->pc = 0x353320u;
label_353320:
    // 0x353320: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x353320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_353324:
    // 0x353324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353328:
    // 0x353328: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35332c:
    if (ctx->pc == 0x35332Cu) {
        ctx->pc = 0x353330u;
        goto label_353330;
    }
    ctx->pc = 0x353328u;
    {
        const bool branch_taken_0x353328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x353328) {
            ctx->pc = 0x35333Cu;
            goto label_35333c;
        }
    }
    ctx->pc = 0x353330u;
label_353330:
    // 0x353330: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_353334:
    // 0x353334: 0x10000002  b           . + 4 + (0x2 << 2)
label_353338:
    if (ctx->pc == 0x353338u) {
        ctx->pc = 0x35333Cu;
        goto label_35333c;
    }
    ctx->pc = 0x353334u;
    {
        const bool branch_taken_0x353334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353334) {
            ctx->pc = 0x353340u;
            goto label_353340;
        }
    }
    ctx->pc = 0x35333Cu;
label_35333c:
    // 0x35333c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35333cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353340:
    // 0x353340: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353340u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_353344:
    // 0x353344: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353344u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_353348:
    // 0x353348: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35334c:
    // 0x35334c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35334cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_353350:
    // 0x353350: 0x3e00008  jr          $ra
label_353354:
    if (ctx->pc == 0x353354u) {
        ctx->pc = 0x353358u;
        goto label_fallthrough_0x353350;
    }
    ctx->pc = 0x353350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x353350:
    ctx->pc = 0x353358u;
}
