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

// Function: sub_00251D58
// Address: 0x251d58 - 0x251da8
void sub_00251D58_0x251d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251D58_0x251d58");
#endif

    switch (ctx->pc) {
        case 0x251d70u: goto label_251d70;
        case 0x251d98u: goto label_251d98;
        default: break;
    }

    ctx->pc = 0x251d58u;

    // 0x251d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x251d5c: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x251d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x251d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251d64: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x251d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x251d68: 0x24427f70  addiu       $v0, $v0, 0x7F70
    ctx->pc = 0x251d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32624));
    // 0x251d6c: 0x0  nop
    ctx->pc = 0x251d6cu;
    // NOP
label_251d70:
    // 0x251d70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x251d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x251d74: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x251d74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x251d78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x251d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x251d7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x251d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x251d80: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x251d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x251d84: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x251d84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x251d88: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x251D88u;
    {
        const bool branch_taken_0x251d88 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x251D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D88u;
        // 0x251d8c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251d88) {
            ctx->pc = 0x251D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251d70;
        }
    }
    ctx->pc = 0x251D90u;
    // 0x251d90: 0xc09471c  jal         func_251C70
    ctx->pc = 0x251D90u;
    SET_GPR_U32(ctx, 31, 0x251D98u);
    ctx->pc = 0x251C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251C70u, 0x251D90u, 0x251D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D98u;
label_251d98:
    // 0x251d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x251D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251D9Cu;
        // 0x251da0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251DA4u;
    // 0x251da4: 0x0  nop
    ctx->pc = 0x251da4u;
    // NOP
    ctx->pc = 0x251da8u;
}
