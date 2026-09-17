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

// Function: sub_0025EB38
// Address: 0x25eb38 - 0x25ec90
void sub_0025EB38_0x25eb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EB38_0x25eb38");
#endif

    switch (ctx->pc) {
        case 0x25eb80u: goto label_25eb80;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec4cu: goto label_25ec4c;
        case 0x25ec5cu: goto label_25ec5c;
        default: break;
    }

    ctx->pc = 0x25eb38u;

    // 0x25eb38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25eb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25eb3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25eb40: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x25eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25eb44: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x25eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x25eb48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x25eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25eb4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25eb4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb50: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x25eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x25eb54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25eb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x25eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x25eb5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25eb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25eb60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25eb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25eb64: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x25eb64u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x25eb68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x25eb6c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x25eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x25eb70: 0x24c60750  addiu       $a2, $a2, 0x750
    ctx->pc = 0x25eb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1872));
    // 0x25eb74: 0x24a50750  addiu       $a1, $a1, 0x750
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
    // 0x25eb78: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x25EB78u;
    SET_GPR_U32(ctx, 31, 0x25EB80u);
    ctx->pc = 0x25EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB78u;
    // 0x25eb7c: 0x24700750  addiu       $s0, $v1, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x25EB78u, 0x25EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EB80u;
label_25eb80:
    // 0x25eb80: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x25eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25eb84: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x25eb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x25eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eb8c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x25eb8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25eb90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25eb94: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x25eb94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x25eb98: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x25eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25eb9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25eba0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x25eba0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25eba4: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x25eba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x25eba8: 0x46010044  c1          0x10044
    ctx->pc = 0x25eba8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x25ebac: 0xc7808b7c  lwc1        $f0, -0x7484($gp)
    ctx->pc = 0x25ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ebb0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x25ebb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ebb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25ebb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25ebb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ebbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25ebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebc0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x25EBC0u;
    {
        const bool branch_taken_0x25ebc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EBC0u;
        // 0x25ebc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ebc0) {
            ctx->pc = 0x25EC74u;
            goto label_25ec74;
        }
    }
    ctx->pc = 0x25EBC8u;
    // 0x25ebc8: 0xc084784  jal         func_211E10
    ctx->pc = 0x25EBC8u;
    SET_GPR_U32(ctx, 31, 0x25EBD0u);
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x25EBC8u, 0x25EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBD0u;
label_25ebd0:
    // 0x25ebd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25ebd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebd4: 0xc78c8b80  lwc1        $f12, -0x7480($gp)
    ctx->pc = 0x25ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25ebd8: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x25EBD8u;
    SET_GPR_U32(ctx, 31, 0x25EBE0u);
    ctx->pc = 0x25EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBD8u;
    // 0x25ebdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x25EBD8u, 0x25EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBE0u;
label_25ebe0:
    // 0x25ebe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25ebe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebe8: 0xc084774  jal         func_211DD0
    ctx->pc = 0x25EBE8u;
    SET_GPR_U32(ctx, 31, 0x25EBF0u);
    ctx->pc = 0x25EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBE8u;
    // 0x25ebec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x25EBE8u, 0x25EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EBF0u;
label_25ebf0:
    // 0x25ebf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25ebf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebf8: 0xc084774  jal         func_211DD0
    ctx->pc = 0x25EBF8u;
    SET_GPR_U32(ctx, 31, 0x25EC00u);
    ctx->pc = 0x25EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EBF8u;
    // 0x25ebfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x25EBF8u, 0x25EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC00u;
label_25ec00:
    // 0x25ec00: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x25ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x25ec04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ec04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ec08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25ec08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25ec0c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x25ec0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25ec10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x25ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25ec18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25ec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec20: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x25ec20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25ec24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec28: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25ec28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25ec2c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec30: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x25ec30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x25ec34: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x25ec34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25ec38: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x25ec38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ec3c: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x25ec3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25ec40: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x25ec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x25ec44: 0xc084774  jal         func_211DD0
    ctx->pc = 0x25EC44u;
    SET_GPR_U32(ctx, 31, 0x25EC4Cu);
    ctx->pc = 0x25EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC44u;
    // 0x25ec48: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x25EC44u, 0x25EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC4Cu;
label_25ec4c:
    // 0x25ec4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25ec50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ec54: 0xc084774  jal         func_211DD0
    ctx->pc = 0x25EC54u;
    SET_GPR_U32(ctx, 31, 0x25EC5Cu);
    ctx->pc = 0x25EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EC54u;
    // 0x25ec58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x25EC54u, 0x25EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EC5Cu;
label_25ec5c:
    // 0x25ec5c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x25ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x25ec60: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x25ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25ec68: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x25ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x25ec6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x25ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec70: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_25ec74:
    // 0x25ec74: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25ec74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ec78: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x25ec78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25ec7c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x25ec7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25ec80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x25ec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25ec84: 0x3e00008  jr          $ra
    ctx->pc = 0x25EC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EC84u;
        // 0x25ec88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EC8Cu;
    // 0x25ec8c: 0x0  nop
    ctx->pc = 0x25ec8cu;
    // NOP
    ctx->pc = 0x25ec90u;
}
