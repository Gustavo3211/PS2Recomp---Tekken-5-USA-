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

// Function: sub_00242E78
// Address: 0x242e78 - 0x243068
void sub_00242E78_0x242e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242E78_0x242e78");
#endif

    switch (ctx->pc) {
        case 0x242eb4u: goto label_242eb4;
        case 0x242ec0u: goto label_242ec0;
        case 0x242ee8u: goto label_242ee8;
        case 0x242f18u: goto label_242f18;
        case 0x242f30u: goto label_242f30;
        case 0x242f40u: goto label_242f40;
        default: break;
    }

    ctx->pc = 0x242e78u;

    // 0x242e78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x242e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x242e7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x242e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x242e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x242e88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x242e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x242e8c: 0x2791c170  addiu       $s1, $gp, -0x3E90
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x242e90: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x242e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x242e94: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x242e94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x242e98: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x242e98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x242e9c: 0x26105db0  addiu       $s0, $s0, 0x5DB0
    ctx->pc = 0x242e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23984));
    // 0x242ea0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x242ea0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x242ea4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x242ea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x242ea8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x242ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x242eac: 0xc08c1da  jal         func_230768
    ctx->pc = 0x242EACu;
    SET_GPR_U32(ctx, 31, 0x242EB4u);
    ctx->pc = 0x242EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EACu;
    // 0x242eb0: 0x261200bc  addiu       $s2, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x242EACu, 0x242EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EB4u;
label_242eb4:
    // 0x242eb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x242eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242eb8: 0xc08c1fc  jal         func_2307F0
    ctx->pc = 0x242EB8u;
    SET_GPR_U32(ctx, 31, 0x242EC0u);
    ctx->pc = 0x242EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EB8u;
    // 0x242ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2307F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307F0u, 0x242EB8u, 0x242EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EC0u;
label_242ec0:
    // 0x242ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ec4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x242ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242ec8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x242ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242ecc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x242eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242ed0: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x242ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x242ed4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x242ed4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x242ed8: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x242ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x242edc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x242edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x242ee0: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x242EE0u;
    SET_GPR_U32(ctx, 31, 0x242EE8u);
    ctx->pc = 0x242EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242EE0u;
    // 0x242ee4: 0x460d0b41  sub.s       $f13, $f1, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x242EE0u, 0x242EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242EE8u;
label_242ee8:
    // 0x242ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242eec: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x242eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242ef0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x242ef0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x242ef4: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x242ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x242ef8: 0x261100b8  addiu       $s1, $s0, 0xB8
    ctx->pc = 0x242ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x242efc: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x242efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f00: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x242f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f04: 0x460d0b41  sub.s       $f13, $f1, $f13
    ctx->pc = 0x242f04u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x242f08: 0xe60100b4  swc1        $f1, 0xB4($s0)
    ctx->pc = 0x242f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x242f0c: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x242f0cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x242f10: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x242F10u;
    SET_GPR_U32(ctx, 31, 0x242F18u);
    ctx->pc = 0x242F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F10u;
    // 0x242f14: 0xe60000b0  swc1        $f0, 0xB0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x242F10u, 0x242F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F18u;
label_242f18:
    // 0x242f18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242f18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242f1c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x242f1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x242f20: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x242f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f24: 0xe61400ac  swc1        $f20, 0xAC($s0)
    ctx->pc = 0x242f24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x242f28: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x242F28u;
    SET_GPR_U32(ctx, 31, 0x242F30u);
    ctx->pc = 0x242F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F28u;
    // 0x242f2c: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x242F28u, 0x242F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F30u;
label_242f30:
    // 0x242f30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x242f30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x242f34: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x242f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x242f38: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x242F38u;
    SET_GPR_U32(ctx, 31, 0x242F40u);
    ctx->pc = 0x242F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F38u;
    // 0x242f3c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x242F38u, 0x242F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F40u;
label_242f40:
    // 0x242f40: 0xc60600ac  lwc1        $f6, 0xAC($s0)
    ctx->pc = 0x242f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x242f44: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x242f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f48: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x242f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x242f4c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x242f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242f50: 0x46060941  sub.s       $f5, $f1, $f6
    ctx->pc = 0x242f50u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x242f54: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x242f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f58: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x242f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x242f5c: 0xc7848814  lwc1        $f4, -0x77EC($gp)
    ctx->pc = 0x242f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x242f60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x242f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242f64: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x242f64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x242f68: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x242f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242f6c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x242f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x242f70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x242F70u;
    {
        const bool branch_taken_0x242f70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x242F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F70u;
        // 0x242f74: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f70) {
            ctx->pc = 0x242F88u;
            goto label_242f88;
        }
    }
    ctx->pc = 0x242F78u;
    // 0x242f78: 0xc7808818  lwc1        $f0, -0x77E8($gp)
    ctx->pc = 0x242f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f7c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x242f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242f80: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x242F80u;
    {
        const bool branch_taken_0x242f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242f80) {
            ctx->pc = 0x242F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242F80u;
            // 0x242f84: 0x4606b081  sub.s       $f2, $f22, $f6 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242F98u;
            goto label_242f98;
        }
    }
    ctx->pc = 0x242F88u;
