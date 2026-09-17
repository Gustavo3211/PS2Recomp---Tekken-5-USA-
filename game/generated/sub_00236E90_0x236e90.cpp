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

// Function: sub_00236E90
// Address: 0x236e90 - 0x236fa8
void sub_00236E90_0x236e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236E90_0x236e90");
#endif

    switch (ctx->pc) {
        case 0x236f10u: goto label_236f10;
        case 0x236f20u: goto label_236f20;
        case 0x236f40u: goto label_236f40;
        case 0x236f54u: goto label_236f54;
        default: break;
    }

    ctx->pc = 0x236e90u;

    // 0x236e90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x236e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x236e94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x236e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x236e98: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x236e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236e9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x236e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x236ea0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x236ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x236ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x236ea8: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x236ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236eac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236eb0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x236eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236eb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x236eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x236eb8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x236eb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ebc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x236ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x236ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x236ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ec4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x236ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x236ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ecc: 0x1140000e  beqz        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x236ECCu;
    {
        const bool branch_taken_0x236ecc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x236ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236ECCu;
        // 0x236ed0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ecc) {
            ctx->pc = 0x236F08u;
            goto label_236f08;
        }
    }
    ctx->pc = 0x236ED4u;
    // 0x236ed4: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x236ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x236ed8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x236ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x236edc: 0x2484dda0  addiu       $a0, $a0, -0x2260
    ctx->pc = 0x236edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958496));
    // 0x236ee0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236ee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x236ee8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236eec: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x236eecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x236ef0: 0x86430012  lh          $v1, 0x12($s2)
    ctx->pc = 0x236ef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x236ef4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236ef8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x236efc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x236F00u;
    {
        const bool branch_taken_0x236f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F00u;
        // 0x236f04: 0x7e820000  sq          $v0, 0x0($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f00) {
            ctx->pc = 0x236F20u;
            goto label_236f20;
        }
    }
    ctx->pc = 0x236F08u;
label_236f08:
    // 0x236f08: 0xc08da16  jal         func_236858
    ctx->pc = 0x236F08u;
    SET_GPR_U32(ctx, 31, 0x236F10u);
    ctx->pc = 0x236858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236858u, 0x236F08u, 0x236F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F10u;
label_236f10:
    // 0x236f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x236f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f18: 0xc08da16  jal         func_236858
    ctx->pc = 0x236F18u;
    SET_GPR_U32(ctx, 31, 0x236F20u);
    ctx->pc = 0x236F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F18u;
    // 0x236f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236858u, 0x236F18u, 0x236F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F20u;
label_236f20:
    // 0x236f20: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x236F20u;
    {
        const bool branch_taken_0x236f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F20u;
        // 0x236f24: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f20) {
            ctx->pc = 0x236F84u;
            goto label_236f84;
        }
    }
    ctx->pc = 0x236F28u;
    // 0x236f28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f2c: 0x2610dda0  addiu       $s0, $s0, -0x2260
    ctx->pc = 0x236f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958496));
    // 0x236f30: 0x3c014472  lui         $at, 0x4472
    ctx->pc = 0x236f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17522 << 16));
    // 0x236f34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236f38: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x236F38u;
    SET_GPR_U32(ctx, 31, 0x236F40u);
    ctx->pc = 0x236F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F38u;
    // 0x236f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x236F38u, 0x236F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F40u;
label_236f40:
    // 0x236f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f44: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x236f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x236f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x236f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f4c: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x236F4Cu;
    SET_GPR_U32(ctx, 31, 0x236F54u);
    ctx->pc = 0x236F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236F4Cu;
    // 0x236f50: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x236F4Cu, 0x236F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236F54u;
label_236f54:
    // 0x236f54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x236f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x236f58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x236f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x236f5c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x236f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236f60: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x236f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236f64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x236F64u;
    {
        const bool branch_taken_0x236f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x236F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F64u;
        // 0x236f68: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f64) {
            ctx->pc = 0x236F70u;
            goto label_236f70;
        }
    }
    ctx->pc = 0x236F6Cu;
    // 0x236f6c: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x236f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_236f70:
    // 0x236f70: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x236f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x236f74: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x236f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x236f78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x236f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x236f7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x236F7Cu;
    {
        const bool branch_taken_0x236f7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x236f7c) {
            ctx->pc = 0x236F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F7Cu;
            // 0x236f80: 0xe6810004  swc1        $f1, 0x4($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x236F84u;
            goto label_236f84;
        }
    }
    ctx->pc = 0x236F84u;
label_236f84:
    // 0x236f84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x236f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236f88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x236f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236f8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236f90: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x236f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x236f94: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x236f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236f98: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x236f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x236f9c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x236f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x236FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FA0u;
        // 0x236fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236FA8u;
}
