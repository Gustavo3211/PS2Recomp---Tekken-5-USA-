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

// Function: sub_0034C550
// Address: 0x34c550 - 0x34c648
void sub_0034C550_0x34c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C550_0x34c550");
#endif

    switch (ctx->pc) {
        case 0x34c550u: goto label_34c550;
        case 0x34c554u: goto label_34c554;
        case 0x34c558u: goto label_34c558;
        case 0x34c55cu: goto label_34c55c;
        case 0x34c560u: goto label_34c560;
        case 0x34c564u: goto label_34c564;
        case 0x34c568u: goto label_34c568;
        case 0x34c56cu: goto label_34c56c;
        case 0x34c570u: goto label_34c570;
        case 0x34c574u: goto label_34c574;
        case 0x34c578u: goto label_34c578;
        case 0x34c57cu: goto label_34c57c;
        case 0x34c580u: goto label_34c580;
        case 0x34c584u: goto label_34c584;
        case 0x34c588u: goto label_34c588;
        case 0x34c58cu: goto label_34c58c;
        case 0x34c590u: goto label_34c590;
        case 0x34c594u: goto label_34c594;
        case 0x34c598u: goto label_34c598;
        case 0x34c59cu: goto label_34c59c;
        case 0x34c5a0u: goto label_34c5a0;
        case 0x34c5a4u: goto label_34c5a4;
        case 0x34c5a8u: goto label_34c5a8;
        case 0x34c5acu: goto label_34c5ac;
        case 0x34c5b0u: goto label_34c5b0;
        case 0x34c5b4u: goto label_34c5b4;
        case 0x34c5b8u: goto label_34c5b8;
        case 0x34c5bcu: goto label_34c5bc;
        case 0x34c5c0u: goto label_34c5c0;
        case 0x34c5c4u: goto label_34c5c4;
        case 0x34c5c8u: goto label_34c5c8;
        case 0x34c5ccu: goto label_34c5cc;
        case 0x34c5d0u: goto label_34c5d0;
        case 0x34c5d4u: goto label_34c5d4;
        case 0x34c5d8u: goto label_34c5d8;
        case 0x34c5dcu: goto label_34c5dc;
        case 0x34c5e0u: goto label_34c5e0;
        case 0x34c5e4u: goto label_34c5e4;
        case 0x34c5e8u: goto label_34c5e8;
        case 0x34c5ecu: goto label_34c5ec;
        case 0x34c5f0u: goto label_34c5f0;
        case 0x34c5f4u: goto label_34c5f4;
        case 0x34c5f8u: goto label_34c5f8;
        case 0x34c5fcu: goto label_34c5fc;
        case 0x34c600u: goto label_34c600;
        case 0x34c604u: goto label_34c604;
        case 0x34c608u: goto label_34c608;
        case 0x34c60cu: goto label_34c60c;
        case 0x34c610u: goto label_34c610;
        case 0x34c614u: goto label_34c614;
        case 0x34c618u: goto label_34c618;
        case 0x34c61cu: goto label_34c61c;
        case 0x34c620u: goto label_34c620;
        case 0x34c624u: goto label_34c624;
        case 0x34c628u: goto label_34c628;
        case 0x34c62cu: goto label_34c62c;
        case 0x34c630u: goto label_34c630;
        case 0x34c634u: goto label_34c634;
        case 0x34c638u: goto label_34c638;
        case 0x34c63cu: goto label_34c63c;
        case 0x34c640u: goto label_34c640;
        case 0x34c644u: goto label_34c644;
        default: break;
    }

    ctx->pc = 0x34c550u;

label_34c550:
    // 0x34c550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34c554:
    // 0x34c554: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_34c558:
    // 0x34c558: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34c55c:
    // 0x34c55c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c55cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c560:
    // 0x34c560: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c560u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c564:
    // 0x34c564: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34c564u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34c568:
    // 0x34c568: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34c568u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_34c56c:
    // 0x34c56c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34c570:
    // 0x34c570: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x34c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c574:
    // 0x34c574: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c578:
    // 0x34c578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c57c:
    // 0x34c57c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34c580:
    // 0x34c580: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34c584:
    // 0x34c584: 0xc0d3332  jal         func_34CCC8
label_34c588:
    if (ctx->pc == 0x34C588u) {
        ctx->pc = 0x34C58Cu;
        goto label_34c58c;
    }
    ctx->pc = 0x34C584u;
    SET_GPR_U32(ctx, 31, 0x34C58Cu);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34C584u, 0x34C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C58Cu;
