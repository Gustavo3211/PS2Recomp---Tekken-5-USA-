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

// Function: sub_00370C88
// Address: 0x370c88 - 0x370cc0
void sub_00370C88_0x370c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C88_0x370c88");
#endif

    ctx->pc = 0x370c88u;

    // 0x370c88: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370c8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370c90: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x370c94: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x370c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370c9c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x370C9Cu;
    {
        const bool branch_taken_0x370c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C9Cu;
        // 0x370ca0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370c9c) {
            ctx->pc = 0x370CB0u;
            goto label_370cb0;
        }
    }
    ctx->pc = 0x370CA4u;
    // 0x370ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370ca8: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x370CA8u;
    ctx->pc = 0x370CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370CA8u;
    // 0x370cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x370CB0u;
label_370cb0:
    // 0x370cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x370CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370CB4u;
        // 0x370cb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370CBCu;
    // 0x370cbc: 0x0  nop
    ctx->pc = 0x370cbcu;
    // NOP
    ctx->pc = 0x370cc0u;
}
