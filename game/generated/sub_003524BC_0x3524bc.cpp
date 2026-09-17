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

// Function: sub_003524BC
// Address: 0x3524bc - 0x352568
void sub_003524BC_0x3524bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003524BC_0x3524bc");
#endif

    switch (ctx->pc) {
        case 0x3524bcu: goto label_3524bc;
        case 0x3524c0u: goto label_3524c0;
        case 0x3524c4u: goto label_3524c4;
        case 0x3524c8u: goto label_3524c8;
        case 0x3524ccu: goto label_3524cc;
        case 0x3524d0u: goto label_3524d0;
        case 0x3524d4u: goto label_3524d4;
        case 0x3524d8u: goto label_3524d8;
        case 0x3524dcu: goto label_3524dc;
        case 0x3524e0u: goto label_3524e0;
        case 0x3524e4u: goto label_3524e4;
        case 0x3524e8u: goto label_3524e8;
        case 0x3524ecu: goto label_3524ec;
        case 0x3524f0u: goto label_3524f0;
        case 0x3524f4u: goto label_3524f4;
        case 0x3524f8u: goto label_3524f8;
        case 0x3524fcu: goto label_3524fc;
        case 0x352500u: goto label_352500;
        case 0x352504u: goto label_352504;
        case 0x352508u: goto label_352508;
        case 0x35250cu: goto label_35250c;
        case 0x352510u: goto label_352510;
        case 0x352514u: goto label_352514;
        case 0x352518u: goto label_352518;
        case 0x35251cu: goto label_35251c;
        case 0x352520u: goto label_352520;
        case 0x352524u: goto label_352524;
        case 0x352528u: goto label_352528;
        case 0x35252cu: goto label_35252c;
        case 0x352530u: goto label_352530;
        case 0x352534u: goto label_352534;
        case 0x352538u: goto label_352538;
        case 0x35253cu: goto label_35253c;
        case 0x352540u: goto label_352540;
        case 0x352544u: goto label_352544;
        case 0x352548u: goto label_352548;
        case 0x35254cu: goto label_35254c;
        case 0x352550u: goto label_352550;
        case 0x352554u: goto label_352554;
        case 0x352558u: goto label_352558;
        case 0x35255cu: goto label_35255c;
        case 0x352560u: goto label_352560;
        case 0x352564u: goto label_352564;
        default: break;
    }

    ctx->pc = 0x3524bcu;

label_3524bc:
    // 0x3524bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3524bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3524c0:
    // 0x3524c0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3524c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3524c4:
    // 0x3524c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3524c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3524c8:
    // 0x3524c8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3524c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3524cc:
    // 0x3524cc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3524ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3524d0:
    // 0x3524d0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3524d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3524d4:
    // 0x3524d4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3524d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3524d8:
    // 0x3524d8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3524d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3524dc:
    // 0x3524dc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3524dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3524e0:
    // 0x3524e0: 0xc0d3054  jal         func_34C150
label_3524e4:
    if (ctx->pc == 0x3524E4u) {
        ctx->pc = 0x3524E8u;
        goto label_3524e8;
    }
    ctx->pc = 0x3524E0u;
    SET_GPR_U32(ctx, 31, 0x3524E8u);
    ctx->pc = 0x34C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C150u, 0x3524E0u, 0x3524E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3524E8u;
label_3524e8:
    // 0x3524e8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3524e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3524ec:
    // 0x3524ec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3524ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3524f0:
    // 0x3524f0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3524f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3524f4:
    // 0x3524f4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3524f8:
    if (ctx->pc == 0x3524F8u) {
        ctx->pc = 0x3524FCu;
        goto label_3524fc;
    }
    ctx->pc = 0x3524F4u;
    {
        const bool branch_taken_0x3524f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3524f4) {
            ctx->pc = 0x35254Cu;
            goto label_35254c;
        }
    }
    ctx->pc = 0x3524FCu;
label_3524fc:
    // 0x3524fc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3524fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352500:
    // 0x352500: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352504:
    // 0x352504: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352508:
    // 0x352508: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x352508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_35250c:
    // 0x35250c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352510:
    // 0x352510: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352514:
    // 0x352514: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352518:
    // 0x352518: 0x40f809  jalr        $v0
label_35251c:
    if (ctx->pc == 0x35251Cu) {
        ctx->pc = 0x352520u;
        goto label_352520;
    }
    ctx->pc = 0x352518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352520u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352518u, 0x352520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352520u;
label_352520:
    // 0x352520: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352520u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352524:
    // 0x352524: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352528:
    // 0x352528: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_35252c:
    if (ctx->pc == 0x35252Cu) {
        ctx->pc = 0x352530u;
        goto label_352530;
    }
    ctx->pc = 0x352528u;
    {
        const bool branch_taken_0x352528 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x352528) {
            ctx->pc = 0x35254Cu;
            goto label_35254c;
        }
    }
    ctx->pc = 0x352530u;
label_352530:
    // 0x352530: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352534:
    // 0x352534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352538:
    // 0x352538: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35253c:
    if (ctx->pc == 0x35253Cu) {
        ctx->pc = 0x352540u;
        goto label_352540;
    }
    ctx->pc = 0x352538u;
    {
        const bool branch_taken_0x352538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x352538) {
            ctx->pc = 0x35254Cu;
            goto label_35254c;
        }
    }
    ctx->pc = 0x352540u;
label_352540:
    // 0x352540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352544:
    // 0x352544: 0x10000002  b           . + 4 + (0x2 << 2)
label_352548:
    if (ctx->pc == 0x352548u) {
        ctx->pc = 0x35254Cu;
        goto label_35254c;
    }
    ctx->pc = 0x352544u;
    {
        const bool branch_taken_0x352544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352544) {
            ctx->pc = 0x352550u;
            goto label_352550;
        }
    }
    ctx->pc = 0x35254Cu;
label_35254c:
    // 0x35254c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35254cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352550:
    // 0x352550: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352550u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352554:
    // 0x352554: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_352558:
    // 0x352558: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x352558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35255c:
    // 0x35255c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35255cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352560:
    // 0x352560: 0x3e00008  jr          $ra
label_352564:
    if (ctx->pc == 0x352564u) {
        ctx->pc = 0x352568u;
        goto label_fallthrough_0x352560;
    }
    ctx->pc = 0x352560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352560:
    ctx->pc = 0x352568u;
}
