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

// Function: sub_002D5678
// Address: 0x2d5678 - 0x2d56c0
void sub_002D5678_0x2d5678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5678_0x2d5678");
#endif

    ctx->pc = 0x2d5678u;

    // 0x2d5678: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x2d5678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d567c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5684: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x2d5684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5688: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2D5688u;
    {
        const bool branch_taken_0x2d5688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5688) {
            ctx->pc = 0x2D56B8u;
            goto label_2d56b8;
        }
    }
    ctx->pc = 0x2D5690u;
    // 0x2d5690: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d5690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5694: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x2d5694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5698: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5698u;
    {
        const bool branch_taken_0x2d5698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5698u;
        // 0x2d569c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5698) {
            ctx->pc = 0x2D56B8u;
            goto label_2d56b8;
        }
    }
    ctx->pc = 0x2D56A0u;
    // 0x2d56a0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2d56a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d56a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D56A4u;
    {
        const bool branch_taken_0x2d56a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d56a4) {
            ctx->pc = 0x2D56B8u;
            goto label_2d56b8;
        }
    }
    ctx->pc = 0x2D56ACu;
    // 0x2d56ac: 0x0  nop
    ctx->pc = 0x2d56acu;
    // NOP
    // 0x2d56b0: 0x0  nop
    ctx->pc = 0x2d56b0u;
    // NOP
    // 0x2d56b4: 0x46026003  div.s       $f0, $f12, $f2
    ctx->pc = 0x2d56b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[2];
label_2d56b8:
    // 0x2d56b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D56B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D56B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D56C0u;
}
