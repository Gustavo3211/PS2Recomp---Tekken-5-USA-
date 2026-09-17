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

// Function: sub_00130C30
// Address: 0x130c30 - 0x130c68
void sub_00130C30_0x130c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130C30_0x130c30");
#endif

    ctx->pc = 0x130c30u;

    // 0x130c30: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130c34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130c38: 0x24424d68  addiu       $v0, $v0, 0x4D68
    ctx->pc = 0x130c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19816));
    // 0x130c3c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x130c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x130c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130c44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130C44u;
    {
        const bool branch_taken_0x130c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C44u;
        // 0x130c48: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c44) {
            ctx->pc = 0x130C58u;
            goto label_130c58;
        }
    }
    ctx->pc = 0x130C4Cu;
    // 0x130c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c50: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130C50u;
    ctx->pc = 0x130C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C50u;
    // 0x130c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x130C58u;
label_130c58:
    // 0x130c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x130C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C5Cu;
        // 0x130c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C64u;
    // 0x130c64: 0x0  nop
    ctx->pc = 0x130c64u;
    // NOP
    ctx->pc = 0x130c68u;
}
