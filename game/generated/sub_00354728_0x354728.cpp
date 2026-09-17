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

// Function: sub_00354728
// Address: 0x354728 - 0x354868
void sub_00354728_0x354728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354728_0x354728");
#endif

    switch (ctx->pc) {
        case 0x354754u: goto label_354754;
        case 0x354788u: goto label_354788;
        case 0x3547b4u: goto label_3547b4;
        case 0x354804u: goto label_354804;
        default: break;
    }

    ctx->pc = 0x354728u;

    // 0x354728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35472c: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x35472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x354730: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x354730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x354734: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354734u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354738: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354738u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35473c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35473cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x354740: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x354740u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x354744: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354748: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x354748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35474c: 0xc0d5127  jal         func_35449C
    ctx->pc = 0x35474Cu;
    SET_GPR_U32(ctx, 31, 0x354754u);
    ctx->pc = 0x35449Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35449Cu, 0x35474Cu, 0x354754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354754u;
label_354754:
    // 0x354754: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x354754u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x354758: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35475c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35475Cu;
    {
        const bool branch_taken_0x35475c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35475c) {
            ctx->pc = 0x354770u;
            goto label_354770;
        }
    }
    ctx->pc = 0x354764u;
    // 0x354764: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x354764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x354768: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x354768u;
    {
        const bool branch_taken_0x354768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354768) {
            ctx->pc = 0x354824u;
            goto label_354824;
        }
    }
    ctx->pc = 0x354770u;
label_354770:
    // 0x354770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x354770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354774: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x354774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x354778: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x354778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35477c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x35477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x354780: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x354780u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x354784: 0xafc00014  sw          $zero, 0x14($fp)
    ctx->pc = 0x354784u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
label_354788:
    // 0x354788: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x354788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35478c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x35478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354790: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x354790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x354794: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x354794u;
    {
        const bool branch_taken_0x354794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354794) {
            ctx->pc = 0x3547A4u;
            goto label_3547a4;
        }
    }
    ctx->pc = 0x35479Cu;
    // 0x35479c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35479Cu;
    {
        const bool branch_taken_0x35479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35479c) {
            ctx->pc = 0x3547F8u;
            goto label_3547f8;
        }
    }
    ctx->pc = 0x3547A4u;
label_3547a4:
    // 0x3547a4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x3547a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3547a8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x3547a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3547ac: 0xc0d5174  jal         func_3545D0
    ctx->pc = 0x3547ACu;
    SET_GPR_U32(ctx, 31, 0x3547B4u);
    ctx->pc = 0x3545D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3545D0u, 0x3547ACu, 0x3547B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547B4u;
label_3547b4:
    // 0x3547b4: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x3547b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x3547b8: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3547b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3547bc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3547BCu;
    {
        const bool branch_taken_0x3547bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3547bc) {
            ctx->pc = 0x3547CCu;
            goto label_3547cc;
        }
    }
    ctx->pc = 0x3547C4u;
    // 0x3547c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3547C4u;
    {
        const bool branch_taken_0x3547c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3547c4) {
            ctx->pc = 0x3547F8u;
            goto label_3547f8;
        }
    }
    ctx->pc = 0x3547CCu;
label_3547cc:
    // 0x3547cc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3547ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3547d0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3547d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3547d4: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x3547d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x3547d8: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3547d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3547dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3547dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3547e0: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3547e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x3547e4: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3547e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3547e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3547e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3547ec: 0xafc20014  sw          $v0, 0x14($fp)
    ctx->pc = 0x3547ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
    // 0x3547f0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x3547F0u;
    {
        const bool branch_taken_0x3547f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3547f0) {
            ctx->pc = 0x354788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354788;
        }
    }
    ctx->pc = 0x3547F8u;
label_3547f8:
    // 0x3547f8: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x3547f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3547fc: 0xc0d51a4  jal         func_354690
    ctx->pc = 0x3547FCu;
    SET_GPR_U32(ctx, 31, 0x354804u);
    ctx->pc = 0x354690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354690u, 0x3547FCu, 0x354804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354804u;
label_354804:
    // 0x354804: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x354804u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x354808: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x354808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35480c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35480Cu;
    {
        const bool branch_taken_0x35480c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35480c) {
            ctx->pc = 0x354820u;
            goto label_354820;
        }
    }
    ctx->pc = 0x354814u;
    // 0x354814: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x354814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x354818: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x354818u;
    {
        const bool branch_taken_0x354818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354818) {
            ctx->pc = 0x354824u;
            goto label_354824;
        }
    }
    ctx->pc = 0x354820u;
label_354820:
    // 0x354820: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x354820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_354824:
    // 0x354824: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354824u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354828: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x354828u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35482c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x354830: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x354830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354834: 0x3e00008  jr          $ra
    ctx->pc = 0x354834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35483Cu;
    // 0x35483c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35483cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354840: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354844: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354848: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35484c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35484cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x354850: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x354850u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x354854: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354854u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354858: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354858u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35485c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354860: 0x3e00008  jr          $ra
    ctx->pc = 0x354860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354868u;
}
