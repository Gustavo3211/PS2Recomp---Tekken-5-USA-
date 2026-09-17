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

// Function: sub_0035449C
// Address: 0x35449c - 0x3545d0
void sub_0035449C_0x35449c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035449C_0x35449c");
#endif

    switch (ctx->pc) {
        case 0x35449cu: goto label_35449c;
        case 0x3544a0u: goto label_3544a0;
        case 0x3544a4u: goto label_3544a4;
        case 0x3544a8u: goto label_3544a8;
        case 0x3544acu: goto label_3544ac;
        case 0x3544b0u: goto label_3544b0;
        case 0x3544b4u: goto label_3544b4;
        case 0x3544b8u: goto label_3544b8;
        case 0x3544bcu: goto label_3544bc;
        case 0x3544c0u: goto label_3544c0;
        case 0x3544c4u: goto label_3544c4;
        case 0x3544c8u: goto label_3544c8;
        case 0x3544ccu: goto label_3544cc;
        case 0x3544d0u: goto label_3544d0;
        case 0x3544d4u: goto label_3544d4;
        case 0x3544d8u: goto label_3544d8;
        case 0x3544dcu: goto label_3544dc;
        case 0x3544e0u: goto label_3544e0;
        case 0x3544e4u: goto label_3544e4;
        case 0x3544e8u: goto label_3544e8;
        case 0x3544ecu: goto label_3544ec;
        case 0x3544f0u: goto label_3544f0;
        case 0x3544f4u: goto label_3544f4;
        case 0x3544f8u: goto label_3544f8;
        case 0x3544fcu: goto label_3544fc;
        case 0x354500u: goto label_354500;
        case 0x354504u: goto label_354504;
        case 0x354508u: goto label_354508;
        case 0x35450cu: goto label_35450c;
        case 0x354510u: goto label_354510;
        case 0x354514u: goto label_354514;
        case 0x354518u: goto label_354518;
        case 0x35451cu: goto label_35451c;
        case 0x354520u: goto label_354520;
        case 0x354524u: goto label_354524;
        case 0x354528u: goto label_354528;
        case 0x35452cu: goto label_35452c;
        case 0x354530u: goto label_354530;
        case 0x354534u: goto label_354534;
        case 0x354538u: goto label_354538;
        case 0x35453cu: goto label_35453c;
        case 0x354540u: goto label_354540;
        case 0x354544u: goto label_354544;
        case 0x354548u: goto label_354548;
        case 0x35454cu: goto label_35454c;
        case 0x354550u: goto label_354550;
        case 0x354554u: goto label_354554;
        case 0x354558u: goto label_354558;
        case 0x35455cu: goto label_35455c;
        case 0x354560u: goto label_354560;
        case 0x354564u: goto label_354564;
        case 0x354568u: goto label_354568;
        case 0x35456cu: goto label_35456c;
        case 0x354570u: goto label_354570;
        case 0x354574u: goto label_354574;
        case 0x354578u: goto label_354578;
        case 0x35457cu: goto label_35457c;
        case 0x354580u: goto label_354580;
        case 0x354584u: goto label_354584;
        case 0x354588u: goto label_354588;
        case 0x35458cu: goto label_35458c;
        case 0x354590u: goto label_354590;
        case 0x354594u: goto label_354594;
        case 0x354598u: goto label_354598;
        case 0x35459cu: goto label_35459c;
        case 0x3545a0u: goto label_3545a0;
        case 0x3545a4u: goto label_3545a4;
        case 0x3545a8u: goto label_3545a8;
        case 0x3545acu: goto label_3545ac;
        case 0x3545b0u: goto label_3545b0;
        case 0x3545b4u: goto label_3545b4;
        case 0x3545b8u: goto label_3545b8;
        case 0x3545bcu: goto label_3545bc;
        case 0x3545c0u: goto label_3545c0;
        case 0x3545c4u: goto label_3545c4;
        case 0x3545c8u: goto label_3545c8;
        case 0x3545ccu: goto label_3545cc;
        default: break;
    }

    ctx->pc = 0x35449cu;

label_35449c:
    // 0x35449c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35449cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3544a0:
    // 0x3544a0: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x3544a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_3544a4:
    // 0x3544a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3544a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_3544a8:
    // 0x3544a8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3544a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3544ac:
    // 0x3544ac: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3544acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3544b0:
    // 0x3544b0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3544b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_3544b4:
    // 0x3544b4: 0x8f82cbe0  lw          $v0, -0x3420($gp)
    ctx->pc = 0x3544b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953952)));
