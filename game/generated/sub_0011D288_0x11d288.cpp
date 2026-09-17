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

// Function: sub_0011D288
// Address: 0x11d288 - 0x11d2b0
void sub_0011D288_0x11d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D288_0x11d288");
#endif

    ctx->pc = 0x11d288u;

    // 0x11d288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d28c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11d28cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11d290: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11d290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11d294: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11d294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11d298: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d29c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11d2a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11d2a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11d2a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11d2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A8u;
        // 0x11d2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D2B0u;
}
