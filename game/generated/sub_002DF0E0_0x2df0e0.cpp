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

// Function: sub_002DF0E0
// Address: 0x2df0e0 - 0x2df130
void sub_002DF0E0_0x2df0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF0E0_0x2df0e0");
#endif

    switch (ctx->pc) {
        case 0x2df0f8u: goto label_2df0f8;
        case 0x2df110u: goto label_2df110;
        default: break;
    }

    ctx->pc = 0x2df0e0u;

    // 0x2df0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df0e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2df0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2df0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2df0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df0f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2df0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0f4: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2df0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2df0f8:
    // 0x2df0f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2df0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2df0fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2df0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2df100: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF100u;
    {
        const bool branch_taken_0x2df100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df100) {
            ctx->pc = 0x2DF104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF100u;
            // 0x2df104: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF114u;
            goto label_2df114;
        }
    }
    ctx->pc = 0x2DF108u;
    // 0x2df108: 0xc0b7a38  jal         func_2DE8E0
    ctx->pc = 0x2DF108u;
    SET_GPR_U32(ctx, 31, 0x2DF110u);
    ctx->pc = 0x2DE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8E0u, 0x2DF108u, 0x2DF110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF110u;
label_2df110:
    // 0x2df110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2df110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df114:
    // 0x2df114: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2df114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2df118: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DF118u;
    {
        const bool branch_taken_0x2df118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2df118) {
            ctx->pc = 0x2DF11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF118u;
            // 0x2df11c: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df0f8;
        }
    }
    ctx->pc = 0x2DF120u;
    // 0x2df120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2df124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df128: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF128u;
        // 0x2df12c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF130u;
}
