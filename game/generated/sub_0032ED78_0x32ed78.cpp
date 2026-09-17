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

// Function: sub_0032ED78
// Address: 0x32ed78 - 0x32edc0
void sub_0032ED78_0x32ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032ED78_0x32ed78");
#endif

    ctx->pc = 0x32ed78u;

    // 0x32ed78: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x32ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ed7c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x32ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ed80: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x32ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32ed84: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x32ed84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x32ed88: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x32ed88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x32ed8c: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x32ed8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x32ed90: 0x460000c4  c1          0xC4
    ctx->pc = 0x32ed90u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x32ed94: 0x3e00008  jr          $ra
    ctx->pc = 0x32ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED94u;
        // 0x32ed98: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ED94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ED9Cu;
    // 0x32ed9c: 0x0  nop
    ctx->pc = 0x32ed9cu;
    // NOP
    // 0x32eda0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x32eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32eda4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x32eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32eda8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x32eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32edac: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x32edacu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x32edb0: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x32edb0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x32edb4: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x32edb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x32edb8: 0x3e00008  jr          $ra
    ctx->pc = 0x32EDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDB8u;
        // 0x32edbc: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EDC0u;
}