label_34c58c:
    // 0x34c58c: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34c590:
    // 0x34c590: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34c594:
    // 0x34c594: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34c598:
    if (ctx->pc == 0x34C598u) {
        ctx->pc = 0x34C59Cu;
        goto label_34c59c;
    }
    ctx->pc = 0x34C594u;
    {
        const bool branch_taken_0x34c594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c594) {
            ctx->pc = 0x34C5ACu;
            goto label_34c5ac;
        }
    }
    ctx->pc = 0x34C59Cu;
label_34c59c:
    // 0x34c59c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34c5a0:
    // 0x34c5a0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34c5a4:
    // 0x34c5a4: 0x10000022  b           . + 4 + (0x22 << 2)
label_34c5a8:
    if (ctx->pc == 0x34C5A8u) {
        ctx->pc = 0x34C5ACu;
        goto label_34c5ac;
    }
    ctx->pc = 0x34C5A4u;
    {
        const bool branch_taken_0x34c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c5a4) {
            ctx->pc = 0x34C630u;
            goto label_34c630;
        }
    }
    ctx->pc = 0x34C5ACu;
label_34c5ac:
    // 0x34c5ac: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34c5b0:
    // 0x34c5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c5b4:
    // 0x34c5b4: 0xc0d407a  jal         func_3501E8
label_34c5b8:
    if (ctx->pc == 0x34C5B8u) {
        ctx->pc = 0x34C5BCu;
        goto label_34c5bc;
    }
    ctx->pc = 0x34C5B4u;
    SET_GPR_U32(ctx, 31, 0x34C5BCu);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34C5B4u, 0x34C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C5BCu;
label_34c5bc:
    // 0x34c5bc: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x34c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_34c5c0:
    // 0x34c5c0: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x34c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34c5c4:
    // 0x34c5c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34c5c8:
    if (ctx->pc == 0x34C5C8u) {
        ctx->pc = 0x34C5CCu;
        goto label_34c5cc;
    }
    ctx->pc = 0x34C5C4u;
    {
        const bool branch_taken_0x34c5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c5c4) {
            ctx->pc = 0x34C5E8u;
            goto label_34c5e8;
        }
    }
    ctx->pc = 0x34C5CCu;
label_34c5cc:
    // 0x34c5cc: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x34c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
label_34c5d0:
    // 0x34c5d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34c5d4:
    // 0x34c5d4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34c5d8:
    // 0x34c5d8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c5dc:
    // 0x34c5dc: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34c5e0:
    // 0x34c5e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c5e4:
    if (ctx->pc == 0x34C5E4u) {
        ctx->pc = 0x34C5E8u;
        goto label_34c5e8;
    }
    ctx->pc = 0x34C5E0u;
    {
        const bool branch_taken_0x34c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c5e0) {
            ctx->pc = 0x34C5F0u;
            goto label_34c5f0;
        }
    }
    ctx->pc = 0x34C5E8u;
label_34c5e8:
    // 0x34c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c5ec:
    // 0x34c5ec: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x34c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_34c5f0:
    // 0x34c5f0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x34c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_34c5f4:
    // 0x34c5f4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34c5f8:
    // 0x34c5f8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x34c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_34c5fc:
    // 0x34c5fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c600:
    // 0x34c600: 0x2442ba54  addiu       $v0, $v0, -0x45AC
    ctx->pc = 0x34c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949460));
label_34c604:
    // 0x34c604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c608:
    // 0x34c608: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c60c:
    // 0x34c60c: 0x8fc40044  lw          $a0, 0x44($fp)
    ctx->pc = 0x34c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34c610:
    // 0x34c610: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x34c610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34c614:
    // 0x34c614: 0x8fc60040  lw          $a2, 0x40($fp)
    ctx->pc = 0x34c614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34c618:
    // 0x34c618: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x34c618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c61c:
    // 0x34c61c: 0x8fc80008  lw          $t0, 0x8($fp)
    ctx->pc = 0x34c61cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c620:
    // 0x34c620: 0x40f809  jalr        $v0
label_34c624:
    if (ctx->pc == 0x34C624u) {
        ctx->pc = 0x34C628u;
        goto label_34c628;
    }
    ctx->pc = 0x34C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C628u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C620u, 0x34C628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C628u;
label_34c628:
    // 0x34c628: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c628u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c62c:
    // 0x34c62c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c630:
    // 0x34c630: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c630u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c634:
    // 0x34c634: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34c634u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34c638:
    // 0x34c638: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34c63c:
    // 0x34c63c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34c63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_34c640:
    // 0x34c640: 0x3e00008  jr          $ra
label_34c644:
    if (ctx->pc == 0x34C644u) {
        ctx->pc = 0x34C648u;
        goto label_fallthrough_0x34c640;
    }
    ctx->pc = 0x34C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c640:
    ctx->pc = 0x34C648u;
}
