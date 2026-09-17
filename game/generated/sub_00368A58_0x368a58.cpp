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

// Function: sub_00368A58
// Address: 0x368a58 - 0x368ac0
void sub_00368A58_0x368a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368A58_0x368a58");
#endif

    ctx->pc = 0x368a58u;

    // 0x368a58: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x368a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x368a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x368a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x368a60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x368a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x368a64: 0x24426428  addiu       $v0, $v0, 0x6428
    ctx->pc = 0x368a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25640));
    // 0x368a68: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x368a68u;
    { uint32_t bits = FAST_READ32(0x1D6440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368a6c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x368a6cu;
    { uint32_t bits = FAST_READ32(0x1D6438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368a70: 0x0  nop
    ctx->pc = 0x368a70u;
    // NOP
    // 0x368a74: 0x0  nop
    ctx->pc = 0x368a74u;
    // NOP
    // 0x368a78: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x368a78u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x368a7c: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x368a7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x368a80: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x368a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368a84: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x368A84u;
    {
        const bool branch_taken_0x368a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x368A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A84u;
        // 0x368a88: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x368a84) {
            ctx->pc = 0x368AB4u;
            goto label_368ab4;
        }
    }
    ctx->pc = 0x368A8Cu;
    // 0x368a8c: 0x0  nop
    ctx->pc = 0x368a8cu;
    // NOP
    // 0x368a90: 0x0  nop
    ctx->pc = 0x368a90u;
    // NOP
    // 0x368a94: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x368a94u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
    // 0x368a98: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x368a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368a9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x368A9Cu;
    {
        const bool branch_taken_0x368a9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368a9c) {
            ctx->pc = 0x368AB4u;
            goto label_368ab4;
        }
    }
    ctx->pc = 0x368AA4u;
    // 0x368aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x368aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368aa8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x368aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368aac: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x368AACu;
    {
        const bool branch_taken_0x368aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x368aac) {
            ctx->pc = 0x368AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368AACu;
            // 0x368ab0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x368AB4u;
            goto label_368ab4;
        }
    }
    ctx->pc = 0x368AB4u;
label_368ab4:
    // 0x368ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x368AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368ABCu;
    // 0x368abc: 0x0  nop
    ctx->pc = 0x368abcu;
    // NOP
    ctx->pc = 0x368ac0u;
}
