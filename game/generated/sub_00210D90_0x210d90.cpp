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

// Function: sub_00210D90
// Address: 0x210d90 - 0x210de8
void sub_00210D90_0x210d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210D90_0x210d90");
#endif

    switch (ctx->pc) {
        case 0x210da8u: goto label_210da8;
        case 0x210db0u: goto label_210db0;
        default: break;
    }

    ctx->pc = 0x210d90u;

    // 0x210d90: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x210d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x210d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d98: 0x24485930  addiu       $t0, $v0, 0x5930
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
    // 0x210d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x210d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210da4: 0x0  nop
    ctx->pc = 0x210da4u;
    // NOP
label_210da8:
    // 0x210da8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x210da8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x210dac: 0x0  nop
    ctx->pc = 0x210dacu;
    // NOP
label_210db0:
    // 0x210db0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x210db4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x210db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210db8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210dbc: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x210dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x210dc0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x210dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x210dc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x210DC4u;
    {
        const bool branch_taken_0x210dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DC4u;
        // 0x210dc8: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dc4) {
            ctx->pc = 0x210DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210db0;
        }
    }
    ctx->pc = 0x210DCCu;
    // 0x210dcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x210dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x210dd0: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x210dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x210dd4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x210DD4u;
    {
        const bool branch_taken_0x210dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210dd4) {
            ctx->pc = 0x210DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210DD4u;
            // 0x210dd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210da8;
        }
    }
    ctx->pc = 0x210DDCu;
    // 0x210ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x210DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210DE4u;
    // 0x210de4: 0x0  nop
    ctx->pc = 0x210de4u;
    // NOP
    ctx->pc = 0x210de8u;
}
