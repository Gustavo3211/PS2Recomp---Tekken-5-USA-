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

// Function: sub_002B7E60
// Address: 0x2b7e60 - 0x2b7eb8
void sub_002B7E60_0x2b7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7E60_0x2b7e60");
#endif

    ctx->pc = 0x2b7e60u;

    // 0x2b7e60: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2b7e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b7e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e68: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x2b7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2b7e6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7e70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2b7e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2b7e74: 0x2d240004  sltiu       $a0, $t1, 0x4
    ctx->pc = 0x2b7e74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b7e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b7e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e84: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7E84u;
    {
        const bool branch_taken_0x2b7e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E84u;
        // 0x2b7e88: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e84) {
            ctx->pc = 0x2B7EA8u;
            goto label_2b7ea8;
        }
    }
    ctx->pc = 0x2B7E8Cu;
    // 0x2b7e8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2b7e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b7e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7e94: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x2b7e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x2b7e98: 0x242178c0  addiu       $at, $at, 0x78C0
    ctx->pc = 0x2b7e98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 30912));
    // 0x2b7e9c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2b7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2b7ea0: 0x80ae284  j           func_2B8A10
    ctx->pc = 0x2B7EA0u;
    ctx->pc = 0x2B7EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7EA0u;
    // 0x2b7ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8A10u, 0x2B7EA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7EA8u;
label_2b7ea8:
    // 0x2b7ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7eac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EACu;
        // 0x2b7eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7EB4u;
    // 0x2b7eb4: 0x0  nop
    ctx->pc = 0x2b7eb4u;
    // NOP
    ctx->pc = 0x2b7eb8u;
}
