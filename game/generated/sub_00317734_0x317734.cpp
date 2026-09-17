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

// Function: sub_00317734
// Address: 0x317734 - 0x317930
void sub_00317734_0x317734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317734_0x317734");
#endif

    switch (ctx->pc) {
        case 0x317770u: goto label_317770;
        case 0x317790u: goto label_317790;
        case 0x3177a4u: goto label_3177a4;
        case 0x3177b0u: goto label_3177b0;
        case 0x3177c0u: goto label_3177c0;
        case 0x3177f0u: goto label_3177f0;
        case 0x317828u: goto label_317828;
        case 0x31784cu: goto label_31784c;
        case 0x317870u: goto label_317870;
        case 0x317888u: goto label_317888;
        case 0x3178a4u: goto label_3178a4;
        case 0x3178dcu: goto label_3178dc;
        case 0x3178fcu: goto label_3178fc;
        case 0x317918u: goto label_317918;
        default: break;
    }

    ctx->pc = 0x317734u;

    // 0x317734: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317738: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x317738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x31773c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x317740: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x317740u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317744: 0xafc40008  sw          $a0, 0x8($fp)
    ctx->pc = 0x317744u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 4));
    // 0x317748: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x317748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x31774c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x31774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317750: 0x8c4343c4  lw          $v1, 0x43C4($v0)
    ctx->pc = 0x317750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17348)));
    // 0x317754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317758: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317758u;
    {
        const bool branch_taken_0x317758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317758) {
            ctx->pc = 0x31777Cu;
            goto label_31777c;
        }
    }
    ctx->pc = 0x317760u;
    // 0x317760: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x317760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317764: 0x8c6443c4  lw          $a0, 0x43C4($v1)
    ctx->pc = 0x317764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17348)));
    // 0x317768: 0xc0d6a1e  jal         func_35A878
    ctx->pc = 0x317768u;
    SET_GPR_U32(ctx, 31, 0x317770u);
    ctx->pc = 0x35A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A878u, 0x317768u, 0x317770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317770u;
label_317770:
    // 0x317770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317774: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x317774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317778: 0xac6243c4  sw          $v0, 0x43C4($v1)
    ctx->pc = 0x317778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17348), GPR_U32(ctx, 2));
label_31777c:
    // 0x31777c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x31777cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x317780: 0x24849c58  addiu       $a0, $a0, -0x63A8
    ctx->pc = 0x317780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941784));
    // 0x317784: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x317784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317788: 0xc0cc042  jal         func_330108
    ctx->pc = 0x317788u;
    SET_GPR_U32(ctx, 31, 0x317790u);
    ctx->pc = 0x330108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330108u, 0x317788u, 0x317790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317790u;
label_317790:
    // 0x317790: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x317790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x317794: 0x24849c98  addiu       $a0, $a0, -0x6368
    ctx->pc = 0x317794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941848));
    // 0x317798: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x317798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x31779c: 0xc0cc036  jal         func_3300D8
    ctx->pc = 0x31779Cu;
    SET_GPR_U32(ctx, 31, 0x3177A4u);
    ctx->pc = 0x3300D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3300D8u, 0x31779Cu, 0x3177A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177A4u;
label_3177a4:
    // 0x3177a4: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x3177a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3177a8: 0xc0410f6  jal         func_1043D8
    ctx->pc = 0x3177A8u;
    SET_GPR_U32(ctx, 31, 0x3177B0u);
    ctx->pc = 0x1043D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1043D8u, 0x3177A8u, 0x3177B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177B0u;
label_3177b0:
    // 0x3177b0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3177b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3177b4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x3177b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x3177b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3177b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3177bc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3177bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_3177c0:
    // 0x3177c0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3177c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3177C4u;
    {
        const bool branch_taken_0x3177c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3177c4) {
            ctx->pc = 0x3177D4u;
            goto label_3177d4;
        }
    }
    ctx->pc = 0x3177CCu;
    // 0x3177cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3177CCu;
    {
        const bool branch_taken_0x3177cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3177cc) {
            ctx->pc = 0x317804u;
            goto label_317804;
        }
    }
    ctx->pc = 0x3177D4u;
label_3177d4:
    // 0x3177d4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3177d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3177d8: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x3177d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x3177dc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3177dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3177e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3177e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3177e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3177e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3177e8: 0xc0c835c  jal         func_320D70
    ctx->pc = 0x3177E8u;
    SET_GPR_U32(ctx, 31, 0x3177F0u);
    ctx->pc = 0x320D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D70u, 0x3177E8u, 0x3177F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177F0u;
label_3177f0:
    // 0x3177f0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3177f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3177f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3177f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3177f8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3177f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3177fc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x3177FCu;
    {
        const bool branch_taken_0x3177fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3177fc) {
            ctx->pc = 0x3177C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3177c0;
        }
    }
    ctx->pc = 0x317804u;
