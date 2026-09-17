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

// Function: sub_002DF410
// Address: 0x2df410 - 0x2df450
void sub_002DF410_0x2df410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF410_0x2df410");
#endif

    ctx->pc = 0x2df410u;

    // 0x2df410: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2df410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2df414: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df418: 0x248400cc  addiu       $a0, $a0, 0xCC
    ctx->pc = 0x2df418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    // 0x2df41c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2df41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF420u;
    {
        const bool branch_taken_0x2df420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF420u;
        // 0x2df424: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df420) {
            ctx->pc = 0x2DF438u;
            goto label_2df438;
        }
    }
    ctx->pc = 0x2DF428u;
    // 0x2df428: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2df428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2df42c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2df42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2df430: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF430u;
    {
        const bool branch_taken_0x2df430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2df430) {
            ctx->pc = 0x2DF444u;
            goto label_2df444;
        }
    }
    ctx->pc = 0x2DF438u;
label_2df438:
    // 0x2df438: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2df438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2df43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df440: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2df440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2df444:
    // 0x2df444: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF444u;
        // 0x2df448: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF44Cu;
    // 0x2df44c: 0x0  nop
    ctx->pc = 0x2df44cu;
    // NOP
    ctx->pc = 0x2df450u;
}
