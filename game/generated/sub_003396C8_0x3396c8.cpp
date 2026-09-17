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

// Function: sub_003396C8
// Address: 0x3396c8 - 0x3396e8
void sub_003396C8_0x3396c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003396C8_0x3396c8");
#endif

    ctx->pc = 0x3396c8u;

    // 0x3396c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3396c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3396cc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3396ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3396d0: 0xd89803c0  lqc2        $vf24, 0x3C0($a0)
    ctx->pc = 0x3396d0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 960)));
    // 0x3396d4: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x3396d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3396d8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x3396d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3396dc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3396dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3396e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3396E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3396E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396E0u;
        // 0x3396e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3396E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3396E8u;
}
