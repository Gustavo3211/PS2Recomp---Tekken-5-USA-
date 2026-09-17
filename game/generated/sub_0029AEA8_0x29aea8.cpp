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

// Function: sub_0029AEA8
// Address: 0x29aea8 - 0x29af20
void sub_0029AEA8_0x29aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AEA8_0x29aea8");
#endif

    ctx->pc = 0x29aea8u;

    // 0x29aea8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29aeac: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AEACu;
    {
        const bool branch_taken_0x29aeac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEACu;
        // 0x29aeb0: 0xc4410104  lwc1        $f1, 0x104($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aeac) {
            ctx->pc = 0x29AEC4u;
            goto label_29aec4;
        }
    }
    ctx->pc = 0x29AEB4u;
    // 0x29aeb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29aeb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aeb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aeb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aebc: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x29AEBCu;
    {
        const bool branch_taken_0x29aebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aebc) {
            ctx->pc = 0x29AEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AEBCu;
            // 0x29aec0: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AEECu;
            goto label_29aeec;
        }
    }
    ctx->pc = 0x29AEC4u;
label_29aec4:
    // 0x29aec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29aec8: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29AEC8u;
    {
        const bool branch_taken_0x29aec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29aec8) {
            ctx->pc = 0x29AF10u;
            goto label_29af10;
        }
    }
    ctx->pc = 0x29AED0u;
    // 0x29aed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29aed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aed4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29aed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aed8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29AED8u;
    {
        const bool branch_taken_0x29aed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aed8) {
            ctx->pc = 0x29AF10u;
            goto label_29af10;
        }
    }
    ctx->pc = 0x29AEE0u;
    // 0x29aee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29aee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29aee4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29AEE4u;
    {
        const bool branch_taken_0x29aee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29aee4) {
            ctx->pc = 0x29AEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AEE4u;
            // 0x29aee8: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AEECu;
            goto label_29aeec;
        }
    }
    ctx->pc = 0x29AEECu;
label_29aeec:
    // 0x29aeec: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29aeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29aef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29aef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aef4: 0x0  nop
    ctx->pc = 0x29aef4u;
    // NOP
    // 0x29aef8: 0x0  nop
    ctx->pc = 0x29aef8u;
    // NOP
    // 0x29aefc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29aefcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x29af00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29af04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29af04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29af08: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF08u;
        // 0x29af0c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AF10u;
label_29af10:
    // 0x29af10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29af10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29af14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29af14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29af18: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AF20u;
}
