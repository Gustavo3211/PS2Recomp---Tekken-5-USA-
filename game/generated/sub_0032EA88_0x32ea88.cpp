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

// Function: sub_0032EA88
// Address: 0x32ea88 - 0x32ead0
void sub_0032EA88_0x32ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EA88_0x32ea88");
#endif

    ctx->pc = 0x32ea88u;

    // 0x32ea88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32ea8c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x32ea8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x32ea90: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x32ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ea94: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x32ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ea98: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x32ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ea9c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x32ea9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x32eaa0: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x32eaa0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x32eaa4: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x32eaa4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x32eaa8: 0x460320d6  rsqrt.s     $f3, $f4, $f3
    ctx->pc = 0x32eaa8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[4]);
    // 0x32eaac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x32eaacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x32eab0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x32eab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x32eab4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x32eab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x32eab8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x32eab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32eabc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x32eabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32eac0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x32eac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x32eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x32EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAC4u;
        // 0x32eac8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EACCu;
    // 0x32eacc: 0x0  nop
    ctx->pc = 0x32eaccu;
    // NOP
    ctx->pc = 0x32ead0u;
}
