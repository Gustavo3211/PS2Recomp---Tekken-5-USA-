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

// Function: sub_003526D0
// Address: 0x3526d0 - 0x35278c
void sub_003526D0_0x3526d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003526D0_0x3526d0");
#endif

    switch (ctx->pc) {
        case 0x3526d0u: goto label_3526d0;
        case 0x3526d4u: goto label_3526d4;
        case 0x3526d8u: goto label_3526d8;
        case 0x3526dcu: goto label_3526dc;
        case 0x3526e0u: goto label_3526e0;
        case 0x3526e4u: goto label_3526e4;
        case 0x3526e8u: goto label_3526e8;
        case 0x3526ecu: goto label_3526ec;
        case 0x3526f0u: goto label_3526f0;
        case 0x3526f4u: goto label_3526f4;
        case 0x3526f8u: goto label_3526f8;
        case 0x3526fcu: goto label_3526fc;
        case 0x352700u: goto label_352700;
        case 0x352704u: goto label_352704;
        case 0x352708u: goto label_352708;
        case 0x35270cu: goto label_35270c;
        case 0x352710u: goto label_352710;
        case 0x352714u: goto label_352714;
        case 0x352718u: goto label_352718;
        case 0x35271cu: goto label_35271c;
        case 0x352720u: goto label_352720;
        case 0x352724u: goto label_352724;
        case 0x352728u: goto label_352728;
        case 0x35272cu: goto label_35272c;
        case 0x352730u: goto label_352730;
        case 0x352734u: goto label_352734;
        case 0x352738u: goto label_352738;
        case 0x35273cu: goto label_35273c;
        case 0x352740u: goto label_352740;
        case 0x352744u: goto label_352744;
        case 0x352748u: goto label_352748;
        case 0x35274cu: goto label_35274c;
        case 0x352750u: goto label_352750;
        case 0x352754u: goto label_352754;
        case 0x352758u: goto label_352758;
        case 0x35275cu: goto label_35275c;
        case 0x352760u: goto label_352760;
        case 0x352764u: goto label_352764;
        case 0x352768u: goto label_352768;
        case 0x35276cu: goto label_35276c;
        case 0x352770u: goto label_352770;
        case 0x352774u: goto label_352774;
        case 0x352778u: goto label_352778;
        case 0x35277cu: goto label_35277c;
        case 0x352780u: goto label_352780;
        case 0x352784u: goto label_352784;
        case 0x352788u: goto label_352788;
        default: break;
    }

    ctx->pc = 0x3526d0u;

label_3526d0:
    // 0x3526d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3526d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3526d4:
    // 0x3526d4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3526d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_3526d8:
    // 0x3526d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3526d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3526dc:
    // 0x3526dc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3526dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3526e0:
    // 0x3526e0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3526e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3526e4:
    // 0x3526e4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3526e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3526e8:
    // 0x3526e8: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3526e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3526ec:
    // 0x3526ec: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3526ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3526f0:
    // 0x3526f0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3526f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3526f4:
    // 0x3526f4: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x3526f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_3526f8:
    // 0x3526f8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x3526f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3526fc:
    // 0x3526fc: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x3526fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_352700:
    // 0x352700: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x352700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_352704:
    // 0x352704: 0xc0d3138  jal         func_34C4E0
label_352708:
    if (ctx->pc == 0x352708u) {
        ctx->pc = 0x35270Cu;
        goto label_35270c;
    }
    ctx->pc = 0x352704u;
    SET_GPR_U32(ctx, 31, 0x35270Cu);
    ctx->pc = 0x34C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C4E0u, 0x352704u, 0x35270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35270Cu;
label_35270c:
    // 0x35270c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35270cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_352710:
    // 0x352710: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352714:
    // 0x352714: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x352714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352718:
    // 0x352718: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_35271c:
    if (ctx->pc == 0x35271Cu) {
        ctx->pc = 0x352720u;
        goto label_352720;
    }
    ctx->pc = 0x352718u;
    {
        const bool branch_taken_0x352718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352718) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x352720u;
label_352720:
    // 0x352720: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x352720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352724:
    // 0x352724: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x352724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_352728:
    // 0x352728: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x352728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_35272c:
    // 0x35272c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x35272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_352730:
    // 0x352730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x352730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_352734:
    // 0x352734: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x352734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_352738:
    // 0x352738: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x352738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_35273c:
    // 0x35273c: 0x40f809  jalr        $v0
label_352740:
    if (ctx->pc == 0x352740u) {
        ctx->pc = 0x352744u;
        goto label_352744;
    }
    ctx->pc = 0x35273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352744u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35273Cu, 0x352744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352744u;
label_352744:
    // 0x352744: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x352744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_352748:
    // 0x352748: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x352748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_35274c:
    // 0x35274c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_352750:
    if (ctx->pc == 0x352750u) {
        ctx->pc = 0x352754u;
        goto label_352754;
    }
    ctx->pc = 0x35274Cu;
    {
        const bool branch_taken_0x35274c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35274c) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x352754u;
label_352754:
    // 0x352754: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x352754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_352758:
    // 0x352758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35275c:
    // 0x35275c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_352760:
    if (ctx->pc == 0x352760u) {
        ctx->pc = 0x352764u;
        goto label_352764;
    }
    ctx->pc = 0x35275Cu;
    {
        const bool branch_taken_0x35275c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35275c) {
            ctx->pc = 0x352770u;
            goto label_352770;
        }
    }
    ctx->pc = 0x352764u;
label_352764:
    // 0x352764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x352764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352768:
    // 0x352768: 0x10000002  b           . + 4 + (0x2 << 2)
label_35276c:
    if (ctx->pc == 0x35276Cu) {
        ctx->pc = 0x352770u;
        goto label_352770;
    }
    ctx->pc = 0x352768u;
    {
        const bool branch_taken_0x352768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352768) {
            ctx->pc = 0x352774u;
            goto label_352774;
        }
    }
    ctx->pc = 0x352770u;
label_352770:
    // 0x352770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x352770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352774:
    // 0x352774: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x352774u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_352778:
    // 0x352778: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x352778u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35277c:
    // 0x35277c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35277cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_352780:
    // 0x352780: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x352780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_352784:
    // 0x352784: 0x3e00008  jr          $ra
label_352788:
    if (ctx->pc == 0x352788u) {
        ctx->pc = 0x35278Cu;
        goto label_fallthrough_0x352784;
    }
    ctx->pc = 0x352784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352784:
    ctx->pc = 0x35278Cu;
}
