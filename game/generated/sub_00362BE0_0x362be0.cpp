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

// Function: sub_00362BE0
// Address: 0x362be0 - 0x362c00
void sub_00362BE0_0x362be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362BE0_0x362be0");
#endif

    ctx->pc = 0x362be0u;

    // 0x362be0: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x362be4: 0x3e00008  jr          $ra
    ctx->pc = 0x362BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BE4u;
        // 0x362be8: 0x84625d06  lh          $v0, 0x5D06($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 23814)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362BECu;
    // 0x362bec: 0x0  nop
    ctx->pc = 0x362becu;
    // NOP
    // 0x362bf0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x362bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x362bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x362BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362BF4u;
        // 0x362bf8: 0xc4405d08  lwc1        $f0, 0x5D08($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 23816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362BFCu;
    // 0x362bfc: 0x0  nop
    ctx->pc = 0x362bfcu;
    // NOP
    ctx->pc = 0x362c00u;
}
