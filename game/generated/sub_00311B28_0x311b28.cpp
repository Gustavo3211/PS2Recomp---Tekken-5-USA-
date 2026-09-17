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

// Function: sub_00311B28
// Address: 0x311b28 - 0x311b88
void sub_00311B28_0x311b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311B28_0x311b28");
#endif

    ctx->pc = 0x311b28u;

    // 0x311b28: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x311b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x311b2c: 0xc78295cc  lwc1        $f2, -0x6A34($gp)
    ctx->pc = 0x311b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x311b30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x311b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x311b34: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x311b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x311b38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x311b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311b3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x311b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x311b40: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x311b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x311b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x311b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x311b4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x311b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x311b50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x311b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x311b54: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x311b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311b58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311B58u;
    {
        const bool branch_taken_0x311b58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B58u;
        // 0x311b5c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311b58) {
            ctx->pc = 0x311B68u;
            goto label_311b68;
        }
    }
    ctx->pc = 0x311B60u;
    // 0x311b60: 0x3e00008  jr          $ra
    ctx->pc = 0x311B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B60u;
        // 0x311b64: 0xe783c560  swc1        $f3, -0x3AA0($gp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294952288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B68u;
label_311b68:
    // 0x311b68: 0xc78195d0  lwc1        $f1, -0x6A30($gp)
    ctx->pc = 0x311b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311b6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311b70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311B70u;
    {
        const bool branch_taken_0x311b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x311b70) {
            ctx->pc = 0x311B80u;
            goto label_311b80;
        }
    }
    ctx->pc = 0x311B78u;
    // 0x311b78: 0x3e00008  jr          $ra
    ctx->pc = 0x311B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B78u;
        // 0x311b7c: 0xe781c560  swc1        $f1, -0x3AA0($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294952288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B80u;
label_311b80:
    // 0x311b80: 0x3e00008  jr          $ra
    ctx->pc = 0x311B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B80u;
        // 0x311b84: 0xe782c560  swc1        $f2, -0x3AA0($gp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294952288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B88u;
}
