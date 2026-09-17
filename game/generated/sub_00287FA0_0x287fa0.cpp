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

// Function: sub_00287FA0
// Address: 0x287fa0 - 0x288270
void sub_00287FA0_0x287fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287FA0_0x287fa0");
#endif

    switch (ctx->pc) {
        case 0x287ffcu: goto label_287ffc;
        case 0x288094u: goto label_288094;
        case 0x288098u: goto label_288098;
        case 0x288128u: goto label_288128;
        case 0x28819cu: goto label_28819c;
        case 0x2881dcu: goto label_2881dc;
        case 0x2881f4u: goto label_2881f4;
        case 0x288204u: goto label_288204;
        case 0x288214u: goto label_288214;
        case 0x288224u: goto label_288224;
        case 0x288234u: goto label_288234;
        default: break;
    }

    ctx->pc = 0x287fa0u;

    // 0x287fa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x287fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x287fa4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x287fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x287fa8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x287fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fac: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x287facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x287fb0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x287fb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x287fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x287fbc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x287fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x287fc0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x287fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x287fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fc8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x287fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x287fcc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x287fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x287fd0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x287fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fd4: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x287fd4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x287fd8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x287fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x287fdc: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x287fdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x287fe0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x287fe0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x287fe4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x287fe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x287fe8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x287fe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x287fec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x287ff0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x287ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x287ff4: 0xc0b66e0  jal         func_2D9B80
    ctx->pc = 0x287FF4u;
    SET_GPR_U32(ctx, 31, 0x287FFCu);
    ctx->pc = 0x287FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FF4u;
    // 0x287ff8: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B80u, 0x287FF4u, 0x287FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FFCu;
label_287ffc:
    // 0x287ffc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x287ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288000: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x288000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x288004: 0x2442add0  addiu       $v0, $v0, -0x5230
    ctx->pc = 0x288004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946256));
    // 0x288008: 0x26630002  addiu       $v1, $s3, 0x2
    ctx->pc = 0x288008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x28800c: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x28800cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x288010: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x288010u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x288014: 0x6824aba7  ldl         $a0, -0x5459($at)
    ctx->pc = 0x288014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945703); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x288018: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x288018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x28801c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x28801cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x288020: 0x6c24aba0  ldr         $a0, -0x5460($at)
    ctx->pc = 0x288020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x288024: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x288024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x288028: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x288028u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x28802c: 0x6825abaf  ldl         $a1, -0x5451($at)
    ctx->pc = 0x28802cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x288030: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x288030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x288034: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x288034u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x288038: 0x6c25aba8  ldr         $a1, -0x5458($at)
    ctx->pc = 0x288038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294945704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28803c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x28803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288040: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x288040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288044: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x288044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288048: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x288048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28804c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x28804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x288050: 0x71980b  movn        $s3, $v1, $s1
    ctx->pc = 0x288050u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x288054: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x288054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288058: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x288058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28805c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288060: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x288060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x288064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x288064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288068: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x288068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x28806c: 0xc7988fd8  lwc1        $f24, -0x7028($gp)
    ctx->pc = 0x28806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x288070: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x288070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x288074: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x288074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x288078: 0xa3980a  movz        $s3, $a1, $v1
    ctx->pc = 0x288078u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
    // 0x28807c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x28807cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x288080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x288084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x288088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x288088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28808c: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x28808Cu;
    SET_GPR_U32(ctx, 31, 0x288094u);
    ctx->pc = 0x288090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28808Cu;
    // 0x288090: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x28808Cu, 0x288094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288094u;
label_288094:
    // 0x288094: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x288094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_288098:
    // 0x288098: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x288098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x28809c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x28809cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2880a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2880A0u;
    {
        const bool branch_taken_0x2880a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2880A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880A0u;
        // 0x2880a4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2880a0) {
            ctx->pc = 0x2880ACu;
            goto label_2880ac;
        }
    }
    ctx->pc = 0x2880A8u;
    // 0x2880a8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2880a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_2880ac:
    // 0x2880ac: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2880acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2880b0: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x2880b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2880b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2880b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2880b8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2880b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2880bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2880bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2880c0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2880c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2880c4: 0xc60e0000  lwc1        $f14, 0x0($s0)
    ctx->pc = 0x2880c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2880c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2880c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2880cc: 0xc60f0004  lwc1        $f15, 0x4($s0)
    ctx->pc = 0x2880ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2880d0: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x2880d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2880d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2880d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2880d8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x2880d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2880dc: 0x46017301  sub.s       $f12, $f14, $f1
    ctx->pc = 0x2880dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[1]);
    // 0x2880e0: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x2880e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2880e4: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x2880e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2880e8: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x2880e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2880ec: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x2880ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2880f0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2880f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2880f4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2880f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2880f8: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2880f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2880fc: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2880fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288100: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x288100u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x288104: 0x46017380  add.s       $f14, $f14, $f1
    ctx->pc = 0x288104u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x288108: 0x46007bc0  add.s       $f15, $f15, $f0
    ctx->pc = 0x288108u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x28810c: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x28810cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x288110: 0x46026b41  sub.s       $f13, $f13, $f2
    ctx->pc = 0x288110u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x288114: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x288114u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x288118: 0x46027bc0  add.s       $f15, $f15, $f2
    ctx->pc = 0x288118u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
    // 0x28811c: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x28811cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x288120: 0xc0a1e1c  jal         func_287870
    ctx->pc = 0x288120u;
    SET_GPR_U32(ctx, 31, 0x288128u);
    ctx->pc = 0x288124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288120u;
    // 0x288124: 0x46146b41  sub.s       $f13, $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x287870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287870u, 0x288120u, 0x288128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288128u;
