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

// Function: sub_0023B2E0
// Address: 0x23b2e0 - 0x23b830
void sub_0023B2E0_0x23b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B2E0_0x23b2e0");
#endif

    switch (ctx->pc) {
        case 0x23b588u: goto label_23b588;
        case 0x23b5c8u: goto label_23b5c8;
        case 0x23b7f8u: goto label_23b7f8;
        default: break;
    }

    ctx->pc = 0x23b2e0u;

    // 0x23b2e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23b2e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23b2e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23b2ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23b2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b2f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23b2f4: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x23b2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x23b2f8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23b2fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23b2fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b300: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23b304: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23b304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b308: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23b30c: 0xe7b70050  swc1        $f23, 0x50($sp)
    ctx->pc = 0x23b30cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23b310: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x23b310u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23b314: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x23b314u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23b318: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x23b318u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x23b31c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x23b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x23b320: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x23b320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x23b324: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x23b324u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x23b328: 0xfa400030  sqc2        $vf0, 0x30($s2)
    ctx->pc = 0x23b328u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x23b32c: 0xc7838724  lwc1        $f3, -0x78DC($gp)
    ctx->pc = 0x23b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23b330: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x23b330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x23b334: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23b334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b338: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x23b338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x23b33c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x23b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x23b340: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x23b340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x23b344: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23b344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b348: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x23b348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b34c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x23b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23b350: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23b354: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23b354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23b358: 0x24900184  addiu       $s0, $a0, 0x184
    ctx->pc = 0x23b358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 388));
    // 0x23b35c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23b360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b368: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23b36c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x23b36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b370: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23b370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23b374: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23b374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23b378: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23b378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23b37c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x23b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b380: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x23b380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x23b384: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x23b384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x23b388: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x23b388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23b38c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x23b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b390: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x23b390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x23b394: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23b394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23b398: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23b398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23b39c: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x23b39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23b3a0: 0x14450035  bne         $v0, $a1, . + 4 + (0x35 << 2)
    ctx->pc = 0x23B3A0u;
    {
        const bool branch_taken_0x23b3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x23B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3A0u;
        // 0x23b3a4: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3a0) {
            ctx->pc = 0x23B478u;
            goto label_23b478;
        }
    }
    ctx->pc = 0x23B3A8u;
    // 0x23b3a8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x23b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x23b3ac: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B3ACu;
    {
        const bool branch_taken_0x23b3ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3ACu;
        // 0x23b3b0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3ac) {
            ctx->pc = 0x23B3C8u;
            goto label_23b3c8;
        }
    }
    ctx->pc = 0x23B3B4u;
    // 0x23b3b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x23b3b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b3b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23b3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23b3bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B3BCu;
    {
        const bool branch_taken_0x23b3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3BCu;
        // 0x23b3c0: 0xc620007c  lwc1        $f0, 0x7C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3bc) {
            ctx->pc = 0x23B3E0u;
            goto label_23b3e0;
        }
    }
    ctx->pc = 0x23B3C4u;
    // 0x23b3c4: 0x0  nop
    ctx->pc = 0x23b3c4u;
    // NOP
label_23b3c8:
    // 0x23b3c8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x23b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x23b3cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23b3d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23b3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b3d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23b3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23b3d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x23b3d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x23b3dc: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x23b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b3e0:
    // 0x23b3e0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x23b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b3e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23b3e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23b3e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23b3e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b3ec: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B3ECu;
    {
        const bool branch_taken_0x23b3ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3ECu;
        // 0x23b3f0: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3ec) {
            ctx->pc = 0x23B408u;
            goto label_23b408;
        }
    }
    ctx->pc = 0x23B3F4u;
    // 0x23b3f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x23b3f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b3f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23b3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23b3fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23B3FCu;
    {
        const bool branch_taken_0x23b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3FCu;
        // 0x23b400: 0xc6200080  lwc1        $f0, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3fc) {
            ctx->pc = 0x23B424u;
            goto label_23b424;
        }
    }
    ctx->pc = 0x23B404u;
    // 0x23b404: 0x0  nop
    ctx->pc = 0x23b404u;
    // NOP
