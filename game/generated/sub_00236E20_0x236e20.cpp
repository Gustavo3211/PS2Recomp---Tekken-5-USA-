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

// Function: sub_00236E20
// Address: 0x236e20 - 0x236e90
void sub_00236E20_0x236e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236E20_0x236e20");
#endif

    switch (ctx->pc) {
        case 0x236e4cu: goto label_236e4c;
        default: break;
    }

    ctx->pc = 0x236e20u;

    // 0x236e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236e28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x236e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236e30: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x236e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e34: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x236e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236e38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x236E38u;
    {
        const bool branch_taken_0x236e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x236E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E38u;
        // 0x236e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236e38) {
            ctx->pc = 0x236E44u;
            goto label_236e44;
        }
    }
    ctx->pc = 0x236E40u;
    // 0x236e40: 0xe60c0004  swc1        $f12, 0x4($s0)
    ctx->pc = 0x236e40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_236e44:
    // 0x236e44: 0xc08cbb4  jal         func_232ED0
    ctx->pc = 0x236E44u;
    SET_GPR_U32(ctx, 31, 0x236E4Cu);
    ctx->pc = 0x232ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232ED0u, 0x236E44u, 0x236E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236E4Cu;
label_236e4c:
    // 0x236e4c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x236e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x236e50: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x236e50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x236e54: 0xc4402dd0  lwc1        $f0, 0x2DD0($v0)
    ctx->pc = 0x236e54u;
    { uint32_t bits = FAST_READ32(0x152DD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236e58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x236e58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236e5c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x236E5Cu;
    {
        const bool branch_taken_0x236e5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x236e5c) {
            ctx->pc = 0x236E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E5Cu;
            // 0x236e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E84u;
            goto label_236e84;
        }
    }
    ctx->pc = 0x236E64u;
    // 0x236e64: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x236e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x236e68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236e6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x236e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x236e70: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x236e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x236e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236e78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x236E78u;
    {
        const bool branch_taken_0x236e78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x236e78) {
            ctx->pc = 0x236E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236E78u;
            // 0x236e7c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x236E80u;
            goto label_236e80;
        }
    }
    ctx->pc = 0x236E80u;
label_236e80:
    // 0x236e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236e84:
    // 0x236e84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x236e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x236e88: 0x3e00008  jr          $ra
    ctx->pc = 0x236E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236E88u;
        // 0x236e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236E90u;
}
