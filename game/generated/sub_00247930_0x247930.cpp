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

// Function: sub_00247930
// Address: 0x247930 - 0x247970
void sub_00247930_0x247930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247930_0x247930");
#endif

    ctx->pc = 0x247930u;

    // 0x247930: 0x460d6036  c.le.s      $f12, $f13
    ctx->pc = 0x247930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24793c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x24793Cu;
    {
        const bool branch_taken_0x24793c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24793c) {
            ctx->pc = 0x247968u;
            goto label_247968;
        }
    }
    ctx->pc = 0x247944u;
    // 0x247944: 0x460c7036  c.le.s      $f14, $f12
    ctx->pc = 0x247944u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24794c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24794Cu;
    {
        const bool branch_taken_0x24794c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24794c) {
            ctx->pc = 0x247968u;
            goto label_247968;
        }
    }
    ctx->pc = 0x247954u;
    // 0x247954: 0x460d7041  sub.s       $f1, $f14, $f13
    ctx->pc = 0x247954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x247958: 0x460c7001  sub.s       $f0, $f14, $f12
    ctx->pc = 0x247958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x24795c: 0x0  nop
    ctx->pc = 0x24795cu;
    // NOP
    // 0x247960: 0x0  nop
    ctx->pc = 0x247960u;
    // NOP
    // 0x247964: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x247964u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_247968:
    // 0x247968: 0x3e00008  jr          $ra
    ctx->pc = 0x247968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247970u;
}
