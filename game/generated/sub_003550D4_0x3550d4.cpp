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

// Function: sub_003550D4
// Address: 0x3550d4 - 0x35522c
void sub_003550D4_0x3550d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003550D4_0x3550d4");
#endif

    switch (ctx->pc) {
        case 0x3550e8u: goto label_3550e8;
        case 0x355108u: goto label_355108;
        case 0x35510cu: goto label_35510c;
        case 0x355128u: goto label_355128;
        case 0x35517cu: goto label_35517c;
        case 0x3551ccu: goto label_3551cc;
        case 0x3551d8u: goto label_3551d8;
        case 0x3551f4u: goto label_3551f4;
        case 0x355200u: goto label_355200;
        case 0x35520cu: goto label_35520c;
        case 0x355214u: goto label_355214;
        default: break;
    }

    ctx->pc = 0x3550d4u;

    // 0x3550d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3550d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3550d8: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3550d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3550dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3550dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3550e0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3550e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3550e4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3550e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_3550e8:
    // 0x3550e8: 0x8f82c734  lw          $v0, -0x38CC($gp)
    ctx->pc = 0x3550e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952756)));
    // 0x3550ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3550ECu;
    {
        const bool branch_taken_0x3550ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3550ec) {
            ctx->pc = 0x3550FCu;
            goto label_3550fc;
        }
    }
    ctx->pc = 0x3550F4u;
    // 0x3550f4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3550F4u;
    {
        const bool branch_taken_0x3550f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550f4) {
            ctx->pc = 0x3551ECu;
            goto label_3551ec;
        }
    }
    ctx->pc = 0x3550FCu;
label_3550fc:
    // 0x3550fc: 0x8f84c72c  lw          $a0, -0x38D4($gp)
    ctx->pc = 0x3550fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952748)));
    // 0x355100: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x355100u;
    SET_GPR_U32(ctx, 31, 0x355108u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x355100u, 0x355108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355108u;
label_355108:
    // 0x355108: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x355108u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_35510c:
    // 0x35510c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x35510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355110: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x355110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x355114: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355114u;
    {
        const bool branch_taken_0x355114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355114) {
            ctx->pc = 0x355124u;
            goto label_355124;
        }
    }
    ctx->pc = 0x35511Cu;
    // 0x35511c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x35511Cu;
    {
        const bool branch_taken_0x35511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35511c) {
            ctx->pc = 0x355108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355108;
        }
    }
    ctx->pc = 0x355124u;
label_355124:
    // 0x355124: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x355124u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_355128:
    // 0x355128: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35512c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35512Cu;
    {
        const bool branch_taken_0x35512c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x35512c) {
            ctx->pc = 0x355148u;
            goto label_355148;
        }
    }
    ctx->pc = 0x355134u;
    // 0x355134: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x355134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35513c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35513cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x355140: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x355140u;
    {
        const bool branch_taken_0x355140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355140) {
            ctx->pc = 0x35510Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35510c;
        }
    }
    ctx->pc = 0x355148u;
label_355148:
    // 0x355148: 0x8f82c734  lw          $v0, -0x38CC($gp)
    ctx->pc = 0x355148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952756)));
    // 0x35514c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35514Cu;
    {
        const bool branch_taken_0x35514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35514c) {
            ctx->pc = 0x35515Cu;
            goto label_35515c;
        }
    }
    ctx->pc = 0x355154u;
    // 0x355154: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x355154u;
    {
        const bool branch_taken_0x355154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355154) {
            ctx->pc = 0x3551ECu;
            goto label_3551ec;
        }
    }
    ctx->pc = 0x35515Cu;
label_35515c:
    // 0x35515c: 0x8f82c730  lw          $v0, -0x38D0($gp)
    ctx->pc = 0x35515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952752)));
    // 0x355160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355160u;
    {
        const bool branch_taken_0x355160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355160) {
            ctx->pc = 0x355170u;
            goto label_355170;
        }
    }
    ctx->pc = 0x355168u;
    // 0x355168: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x355168u;
    {
        const bool branch_taken_0x355168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355168) {
            ctx->pc = 0x3550E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3550e8;
        }
    }
    ctx->pc = 0x355170u;
label_355170:
    // 0x355170: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x355170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x355174: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x355174u;
    SET_GPR_U32(ctx, 31, 0x35517Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x355174u, 0x35517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35517Cu;
label_35517c:
    // 0x35517c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x35517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355180: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355184: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x355184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355188: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x355188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35518c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35518cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x355190: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x355190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355194: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x355194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x355198: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x355198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35519c: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x35519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x3551a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3551a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3551a4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3551a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3551a8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3551a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3551ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3551acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3551b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3551B0u;
    {
        const bool branch_taken_0x3551b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551b0) {
            ctx->pc = 0x3551CCu;
            goto label_3551cc;
        }
    }
    ctx->pc = 0x3551B8u;
    // 0x3551b8: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x3551b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3551bc: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x3551bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3551c0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x3551c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3551c4: 0xc0d557b  jal         func_3555EC
    ctx->pc = 0x3551C4u;
    SET_GPR_U32(ctx, 31, 0x3551CCu);
    ctx->pc = 0x3555ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3555ECu, 0x3551C4u, 0x3551CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551CCu;
label_3551cc:
    // 0x3551cc: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3551ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3551d0: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3551D0u;
    SET_GPR_U32(ctx, 31, 0x3551D8u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3551D0u, 0x3551D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551D8u;
label_3551d8:
    // 0x3551d8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3551d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3551dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3551dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3551e0: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3551e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x3551e4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x3551E4u;
    {
        const bool branch_taken_0x3551e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551e4) {
            ctx->pc = 0x355128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355128;
        }
    }
    ctx->pc = 0x3551ECu;
label_3551ec:
    // 0x3551ec: 0xc043496  jal         func_10D258
    ctx->pc = 0x3551ECu;
    SET_GPR_U32(ctx, 31, 0x3551F4u);
    ctx->pc = 0x10D258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D258u, 0x3551ECu, 0x3551F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551F4u;
label_3551f4:
    // 0x3551f4: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3551f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3551f8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x3551F8u;
    SET_GPR_U32(ctx, 31, 0x355200u);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x3551F8u, 0x355200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355200u;
label_355200:
    // 0x355200: 0x8f84c72c  lw          $a0, -0x38D4($gp)
    ctx->pc = 0x355200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952748)));
    // 0x355204: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x355204u;
    SET_GPR_U32(ctx, 31, 0x35520Cu);
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x355204u, 0x35520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35520Cu;
label_35520c:
    // 0x35520c: 0xc043c78  jal         func_10F1E0
    ctx->pc = 0x35520Cu;
    SET_GPR_U32(ctx, 31, 0x355214u);
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x35520Cu, 0x355214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355214u;
label_355214:
    // 0x355214: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355214u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355218: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x355218u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35521c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355220: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355224: 0x3e00008  jr          $ra
    ctx->pc = 0x355224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35522Cu;
}
