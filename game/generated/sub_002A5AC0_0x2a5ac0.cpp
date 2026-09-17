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

// Function: sub_002A5AC0
// Address: 0x2a5ac0 - 0x2a5ae8
void sub_002A5AC0_0x2a5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5AC0_0x2a5ac0");
#endif

    switch (ctx->pc) {
        case 0x2a5ad8u: goto label_2a5ad8;
        default: break;
    }

    ctx->pc = 0x2a5ac0u;

    // 0x2a5ac0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a5ac4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a5ac8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a5acc: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x2a5accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2a5ad0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A5AD0u;
    SET_GPR_U32(ctx, 31, 0x2A5AD8u);
    ctx->pc = 0x2A5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AD0u;
    // 0x2a5ad4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A5AD0u, 0x2A5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AD8u;
label_2a5ad8:
    // 0x2a5ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a5ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a5adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5ADCu;
        // 0x2a5ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5AE4u;
    // 0x2a5ae4: 0x0  nop
    ctx->pc = 0x2a5ae4u;
    // NOP
    ctx->pc = 0x2a5ae8u;
}
