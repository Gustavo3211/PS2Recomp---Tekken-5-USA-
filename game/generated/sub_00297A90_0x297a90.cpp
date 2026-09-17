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

// Function: sub_00297A90
// Address: 0x297a90 - 0x297b08
void sub_00297A90_0x297a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297A90_0x297a90");
#endif

    ctx->pc = 0x297a90u;

    // 0x297a90: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x297a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x297a94: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x297a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x297a98: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x297A98u;
    {
        const bool branch_taken_0x297a98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A98u;
        // 0x297a9c: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a98) {
            ctx->pc = 0x297B00u;
            goto label_297b00;
        }
    }
    ctx->pc = 0x297AA0u;
    // 0x297aa0: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x297aa0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297aa4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x297aa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x297aa8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x297aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x297aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x297aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297ab0: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x297ab0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x297ab4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x297ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x297ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297abc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x297abcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297ac0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x297ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x297ac4: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x297ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x297ac8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x297ac8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297acc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297ad0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x297ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x297ad4: 0x0  nop
    ctx->pc = 0x297ad4u;
    // NOP
    // 0x297ad8: 0x0  nop
    ctx->pc = 0x297ad8u;
    // NOP
    // 0x297adc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x297adcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x297ae0: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x297ae0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x297ae4: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x297ae4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x297ae8: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x297ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x297aec: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x297aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x297af0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x297af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x297af4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x297af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x297af8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x297af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x297afc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x297afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_297b00:
    // 0x297b00: 0x3e00008  jr          $ra
    ctx->pc = 0x297B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297B08u;
}
