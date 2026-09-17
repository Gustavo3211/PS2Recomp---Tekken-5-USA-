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

// Function: sub_00316708
// Address: 0x316708 - 0x3168b8
void sub_00316708_0x316708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316708_0x316708");
#endif

    switch (ctx->pc) {
        case 0x316728u: goto label_316728;
        case 0x31677cu: goto label_31677c;
        case 0x3167b0u: goto label_3167b0;
        case 0x3167f4u: goto label_3167f4;
        case 0x316828u: goto label_316828;
        case 0x31686cu: goto label_31686c;
        case 0x3168a0u: goto label_3168a0;
        default: break;
    }

    ctx->pc = 0x316708u;

    // 0x316708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31670c: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x31670cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316714: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316714u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316718: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x31671c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x316720: 0xc0c5dcd  jal         func_317734
    ctx->pc = 0x316720u;
    SET_GPR_U32(ctx, 31, 0x316728u);
    ctx->pc = 0x317734u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317734u, 0x316720u, 0x316728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316728u;
label_316728:
    // 0x316728: 0xaf80cbbc  sw          $zero, -0x3444($gp)
    ctx->pc = 0x316728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953916), GPR_U32(ctx, 0));
    // 0x31672c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31672cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316730: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316730u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316734: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x316734u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31673c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31673cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316740: 0x3e00008  jr          $ra
    ctx->pc = 0x316740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316748u;
    // 0x316748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31674c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x31674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x316750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x316754: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316754u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316758: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316758u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x31675c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x31675cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x316760: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x316760u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x316764: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316768: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x316768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x31676c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x31676cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316770: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x316770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316774: 0xc0c6376  jal         func_318DD8
    ctx->pc = 0x316774u;
    SET_GPR_U32(ctx, 31, 0x31677Cu);
    ctx->pc = 0x318DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318DD8u, 0x316774u, 0x31677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31677Cu;
label_31677c:
    // 0x31677c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31677cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316780: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316784: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x316784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316788: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31678c: 0x3e00008  jr          $ra
    ctx->pc = 0x31678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31678Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316794u;
    // 0x316794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316798: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x31679c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3167a0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3167a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167a4: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x3167a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x3167a8: 0xc0c6395  jal         func_318E54
    ctx->pc = 0x3167A8u;
    SET_GPR_U32(ctx, 31, 0x3167B0u);
    ctx->pc = 0x318E54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318E54u, 0x3167A8u, 0x3167B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167B0u;
label_3167b0:
    // 0x3167b0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3167b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167b4: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3167b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3167b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3167b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3167bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3167bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3167c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3167C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3167C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3167C8u;
    // 0x3167c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3167c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3167cc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3167ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3167d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3167d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3167d4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3167d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167d8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3167d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3167dc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3167dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3167e0: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x3167e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x3167e4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3167e8: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x3167e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3167ec: 0xc0c63a4  jal         func_318E90
    ctx->pc = 0x3167ECu;
    SET_GPR_U32(ctx, 31, 0x3167F4u);
    ctx->pc = 0x318E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318E90u, 0x3167ECu, 0x3167F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3167F4u;
label_3167f4:
    // 0x3167f4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3167f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3167f8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3167f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3167fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3167fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316800: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316804: 0x3e00008  jr          $ra
    ctx->pc = 0x316804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31680Cu;
    // 0x31680c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31680cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316810: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x316814: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x316814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316818: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316818u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31681c: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x31681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316820: 0xc0c63bb  jal         func_318EEC
    ctx->pc = 0x316820u;
    SET_GPR_U32(ctx, 31, 0x316828u);
    ctx->pc = 0x318EECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318EECu, 0x316820u, 0x316828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316828u;
label_316828:
    // 0x316828: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316828u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31682c: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x31682cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x316830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x316834: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x316834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x316838: 0x3e00008  jr          $ra
    ctx->pc = 0x316838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316840u;
    // 0x316840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316844: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x316844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316848: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x316848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31684c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31684cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316850: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x316854: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x316854u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x316858: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x31685c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x31685cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316860: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316864: 0xc0c63ca  jal         func_318F28
    ctx->pc = 0x316864u;
    SET_GPR_U32(ctx, 31, 0x31686Cu);
    ctx->pc = 0x318F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318F28u, 0x316864u, 0x31686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31686Cu;
label_31686c:
    // 0x31686c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31686cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316870: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316870u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316874: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x316874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316878: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31687c: 0x3e00008  jr          $ra
    ctx->pc = 0x31687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31687Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316884u;
    // 0x316884: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316888: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x316888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x31688c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x316890: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316890u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316894: 0x8f84cbbc  lw          $a0, -0x3444($gp)
    ctx->pc = 0x316894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953916)));
    // 0x316898: 0xc0c63e1  jal         func_318F84
    ctx->pc = 0x316898u;
    SET_GPR_U32(ctx, 31, 0x3168A0u);
    ctx->pc = 0x318F84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318F84u, 0x316898u, 0x3168A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168A0u;
label_3168a0:
    // 0x3168a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3168a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168a4: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x3168a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3168a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3168a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3168ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3168b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3168B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3168B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3168B8u;
}