label_23b408:
    // 0x23b408: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x23b408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23b40c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x23b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x23b410: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23b414: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23b414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b418: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23b418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23b41c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x23b41cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x23b420: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x23b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b424:
    // 0x23b424: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x23b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b428: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23b428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23b42c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23b42cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b430: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B430u;
    {
        const bool branch_taken_0x23b430 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B430u;
        // 0x23b434: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b430) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B438u;
    // 0x23b438: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x23b438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b43c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23b43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23b440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B440u;
    {
        const bool branch_taken_0x23b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B440u;
        // 0x23b444: 0xc6200084  lwc1        $f0, 0x84($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b440) {
            ctx->pc = 0x23B464u;
            goto label_23b464;
        }
    }
    ctx->pc = 0x23B448u;
label_23b448:
    // 0x23b448: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x23b448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x23b44c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x23b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x23b450: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23b454: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x23b454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23b458: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23b458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23b45c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x23b45cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x23b460: 0xc6200084  lwc1        $f0, 0x84($s1)
    ctx->pc = 0x23b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b464:
    // 0x23b464: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x23b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b468: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x23b468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23b46c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23b46cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23b470: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x23b470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23b474: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x23b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23b478:
    // 0x23b478: 0xc7858728  lwc1        $f5, -0x78D8($gp)
    ctx->pc = 0x23b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23b47c: 0xc783872c  lwc1        $f3, -0x78D4($gp)
    ctx->pc = 0x23b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23b480: 0x0  nop
    ctx->pc = 0x23b480u;
    // NOP
    // 0x23b484: 0x0  nop
    ctx->pc = 0x23b484u;
    // NOP
    // 0x23b488: 0x46051043  div.s       $f1, $f2, $f5
    ctx->pc = 0x23b488u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[5];
    // 0x23b48c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b48cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23b490: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23b490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23b494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23b498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23b49c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x23b49cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x23b4a0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x23b4a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23b4a4: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x23b4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b4a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23B4A8u;
    {
        const bool branch_taken_0x23b4a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b4a8) {
            ctx->pc = 0x23B4B8u;
            goto label_23b4b8;
        }
    }
    ctx->pc = 0x23B4B0u;
    // 0x23b4b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B4B0u;
    {
        const bool branch_taken_0x23b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B0u;
        // 0x23b4b4: 0x46052101  sub.s       $f4, $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4b0) {
            ctx->pc = 0x23B4C8u;
            goto label_23b4c8;
        }
    }
    ctx->pc = 0x23B4B8u;
label_23b4b8:
    // 0x23b4b8: 0xc7808730  lwc1        $f0, -0x78D0($gp)
    ctx->pc = 0x23b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b4bc: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x23b4bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b4c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23B4C0u;
    {
        const bool branch_taken_0x23b4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b4c0) {
            ctx->pc = 0x23B4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B4C0u;
            // 0x23b4c4: 0x46052100  add.s       $f4, $f4, $f5 (Delay Slot)
            ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B4C8u;
            goto label_23b4c8;
        }
    }
    ctx->pc = 0x23B4C8u;
label_23b4c8:
    // 0x23b4c8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x23b4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b4cc: 0xc7858734  lwc1        $f5, -0x78CC($gp)
    ctx->pc = 0x23b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23b4d0: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x23b4d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23b4d4: 0x0  nop
    ctx->pc = 0x23b4d4u;
    // NOP
    // 0x23b4d8: 0x0  nop
    ctx->pc = 0x23b4d8u;
    // NOP
    // 0x23b4dc: 0x46051043  div.s       $f1, $f2, $f5
    ctx->pc = 0x23b4dcu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[5];
    // 0x23b4e0: 0xc7838738  lwc1        $f3, -0x78C8($gp)
    ctx->pc = 0x23b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23b4e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b4e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23b4e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23b4e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23b4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b4f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23b4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23b4f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x23b4f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x23b4f8: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x23b4f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23b4fc: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x23b4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b500: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x23B500u;
    {
        const bool branch_taken_0x23b500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b500) {
            ctx->pc = 0x23B510u;
            goto label_23b510;
        }
    }
    ctx->pc = 0x23B508u;
    // 0x23b508: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B508u;
    {
        const bool branch_taken_0x23b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B508u;
        // 0x23b50c: 0x46052101  sub.s       $f4, $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b508) {
            ctx->pc = 0x23B520u;
            goto label_23b520;
        }
    }
    ctx->pc = 0x23B510u;
