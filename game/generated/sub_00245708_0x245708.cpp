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

// Function: sub_00245708
// Address: 0x245708 - 0x245758
void sub_00245708_0x245708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245708_0x245708");
#endif

    ctx->pc = 0x245708u;

    // 0x245708: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x245708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x24570c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24570cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x245710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x245714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245718: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x245718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24571c: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x24571Cu;
    {
        const bool branch_taken_0x24571c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24571c) {
            ctx->pc = 0x245750u;
            goto label_245750;
        }
    }
    ctx->pc = 0x245724u;
    // 0x245724: 0xc7808860  lwc1        $f0, -0x77A0($gp)
    ctx->pc = 0x245724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245728: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x245728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24572c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x24572cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245730: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x245730u;
    {
        const bool branch_taken_0x245730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245730) {
            ctx->pc = 0x245750u;
            goto label_245750;
        }
    }
    ctx->pc = 0x245738u;
    // 0x245738: 0x460c0041  sub.s       $f1, $f0, $f12
    ctx->pc = 0x245738u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x24573c: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x24573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x245740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245744: 0x0  nop
    ctx->pc = 0x245744u;
    // NOP
    // 0x245748: 0x0  nop
    ctx->pc = 0x245748u;
    // NOP
    // 0x24574c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24574cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_245750:
    // 0x245750: 0x3e00008  jr          $ra
    ctx->pc = 0x245750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245750u;
        // 0x245754: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245758u;
}
