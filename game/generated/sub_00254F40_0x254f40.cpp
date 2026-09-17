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

// Function: sub_00254F40
// Address: 0x254f40 - 0x255080
void sub_00254F40_0x254f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F40_0x254f40");
#endif

    switch (ctx->pc) {
        case 0x254f80u: goto label_254f80;
        case 0x254fecu: goto label_254fec;
        case 0x254ffcu: goto label_254ffc;
        default: break;
    }

    ctx->pc = 0x254f40u;

    // 0x254f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254f44: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x254f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f48: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x254f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x254f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f50: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x254f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x254f54: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x254f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254f58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x254f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x254f5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f64: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254f68: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x254f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x254f6c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x254f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254f70: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x254f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x254f74: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x254f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x254f78: 0xc0847da  jal         func_211F68
    ctx->pc = 0x254F78u;
    SET_GPR_U32(ctx, 31, 0x254F80u);
    ctx->pc = 0x254F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F78u;
    // 0x254f7c: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x254F78u, 0x254F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F80u;
label_254f80:
    // 0x254f80: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x254f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254f84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x254f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f88: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x254f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x254f8c: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x254f8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254f90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x254F90u;
    {
        const bool branch_taken_0x254f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F90u;
        // 0x254f94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f90) {
            ctx->pc = 0x254FB0u;
            goto label_254fb0;
        }
    }
    ctx->pc = 0x254F98u;
    // 0x254f98: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x254f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254f9c: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x254f9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254fa0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x254FA0u;
    {
        const bool branch_taken_0x254fa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x254FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA0u;
        // 0x254fa4: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fa0) {
            ctx->pc = 0x254FC8u;
            goto label_254fc8;
        }
    }
    ctx->pc = 0x254FA8u;
    // 0x254fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254FA8u;
    {
        const bool branch_taken_0x254fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA8u;
        // 0x254fac: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fa8) {
            ctx->pc = 0x254FB8u;
            goto label_254fb8;
        }
    }
    ctx->pc = 0x254FB0u;
label_254fb0:
    // 0x254fb0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x254fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x254fb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x254fb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_254fb8:
    // 0x254fb8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x254fb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x254fbc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x254fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x254fc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254FC0u;
    {
        const bool branch_taken_0x254fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FC0u;
        // 0x254fc4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fc0) {
            ctx->pc = 0x254FE4u;
            goto label_254fe4;
        }
    }
    ctx->pc = 0x254FC8u;
label_254fc8:
    // 0x254fc8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x254fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254fcc: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x254fccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x254fd0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x254fd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x254fd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x254fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x254fd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x254fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x254fdc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x254fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x254fe0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x254fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_254fe4:
    // 0x254fe4: 0xc0847da  jal         func_211F68
    ctx->pc = 0x254FE4u;
    SET_GPR_U32(ctx, 31, 0x254FECu);
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x254FE4u, 0x254FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FECu;
label_254fec:
    // 0x254fec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ff0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x254ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x254ff4: 0xc08480c  jal         func_212030
    ctx->pc = 0x254FF4u;
    SET_GPR_U32(ctx, 31, 0x254FFCu);
    ctx->pc = 0x254FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FF4u;
    // 0x254ff8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x254FF4u, 0x254FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FFCu;
label_254ffc:
    // 0x254ffc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x254ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x255000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x255004: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x255004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255008: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x255008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25500c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x25500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255010: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x255010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x255014: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x255014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x255018: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x255018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25501c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x25501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x255020: 0xc7a70020  lwc1        $f7, 0x20($sp)
    ctx->pc = 0x255020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x255024: 0xc7a80024  lwc1        $f8, 0x24($sp)
    ctx->pc = 0x255024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x255028: 0xc7a90028  lwc1        $f9, 0x28($sp)
    ctx->pc = 0x255028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x25502c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x25502cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x255030: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x255030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x255034: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x255034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x255038: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x255038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x25503c: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x25503cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x255040: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x255040u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x255044: 0xe6050014  swc1        $f5, 0x14($s0)
    ctx->pc = 0x255044u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x255048: 0xe6060024  swc1        $f6, 0x24($s0)
    ctx->pc = 0x255048u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x25504c: 0xe6070008  swc1        $f7, 0x8($s0)
    ctx->pc = 0x25504cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x255050: 0xe6080018  swc1        $f8, 0x18($s0)
    ctx->pc = 0x255050u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x255054: 0xe6090028  swc1        $f9, 0x28($s0)
    ctx->pc = 0x255054u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x255058: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x255058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x25505c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x25505cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x255060: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x255060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x255064: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x255064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x255068: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x255068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x25506c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255070: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x255070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255074: 0x3e00008  jr          $ra
    ctx->pc = 0x255074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255074u;
        // 0x255078: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25507Cu;
    // 0x25507c: 0x0  nop
    ctx->pc = 0x25507cu;
    // NOP
    ctx->pc = 0x255080u;
}