label_288128:
    // 0x288128: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x288128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28812c: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x28812Cu;
    {
        const bool branch_taken_0x28812c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28812c) {
            ctx->pc = 0x288130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28812Cu;
            // 0x288130: 0xc600003c  lwc1        $f0, 0x3C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x288098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288098;
        }
    }
    ctx->pc = 0x288134u;
    // 0x288134: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x288138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x288138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28813c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x28813cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x288140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x288140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288144: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x288144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x288148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x288148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28814c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28814cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x288150: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x288150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x288154: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x288154u;
    {
        const bool branch_taken_0x288154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288154u;
        // 0x288158: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288154) {
            ctx->pc = 0x288174u;
            goto label_288174;
        }
    }
    ctx->pc = 0x28815Cu;
    // 0x28815c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28815cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x288160: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x288160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x288164: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x288164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x288168: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x288168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x28816c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x28816cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x288170: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x288170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_288174:
    // 0x288174: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x288174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x288178: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x288178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28817c: 0x2408006a  addiu       $t0, $zero, 0x6A
    ctx->pc = 0x28817cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x288180: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x288180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x288184: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x288184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x288188: 0x24849808  addiu       $a0, $a0, -0x67F8
    ctx->pc = 0x288188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940680));
    // 0x28818c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28818cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288190: 0x129600  sll         $s2, $s2, 24
    ctx->pc = 0x288190u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x288194: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x288194u;
    SET_GPR_U32(ctx, 31, 0x28819Cu);
    ctx->pc = 0x288198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288194u;
    // 0x288198: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x288194u, 0x28819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28819Cu;
label_28819c:
    // 0x28819c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x28819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2881a0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2881a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2881a4: 0x2442ada0  addiu       $v0, $v0, -0x5260
    ctx->pc = 0x2881a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    // 0x2881a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2881ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2881acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2881b0: 0x3c110015  lui         $s1, 0x15
    ctx->pc = 0x2881b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    // 0x2881b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2881b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2881b8: 0x26313bc0  addiu       $s1, $s1, 0x3BC0
    ctx->pc = 0x2881b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 15296));
    // 0x2881bc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2881bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2881c0: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x2881c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2881c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2881c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2881c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2881cc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x2881ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x2881d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2881d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881d4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2881D4u;
    SET_GPR_U32(ctx, 31, 0x2881DCu);
    ctx->pc = 0x2881D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881D4u;
    // 0x2881d8: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2881D4u, 0x2881DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881DCu;
label_2881dc:
    // 0x2881dc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2881dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x2881e0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2881e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2881e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2881e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2881e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2881ECu;
    SET_GPR_U32(ctx, 31, 0x2881F4u);
    ctx->pc = 0x2881F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881ECu;
    // 0x2881f0: 0x24843bd8  addiu       $a0, $a0, 0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2881ECu, 0x2881F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881F4u;
label_2881f4:
    // 0x2881f4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2881f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2881f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2881f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2881fc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2881FCu;
    SET_GPR_U32(ctx, 31, 0x288204u);
    ctx->pc = 0x288200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881FCu;
    // 0x288200: 0x24843ba0  addiu       $a0, $a0, 0x3BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2881FCu, 0x288204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288204u;
label_288204:
    // 0x288204: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x288204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288208: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x288208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x28820c: 0xc0a1e66  jal         func_287998
    ctx->pc = 0x28820Cu;
    SET_GPR_U32(ctx, 31, 0x288214u);
    ctx->pc = 0x288210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28820Cu;
    // 0x288210: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287998u, 0x28820Cu, 0x288214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288214u;
label_288214:
    // 0x288214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288218: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x288218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x28821c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28821Cu;
    SET_GPR_U32(ctx, 31, 0x288224u);
    ctx->pc = 0x288220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28821Cu;
    // 0x288220: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28821Cu, 0x288224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288224u;
label_288224:
    // 0x288224: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x288224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x288228: 0x24843bf0  addiu       $a0, $a0, 0x3BF0
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15344));
    // 0x28822c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28822Cu;
    SET_GPR_U32(ctx, 31, 0x288234u);
    ctx->pc = 0x288230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28822Cu;
    // 0x288230: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28822Cu, 0x288234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288234u;
label_288234:
    // 0x288234: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x288234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288238: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x288238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28823c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28823cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288240: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x288240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x288244: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x288244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288248: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x288248u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28824c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x28824cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288250: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x288250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x288254: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x288254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x288258: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x288258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28825c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x28825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x288260: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x288260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x288264: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x288264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288268: 0x3e00008  jr          $ra
    ctx->pc = 0x288268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288268u;
        // 0x28826c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288270u;
}
