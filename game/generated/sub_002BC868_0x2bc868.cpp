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

// Function: sub_002BC868
// Address: 0x2bc868 - 0x2bc8c8
void sub_002BC868_0x2bc868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC868_0x2bc868");
#endif

    ctx->pc = 0x2bc868u;

    // 0x2bc868: 0xc4a00118  lwc1        $f0, 0x118($a1)
    ctx->pc = 0x2bc868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc86c: 0xc4a106c4  lwc1        $f1, 0x6C4($a1)
    ctx->pc = 0x2bc86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc870: 0xc4a706c8  lwc1        $f7, 0x6C8($a1)
    ctx->pc = 0x2bc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bc874: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bc874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bc878: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2bc878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc87c: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x2bc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bc880: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2bc880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc884: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2bc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc888: 0xc4860010  lwc1        $f6, 0x10($a0)
    ctx->pc = 0x2bc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bc88c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2bc88cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2bc890: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x2bc890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc894: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x2bc894u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2bc898: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bc898u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bc89c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2bc89cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2bc8a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc8a4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2bc8a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2bc8a8: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2bc8a8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2bc8ac: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x2bc8acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2bc8b0: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x2bc8b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2bc8b4: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x2bc8b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2bc8b8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2bc8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2bc8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8BCu;
        // 0x2bc8c0: 0xe4860010  swc1        $f6, 0x10($a0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC8C4u;
    // 0x2bc8c4: 0x0  nop
    ctx->pc = 0x2bc8c4u;
    // NOP
    ctx->pc = 0x2bc8c8u;
}