label_23b510:
    // 0x23b510: 0xc780873c  lwc1        $f0, -0x78C4($gp)
    ctx->pc = 0x23b510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b514: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x23b514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b518: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23B518u;
    {
        const bool branch_taken_0x23b518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b518) {
            ctx->pc = 0x23B51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B518u;
            // 0x23b51c: 0x46052100  add.s       $f4, $f4, $f5 (Delay Slot)
            ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B520u;
            goto label_23b520;
        }
    }
    ctx->pc = 0x23B520u;
label_23b520:
    // 0x23b520: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x23b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b524: 0xc7858740  lwc1        $f5, -0x78C0($gp)
    ctx->pc = 0x23b524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x23b528: 0xc7838744  lwc1        $f3, -0x78BC($gp)
    ctx->pc = 0x23b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23b52c: 0x0  nop
    ctx->pc = 0x23b52cu;
    // NOP
    // 0x23b530: 0x0  nop
    ctx->pc = 0x23b530u;
    // NOP
    // 0x23b534: 0x46051043  div.s       $f1, $f2, $f5
    ctx->pc = 0x23b534u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[5];
    // 0x23b538: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23b53c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23b53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23b540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23b544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23b548: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x23b548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x23b54c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x23b54cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23b550: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x23b550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b554: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23B554u;
    {
        const bool branch_taken_0x23b554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B554u;
        // 0x23b558: 0xe7a40004  swc1        $f4, 0x4($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b554) {
            ctx->pc = 0x23B568u;
            goto label_23b568;
        }
    }
    ctx->pc = 0x23B55Cu;
    // 0x23b55c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23B55Cu;
    {
        const bool branch_taken_0x23b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B55Cu;
        // 0x23b560: 0x46051081  sub.s       $f2, $f2, $f5 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b55c) {
            ctx->pc = 0x23B578u;
            goto label_23b578;
        }
    }
    ctx->pc = 0x23B564u;
    // 0x23b564: 0x0  nop
    ctx->pc = 0x23b564u;
    // NOP
label_23b568:
    // 0x23b568: 0xc7808748  lwc1        $f0, -0x78B8($gp)
    ctx->pc = 0x23b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b56c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23b56cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b570: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23B570u;
    {
        const bool branch_taken_0x23b570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b570) {
            ctx->pc = 0x23B574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B570u;
            // 0x23b574: 0x46051080  add.s       $f2, $f2, $f5 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B578u;
            goto label_23b578;
        }
    }
    ctx->pc = 0x23B578u;
label_23b578:
    // 0x23b578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b57c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b580: 0xc084c6a  jal         func_2131A8
    ctx->pc = 0x23B580u;
    SET_GPR_U32(ctx, 31, 0x23B588u);
    ctx->pc = 0x23B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B580u;
    // 0x23b584: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2131A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2131A8u, 0x23B580u, 0x23B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B588u;
label_23b588:
    // 0x23b588: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x23b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b58c: 0xc6160000  lwc1        $f22, 0x0($s0)
    ctx->pc = 0x23b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23b590: 0xc6150004  lwc1        $f21, 0x4($s0)
    ctx->pc = 0x23b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23b594: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x23b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b598: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x23b598u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x23b59c: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x23b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b5a0: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x23b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b5a4: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x23b5a4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x23b5a8: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x23b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23b5ac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x23b5acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x23b5b0: 0xc780874c  lwc1        $f0, -0x78B4($gp)
    ctx->pc = 0x23b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b5b4: 0xe6560030  swc1        $f22, 0x30($s2)
    ctx->pc = 0x23b5b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x23b5b8: 0xe6550034  swc1        $f21, 0x34($s2)
    ctx->pc = 0x23b5b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x23b5bc: 0x460015c2  mul.s       $f23, $f2, $f0
    ctx->pc = 0x23b5bcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23b5c0: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x23B5C0u;
    SET_GPR_U32(ctx, 31, 0x23B5C8u);
    ctx->pc = 0x23B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5C0u;
    // 0x23b5c4: 0xe6540038  swc1        $f20, 0x38($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x23B5C0u, 0x23B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5C8u;