label_3544b8:
    // 0x3544b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3544bc:
    if (ctx->pc == 0x3544BCu) {
        ctx->pc = 0x3544C0u;
        goto label_3544c0;
    }
    ctx->pc = 0x3544B8u;
    {
        const bool branch_taken_0x3544b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3544b8) {
            ctx->pc = 0x3544D0u;
            goto label_3544d0;
        }
    }
    ctx->pc = 0x3544C0u;
label_3544c0:
    // 0x3544c0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3544c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_3544c4:
    // 0x3544c4: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x3544c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
label_3544c8:
    // 0x3544c8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3544cc:
    if (ctx->pc == 0x3544CCu) {
        ctx->pc = 0x3544D0u;
        goto label_3544d0;
    }
    ctx->pc = 0x3544C8u;
    {
        const bool branch_taken_0x3544c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544c8) {
            ctx->pc = 0x3545B8u;
            goto label_3545b8;
        }
    }
    ctx->pc = 0x3544D0u;
label_3544d0:
    // 0x3544d0: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x3544d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_3544d4:
    // 0x3544d4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3544d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3544d8:
    // 0x3544d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3544d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3544dc:
    // 0x3544dc: 0xc0d521a  jal         func_354868
label_3544e0:
    if (ctx->pc == 0x3544E0u) {
        ctx->pc = 0x3544E4u;
        goto label_3544e4;
    }
    ctx->pc = 0x3544DCu;
    SET_GPR_U32(ctx, 31, 0x3544E4u);
    ctx->pc = 0x354868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354868u, 0x3544DCu, 0x3544E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3544E4u;
label_3544e4:
    // 0x3544e4: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x3544e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_3544e8:
    // 0x3544e8: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x3544e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_3544ec:
    // 0x3544ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3544f0:
    if (ctx->pc == 0x3544F0u) {
        ctx->pc = 0x3544F4u;
        goto label_3544f4;
    }
    ctx->pc = 0x3544ECu;
    {
        const bool branch_taken_0x3544ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3544ec) {
            ctx->pc = 0x354504u;
            goto label_354504;
        }
    }
    ctx->pc = 0x3544F4u;
label_3544f4:
    // 0x3544f4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3544f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_3544f8:
    // 0x3544f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3544f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3544fc:
    // 0x3544fc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_354500:
    if (ctx->pc == 0x354500u) {
        ctx->pc = 0x354504u;
        goto label_354504;
    }
    ctx->pc = 0x3544FCu;
    {
        const bool branch_taken_0x3544fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3544fc) {
            ctx->pc = 0x3545B8u;
            goto label_3545b8;
        }
    }
    ctx->pc = 0x354504u;
label_354504:
    // 0x354504: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x354504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_354508:
    // 0x354508: 0x8fc40020  lw          $a0, 0x20($fp)
    ctx->pc = 0x354508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_35450c:
    // 0x35450c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35450cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_354510:
    // 0x354510: 0xc0d5232  jal         func_3548C8
label_354514:
    if (ctx->pc == 0x354514u) {
        ctx->pc = 0x354518u;
        goto label_354518;
    }
    ctx->pc = 0x354510u;
    SET_GPR_U32(ctx, 31, 0x354518u);
    ctx->pc = 0x3548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3548C8u, 0x354510u, 0x354518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354518u;
label_354518:
    // 0x354518: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x354518u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_35451c:
    // 0x35451c: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x35451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_354520:
    // 0x354520: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_354524:
    if (ctx->pc == 0x354524u) {
        ctx->pc = 0x354528u;
        goto label_354528;
    }
    ctx->pc = 0x354520u;
    {
        const bool branch_taken_0x354520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354520) {
            ctx->pc = 0x354538u;
            goto label_354538;
        }
    }
    ctx->pc = 0x354528u;
label_354528:
    // 0x354528: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x354528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_35452c:
    // 0x35452c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x35452cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_354530:
    // 0x354530: 0x10000021  b           . + 4 + (0x21 << 2)
label_354534:
    if (ctx->pc == 0x354534u) {
        ctx->pc = 0x354538u;
        goto label_354538;
    }
    ctx->pc = 0x354530u;
    {
        const bool branch_taken_0x354530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354530) {
            ctx->pc = 0x3545B8u;
            goto label_3545b8;
        }
    }
    ctx->pc = 0x354538u;
label_354538:
    // 0x354538: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x354538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_35453c:
    // 0x35453c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x35453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_354540:
    // 0x354540: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x354540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_354544:
    // 0x354544: 0x40f809  jalr        $v0
