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

// Function: sub_0027B1F0
// Address: 0x27b1f0 - 0x27b208
void sub_0027B1F0_0x27b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B1F0_0x27b1f0");
#endif

    ctx->pc = 0x27b1f0u;

    // 0x27b1f0: 0xc781aeb4  lwc1        $f1, -0x514C($gp)
    ctx->pc = 0x27b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294946484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b1f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27b1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27b1f8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x27b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x27b1fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b200: 0x3e00008  jr          $ra
    ctx->pc = 0x27B200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B200u;
        // 0x27b204: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B208u;
}
