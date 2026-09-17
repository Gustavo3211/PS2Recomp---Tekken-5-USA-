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

// Function: sub_0026C818
// Address: 0x26c818 - 0x26c870
void sub_0026C818_0x26c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C818_0x26c818");
#endif

    switch (ctx->pc) {
        case 0x26c858u: goto label_26c858;
        default: break;
    }

    ctx->pc = 0x26c818u;

    // 0x26c818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c820: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c824: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x26c824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x26c828: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26C828u;
    {
        const bool branch_taken_0x26c828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C828u;
        // 0x26c82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c828) {
            ctx->pc = 0x26C85Cu;
            goto label_26c85c;
        }
    }
    ctx->pc = 0x26C830u;
    // 0x26c830: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x26c830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x26c834: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C834u;
    {
        const bool branch_taken_0x26c834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C834u;
        // 0x26c838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c834) {
            ctx->pc = 0x26C860u;
            goto label_26c860;
        }
    }
    ctx->pc = 0x26C83Cu;
    // 0x26c83c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26c840: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c844: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c848: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C848u;
    {
        const bool branch_taken_0x26c848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C848u;
        // 0x26c84c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c848) {
            ctx->pc = 0x26C864u;
            goto label_26c864;
        }
    }
    ctx->pc = 0x26C850u;
    // 0x26c850: 0xc09b202  jal         func_26C808
    ctx->pc = 0x26C850u;
    SET_GPR_U32(ctx, 31, 0x26C858u);
    ctx->pc = 0x26C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C808u, 0x26C850u, 0x26C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C858u;
label_26c858:
    // 0x26c858: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c858u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c85c:
    // 0x26c85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c860:
    // 0x26c860: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x26c860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26c864:
    // 0x26c864: 0x3e00008  jr          $ra
    ctx->pc = 0x26C864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C864u;
        // 0x26c868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C86Cu;
    // 0x26c86c: 0x0  nop
    ctx->pc = 0x26c86cu;
    // NOP
    ctx->pc = 0x26c870u;
}
