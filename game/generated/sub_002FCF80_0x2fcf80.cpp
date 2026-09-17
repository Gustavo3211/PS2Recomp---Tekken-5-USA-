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

// Function: sub_002FCF80
// Address: 0x2fcf80 - 0x2fcfc0
void sub_002FCF80_0x2fcf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCF80_0x2fcf80");
#endif

    ctx->pc = 0x2fcf80u;

    // 0x2fcf80: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x2fcf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fcf84: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCF84u;
    {
        const bool branch_taken_0x2fcf84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF84u;
        // 0x2fcf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf84) {
            ctx->pc = 0x2FCFB4u;
            goto label_2fcfb4;
        }
    }
    ctx->pc = 0x2FCF8Cu;
    // 0x2fcf8c: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FCF8Cu;
    {
        const bool branch_taken_0x2fcf8c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2fcf8c) {
            ctx->pc = 0x2FCFB4u;
            goto label_2fcfb4;
        }
    }
    ctx->pc = 0x2FCF94u;
    // 0x2fcf94: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2fcf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fcf98: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2fcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2fcf9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fcfa0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2fcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2fcfa4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2fcfa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fcfa8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCFA8u;
    {
        const bool branch_taken_0x2fcfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFA8u;
        // 0x2fcfac: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfa8) {
            ctx->pc = 0x2FCFB4u;
            goto label_2fcfb4;
        }
    }
    ctx->pc = 0x2FCFB0u;
    // 0x2fcfb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fcfb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fcfb4:
    // 0x2fcfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCFBCu;
    // 0x2fcfbc: 0x0  nop
    ctx->pc = 0x2fcfbcu;
    // NOP
    ctx->pc = 0x2fcfc0u;
}
