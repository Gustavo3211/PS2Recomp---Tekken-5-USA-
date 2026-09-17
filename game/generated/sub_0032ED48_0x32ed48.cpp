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

// Function: sub_0032ED48
// Address: 0x32ed48 - 0x32ed78
void sub_0032ED48_0x32ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ED48_0x32ed48");
#endif

    ctx->pc = 0x32ed48u;

    // 0x32ed48: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x32ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ed4c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x32ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ed50: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x32ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ed54: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x32ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32ed58: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x32ed58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x32ed5c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x32ed5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x32ed60: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x32ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ed64: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x32ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ed68: 0x4601011c  madd.s      $f4, $f0, $f1
    ctx->pc = 0x32ed68u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x32ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x32ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED6Cu;
        // 0x32ed70: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ED74u;
    // 0x32ed74: 0x0  nop
    ctx->pc = 0x32ed74u;
    // NOP
    ctx->pc = 0x32ed78u;
}
