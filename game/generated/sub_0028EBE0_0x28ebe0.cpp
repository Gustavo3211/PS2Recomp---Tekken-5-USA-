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

// Function: sub_0028EBE0
// Address: 0x28ebe0 - 0x28ec10
void sub_0028EBE0_0x28ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EBE0_0x28ebe0");
#endif

    switch (ctx->pc) {
        case 0x28ebf0u: goto label_28ebf0;
        default: break;
    }

    ctx->pc = 0x28ebe0u;

    // 0x28ebe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ebe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ebe8: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EBE8u;
    SET_GPR_U32(ctx, 31, 0x28EBF0u);
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EBE8u, 0x28EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBF0u;
label_28ebf0:
    // 0x28ebf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28ebf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebf4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28EBF4u;
    {
        const bool branch_taken_0x28ebf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBF4u;
        // 0x28ebf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebf4) {
            ctx->pc = 0x28EC00u;
            goto label_28ec00;
        }
    }
    ctx->pc = 0x28EBFCu;
    // 0x28ebfc: 0xac620150  sw          $v0, 0x150($v1)
    ctx->pc = 0x28ebfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
label_28ec00:
    // 0x28ec00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ec04: 0x3e00008  jr          $ra
    ctx->pc = 0x28EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC04u;
        // 0x28ec08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EC0Cu;
    // 0x28ec0c: 0x0  nop
    ctx->pc = 0x28ec0cu;
    // NOP
    ctx->pc = 0x28ec10u;
}
