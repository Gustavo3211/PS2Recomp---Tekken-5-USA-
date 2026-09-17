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

// Function: sub_0032C570
// Address: 0x32c570 - 0x32c5c0
void sub_0032C570_0x32c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C570_0x32c570");
#endif

    switch (ctx->pc) {
        case 0x32c590u: goto label_32c590;
        default: break;
    }

    ctx->pc = 0x32c570u;

    // 0x32c570: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x32c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32c574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32c574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32c578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c57c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32c580: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32c580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32c584: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32C584u;
    {
        const bool branch_taken_0x32c584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C584u;
        // 0x32c588: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c584) {
            ctx->pc = 0x32C5B4u;
            goto label_32c5b4;
        }
    }
    ctx->pc = 0x32C58Cu;
    // 0x32c58c: 0x0  nop
    ctx->pc = 0x32c58cu;
    // NOP
label_32c590:
    // 0x32c590: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x32c590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32c594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32c598: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x32c598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x32c59c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32c5a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x32c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32c5a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32c5a8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x32c5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32c5ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32C5ACu;
    {
        const bool branch_taken_0x32c5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5ACu;
        // 0x32c5b0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c5ac) {
            ctx->pc = 0x32C590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c590;
        }
    }
    ctx->pc = 0x32C5B4u;
label_32c5b4:
    // 0x32c5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x32C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C5BCu;
    // 0x32c5bc: 0x0  nop
    ctx->pc = 0x32c5bcu;
    // NOP
    ctx->pc = 0x32c5c0u;
}
