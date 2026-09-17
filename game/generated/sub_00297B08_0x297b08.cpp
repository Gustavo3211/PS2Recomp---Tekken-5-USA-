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

// Function: sub_00297B08
// Address: 0x297b08 - 0x297b88
void sub_00297B08_0x297b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297B08_0x297b08");
#endif

    ctx->pc = 0x297b08u;

    // 0x297b08: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x297b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x297b0c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x297b0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x297b10: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x297B10u;
    {
        const bool branch_taken_0x297b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B10u;
        // 0x297b14: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b10) {
            ctx->pc = 0x297B7Cu;
            goto label_297b7c;
        }
    }
    ctx->pc = 0x297B18u;
    // 0x297b18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x297b18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x297b20: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x297b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x297b24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x297b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297b28: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x297b28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x297b2c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x297b2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x297b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297b34: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x297b34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x297b38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x297b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x297b3c: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x297b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x297b40: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x297b40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x297b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x297b48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x297b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x297b4c: 0x0  nop
    ctx->pc = 0x297b4cu;
    // NOP
    // 0x297b50: 0x0  nop
    ctx->pc = 0x297b50u;
    // NOP
    // 0x297b54: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x297b54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x297b58: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x297b58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x297b5c: 0xe4840020  swc1        $f4, 0x20($a0)
    ctx->pc = 0x297b5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x297b60: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x297b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x297b64: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x297b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x297b68: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x297b68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x297b6c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x297b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x297b70: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x297b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x297b74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x297b74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x297b78: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x297b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_297b7c:
    // 0x297b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x297B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297B84u;
    // 0x297b84: 0x0  nop
    ctx->pc = 0x297b84u;
    // NOP
    ctx->pc = 0x297b88u;
}
