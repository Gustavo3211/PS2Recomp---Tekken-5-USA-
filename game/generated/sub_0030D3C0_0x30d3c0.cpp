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

// Function: sub_0030D3C0
// Address: 0x30d3c0 - 0x30d3f8
void sub_0030D3C0_0x30d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3C0_0x30d3c0");
#endif

    switch (ctx->pc) {
        case 0x30d3c8u: goto label_30d3c8;
        default: break;
    }

    ctx->pc = 0x30d3c0u;

    // 0x30d3c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x30d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d3c4: 0x24864580  addiu       $a2, $a0, 0x4580
    ctx->pc = 0x30d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
label_30d3c8:
    // 0x30d3c8: 0x24830360  addiu       $v1, $a0, 0x360
    ctx->pc = 0x30d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x30d3cc: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30d3d0: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x30d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x30d3d4: 0x24830370  addiu       $v1, $a0, 0x370
    ctx->pc = 0x30d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    // 0x30d3d8: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30d3dc: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30d3e0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30d3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30d3e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30D3E4u;
    {
        const bool branch_taken_0x30d3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D3E4u;
        // 0x30d3e8: 0xfc650008  sd          $a1, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d3e4) {
            ctx->pc = 0x30D3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d3c8;
        }
    }
    ctx->pc = 0x30D3ECu;
    // 0x30d3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D3F4u;
    // 0x30d3f4: 0x0  nop
    ctx->pc = 0x30d3f4u;
    // NOP
    ctx->pc = 0x30d3f8u;
}