label_23b5c8:
    // 0x23b5c8: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x23b5c8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23b5cc: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x23b5ccu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23b5d0: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x23b5d0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23b5d4: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x23b5d4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23b5d8: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x23b5d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23b5dc: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x23b5dcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23b5e0: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x23b5e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23b5e4: 0x8e22006c  lw          $v0, 0x6C($s1)
    ctx->pc = 0x23b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x23b5e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b5e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23b5ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b5ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23b5f0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x23b5f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23b5f4: 0x4be1e718  vmulx.xyzw  $vf28, $vf28, $vf1x
    ctx->pc = 0x23b5f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23b5f8: 0x4be2ef58  vmulx.xyzw  $vf29, $vf29, $vf2x
    ctx->pc = 0x23b5f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23b5fc: 0x4be3f798  vmulx.xyzw  $vf30, $vf30, $vf3x
    ctx->pc = 0x23b5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23b600: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x23b600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23b604: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x23b604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23b608: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x23b608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x23b60c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23b60cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23b610: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23b610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23b614: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x23b614u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x23b618: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x23b618u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b61c: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x23b61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b620: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x23b620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b624: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x23b624u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x23b628: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x23b628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b62c: 0xc7818750  lwc1        $f1, -0x78B0($gp)
    ctx->pc = 0x23b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b630: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23b630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23b634: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23b638: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x23b638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x23b63c: 0x24e34000  addiu       $v1, $a3, 0x4000
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x23b640: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x23b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23b644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B644u;
    {
        const bool branch_taken_0x23b644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B644u;
        // 0x23b648: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b644) {
            ctx->pc = 0x23B654u;
            goto label_23b654;
        }
    }
    ctx->pc = 0x23B64Cu;
    // 0x23b64c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23b650: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23b654:
    // 0x23b654: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x23b654u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x23b658: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23b658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23b65c: 0x25490340  addiu       $t1, $t2, 0x340
    ctx->pc = 0x23b65cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 832));
    // 0x23b660: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x23b660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23b664: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x23b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x23b668: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23b66c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b670: 0x30e54000  andi        $a1, $a3, 0x4000
    ctx->pc = 0x23b670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x23b674: 0x30e63fff  andi        $a2, $a3, 0x3FFF
    ctx->pc = 0x23b674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x23b678: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B678u;
    {
        const bool branch_taken_0x23b678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B678u;
        // 0x23b67c: 0x834025  or          $t0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b678) {
            ctx->pc = 0x23B688u;
            goto label_23b688;
        }
    }
    ctx->pc = 0x23B680u;
    // 0x23b680: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23b680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23b684: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x23b684u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23b688:
    // 0x23b688: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23b68c: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x23b68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x23b690: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x23b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x23b694: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x23b698: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b69c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x23b69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x23b6a0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b6a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23b6a4: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x23b6a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x23b6a8: 0x4be2e9bc  vmulax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x23b6a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b6ac: 0x4be1e0c8  vmaddx.xyzw $vf3, $vf28, $vf1x
    ctx->pc = 0x23b6acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23b6b0: 0x4be1e9bc  vmulax.xyzw $ACC, $vf29, $vf1x
    ctx->pc = 0x23b6b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b6b4: 0x4be2e74c  vmsubx.xyzw $vf29, $vf28, $vf2x
    ctx->pc = 0x23b6b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23b6b8: 0x4bfc1b3c  vmove.xyzw  $vf28, $vf3
    ctx->pc = 0x23b6b8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x23b6bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x23b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b6c0: 0xc7818754  lwc1        $f1, -0x78AC($gp)
    ctx->pc = 0x23b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b6c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23b6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23b6c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b6c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23b6cc: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x23b6ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x23b6d0: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x23b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x23b6d4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x23b6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23b6d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B6D8u;
    {
        const bool branch_taken_0x23b6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6D8u;
        // 0x23b6dc: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6d8) {
            ctx->pc = 0x23B6E8u;
            goto label_23b6e8;
        }
    }
    ctx->pc = 0x23B6E0u;
    // 0x23b6e0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23b6e4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23b6e8:
    // 0x23b6e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23b6ec: 0x25480340  addiu       $t0, $t2, 0x340
    ctx->pc = 0x23b6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 832));
    // 0x23b6f0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23b6f4: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x23b6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23b6f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b6fc: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x23b700: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23b700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23b704: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x23b708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B708u;
    {
        const bool branch_taken_0x23b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B708u;
        // 0x23b70c: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b708) {
            ctx->pc = 0x23B718u;
            goto label_23b718;
        }
    }
    ctx->pc = 0x23B710u;
    // 0x23b710: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23b714: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x23b714u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23b718:
    // 0x23b718: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23b71c: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x23b71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x23b720: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x23b720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x23b724: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23b724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x23b728: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23b728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23b72c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x23b72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x23b730: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23b730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x23b734: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x23b734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x23b738: 0x4be2e1bc  vmulax.xyzw $ACC, $vf28, $vf2x
    ctx->pc = 0x23b738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b73c: 0x4be1f0c8  vmaddx.xyzw $vf3, $vf30, $vf1x
    ctx->pc = 0x23b73cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23b740: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x23b740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b744: 0x4be2f70c  vmsubx.xyzw $vf28, $vf30, $vf2x
    ctx->pc = 0x23b744u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23b748: 0x4bfe1b3c  vmove.xyzw  $vf30, $vf3
    ctx->pc = 0x23b748u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x23b74c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x23b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b750: 0xc7818758  lwc1        $f1, -0x78A8($gp)
    ctx->pc = 0x23b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23b754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23b758: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23b758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23b75c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x23b75cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x23b760: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x23b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x23b764: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x23b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x23b768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B768u;
    {
        const bool branch_taken_0x23b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B768u;
        // 0x23b76c: 0x30c43fff  andi        $a0, $a2, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b768) {
            ctx->pc = 0x23B778u;
            goto label_23b778;
        }
    }
    ctx->pc = 0x23B770u;
    // 0x23b770: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23b774: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23b778:
    // 0x23b778: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23b778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23b77c: 0x25480340  addiu       $t0, $t2, 0x340
    ctx->pc = 0x23b77cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 832));
    // 0x23b780: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23b784: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x23b784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x23b788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23b788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b78c: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x23b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x23b790: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x23b794: 0x30c53fff  andi        $a1, $a2, 0x3FFF
    ctx->pc = 0x23b794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x23b798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B798u;
    {
        const bool branch_taken_0x23b798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B798u;
        // 0x23b79c: 0x833825  or          $a3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b798) {
            ctx->pc = 0x23B7A8u;
            goto label_23b7a8;
        }
    }
    ctx->pc = 0x23B7A0u;
    // 0x23b7a0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x23b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x23b7a4: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x23b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23b7a8:
    // 0x23b7a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23b7ac: 0x30c48000  andi        $a0, $a2, 0x8000
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x23b7b0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23b7b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x23b7b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23b7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b7bc: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x23b7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x23b7c0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23b7c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23b7c4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x23b7c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x23b7c8: 0x4be2f1bc  vmulax.xyzw $ACC, $vf30, $vf2x
    ctx->pc = 0x23b7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b7cc: 0x4be1e8c8  vmaddx.xyzw $vf3, $vf29, $vf1x
    ctx->pc = 0x23b7ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x23b7d0: 0x4be1f1bc  vmulax.xyzw $ACC, $vf30, $vf1x
    ctx->pc = 0x23b7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x23b7d4: 0x4be2ef8c  vmsubx.xyzw $vf30, $vf29, $vf2x
    ctx->pc = 0x23b7d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23b7d8: 0x4bfd1b3c  vmove.xyzw  $vf29, $vf3
    ctx->pc = 0x23b7d8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], ctx->vu0_vf[3], _mm_castsi128_ps(mask)); }
    // 0x23b7dc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x23b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x23b7e0: 0xf85c0000  sqc2        $vf28, 0x0($v0)
    ctx->pc = 0x23b7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x23b7e4: 0xf85d0010  sqc2        $vf29, 0x10($v0)
    ctx->pc = 0x23b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x23b7e8: 0xf85e0020  sqc2        $vf30, 0x20($v0)
    ctx->pc = 0x23b7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x23b7ec: 0xf85f0030  sqc2        $vf31, 0x30($v0)
    ctx->pc = 0x23b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x23b7f0: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x23B7F0u;
    SET_GPR_U32(ctx, 31, 0x23B7F8u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x23B7F0u, 0x23B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7F8u;
label_23b7f8:
    // 0x23b7f8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x23b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x23b7fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b7fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b800: 0xe4570030  swc1        $f23, 0x30($v0)
    ctx->pc = 0x23b800u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x23b804: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b808: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b80c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23b80cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23b810: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23b810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b814: 0xc7b70050  lwc1        $f23, 0x50($sp)
    ctx->pc = 0x23b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x23b818: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x23b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23b81c: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x23b81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23b820: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x23b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23b824: 0x3e00008  jr          $ra
    ctx->pc = 0x23B824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B824u;
        // 0x23b828: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B82Cu;
    // 0x23b82c: 0x0  nop
    ctx->pc = 0x23b82cu;
    // NOP
    ctx->pc = 0x23b830u;
}
