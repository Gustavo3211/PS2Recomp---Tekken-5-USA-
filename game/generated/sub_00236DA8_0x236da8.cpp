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

// Function: sub_00236DA8
// Address: 0x236da8 - 0x236e00
void sub_00236DA8_0x236da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236DA8_0x236da8");
#endif

    switch (ctx->pc) {
        case 0x236dc0u: goto label_236dc0;
        default: break;
    }

    ctx->pc = 0x236da8u;

    // 0x236da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236db0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236db4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236db8: 0xc08cbb4  jal         func_232ED0
    ctx->pc = 0x236DB8u;
    SET_GPR_U32(ctx, 31, 0x236DC0u);
    ctx->pc = 0x236DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236DB8u;
    // 0x236dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232ED0u, 0x236DB8u, 0x236DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236DC0u;
label_236dc0:
    // 0x236dc0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x236dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x236dc4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x236dc4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x236dc8: 0xc4402dcc  lwc1        $f0, 0x2DCC($v0)
    ctx->pc = 0x236dc8u;
    { uint32_t bits = FAST_READ32(0x152DCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236dcc: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x236dccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236dd0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x236DD0u;
    {
        const bool branch_taken_0x236dd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x236dd0) {
            ctx->pc = 0x236DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236DD0u;
            // 0x236dd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236DF4u;
            goto label_236df4;
        }
    }
    ctx->pc = 0x236DD8u;
    // 0x236dd8: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x236dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x236ddc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x236ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x236de0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x236de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236de4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x236de4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x236de8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x236de8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x236dec: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x236decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x236df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236df4:
    // 0x236df4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236df8: 0x3e00008  jr          $ra
    ctx->pc = 0x236DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236DF8u;
        // 0x236dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E00u;
}
