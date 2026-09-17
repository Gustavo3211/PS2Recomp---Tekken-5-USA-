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

// Function: sub_00350614
// Address: 0x350614 - 0x3506b0
void sub_00350614_0x350614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350614_0x350614");
#endif

    switch (ctx->pc) {
        case 0x350628u: goto label_350628;
        default: break;
    }

    ctx->pc = 0x350614u;

    // 0x350614: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350618: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x350618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x35061c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35061cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350620: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x350620u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x350624: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x350624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_350628:
    // 0x350628: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x35062c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x35062cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x350630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350630u;
    {
        const bool branch_taken_0x350630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350630) {
            ctx->pc = 0x350640u;
            goto label_350640;
        }
    }
    ctx->pc = 0x350638u;
    // 0x350638: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x350638u;
    {
        const bool branch_taken_0x350638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350638) {
            ctx->pc = 0x350698u;
            goto label_350698;
        }
    }
    ctx->pc = 0x350640u;
label_350640:
    // 0x350640: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350644: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x350644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x350648: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x350648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x35064c: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x35064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x350650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350654: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350658: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x350658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35065c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35065Cu;
    {
        const bool branch_taken_0x35065c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35065c) {
            ctx->pc = 0x350684u;
            goto label_350684;
        }
    }
    ctx->pc = 0x350664u;
    // 0x350664: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350668: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x350668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x35066c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x35066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x350670: 0x2442c604  addiu       $v0, $v0, -0x39FC
    ctx->pc = 0x350670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952452));
    // 0x350674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x350678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35067c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35067Cu;
    {
        const bool branch_taken_0x35067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35067c) {
            ctx->pc = 0x35069Cu;
            goto label_35069c;
        }
    }
    ctx->pc = 0x350684u;
label_350684:
    // 0x350684: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x350684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x350688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x350688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35068c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x35068cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x350690: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x350690u;
    {
        const bool branch_taken_0x350690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350690) {
            ctx->pc = 0x350628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350628;
        }
    }
    ctx->pc = 0x350698u;
label_350698:
    // 0x350698: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35069c:
    // 0x35069c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35069cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506a0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3506a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3506a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3506a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3506a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3506A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3506B0u;
}
