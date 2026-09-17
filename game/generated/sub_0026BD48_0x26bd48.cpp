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

// Function: sub_0026BD48
// Address: 0x26bd48 - 0x26bd68
void sub_0026BD48_0x26bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BD48_0x26bd48");
#endif

    ctx->pc = 0x26bd48u;

    // 0x26bd48: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x26bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26bd4c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x26bd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x26bd50: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x26bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x26bd54: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x26bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x26bd58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26bd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26bd5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26bd60: 0x3e00008  jr          $ra
    ctx->pc = 0x26BD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BD60u;
        // 0x26bd64: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BD68u;
}
