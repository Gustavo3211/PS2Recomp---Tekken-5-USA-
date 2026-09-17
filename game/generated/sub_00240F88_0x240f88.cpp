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

// Function: sub_00240F88
// Address: 0x240f88 - 0x240fe8
void sub_00240F88_0x240f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240F88_0x240f88");
#endif

    switch (ctx->pc) {
        case 0x240f9cu: goto label_240f9c;
        case 0x240fd8u: goto label_240fd8;
        default: break;
    }

    ctx->pc = 0x240f88u;

    // 0x240f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240f90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x240f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x240f94: 0xc0903a2  jal         func_240E88
    ctx->pc = 0x240F94u;
    SET_GPR_U32(ctx, 31, 0x240F9Cu);
    ctx->pc = 0x240F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F94u;
    // 0x240f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240E88u, 0x240F94u, 0x240F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240F9Cu;
label_240f9c:
    // 0x240f9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x240f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fa4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x240fa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x240fa8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x240fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240fac: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x240facu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x240fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240fb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x240fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240fb8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x240fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fbc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x240fc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240fc4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x240fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240fc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x240FC8u;
    {
        const bool branch_taken_0x240fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FC8u;
        // 0x240fcc: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fc8) {
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240FD0u;
    // 0x240fd0: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x240FD0u;
    SET_GPR_U32(ctx, 31, 0x240FD8u);
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x240FD0u, 0x240FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240FD8u;
label_240fd8:
    // 0x240fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240fdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x240fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x240FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FE0u;
        // 0x240fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240FE8u;
}
