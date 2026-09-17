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

// Function: sub_00356814
// Address: 0x356814 - 0x3568d8
void sub_00356814_0x356814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356814_0x356814");
#endif

    switch (ctx->pc) {
        case 0x356838u: goto label_356838;
        case 0x356898u: goto label_356898;
        case 0x3568bcu: goto label_3568bc;
        default: break;
    }

    ctx->pc = 0x356814u;

    // 0x356814: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x356818: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x356818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x35681c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x356820: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x356820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356824: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x356824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x356828: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x356828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x35682c: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x35682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x356830: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x356830u;
    SET_GPR_U32(ctx, 31, 0x356838u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x356830u, 0x356838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356838u;
label_356838:
    // 0x356838: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x356838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35683c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x35683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x356840: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x356840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x356844: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x356844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x356848: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x356848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35684c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35684cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356850: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x356850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x356854: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x356854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x356858: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x356858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35685c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356860: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x356860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356864: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356868: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x356868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35686c: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x35686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x356870: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356874: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x356874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x356878: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x356878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35687c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x35687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x356880: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356880u;
    {
        const bool branch_taken_0x356880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356880) {
            ctx->pc = 0x3568A4u;
            goto label_3568a4;
        }
    }
    ctx->pc = 0x356888u;
    // 0x356888: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x356888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35688c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x35688cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x356890: 0xc0d598e  jal         func_356638
    ctx->pc = 0x356890u;
    SET_GPR_U32(ctx, 31, 0x356898u);
    ctx->pc = 0x356638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356638u, 0x356890u, 0x356898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356898u;
label_356898:
    // 0x356898: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x356898u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x35689c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35689Cu;
    {
        const bool branch_taken_0x35689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35689c) {
            ctx->pc = 0x3568B0u;
            goto label_3568b0;
        }
    }
    ctx->pc = 0x3568A4u;
label_3568a4:
    // 0x3568a4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3568a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3568a8: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3568a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3568ac: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x3568acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_3568b0:
    // 0x3568b0: 0x8f84c728  lw          $a0, -0x38D8($gp)
    ctx->pc = 0x3568b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952744)));
    // 0x3568b4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3568B4u;
    SET_GPR_U32(ctx, 31, 0x3568BCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3568B4u, 0x3568BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568BCu;
label_3568bc:
    // 0x3568bc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3568bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3568c0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3568c0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568c4: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x3568c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3568c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3568c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3568cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3568ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3568d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3568D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3568D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3568D8u;
}