label_317804:
    // 0x317804: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x317804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317808: 0x8c4343c0  lw          $v1, 0x43C0($v0)
    ctx->pc = 0x317808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17344)));
    // 0x31780c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317810: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317810u;
    {
        const bool branch_taken_0x317810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317810) {
            ctx->pc = 0x317828u;
            goto label_317828;
        }
    }
    ctx->pc = 0x317818u;
    // 0x317818: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x317818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x31781c: 0x8c6443c0  lw          $a0, 0x43C0($v1)
    ctx->pc = 0x31781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17344)));
    // 0x317820: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x317820u;
    SET_GPR_U32(ctx, 31, 0x317828u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x317820u, 0x317828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317828u;
label_317828:
    // 0x317828: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x317828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x31782c: 0x8c43418c  lw          $v1, 0x418C($v0)
    ctx->pc = 0x31782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16780)));
    // 0x317830: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317834: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317834u;
    {
        const bool branch_taken_0x317834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317834) {
            ctx->pc = 0x31784Cu;
            goto label_31784c;
        }
    }
    ctx->pc = 0x31783Cu;
    // 0x31783c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x31783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317840: 0x8c64418c  lw          $a0, 0x418C($v1)
    ctx->pc = 0x317840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16780)));
    // 0x317844: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x317844u;
    SET_GPR_U32(ctx, 31, 0x31784Cu);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x317844u, 0x31784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31784Cu;
label_31784c:
    // 0x31784c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x31784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317850: 0x8c434188  lw          $v1, 0x4188($v0)
    ctx->pc = 0x317850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16776)));
    // 0x317854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x317858: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x317858u;
    {
        const bool branch_taken_0x317858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317858) {
            ctx->pc = 0x317870u;
            goto label_317870;
        }
    }
    ctx->pc = 0x317860u;
    // 0x317860: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x317860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317864: 0x8c644188  lw          $a0, 0x4188($v1)
    ctx->pc = 0x317864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16776)));
    // 0x317868: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x317868u;
    SET_GPR_U32(ctx, 31, 0x317870u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x317868u, 0x317870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317870u;
label_317870:
    // 0x317870: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x317870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317874: 0x246243c4  addiu       $v0, $v1, 0x43C4
    ctx->pc = 0x317874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 17348));
    // 0x317878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31787c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x317880: 0xc0dd08e  jal         func_374238
    ctx->pc = 0x317880u;
    SET_GPR_U32(ctx, 31, 0x317888u);
    ctx->pc = 0x374238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374238u, 0x317880u, 0x317888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317888u;
label_317888:
    // 0x317888: 0x2402bf08  addiu       $v0, $zero, -0x40F8
    ctx->pc = 0x317888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950664));
    // 0x31788c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x31788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317890: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x317890u;
    {
        const bool branch_taken_0x317890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317890) {
            ctx->pc = 0x3178E4u;
            goto label_3178e4;
        }
    }
    ctx->pc = 0x317898u;
    // 0x317898: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x31789c: 0x24424188  addiu       $v0, $v0, 0x4188
    ctx->pc = 0x31789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16776));
    // 0x3178a0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3178a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3178a4:
    // 0x3178a4: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3178a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3178a8: 0x246240f8  addiu       $v0, $v1, 0x40F8
    ctx->pc = 0x3178a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16632));
    // 0x3178ac: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x3178acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3178b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3178B0u;
    {
        const bool branch_taken_0x3178b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3178b0) {
            ctx->pc = 0x3178C0u;
            goto label_3178c0;
        }
    }
    ctx->pc = 0x3178B8u;
    // 0x3178b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3178B8u;
    {
        const bool branch_taken_0x3178b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3178b8) {
            ctx->pc = 0x3178E4u;
            goto label_3178e4;
        }
    }
    ctx->pc = 0x3178C0u;
label_3178c0:
    // 0x3178c0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3178c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3178c4: 0x2442ffdc  addiu       $v0, $v0, -0x24
    ctx->pc = 0x3178c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x3178c8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3178c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3178cc: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x3178ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3178d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3178d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3178d4: 0xc0dcd7b  jal         func_3735EC
    ctx->pc = 0x3178D4u;
    SET_GPR_U32(ctx, 31, 0x3178DCu);
    ctx->pc = 0x3735ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735ECu, 0x3178D4u, 0x3178DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3178DCu;
label_3178dc:
    // 0x3178dc: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3178DCu;
    {
        const bool branch_taken_0x3178dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3178dc) {
            ctx->pc = 0x3178A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3178a4;
        }
    }
    ctx->pc = 0x3178E4u;
label_3178e4:
    // 0x3178e4: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x3178e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3178e8: 0x246240d4  addiu       $v0, $v1, 0x40D4
    ctx->pc = 0x3178e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16596));
    // 0x3178ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3178ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3178f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3178f4: 0xc0dcd7b  jal         func_3735EC
    ctx->pc = 0x3178F4u;
    SET_GPR_U32(ctx, 31, 0x3178FCu);
    ctx->pc = 0x3735ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3735ECu, 0x3178F4u, 0x3178FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3178FCu;
label_3178fc:
    // 0x3178fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3178fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x317900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x317904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x317904u;
    {
        const bool branch_taken_0x317904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317904) {
            ctx->pc = 0x317918u;
            goto label_317918;
        }
    }
    ctx->pc = 0x31790Cu;
    // 0x31790c: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x31790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x317910: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x317910u;
    SET_GPR_U32(ctx, 31, 0x317918u);
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x317910u, 0x317918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317918u;
label_317918:
    // 0x317918: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x317918u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31791c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x31791cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317920: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x317920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x317924: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x317924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317928: 0x3e00008  jr          $ra
    ctx->pc = 0x317928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317930u;
}
