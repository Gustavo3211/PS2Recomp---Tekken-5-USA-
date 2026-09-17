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

// Function: sub_00284E58
// Address: 0x284e58 - 0x284eb0
void sub_00284E58_0x284e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284E58_0x284e58");
#endif

    switch (ctx->pc) {
        case 0x284e88u: goto label_284e88;
        case 0x284e98u: goto label_284e98;
        case 0x284ea0u: goto label_284ea0;
        default: break;
    }

    ctx->pc = 0x284e58u;

    // 0x284e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284e5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x284e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284e64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284e68: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x284E68u;
    {
        const bool branch_taken_0x284e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E68u;
        // 0x284e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e68) {
            ctx->pc = 0x284EA4u;
            goto label_284ea4;
        }
    }
    ctx->pc = 0x284E70u;
    // 0x284e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284e74: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x284e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x284e78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x284e7c: 0x24844cd8  addiu       $a0, $a0, 0x4CD8
    ctx->pc = 0x284e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19672));
    // 0x284e80: 0xc0d4fe9  jal         func_353FA4
    ctx->pc = 0x284E80u;
    SET_GPR_U32(ctx, 31, 0x284E88u);
    ctx->pc = 0x284E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E80u;
    // 0x284e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353FA4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353FA4u, 0x284E80u, 0x284E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E88u;
label_284e88:
    // 0x284e88: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x284e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x284e8c: 0x24844d40  addiu       $a0, $a0, 0x4D40
    ctx->pc = 0x284e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    // 0x284e90: 0xc0d5007  jal         func_35401C
    ctx->pc = 0x284E90u;
    SET_GPR_U32(ctx, 31, 0x284E98u);
    ctx->pc = 0x284E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E90u;
    // 0x284e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35401Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35401Cu, 0x284E90u, 0x284E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E98u;
label_284e98:
    // 0x284e98: 0xc0d502e  jal         func_3540B8
    ctx->pc = 0x284E98u;
    SET_GPR_U32(ctx, 31, 0x284EA0u);
    ctx->pc = 0x3540B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3540B8u, 0x284E98u, 0x284EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EA0u;
label_284ea0:
    // 0x284ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284ea4:
    // 0x284ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x284EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EA8u;
        // 0x284eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284EB0u;
}
