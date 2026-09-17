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

// Function: sub_00294DC8
// Address: 0x294dc8 - 0x294e08
void sub_00294DC8_0x294dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294DC8_0x294dc8");
#endif

    switch (ctx->pc) {
        case 0x294df8u: goto label_294df8;
        default: break;
    }

    ctx->pc = 0x294dc8u;

    // 0x294dc8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x294dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x294dcc: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x294dccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294dd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x294dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x294dd8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x294DD8u;
    {
        const bool branch_taken_0x294dd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x294DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DD8u;
        // 0x294ddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294dd8) {
            ctx->pc = 0x294DF8u;
            goto label_294df8;
        }
    }
    ctx->pc = 0x294DE0u;
    // 0x294de0: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x294de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x294de4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x294DE4u;
    {
        const bool branch_taken_0x294de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294de4) {
            ctx->pc = 0x294DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294DE4u;
            // 0x294de8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294DFCu;
            goto label_294dfc;
        }
    }
    ctx->pc = 0x294DECu;
    // 0x294dec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x294decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x294df0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x294DF0u;
    SET_GPR_U32(ctx, 31, 0x294DF8u);
    ctx->pc = 0x294DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294DF0u;
    // 0x294df4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x294DF0u, 0x294DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DF8u;
label_294df8:
    // 0x294df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294dfc:
    // 0x294dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x294DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DFCu;
        // 0x294e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294E04u;
    // 0x294e04: 0x0  nop
    ctx->pc = 0x294e04u;
    // NOP
    ctx->pc = 0x294e08u;
}
