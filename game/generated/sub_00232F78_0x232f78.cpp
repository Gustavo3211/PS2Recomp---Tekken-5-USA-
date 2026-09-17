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

// Function: sub_00232F78
// Address: 0x232f78 - 0x232fd8
void sub_00232F78_0x232f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232F78_0x232f78");
#endif

    switch (ctx->pc) {
        case 0x232f90u: goto label_232f90;
        case 0x232facu: goto label_232fac;
        case 0x232fb8u: goto label_232fb8;
        default: break;
    }

    ctx->pc = 0x232f78u;

    // 0x232f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232f80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232f88: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x232F88u;
    SET_GPR_U32(ctx, 31, 0x232F90u);
    ctx->pc = 0x232F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F88u;
    // 0x232f8c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x232F88u, 0x232F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F90u;
label_232f90:
    // 0x232f90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x232f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232f94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x232f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232f9c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x232F9Cu;
    {
        const bool branch_taken_0x232f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F9Cu;
        // 0x232fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f9c) {
            ctx->pc = 0x232FC4u;
            goto label_232fc4;
        }
    }
    ctx->pc = 0x232FA4u;
    // 0x232fa4: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x232FA4u;
    SET_GPR_U32(ctx, 31, 0x232FACu);
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x232FA4u, 0x232FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FACu;
label_232fac:
    // 0x232fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fb0: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x232FB0u;
    SET_GPR_U32(ctx, 31, 0x232FB8u);
    ctx->pc = 0x232FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FB0u;
    // 0x232fb4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x232FB0u, 0x232FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FB8u;
label_232fb8:
    // 0x232fb8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x232fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232fbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x232FBCu;
    {
        const bool branch_taken_0x232fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232fbc) {
            ctx->pc = 0x232FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232FBCu;
            // 0x232fc0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232FC4u;
            goto label_232fc4;
        }
    }
    ctx->pc = 0x232FC4u;
label_232fc4:
    // 0x232fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232fcc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x232fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x232FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FD0u;
        // 0x232fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232FD8u;
}
