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

// Function: sub_0034C648
// Address: 0x34c648 - 0x34c730
void sub_0034C648_0x34c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C648_0x34c648");
#endif

    switch (ctx->pc) {
        case 0x34c648u: goto label_34c648;
        case 0x34c64cu: goto label_34c64c;
        case 0x34c650u: goto label_34c650;
        case 0x34c654u: goto label_34c654;
        case 0x34c658u: goto label_34c658;
        case 0x34c65cu: goto label_34c65c;
        case 0x34c660u: goto label_34c660;
        case 0x34c664u: goto label_34c664;
        case 0x34c668u: goto label_34c668;
        case 0x34c66cu: goto label_34c66c;
        case 0x34c670u: goto label_34c670;
        case 0x34c674u: goto label_34c674;
        case 0x34c678u: goto label_34c678;
        case 0x34c67cu: goto label_34c67c;
        case 0x34c680u: goto label_34c680;
        case 0x34c684u: goto label_34c684;
        case 0x34c688u: goto label_34c688;
        case 0x34c68cu: goto label_34c68c;
        case 0x34c690u: goto label_34c690;
        case 0x34c694u: goto label_34c694;
        case 0x34c698u: goto label_34c698;
        case 0x34c69cu: goto label_34c69c;
        case 0x34c6a0u: goto label_34c6a0;
        case 0x34c6a4u: goto label_34c6a4;
        case 0x34c6a8u: goto label_34c6a8;
        case 0x34c6acu: goto label_34c6ac;
        case 0x34c6b0u: goto label_34c6b0;
        case 0x34c6b4u: goto label_34c6b4;
        case 0x34c6b8u: goto label_34c6b8;
        case 0x34c6bcu: goto label_34c6bc;
        case 0x34c6c0u: goto label_34c6c0;
        case 0x34c6c4u: goto label_34c6c4;
        case 0x34c6c8u: goto label_34c6c8;
        case 0x34c6ccu: goto label_34c6cc;
        case 0x34c6d0u: goto label_34c6d0;
        case 0x34c6d4u: goto label_34c6d4;
        case 0x34c6d8u: goto label_34c6d8;
        case 0x34c6dcu: goto label_34c6dc;
        case 0x34c6e0u: goto label_34c6e0;
        case 0x34c6e4u: goto label_34c6e4;
        case 0x34c6e8u: goto label_34c6e8;
        case 0x34c6ecu: goto label_34c6ec;
        case 0x34c6f0u: goto label_34c6f0;
        case 0x34c6f4u: goto label_34c6f4;
        case 0x34c6f8u: goto label_34c6f8;
        case 0x34c6fcu: goto label_34c6fc;
        case 0x34c700u: goto label_34c700;
        case 0x34c704u: goto label_34c704;
        case 0x34c708u: goto label_34c708;
        case 0x34c70cu: goto label_34c70c;
        case 0x34c710u: goto label_34c710;
        case 0x34c714u: goto label_34c714;
        case 0x34c718u: goto label_34c718;
        case 0x34c71cu: goto label_34c71c;
        case 0x34c720u: goto label_34c720;
        case 0x34c724u: goto label_34c724;
        case 0x34c728u: goto label_34c728;
        case 0x34c72cu: goto label_34c72c;
        default: break;
    }

    ctx->pc = 0x34c648u;

label_34c648:
    // 0x34c648: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34c64c:
    // 0x34c64c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_34c650:
    // 0x34c650: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_34c654:
    // 0x34c654: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c654u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c658:
    // 0x34c658: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c65c:
    // 0x34c65c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c660:
    // 0x34c660: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x34c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_34c664:
    // 0x34c664: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c668:
    // 0x34c668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c66c:
    // 0x34c66c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34c670:
    // 0x34c670: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34c674:
    // 0x34c674: 0xc0d3332  jal         func_34CCC8
label_34c678:
    if (ctx->pc == 0x34C678u) {
        ctx->pc = 0x34C67Cu;
        goto label_34c67c;
    }
    ctx->pc = 0x34C674u;
    SET_GPR_U32(ctx, 31, 0x34C67Cu);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34C674u, 0x34C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C67Cu;
