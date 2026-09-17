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

// Function: sub_004A2E68
// Address: 0x4a2e68 - 0x4a2ec8
void sub_004A2E68_0x4a2e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2E68_0x4a2e68");
#endif

    ctx->pc = 0x4a2e68u;

    // 0x4a2e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a2e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a2e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a2e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a2e70: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x4a2e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x4a2e74: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4A2E74u;
    {
        const bool branch_taken_0x4a2e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2e74) {
            ctx->pc = 0x4A2E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2E74u;
            // 0x4a2e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2E7Cu;
    // 0x4a2e7c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A2E7Cu;
    {
        const bool branch_taken_0x4a2e7c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4A2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E7Cu;
        // 0x4a2e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e7c) {
            ctx->pc = 0x4A2E98u;
            goto label_4a2e98;
        }
    }
    ctx->pc = 0x4A2E84u;
    // 0x4a2e84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a2e88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2E88u;
    {
        const bool branch_taken_0x4a2e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E88u;
        // 0x4a2e8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e88) {
            ctx->pc = 0x4A2EA8u;
            goto label_4a2ea8;
        }
    }
    ctx->pc = 0x4A2E90u;
    // 0x4a2e90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4A2E90u;
    {
        const bool branch_taken_0x4a2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2e90) {
            ctx->pc = 0x4A2EC0u;
            goto label_4a2ec0;
        }
    }
    ctx->pc = 0x4A2E98u;
label_4a2e98:
    // 0x4a2e98: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2E98u;
    {
        const bool branch_taken_0x4a2e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E98u;
        // 0x4a2e9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e98) {
            ctx->pc = 0x4A2EB8u;
            goto label_4a2eb8;
        }
    }
    ctx->pc = 0x4A2EA0u;
    // 0x4a2ea0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2EA0u;
    {
        const bool branch_taken_0x4a2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2ea0) {
            ctx->pc = 0x4A2EC0u;
            goto label_4a2ec0;
        }
    }
    ctx->pc = 0x4A2EA8u;
label_4a2ea8:
    // 0x4a2ea8: 0x8128b98  j           func_4A2E60
    ctx->pc = 0x4A2EA8u;
    ctx->pc = 0x4A2EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2EA8u;
    // 0x4a2eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2E60u, 0x4A2EA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A2EB0u;
label_4a2eb0:
    // 0x4a2eb0: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x4A2EB0u;
    ctx->pc = 0x4A2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2EB0u;
    // 0x4a2eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x4A2EB8u;
label_4a2eb8:
    // 0x4a2eb8: 0x8128b92  j           func_4A2E48
    ctx->pc = 0x4A2EB8u;
    ctx->pc = 0x4A2EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2EB8u;
    // 0x4a2ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2E48u, 0x4A2EB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A2EC0u;
label_4a2ec0:
    // 0x4a2ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EC0u;
        // 0x4a2ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2EC8u;
}
