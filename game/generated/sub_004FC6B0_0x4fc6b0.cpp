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

// Function: sub_004FC6B0
// Address: 0x4fc6b0 - 0x4fc710
void sub_004FC6B0_0x4fc6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FC6B0_0x4fc6b0");
#endif

    ctx->pc = 0x4fc6b0u;

    // 0x4fc6b0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4fc6b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fc6b4: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x4fc6b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4fc6b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4fc6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4fc6bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4fc6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4fc6c0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x4fc6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x4fc6c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4fc6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4fc6c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4fc6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4fc6cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4fc6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4fc6d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4fc6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4fc6d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4fc6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4fc6d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fc6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fc6dc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x4fc6dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4fc6e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4fc6e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x4fc6e4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x4fc6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4fc6e8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4fc6e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x4fc6ec: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x4fc6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x4fc6f0: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x4fc6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x4fc6f4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x4fc6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x4fc6f8: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x4fc6f8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x4fc6fc: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x4fc6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x4fc700: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x4fc700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x4fc704: 0xe4a20028  swc1        $f2, 0x28($a1)
    ctx->pc = 0x4fc704u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x4fc708: 0x3e00008  jr          $ra
    ctx->pc = 0x4FC708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FC708u;
        // 0x4fc70c: 0xe4a30024  swc1        $f3, 0x24($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FC708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FC710u;
}
