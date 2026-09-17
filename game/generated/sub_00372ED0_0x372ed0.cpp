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

// Function: sub_00372ED0
// Address: 0x372ed0 - 0x372f00
void sub_00372ED0_0x372ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372ED0_0x372ed0");
#endif

    ctx->pc = 0x372ed0u;

    // 0x372ed0: 0x460d7381  sub.s       $f14, $f14, $f13
    ctx->pc = 0x372ed0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x372ed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x372ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x372ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372edc: 0x460d6301  sub.s       $f12, $f12, $f13
    ctx->pc = 0x372edcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x372ee0: 0x460f03c1  sub.s       $f15, $f0, $f15
    ctx->pc = 0x372ee0u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x372ee4: 0x0  nop
    ctx->pc = 0x372ee4u;
    // NOP
    // 0x372ee8: 0x0  nop
    ctx->pc = 0x372ee8u;
    // NOP
    // 0x372eec: 0x460e6303  div.s       $f12, $f12, $f14
    ctx->pc = 0x372eecu;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[14];
    // 0x372ef0: 0x460f6302  mul.s       $f12, $f12, $f15
    ctx->pc = 0x372ef0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x372ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x372EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EF4u;
        // 0x372ef8: 0x460c0001  sub.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372EFCu;
    // 0x372efc: 0x0  nop
    ctx->pc = 0x372efcu;
    // NOP
    ctx->pc = 0x372f00u;
}
