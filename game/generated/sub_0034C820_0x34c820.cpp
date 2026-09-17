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

// Function: sub_0034C820
// Address: 0x34c820 - 0x34c908
void sub_0034C820_0x34c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C820_0x34c820");
#endif

    switch (ctx->pc) {
        case 0x34c820u: goto label_34c820;
        case 0x34c824u: goto label_34c824;
        case 0x34c828u: goto label_34c828;
        case 0x34c82cu: goto label_34c82c;
        case 0x34c830u: goto label_34c830;
        case 0x34c834u: goto label_34c834;
        case 0x34c838u: goto label_34c838;
        case 0x34c83cu: goto label_34c83c;
        case 0x34c840u: goto label_34c840;
        case 0x34c844u: goto label_34c844;
        case 0x34c848u: goto label_34c848;
        case 0x34c84cu: goto label_34c84c;
        case 0x34c850u: goto label_34c850;
        case 0x34c854u: goto label_34c854;
        case 0x34c858u: goto label_34c858;
        case 0x34c85cu: goto label_34c85c;
        case 0x34c860u: goto label_34c860;
        case 0x34c864u: goto label_34c864;
        case 0x34c868u: goto label_34c868;
        case 0x34c86cu: goto label_34c86c;
        case 0x34c870u: goto label_34c870;
        case 0x34c874u: goto label_34c874;
        case 0x34c878u: goto label_34c878;
        case 0x34c87cu: goto label_34c87c;
        case 0x34c880u: goto label_34c880;
        case 0x34c884u: goto label_34c884;
        case 0x34c888u: goto label_34c888;
        case 0x34c88cu: goto label_34c88c;
        case 0x34c890u: goto label_34c890;
        case 0x34c894u: goto label_34c894;
        case 0x34c898u: goto label_34c898;
        case 0x34c89cu: goto label_34c89c;
        case 0x34c8a0u: goto label_34c8a0;
        case 0x34c8a4u: goto label_34c8a4;
        case 0x34c8a8u: goto label_34c8a8;
        case 0x34c8acu: goto label_34c8ac;
        case 0x34c8b0u: goto label_34c8b0;
        case 0x34c8b4u: goto label_34c8b4;
        case 0x34c8b8u: goto label_34c8b8;
        case 0x34c8bcu: goto label_34c8bc;
        case 0x34c8c0u: goto label_34c8c0;
        case 0x34c8c4u: goto label_34c8c4;
        case 0x34c8c8u: goto label_34c8c8;
        case 0x34c8ccu: goto label_34c8cc;
        case 0x34c8d0u: goto label_34c8d0;
        case 0x34c8d4u: goto label_34c8d4;
        case 0x34c8d8u: goto label_34c8d8;
        case 0x34c8dcu: goto label_34c8dc;
        case 0x34c8e0u: goto label_34c8e0;
        case 0x34c8e4u: goto label_34c8e4;
        case 0x34c8e8u: goto label_34c8e8;
        case 0x34c8ecu: goto label_34c8ec;
        case 0x34c8f0u: goto label_34c8f0;
        case 0x34c8f4u: goto label_34c8f4;
        case 0x34c8f8u: goto label_34c8f8;
        case 0x34c8fcu: goto label_34c8fc;
        case 0x34c900u: goto label_34c900;
        case 0x34c904u: goto label_34c904;
        default: break;
    }

    ctx->pc = 0x34c820u;

label_34c820:
    // 0x34c820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34c824:
    // 0x34c824: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_34c828:
    // 0x34c828: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_34c82c:
    // 0x34c82c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c82cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c830:
    // 0x34c830: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c834:
    // 0x34c834: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c838:
    // 0x34c838: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x34c838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_34c83c:
    // 0x34c83c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c840:
    // 0x34c840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c844:
    // 0x34c844: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34c848:
    // 0x34c848: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34c84c:
    // 0x34c84c: 0xc0d3332  jal         func_34CCC8
label_34c850:
    if (ctx->pc == 0x34C850u) {
        ctx->pc = 0x34C854u;
        goto label_34c854;
    }
    ctx->pc = 0x34C84Cu;
    SET_GPR_U32(ctx, 31, 0x34C854u);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34C84Cu, 0x34C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C854u;
