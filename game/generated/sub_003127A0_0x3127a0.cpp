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

// Function: sub_003127A0
// Address: 0x3127a0 - 0x3127c8
void sub_003127A0_0x3127a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003127A0_0x3127a0");
#endif

    ctx->pc = 0x3127a0u;

    // 0x3127a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3127a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3127a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3127a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3127a8: 0xc78195e4  lwc1        $f1, -0x6A1C($gp)
    ctx->pc = 0x3127a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3127ac: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x3127acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x3127b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3127b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3127b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3127b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3127b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3127b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3127bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3127BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127BCu;
        // 0x3127c0: 0xe780c570  swc1        $f0, -0x3A90($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294952304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3127BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3127C4u;
    // 0x3127c4: 0x0  nop
    ctx->pc = 0x3127c4u;
    // NOP
    ctx->pc = 0x3127c8u;
}
