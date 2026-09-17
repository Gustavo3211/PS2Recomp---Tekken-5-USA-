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

// Function: sub_00246F68
// Address: 0x246f68 - 0x247038
void sub_00246F68_0x246f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246F68_0x246f68");
#endif

    switch (ctx->pc) {
        case 0x246fb0u: goto label_246fb0;
        case 0x246ff0u: goto label_246ff0;
        default: break;
    }

    ctx->pc = 0x246f68u;

    // 0x246f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246f70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x246f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x246f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x246f78: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x246f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x246f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x246f80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x246f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x246f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x246f88: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x246f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246f90: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x246F90u;
    {
        const bool branch_taken_0x246f90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x246F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F90u;
        // 0x246f94: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f90) {
            ctx->pc = 0x247014u;
            goto label_247014;
        }
    }
    ctx->pc = 0x246F98u;
    // 0x246f98: 0x620001e  bltz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x246F98u;
    {
        const bool branch_taken_0x246f98 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x246F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F98u;
        // 0x246f9c: 0x8f83c9d8  lw          $v1, -0x3628($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f98) {
            ctx->pc = 0x247014u;
            goto label_247014;
        }
    }
    ctx->pc = 0x246FA0u;
    // 0x246fa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x246fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fa4: 0x8f86c9dc  lw          $a2, -0x3624($gp)
    ctx->pc = 0x246fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953436)));
    // 0x246fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246fac: 0x0  nop
    ctx->pc = 0x246facu;
    // NOP
label_246fb0:
    // 0x246fb0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x246fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x246fb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x246FB4u;
    {
        const bool branch_taken_0x246fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FB4u;
        // 0x246fb8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fb4) {
            ctx->pc = 0x246FE0u;
            goto label_246fe0;
        }
    }
    ctx->pc = 0x246FBCu;
    // 0x246fbc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x246fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x246fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246fc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x246FC8u;
    {
        const bool branch_taken_0x246fc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x246FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FC8u;
        // 0x246fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fc8) {
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FD0u;
    // 0x246fd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x246fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246fd4:
    // 0x246fd4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x246FD4u;
    {
        const bool branch_taken_0x246fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fd4) {
            ctx->pc = 0x246FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FD4u;
            // 0x246fd8: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246fb0;
        }
    }
    ctx->pc = 0x246FDCu;
    // 0x246fdc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x246fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_246fe0:
    // 0x246fe0: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x246FE0u;
    {
        const bool branch_taken_0x246fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fe0) {
            ctx->pc = 0x246FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246FE0u;
            // 0x246fe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247018u;
            goto label_247018;
        }
    }
    ctx->pc = 0x246FE8u;
    // 0x246fe8: 0xc091c3c  jal         func_2470F0
    ctx->pc = 0x246FE8u;
    SET_GPR_U32(ctx, 31, 0x246FF0u);
    ctx->pc = 0x2470F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2470F0u, 0x246FE8u, 0x246FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FF0u;
label_246ff0:
    // 0x246ff0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x246ff0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x246ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x246ff8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x246ff8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x246ffc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x246ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x247000: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x247000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x247004: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x247004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x247008: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x247008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x24700c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x24700cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x247010: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x247010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_247014:
    // 0x247014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247018:
    // 0x247018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24701c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24701cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247020: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x247020u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247024: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x247024u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247028: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x247028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24702c: 0x3e00008  jr          $ra
    ctx->pc = 0x24702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24702Cu;
        // 0x247030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247034u;
    // 0x247034: 0x0  nop
    ctx->pc = 0x247034u;
    // NOP
    ctx->pc = 0x247038u;
}
