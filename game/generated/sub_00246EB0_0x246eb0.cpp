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

// Function: sub_00246EB0
// Address: 0x246eb0 - 0x246f68
void sub_00246EB0_0x246eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246EB0_0x246eb0");
#endif

    switch (ctx->pc) {
        case 0x246ef0u: goto label_246ef0;
        case 0x246f18u: goto label_246f18;
        default: break;
    }

    ctx->pc = 0x246eb0u;

    // 0x246eb0: 0x8f83c9dc  lw          $v1, -0x3624($gp)
    ctx->pc = 0x246eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953436)));
    // 0x246eb4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x246eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x246eb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x246eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x246ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246ec4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x246ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ec8: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x246ec8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x246ecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x246eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x246ed0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x246ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x246ed4: 0xaf82a9ac  sw          $v0, -0x5654($gp)
    ctx->pc = 0x246ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945196), GPR_U32(ctx, 2));
    // 0x246ed8: 0xaf82a9a8  sw          $v0, -0x5658($gp)
    ctx->pc = 0x246ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945192), GPR_U32(ctx, 2));
    // 0x246edc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x246edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x246ee0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x246ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x246ee4: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x246EE4u;
    {
        const bool branch_taken_0x246ee4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x246EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EE4u;
        // 0x246ee8: 0x8f90c9d8  lw          $s0, -0x3628($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ee4) {
            ctx->pc = 0x246F48u;
            goto label_246f48;
        }
    }
    ctx->pc = 0x246EECu;
    // 0x246eec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x246eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_246ef0:
    // 0x246ef0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x246ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ef4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x246ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246ef8: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x246EF8u;
    {
        const bool branch_taken_0x246ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246ef8) {
            ctx->pc = 0x246EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246EF8u;
            // 0x246efc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246F3Cu;
            goto label_246f3c;
        }
    }
    ctx->pc = 0x246F00u;
    // 0x246f00: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x246f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x246f04: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x246f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246f08: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x246F08u;
    {
        const bool branch_taken_0x246f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F08u;
        // 0x246f0c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f08) {
            ctx->pc = 0x246F34u;
            goto label_246f34;
        }
    }
    ctx->pc = 0x246F10u;
    // 0x246f10: 0xc091b78  jal         func_246DE0
    ctx->pc = 0x246F10u;
    SET_GPR_U32(ctx, 31, 0x246F18u);
    ctx->pc = 0x246F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246F10u;
    // 0x246f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246DE0u, 0x246F10u, 0x246F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F18u;
label_246f18:
    // 0x246f18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x246f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x246f1c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246F1Cu;
    {
        const bool branch_taken_0x246f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F1Cu;
        // 0x246f20: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f1c) {
            ctx->pc = 0x246F2Cu;
            goto label_246f2c;
        }
    }
    ctx->pc = 0x246F24u;
    // 0x246f24: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246F24u;
    {
        const bool branch_taken_0x246f24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x246F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F24u;
        // 0x246f28: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f24) {
            ctx->pc = 0x246F34u;
            goto label_246f34;
        }
    }
    ctx->pc = 0x246F2Cu;
label_246f2c:
    // 0x246f2c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x246f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246f30: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x246f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_246f34:
    // 0x246f34: 0x8f83c9dc  lw          $v1, -0x3624($gp)
    ctx->pc = 0x246f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953436)));
    // 0x246f38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x246f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_246f3c:
    // 0x246f3c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x246f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x246f40: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x246F40u;
    {
        const bool branch_taken_0x246f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F40u;
        // 0x246f44: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f40) {
            ctx->pc = 0x246EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246ef0;
        }
    }
    ctx->pc = 0x246F48u;
label_246f48:
    // 0x246f48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246f48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246f4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x246f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246f54: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x246f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x246f58: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x246f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x246f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x246F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F5Cu;
        // 0x246f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246F64u;
    // 0x246f64: 0x0  nop
    ctx->pc = 0x246f64u;
    // NOP
    ctx->pc = 0x246f68u;
}