label_242f88:
    // 0x242f88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242f8c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x242F8Cu;
    {
        const bool branch_taken_0x242f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F8Cu;
        // 0x242f90: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242f8c) {
            ctx->pc = 0x243044u;
            goto label_243044;
        }
    }
    ctx->pc = 0x242F94u;
    // 0x242f94: 0x0  nop
    ctx->pc = 0x242f94u;
    // NOP
label_242f98:
    // 0x242f98: 0xc784881c  lwc1        $f4, -0x77E4($gp)
    ctx->pc = 0x242f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x242f9c: 0xc7838820  lwc1        $f3, -0x77E0($gp)
    ctx->pc = 0x242f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x242fa0: 0x0  nop
    ctx->pc = 0x242fa0u;
    // NOP
    // 0x242fa4: 0x0  nop
    ctx->pc = 0x242fa4u;
    // NOP
    // 0x242fa8: 0x46041043  div.s       $f1, $f2, $f4
    ctx->pc = 0x242fa8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[4];
    // 0x242fac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x242facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x242fb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x242fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x242fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242fb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x242fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x242fbc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x242fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x242fc0: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x242fc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x242fc4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x242fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242fc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x242FC8u;
    {
        const bool branch_taken_0x242fc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242fc8) {
            ctx->pc = 0x242FD8u;
            goto label_242fd8;
        }
    }
    ctx->pc = 0x242FD0u;
    // 0x242fd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242FD0u;
    {
        const bool branch_taken_0x242fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242FD0u;
        // 0x242fd4: 0x46040841  sub.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242fd0) {
            ctx->pc = 0x242FE8u;
            goto label_242fe8;
        }
    }
    ctx->pc = 0x242FD8u;
label_242fd8:
    // 0x242fd8: 0xc7808824  lwc1        $f0, -0x77DC($gp)
    ctx->pc = 0x242fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242fdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242fe0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x242FE0u;
    {
        const bool branch_taken_0x242fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x242fe0) {
            ctx->pc = 0x242FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FE0u;
            // 0x242fe4: 0x46040840  add.s       $f1, $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x242FE8u;
            goto label_242fe8;
        }
    }
    ctx->pc = 0x242FE8u;
label_242fe8:
    // 0x242fe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242fec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x242fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242ff0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x242FF0u;
    {
        const bool branch_taken_0x242ff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242ff0) {
            ctx->pc = 0x242FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242FF0u;
            // 0x242ff4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243020u;
            goto label_243020;
        }
    }
    ctx->pc = 0x242FF8u;
    // 0x242ff8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x242ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x242ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243000: 0xc7828828  lwc1        $f2, -0x77D8($gp)
    ctx->pc = 0x243000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243004: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x243004u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243008: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x243008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24300c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24300Cu;
    {
        const bool branch_taken_0x24300c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24300c) {
            ctx->pc = 0x243010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24300Cu;
            // 0x243010: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243014u;
            goto label_243014;
        }
    }
    ctx->pc = 0x243014u;
label_243014:
    // 0x243014: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x243014u;
    {
        const bool branch_taken_0x243014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243014u;
        // 0x243018: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243014) {
            ctx->pc = 0x243040u;
            goto label_243040;
        }
    }
    ctx->pc = 0x24301Cu;
    // 0x24301c: 0x0  nop
    ctx->pc = 0x24301cu;
    // NOP
label_243020:
    // 0x243020: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x243024: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243028: 0xc782882c  lwc1        $f2, -0x77D4($gp)
    ctx->pc = 0x243028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24302c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24302cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243030: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x243030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243034: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x243034u;
    {
        const bool branch_taken_0x243034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243034) {
            ctx->pc = 0x243038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243034u;
            // 0x243038: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24303Cu;
            goto label_24303c;
        }
    }
    ctx->pc = 0x24303Cu;
label_24303c:
    // 0x24303c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x24303cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_243040:
    // 0x243040: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x243040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_243044:
    // 0x243044: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x243044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243048: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x243048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24304c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24304cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x243050: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x243050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x243054: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x243054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x243058: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x243058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24305c: 0x3e00008  jr          $ra
    ctx->pc = 0x24305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24305Cu;
        // 0x243060: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243064u;
    // 0x243064: 0x0  nop
    ctx->pc = 0x243064u;
    // NOP
    ctx->pc = 0x243068u;
}
