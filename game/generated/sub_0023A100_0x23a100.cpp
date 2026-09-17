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

// Function: sub_0023A100
// Address: 0x23a100 - 0x23a148
void sub_0023A100_0x23a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A100_0x23a100");
#endif

    switch (ctx->pc) {
        case 0x23a108u: goto label_23a108;
        case 0x23a110u: goto label_23a110;
        default: break;
    }

    ctx->pc = 0x23a100u;

    // 0x23a100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23a100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a104: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x23a104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_23a108:
    // 0x23a108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a10c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x23a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23a110:
    // 0x23a110: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23a110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23a114: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23a114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x23a118: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23a118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23a11c: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x23a11cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a120: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x23a120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a124: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x23a124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x23a128: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23A128u;
    {
        const bool branch_taken_0x23a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a128) {
            ctx->pc = 0x23A110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a110;
        }
    }
    ctx->pc = 0x23A130u;
    // 0x23a130: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23a130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23a134: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x23a134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a138: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x23A138u;
    {
        const bool branch_taken_0x23a138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a138) {
            ctx->pc = 0x23A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A138u;
            // 0x23a13c: 0x61140  sll         $v0, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a108;
        }
    }
    ctx->pc = 0x23A140u;
    // 0x23a140: 0x3e00008  jr          $ra
    ctx->pc = 0x23A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A148u;
}
