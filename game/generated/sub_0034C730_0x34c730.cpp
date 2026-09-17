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

// Function: sub_0034C730
// Address: 0x34c730 - 0x34c820
void sub_0034C730_0x34c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C730_0x34c730");
#endif

    switch (ctx->pc) {
        case 0x34c730u: goto label_34c730;
        case 0x34c734u: goto label_34c734;
        case 0x34c738u: goto label_34c738;
        case 0x34c73cu: goto label_34c73c;
        case 0x34c740u: goto label_34c740;
        case 0x34c744u: goto label_34c744;
        case 0x34c748u: goto label_34c748;
        case 0x34c74cu: goto label_34c74c;
        case 0x34c750u: goto label_34c750;
        case 0x34c754u: goto label_34c754;
        case 0x34c758u: goto label_34c758;
        case 0x34c75cu: goto label_34c75c;
        case 0x34c760u: goto label_34c760;
        case 0x34c764u: goto label_34c764;
        case 0x34c768u: goto label_34c768;
        case 0x34c76cu: goto label_34c76c;
        case 0x34c770u: goto label_34c770;
        case 0x34c774u: goto label_34c774;
        case 0x34c778u: goto label_34c778;
        case 0x34c77cu: goto label_34c77c;
        case 0x34c780u: goto label_34c780;
        case 0x34c784u: goto label_34c784;
        case 0x34c788u: goto label_34c788;
        case 0x34c78cu: goto label_34c78c;
        case 0x34c790u: goto label_34c790;
        case 0x34c794u: goto label_34c794;
        case 0x34c798u: goto label_34c798;
        case 0x34c79cu: goto label_34c79c;
        case 0x34c7a0u: goto label_34c7a0;
        case 0x34c7a4u: goto label_34c7a4;
        case 0x34c7a8u: goto label_34c7a8;
        case 0x34c7acu: goto label_34c7ac;
        case 0x34c7b0u: goto label_34c7b0;
        case 0x34c7b4u: goto label_34c7b4;
        case 0x34c7b8u: goto label_34c7b8;
        case 0x34c7bcu: goto label_34c7bc;
        case 0x34c7c0u: goto label_34c7c0;
        case 0x34c7c4u: goto label_34c7c4;
        case 0x34c7c8u: goto label_34c7c8;
        case 0x34c7ccu: goto label_34c7cc;
        case 0x34c7d0u: goto label_34c7d0;
        case 0x34c7d4u: goto label_34c7d4;
        case 0x34c7d8u: goto label_34c7d8;
        case 0x34c7dcu: goto label_34c7dc;
        case 0x34c7e0u: goto label_34c7e0;
        case 0x34c7e4u: goto label_34c7e4;
        case 0x34c7e8u: goto label_34c7e8;
        case 0x34c7ecu: goto label_34c7ec;
        case 0x34c7f0u: goto label_34c7f0;
        case 0x34c7f4u: goto label_34c7f4;
        case 0x34c7f8u: goto label_34c7f8;
        case 0x34c7fcu: goto label_34c7fc;
        case 0x34c800u: goto label_34c800;
        case 0x34c804u: goto label_34c804;
        case 0x34c808u: goto label_34c808;
        case 0x34c80cu: goto label_34c80c;
        case 0x34c810u: goto label_34c810;
        case 0x34c814u: goto label_34c814;
        case 0x34c818u: goto label_34c818;
        case 0x34c81cu: goto label_34c81c;
        default: break;
    }

    ctx->pc = 0x34c730u;

label_34c730:
    // 0x34c730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_34c734:
    // 0x34c734: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_34c738:
    // 0x34c738: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_34c73c:
    // 0x34c73c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c73cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34c740:
    // 0x34c740: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c740u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_34c744:
    // 0x34c744: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34c744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_34c748:
    // 0x34c748: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34c74c:
    // 0x34c74c: 0x27c3000c  addiu       $v1, $fp, 0xC
    ctx->pc = 0x34c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_34c750:
    // 0x34c750: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c754:
    // 0x34c754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c758:
    // 0x34c758: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34c758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_34c75c:
    // 0x34c75c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_34c760:
    // 0x34c760: 0xc0d3332  jal         func_34CCC8
label_34c764:
    if (ctx->pc == 0x34C764u) {
        ctx->pc = 0x34C768u;
        goto label_34c768;
    }
    ctx->pc = 0x34C760u;
    SET_GPR_U32(ctx, 31, 0x34C768u);
    ctx->pc = 0x34CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCC8u, 0x34C760u, 0x34C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C768u;
