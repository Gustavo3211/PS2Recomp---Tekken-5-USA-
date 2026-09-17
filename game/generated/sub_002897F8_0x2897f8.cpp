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

// Function: sub_002897F8
// Address: 0x2897f8 - 0x289820
void sub_002897F8_0x2897f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002897F8_0x2897f8");
#endif

    switch (ctx->pc) {
        case 0x289810u: goto label_289810;
        default: break;
    }

    ctx->pc = 0x2897f8u;

    // 0x2897f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2897fc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2897fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x289800: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x289800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x289804: 0x2484fd10  addiu       $a0, $a0, -0x2F0
    ctx->pc = 0x289804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966544));
    // 0x289808: 0xc048b90  jal         func_122E40
    ctx->pc = 0x289808u;
    SET_GPR_U32(ctx, 31, 0x289810u);
    ctx->pc = 0x28980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289808u;
    // 0x28980c: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x289808u, 0x289810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289810u;
label_289810:
    // 0x289810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289814: 0x3e00008  jr          $ra
    ctx->pc = 0x289814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289814u;
        // 0x289818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28981Cu;
    // 0x28981c: 0x0  nop
    ctx->pc = 0x28981cu;
    // NOP
    ctx->pc = 0x289820u;
}
