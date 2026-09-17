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

// Function: sub_0048D6B8
// Address: 0x48d6b8 - 0x48d6e8
void sub_0048D6B8_0x48d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D6B8_0x48d6b8");
#endif

    ctx->pc = 0x48d6b8u;

    // 0x48d6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48d6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48d6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48d6c0: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x48d6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x48d6c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48D6C4u;
    {
        const bool branch_taken_0x48d6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D6C4u;
        // 0x48d6c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d6c4) {
            ctx->pc = 0x48D6D8u;
            goto label_48d6d8;
        }
    }
    ctx->pc = 0x48D6CCu;
    // 0x48d6cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d6d0: 0x812925a  j           func_4A4968
    ctx->pc = 0x48D6D0u;
    ctx->pc = 0x48D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D6D0u;
    // 0x48d6d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4968u;
    sub_004A4968_0x4a4968(rdram, ctx, runtime); return;
    ctx->pc = 0x48D6D8u;
label_48d6d8:
    // 0x48d6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x48D6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D6DCu;
        // 0x48d6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D6E4u;
    // 0x48d6e4: 0x0  nop
    ctx->pc = 0x48d6e4u;
    // NOP
    ctx->pc = 0x48d6e8u;
}