label_34c67c:
    // 0x34c67c: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c680:
    // 0x34c680: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c684:
    // 0x34c684: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34c688:
    if (ctx->pc == 0x34C688u) {
        ctx->pc = 0x34C68Cu;
        goto label_34c68c;
    }
    ctx->pc = 0x34C684u;
    {
        const bool branch_taken_0x34c684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c684) {
            ctx->pc = 0x34C69Cu;
            goto label_34c69c;
        }
    }
    ctx->pc = 0x34C68Cu;
label_34c68c:
    // 0x34c68c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34c690:
    // 0x34c690: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34c690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34c694:
    // 0x34c694: 0x10000020  b           . + 4 + (0x20 << 2)
label_34c698:
    if (ctx->pc == 0x34C698u) {
        ctx->pc = 0x34C69Cu;
        goto label_34c69c;
    }
    ctx->pc = 0x34C694u;
    {
        const bool branch_taken_0x34c694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c694) {
            ctx->pc = 0x34C718u;
            goto label_34c718;
        }
    }
    ctx->pc = 0x34C69Cu;
label_34c69c:
    // 0x34c69c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c6a0:
    // 0x34c6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c6a4:
    // 0x34c6a4: 0xc0d407a  jal         func_3501E8
label_34c6a8:
    if (ctx->pc == 0x34C6A8u) {
        ctx->pc = 0x34C6ACu;
        goto label_34c6ac;
    }
    ctx->pc = 0x34C6A4u;
    SET_GPR_U32(ctx, 31, 0x34C6ACu);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34C6A4u, 0x34C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C6ACu;
label_34c6ac:
    // 0x34c6ac: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_34c6b0:
    // 0x34c6b0: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x34c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c6b4:
    // 0x34c6b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34c6b8:
    if (ctx->pc == 0x34C6B8u) {
        ctx->pc = 0x34C6BCu;
        goto label_34c6bc;
    }
    ctx->pc = 0x34C6B4u;
    {
        const bool branch_taken_0x34c6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c6b4) {
            ctx->pc = 0x34C6D8u;
            goto label_34c6d8;
        }
    }
    ctx->pc = 0x34C6BCu;
label_34c6bc:
    // 0x34c6bc: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34c6c0:
    // 0x34c6c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34c6c4:
    // 0x34c6c4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34c6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34c6c8:
    // 0x34c6c8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c6cc:
    // 0x34c6cc: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c6d0:
    // 0x34c6d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c6d4:
    if (ctx->pc == 0x34C6D4u) {
        ctx->pc = 0x34C6D8u;
        goto label_34c6d8;
    }
    ctx->pc = 0x34C6D0u;
    {
        const bool branch_taken_0x34c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c6d0) {
            ctx->pc = 0x34C6E0u;
            goto label_34c6e0;
        }
    }
    ctx->pc = 0x34C6D8u;
label_34c6d8:
    // 0x34c6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c6dc:
    // 0x34c6dc: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c6e0:
    // 0x34c6e0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c6e4:
    // 0x34c6e4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34c6e8:
    // 0x34c6e8: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x34c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_34c6ec:
    // 0x34c6ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c6f0:
    // 0x34c6f0: 0x2442ba48  addiu       $v0, $v0, -0x45B8
    ctx->pc = 0x34c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949448));
label_34c6f4:
    // 0x34c6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c6f8:
    // 0x34c6f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c6fc:
    // 0x34c6fc: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x34c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c700:
    // 0x34c700: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34c700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c704:
    // 0x34c704: 0x8fc60030  lw          $a2, 0x30($fp)
    ctx->pc = 0x34c704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c708:
    // 0x34c708: 0x40f809  jalr        $v0
label_34c70c:
    if (ctx->pc == 0x34C70Cu) {
        ctx->pc = 0x34C710u;
        goto label_34c710;
    }
    ctx->pc = 0x34C708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C708u, 0x34C710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C710u;
label_34c710:
    // 0x34c710: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34c710u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34c714:
    // 0x34c714: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c718:
    // 0x34c718: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c718u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c71c:
    // 0x34c71c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34c71cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34c720:
    // 0x34c720: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34c724:
    // 0x34c724: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34c724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34c728:
    // 0x34c728: 0x3e00008  jr          $ra
label_34c72c:
    if (ctx->pc == 0x34C72Cu) {
        ctx->pc = 0x34C730u;
        goto label_fallthrough_0x34c728;
    }
    ctx->pc = 0x34C728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c728:
    ctx->pc = 0x34C730u;
}
