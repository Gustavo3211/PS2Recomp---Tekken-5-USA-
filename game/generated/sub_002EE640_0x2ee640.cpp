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

// Function: sub_002EE640
// Address: 0x2ee640 - 0x2ee6a0
void sub_002EE640_0x2ee640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE640_0x2ee640");
#endif

    switch (ctx->pc) {
        case 0x2ee650u: goto label_2ee650;
        default: break;
    }

    ctx->pc = 0x2ee640u;

    // 0x2ee640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee648: 0xc0bb89a  jal         func_2EE268
    ctx->pc = 0x2EE648u;
    SET_GPR_U32(ctx, 31, 0x2EE650u);
    ctx->pc = 0x2EE64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE648u;
    // 0x2ee64c: 0x248400fc  addiu       $a0, $a0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE268u, 0x2EE648u, 0x2EE650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE650u;
label_2ee650:
    // 0x2ee650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee654: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE654u;
        // 0x2ee658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE65Cu;
    // 0x2ee65c: 0x0  nop
    ctx->pc = 0x2ee65cu;
    // NOP
    // 0x2ee660: 0x248400e8  addiu       $a0, $a0, 0xE8
    ctx->pc = 0x2ee660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x2ee664: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE668u;
    {
        const bool branch_taken_0x2ee668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE668u;
        // 0x2ee66c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee668) {
            ctx->pc = 0x2EE680u;
            goto label_2ee680;
        }
    }
    ctx->pc = 0x2EE670u;
    // 0x2ee670: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee674: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ee674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ee678: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE678u;
    {
        const bool branch_taken_0x2ee678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee678) {
            ctx->pc = 0x2EE67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE678u;
            // 0x2ee67c: 0x8ca20100  lw          $v0, 0x100($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE690u;
            goto label_2ee690;
        }
    }
    ctx->pc = 0x2EE680u;
label_2ee680:
    // 0x2ee680: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ee680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ee684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee688: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ee688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ee68c: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x2ee68cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x100u));
label_2ee690:
    // 0x2ee690: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ee690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ee694: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE694u;
        // 0x2ee698: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE69Cu;
    // 0x2ee69c: 0x0  nop
    ctx->pc = 0x2ee69cu;
    // NOP
    ctx->pc = 0x2ee6a0u;
}
