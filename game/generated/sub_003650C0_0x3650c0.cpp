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

// Function: sub_003650C0
// Address: 0x3650c0 - 0x3650f8
void sub_003650C0_0x3650c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003650C0_0x3650c0");
#endif

    ctx->pc = 0x3650c0u;

    // 0x3650c0: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3650C0u;
    {
        const bool branch_taken_0x3650c0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3650c0) {
            ctx->pc = 0x3650ECu;
            goto label_3650ec;
        }
    }
    ctx->pc = 0x3650C8u;
    // 0x3650c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3650c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3650cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3650ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3650d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3650d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3650d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3650d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3650d8: 0xac8009c4  sw          $zero, 0x9C4($a0)
    ctx->pc = 0x3650d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2500), GPR_U32(ctx, 0));
    // 0x3650dc: 0x0  nop
    ctx->pc = 0x3650dcu;
    // NOP
    // 0x3650e0: 0x0  nop
    ctx->pc = 0x3650e0u;
    // NOP
    // 0x3650e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3650e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3650e8: 0xe48009c8  swc1        $f0, 0x9C8($a0)
    ctx->pc = 0x3650e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2504), bits); }
label_3650ec:
    // 0x3650ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3650ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3650F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3650ECu;
        // 0x3650f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3650ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3650F4u;
    // 0x3650f4: 0x0  nop
    ctx->pc = 0x3650f4u;
    // NOP
    ctx->pc = 0x3650f8u;
}
