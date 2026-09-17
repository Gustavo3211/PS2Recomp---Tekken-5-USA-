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

// Function: sub_00232C30
// Address: 0x232c30 - 0x232c68
void sub_00232C30_0x232c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232C30_0x232c30");
#endif

    ctx->pc = 0x232c30u;

    // 0x232c30: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x232c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232c34: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x232c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232c38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x232c38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232c3c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x232c3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x232c40: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x232c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232c44: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x232c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232c48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x232c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232c4c: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x232c4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x232c50: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x232c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232c54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x232c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232c58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x232c58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232c5c: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x232c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x232c60: 0x3e00008  jr          $ra
    ctx->pc = 0x232C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C60u;
        // 0x232c64: 0x46000004  c1          0x4 (Delay Slot)
        ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232C68u;
}
