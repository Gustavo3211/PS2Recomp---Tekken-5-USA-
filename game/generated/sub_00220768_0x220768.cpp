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

// Function: sub_00220768
// Address: 0x220768 - 0x2207d0
void sub_00220768_0x220768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220768_0x220768");
#endif

    ctx->pc = 0x220768u;

    // 0x220768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22076c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22076cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x220770: 0x460c2034  c.lt.s      $f4, $f12
    ctx->pc = 0x220770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220774: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x220774u;
    {
        const bool branch_taken_0x220774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220774u;
        // 0x220778: 0x460c20c1  sub.s       $f3, $f4, $f12 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220774) {
            ctx->pc = 0x220780u;
            goto label_220780;
        }
    }
    ctx->pc = 0x22077Cu;
    // 0x22077c: 0x46002306  mov.s       $f12, $f4
    ctx->pc = 0x22077cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
label_220780:
    // 0x220780: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x220780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220784: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x220784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220788: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x220788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x22078c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x22078cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x220790: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x220790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x220794: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x220794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x220798: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x220798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22079c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2207a0: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x2207a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2207a4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2207a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2207a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2207a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2207ac: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2207acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2207b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2207b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2207b4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2207b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2207b8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2207b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2207bc: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x2207bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2207c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2207c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2207c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2207c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2207c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2207C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2207CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C8u;
        // 0x2207cc: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2207C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2207D0u;
}
