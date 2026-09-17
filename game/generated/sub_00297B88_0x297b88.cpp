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

// Function: sub_00297B88
// Address: 0x297b88 - 0x297c00
void sub_00297B88_0x297b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297B88_0x297b88");
#endif

    ctx->pc = 0x297b88u;

    // 0x297b88: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x297b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b8c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x297b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x297b90: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x297b90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x297b94: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x297b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x297b98: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x297b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297b9c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x297b9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x297ba0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x297ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x297ba4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x297ba4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297ba8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x297ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x297bac: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x297bacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297bb0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x297bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x297bb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x297BB4u;
    {
        const bool branch_taken_0x297bb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297bb4) {
            ctx->pc = 0x297BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297BB4u;
            // 0x297bb8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297BBCu;
            goto label_297bbc;
        }
    }
    ctx->pc = 0x297BBCu;
label_297bbc:
    // 0x297bbc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x297bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297bc4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x297bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297bc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x297BC8u;
    {
        const bool branch_taken_0x297bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297bc8) {
            ctx->pc = 0x297BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297BC8u;
            // 0x297bcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297BD0u;
            goto label_297bd0;
        }
    }
    ctx->pc = 0x297BD0u;
label_297bd0:
    // 0x297bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297bd4: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x297bd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x297bd8: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x297bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x297bdc: 0xe48d001c  swc1        $f13, 0x1C($a0)
    ctx->pc = 0x297bdcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x297be0: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x297be0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x297be4: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x297be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x297be8: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x297be8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x297bec: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x297becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x297bf0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x297bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x297bf4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x297bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x297bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x297BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BF8u;
        // 0x297bfc: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C00u;
}