label_34c768:
    // 0x34c768: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34c768u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34c76c:
    // 0x34c76c: 0x8fc20040  lw          $v0, 0x40($fp)
    ctx->pc = 0x34c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34c770:
    // 0x34c770: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_34c774:
    if (ctx->pc == 0x34C774u) {
        ctx->pc = 0x34C778u;
        goto label_34c778;
    }
    ctx->pc = 0x34C770u;
    {
        const bool branch_taken_0x34c770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c770) {
            ctx->pc = 0x34C788u;
            goto label_34c788;
        }
    }
    ctx->pc = 0x34C778u;
label_34c778:
    // 0x34c778: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x34c778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
label_34c77c:
    // 0x34c77c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x34c77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_34c780:
    // 0x34c780: 0x10000021  b           . + 4 + (0x21 << 2)
label_34c784:
    if (ctx->pc == 0x34C784u) {
        ctx->pc = 0x34C788u;
        goto label_34c788;
    }
    ctx->pc = 0x34C780u;
    {
        const bool branch_taken_0x34c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c780) {
            ctx->pc = 0x34C808u;
            goto label_34c808;
        }
    }
    ctx->pc = 0x34C788u;
label_34c788:
    // 0x34c788: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x34c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_34c78c:
    // 0x34c78c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c790:
    // 0x34c790: 0xc0d407a  jal         func_3501E8
label_34c794:
    if (ctx->pc == 0x34C794u) {
        ctx->pc = 0x34C798u;
        goto label_34c798;
    }
    ctx->pc = 0x34C790u;
    SET_GPR_U32(ctx, 31, 0x34C798u);
    ctx->pc = 0x3501E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3501E8u, 0x34C790u, 0x34C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C798u;
label_34c798:
    // 0x34c798: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x34c798u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
label_34c79c:
    // 0x34c79c: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x34c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34c7a0:
    // 0x34c7a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_34c7a4:
    if (ctx->pc == 0x34C7A4u) {
        ctx->pc = 0x34C7A8u;
        goto label_34c7a8;
    }
    ctx->pc = 0x34C7A0u;
    {
        const bool branch_taken_0x34c7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c7a0) {
            ctx->pc = 0x34C7C4u;
            goto label_34c7c4;
        }
    }
    ctx->pc = 0x34C7A8u;
label_34c7a8:
    // 0x34c7a8: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x34c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
label_34c7ac:
    // 0x34c7ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34c7b0:
    // 0x34c7b0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_34c7b4:
    // 0x34c7b4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x34c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_34c7b8:
    // 0x34c7b8: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x34c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_34c7bc:
    // 0x34c7bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_34c7c0:
    if (ctx->pc == 0x34C7C0u) {
        ctx->pc = 0x34C7C4u;
        goto label_34c7c4;
    }
    ctx->pc = 0x34C7BCu;
    {
        const bool branch_taken_0x34c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c7bc) {
            ctx->pc = 0x34C7CCu;
            goto label_34c7cc;
        }
    }
    ctx->pc = 0x34C7C4u;
label_34c7c4:
    // 0x34c7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c7c8:
    // 0x34c7c8: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x34c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_34c7cc:
    // 0x34c7cc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x34c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_34c7d0:
    // 0x34c7d0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x34c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_34c7d4:
    // 0x34c7d4: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x34c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_34c7d8:
    // 0x34c7d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x34c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_34c7dc:
    // 0x34c7dc: 0x2442ba4c  addiu       $v0, $v0, -0x45B4
    ctx->pc = 0x34c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949452));
label_34c7e0:
    // 0x34c7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34c7e4:
    // 0x34c7e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34c7e8:
    // 0x34c7e8: 0x8fc40044  lw          $a0, 0x44($fp)
    ctx->pc = 0x34c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_34c7ec:
    // 0x34c7ec: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x34c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_34c7f0:
    // 0x34c7f0: 0x8fc60040  lw          $a2, 0x40($fp)
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_34c7f4:
    // 0x34c7f4: 0x8fc70004  lw          $a3, 0x4($fp)
    ctx->pc = 0x34c7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_34c7f8:
    // 0x34c7f8: 0x40f809  jalr        $v0
label_34c7fc:
    if (ctx->pc == 0x34C7FCu) {
        ctx->pc = 0x34C800u;
        goto label_34c800;
    }
    ctx->pc = 0x34C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34C800u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C7F8u, 0x34C800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34C800u;
label_34c800:
    // 0x34c800: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x34c800u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_34c804:
    // 0x34c804: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x34c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_34c808:
    // 0x34c808: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c808u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_34c80c:
    // 0x34c80c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34c80cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34c810:
    // 0x34c810: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34c810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_34c814:
    // 0x34c814: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x34c814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_34c818:
    // 0x34c818: 0x3e00008  jr          $ra
label_34c81c:
    if (ctx->pc == 0x34C81Cu) {
        ctx->pc = 0x34C820u;
        goto label_fallthrough_0x34c818;
    }
    ctx->pc = 0x34C818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34c818:
    ctx->pc = 0x34C820u;
}
