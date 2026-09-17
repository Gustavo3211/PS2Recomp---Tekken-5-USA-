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

// Function: sub_00335808
// Address: 0x335808 - 0x335870
void sub_00335808_0x335808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335808_0x335808");
#endif

    switch (ctx->pc) {
        case 0x335840u: goto label_335840;
        default: break;
    }

    ctx->pc = 0x335808u;

    // 0x335808: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x335808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33580c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x33580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x335810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335814: 0x34428009  ori         $v0, $v0, 0x8009
    ctx->pc = 0x335814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32777);
    // 0x335818: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x335818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33581c: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x33581cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x335820: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x335820u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x335824: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x335824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x335828: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x335828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x33582c: 0x246909f8  addiu       $t1, $v1, 0x9F8
    ctx->pc = 0x33582cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2552));
    // 0x335830: 0x24470908  addiu       $a3, $v0, 0x908
    ctx->pc = 0x335830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2312));
    // 0x335834: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x335834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x335838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33583c: 0x0  nop
    ctx->pc = 0x33583cu;
    // NOP
label_335840:
    // 0x335840: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x335840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x335844: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x335844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x335848: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x335848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33584c: 0x28c40009  slti        $a0, $a2, 0x9
    ctx->pc = 0x33584cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x335850: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x335850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x335854: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x335854u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x335858: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x335858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x33585c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x33585cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x335860: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x335860u;
    {
        const bool branch_taken_0x335860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335860u;
        // 0x335864: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335860) {
            ctx->pc = 0x335840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335840;
        }
    }
    ctx->pc = 0x335868u;
    // 0x335868: 0x3e00008  jr          $ra
    ctx->pc = 0x335868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335868u;
        // 0x33586c: 0x250200a0  addiu       $v0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335870u;
}
