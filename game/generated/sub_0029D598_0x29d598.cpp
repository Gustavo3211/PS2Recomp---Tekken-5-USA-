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

// Function: sub_0029D598
// Address: 0x29d598 - 0x29d5f0
void sub_0029D598_0x29d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D598_0x29d598");
#endif

    ctx->pc = 0x29d598u;

    // 0x29d598: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29d59c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29D59Cu;
    {
        const bool branch_taken_0x29d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D59Cu;
        // 0x29d5a0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d59c) {
            ctx->pc = 0x29D5E8u;
            goto label_29d5e8;
        }
    }
    ctx->pc = 0x29D5A4u;
    // 0x29d5a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d5a8: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29D5A8u;
    {
        const bool branch_taken_0x29d5a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d5a8) {
            ctx->pc = 0x29D5E8u;
            goto label_29d5e8;
        }
    }
    ctx->pc = 0x29D5B0u;
    // 0x29d5b0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d5b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x29d5b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d5b8: 0xc44200d4  lwc1        $f2, 0xD4($v0)
    ctx->pc = 0x29d5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d5bc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x29d5bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d5c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x29D5C0u;
    {
        const bool branch_taken_0x29d5c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d5c0) {
            ctx->pc = 0x29D5E8u;
            goto label_29d5e8;
        }
    }
    ctx->pc = 0x29D5C8u;
    // 0x29d5c8: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29d5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29d5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d5d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29d5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29d5d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29d5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d5d8: 0x0  nop
    ctx->pc = 0x29d5d8u;
    // NOP
    // 0x29d5dc: 0x0  nop
    ctx->pc = 0x29d5dcu;
    // NOP
    // 0x29d5e0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x29d5e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x29d5e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29d5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29d5e8:
    // 0x29d5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x29D5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D5F0u;
}