label_34c854:
    // 0x34c854: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c858:
    // 0x34c858: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x34c858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c85c:
    // 0x34c85c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34c860:
    if (ctx->pc == 0x34C860u) {
        ctx->pc = 0x34C864u;
        goto label_34c864;
    }
    ctx->pc = 0x34C85Cu;
    {
        const bool branch_taken_0x34c85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c85c) {
            ctx->pc = 0x34C874u;
            goto label_34c874;
        }
    }
    ctx->pc = 0x34C864u;
label_34c864:
    // 0x34c864: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34c868:
    // 0x34c868: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34c86c:
    // 0x34c86c: 0x10000020  b           . + 4 + (0x20 << 2)
label_34c870:
    if (ctx->pc == 0x34C870u) {
        ctx->pc = 0x34C874u;
        goto label_34c874;
    }
    ctx->pc = 0x34C86Cu;
    {
        const bool branch_taken_0x34c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c86c) {
            ctx->pc = 0x34C8F0u;
            goto label_34c8f0;
        }
    }
    ctx->pc = 0x34C874u;
label_34c874:
    // 0x34c874: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x34c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_34c878:
    // 0x34c878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c87c:
    // 0x34c87c: 0xc0d407a  jal         func_3501E8
label_34c880:
    if (ctx->pc == 0x34C880u) {
        ctx->pc = 0x34C884u;
        goto label_34c884;
    }
    ctx->pc = 0x34C87Cu;
    SET_GPR_U32(ctx, 31, 0x34C884u);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34C87Cu, 0x34C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C884u;
label_34c884:
    // 0x34c884: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x34c884u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
label_34c888:
    // 0x34c888: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x34c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c88c:
    // 0x34c88c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34c890:
    if (ctx->pc == 0x34C890u) {
        ctx->pc = 0x34C894u;
        goto label_34c894;
    }
    ctx->pc = 0x34C88Cu;
    {
        const bool branch_taken_0x34c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c88c) {
            ctx->pc = 0x34C8B0u;
            goto label_34c8b0;
        }
    }
    ctx->pc = 0x34C894u;
label_34c894:
    // 0x34c894: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x34c894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_34c898:
    // 0x34c898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34c89c:
    // 0x34c89c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34c8a0:
    // 0x34c8a0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c8a4:
    // 0x34c8a4: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x34c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
label_34c8a8:
    // 0x34c8a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c8ac:
    if (ctx->pc == 0x34C8ACu) {
        ctx->pc = 0x34C8B0u;
        goto label_34c8b0;
    }
    ctx->pc = 0x34C8A8u;
    {
        const bool branch_taken_0x34c8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c8a8) {
            ctx->pc = 0x34C8B8u;
            goto label_34c8b8;
        }
    }
    ctx->pc = 0x34C8B0u;
label_34c8b0:
    // 0x34c8b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c8b4:
    // 0x34c8b4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c8b8:
    // 0x34c8b8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c8bc:
    // 0x34c8bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34c8c0:
    // 0x34c8c0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x34c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_34c8c4:
    // 0x34c8c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c8c8:
    // 0x34c8c8: 0x2442ba50  addiu       $v0, $v0, -0x45B0
    ctx->pc = 0x34c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949456));
label_34c8cc:
    // 0x34c8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c8d0:
    // 0x34c8d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c8d4:
    // 0x34c8d4: 0x8fc40034  lw          $a0, 0x34($fp)
    ctx->pc = 0x34c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
label_34c8d8:
    // 0x34c8d8: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x34c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c8dc:
    // 0x34c8dc: 0x8fc60030  lw          $a2, 0x30($fp)
    ctx->pc = 0x34c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
label_34c8e0:
    // 0x34c8e0: 0x40f809  jalr        $v0
label_34c8e4:
    if (ctx->pc == 0x34C8E4u) {
        ctx->pc = 0x34C8E8u;
        goto label_34c8e8;
    }
    ctx->pc = 0x34C8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C8E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C8E0u, 0x34C8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C8E8u;
label_34c8e8:
    // 0x34c8e8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x34c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_34c8ec:
    // 0x34c8ec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x34c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c8f0:
    // 0x34c8f0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c8f0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c8f4:
    // 0x34c8f4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34c8f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34c8f8:
    // 0x34c8f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34c8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_34c8fc:
    // 0x34c8fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x34c8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_34c900:
    // 0x34c900: 0x3e00008  jr          $ra
label_34c904:
    if (ctx->pc == 0x34C904u) {
        ctx->pc = 0x34C908u;
        goto label_fallthrough_0x34c900;
    }
    ctx->pc = 0x34C900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c900:
    ctx->pc = 0x34C908u;
}