label_354548:
    if (ctx->pc == 0x354548u) {
        ctx->pc = 0x35454Cu;
        goto label_35454c;
    }
    ctx->pc = 0x354544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35454Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354544u, 0x35454Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35454Cu;
label_35454c:
    // 0x35454c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x35454cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_354550:
    // 0x354550: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_354554:
    // 0x354554: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_354558:
    if (ctx->pc == 0x354558u) {
        ctx->pc = 0x35455Cu;
        goto label_35455c;
    }
    ctx->pc = 0x354554u;
    {
        const bool branch_taken_0x354554 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x354554) {
            ctx->pc = 0x354574u;
            goto label_354574;
        }
    }
    ctx->pc = 0x35455Cu;
label_35455c:
    // 0x35455c: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x35455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_354560:
    // 0x354560: 0xc0d52b3  jal         func_354ACC
label_354564:
    if (ctx->pc == 0x354564u) {
        ctx->pc = 0x354568u;
        goto label_354568;
    }
    ctx->pc = 0x354560u;
    SET_GPR_U32(ctx, 31, 0x354568u);
    ctx->pc = 0x354ACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354ACCu, 0x354560u, 0x354568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354568u;
label_354568:
    // 0x354568: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35456c:
    // 0x35456c: 0x10000012  b           . + 4 + (0x12 << 2)
label_354570:
    if (ctx->pc == 0x354570u) {
        ctx->pc = 0x354574u;
        goto label_354574;
    }
    ctx->pc = 0x35456Cu;
    {
        const bool branch_taken_0x35456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35456c) {
            ctx->pc = 0x3545B8u;
            goto label_3545b8;
        }
    }
    ctx->pc = 0x354574u;
label_354574:
    // 0x354574: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x354574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_354578:
    // 0x354578: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x354578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35457c:
    // 0x35457c: 0xc0d52c0  jal         func_354B00
label_354580:
    if (ctx->pc == 0x354580u) {
        ctx->pc = 0x354584u;
        goto label_354584;
    }
    ctx->pc = 0x35457Cu;
    SET_GPR_U32(ctx, 31, 0x354584u);
    ctx->pc = 0x354B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B00u, 0x35457Cu, 0x354584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354584u;
label_354584:
    // 0x354584: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x354584u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_354588:
    // 0x354588: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35458c:
    // 0x35458c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_354590:
    if (ctx->pc == 0x354590u) {
        ctx->pc = 0x354594u;
        goto label_354594;
    }
    ctx->pc = 0x35458Cu;
    {
        const bool branch_taken_0x35458c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35458c) {
            ctx->pc = 0x3545B0u;
            goto label_3545b0;
        }
    }
    ctx->pc = 0x354594u;
label_354594:
    // 0x354594: 0x8fc40024  lw          $a0, 0x24($fp)
    ctx->pc = 0x354594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_354598:
    // 0x354598: 0xc0d52b3  jal         func_354ACC
label_35459c:
    if (ctx->pc == 0x35459Cu) {
        ctx->pc = 0x3545A0u;
        goto label_3545a0;
    }
    ctx->pc = 0x354598u;
    SET_GPR_U32(ctx, 31, 0x3545A0u);
    ctx->pc = 0x354ACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354ACCu, 0x354598u, 0x3545A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545A0u;
label_3545a0:
    // 0x3545a0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3545a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_3545a4:
    // 0x3545a4: 0x3442fff4  ori         $v0, $v0, 0xFFF4
    ctx->pc = 0x3545a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65524);
label_3545a8:
    // 0x3545a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3545ac:
    if (ctx->pc == 0x3545ACu) {
        ctx->pc = 0x3545B0u;
        goto label_3545b0;
    }
    ctx->pc = 0x3545A8u;
    {
        const bool branch_taken_0x3545a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545a8) {
            ctx->pc = 0x3545B8u;
            goto label_3545b8;
        }
    }
    ctx->pc = 0x3545B0u;
label_3545b0:
    // 0x3545b0: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3545b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
label_3545b4:
    // 0x3545b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3545b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3545b8:
    // 0x3545b8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3545b8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3545bc:
    // 0x3545bc: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3545bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3545c0:
    // 0x3545c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3545c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3545c4:
    // 0x3545c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3545c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3545c8:
    // 0x3545c8: 0x3e00008  jr          $ra
label_3545cc:
    if (ctx->pc == 0x3545CCu) {
        ctx->pc = 0x3545D0u;
        goto label_fallthrough_0x3545c8;
    }
    ctx->pc = 0x3545C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3545C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3545c8:
    ctx->pc = 0x3545D0u;
}
