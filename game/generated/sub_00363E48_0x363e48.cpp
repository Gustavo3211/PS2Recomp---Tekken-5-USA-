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

// Function: sub_00363E48
// Address: 0x363e48 - 0x363e78
void sub_00363E48_0x363e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363E48_0x363e48");
#endif

    ctx->pc = 0x363e48u;

    // 0x363e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363e4c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x363e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x363e50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x363E50u;
    {
        const bool branch_taken_0x363e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x363E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E50u;
        // 0x363e54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363e50) {
            ctx->pc = 0x363E68u;
            goto label_363e68;
        }
    }
    ctx->pc = 0x363E58u;
    // 0x363e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363e5c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x363E5Cu;
    ctx->pc = 0x363E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363E5Cu;
    // 0x363e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x363E64u;
    // 0x363e64: 0x0  nop
    ctx->pc = 0x363e64u;
    // NOP
label_363e68:
    // 0x363e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x363E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E6Cu;
        // 0x363e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363E74u;
    // 0x363e74: 0x0  nop
    ctx->pc = 0x363e74u;
    // NOP
    ctx->pc = 0x363e78u;
}
