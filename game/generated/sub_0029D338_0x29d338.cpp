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

// Function: sub_0029D338
// Address: 0x29d338 - 0x29d3b0
void sub_0029D338_0x29d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D338_0x29d338");
#endif

    ctx->pc = 0x29d338u;

    // 0x29d338: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d33c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D33Cu;
    {
        const bool branch_taken_0x29d33c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D33Cu;
        // 0x29d340: 0xc44100d4  lwc1        $f1, 0xD4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d33c) {
            ctx->pc = 0x29D354u;
            goto label_29d354;
        }
    }
    ctx->pc = 0x29D344u;
    // 0x29d344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d348: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29d348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d34c: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x29D34Cu;
    {
        const bool branch_taken_0x29d34c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d34c) {
            ctx->pc = 0x29D350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D34Cu;
            // 0x29d350: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D37Cu;
            goto label_29d37c;
        }
    }
    ctx->pc = 0x29D354u;
label_29d354:
    // 0x29d354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d358: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29D358u;
    {
        const bool branch_taken_0x29d358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d358) {
            ctx->pc = 0x29D3A0u;
            goto label_29d3a0;
        }
    }
    ctx->pc = 0x29D360u;
    // 0x29d360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d364: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d368: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29D368u;
    {
        const bool branch_taken_0x29d368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d368) {
            ctx->pc = 0x29D3A0u;
            goto label_29d3a0;
        }
    }
    ctx->pc = 0x29D370u;
    // 0x29d370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29d370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d374: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x29D374u;
    {
        const bool branch_taken_0x29d374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d374) {
            ctx->pc = 0x29D378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D374u;
            // 0x29d378: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D37Cu;
            goto label_29d37c;
        }
    }
    ctx->pc = 0x29D37Cu;
label_29d37c:
    // 0x29d37c: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29d37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29d380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d384: 0x0  nop
    ctx->pc = 0x29d384u;
    // NOP
    // 0x29d388: 0x0  nop
    ctx->pc = 0x29d388u;
    // NOP
    // 0x29d38c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29d38cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x29d390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d398: 0x3e00008  jr          $ra
    ctx->pc = 0x29D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D398u;
        // 0x29d39c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D3A0u;
label_29d3a0:
    // 0x29d3a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D3B0u;
}
