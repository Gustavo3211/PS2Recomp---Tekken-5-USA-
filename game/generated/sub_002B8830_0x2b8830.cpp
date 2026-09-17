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

// Function: sub_002B8830
// Address: 0x2b8830 - 0x2b8ad0
void sub_002B8830_0x2b8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8830_0x2b8830");
#endif

    switch (ctx->pc) {
        case 0x2b8990u: goto label_2b8990;
        case 0x2b89acu: goto label_2b89ac;
        case 0x2b89c8u: goto label_2b89c8;
        case 0x2b89e4u: goto label_2b89e4;
        case 0x2b8a10u: goto label_2b8a10;
        case 0x2b8aacu: goto label_2b8aac;
        default: break;
    }

    ctx->pc = 0x2b8830u;

    // 0x2b8830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8834: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b8838: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b8838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b883c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b8844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b8848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b8848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b884c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b8850: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x2b8850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2b8854: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
    ctx->pc = 0x2B8854u;
    {
        const bool branch_taken_0x2b8854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8854) {
            ctx->pc = 0x2B8858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8854u;
            // 0x2b8858: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B89F4u;
            goto label_2b89f4;
        }
    }
    ctx->pc = 0x2B885Cu;
    // 0x2b885c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x2b885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8860: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b8860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8864: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b8864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8868: 0xc6870008  lwc1        $f7, 0x8($s4)
    ctx->pc = 0x2b8868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b886c: 0x46016241  sub.s       $f9, $f12, $f1
    ctx->pc = 0x2b886cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2b8870: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x2b8870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8874: 0x460238c2  mul.s       $f3, $f7, $f2
    ctx->pc = 0x2b8874u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2b8878: 0xc686000c  lwc1        $f6, 0xC($s4)
    ctx->pc = 0x2b8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b887c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2b887cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b8880: 0x46004846  mov.s       $f1, $f9
    ctx->pc = 0x2b8880u;
    ctx->f[1] = FPU_MOV_S(ctx->f[9]);
    // 0x2b8884: 0x46006a01  sub.s       $f8, $f13, $f0
    ctx->pc = 0x2b8884u;
    ctx->f[8] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2b8888: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2b8888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2b888c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2b888cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2b8890: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x2b8890u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
    // 0x2b8894: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2b8894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8898: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8898u;
    {
        const bool branch_taken_0x2b8898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8898u;
        // 0x2b889c: 0x46020340  add.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8898) {
            ctx->pc = 0x2B88C0u;
            goto label_2b88c0;
        }
    }
    ctx->pc = 0x2B88A0u;
    // 0x2b88a0: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x2b88a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b88a4: 0x0  nop
    ctx->pc = 0x2b88a4u;
    // NOP
    // 0x2b88a8: 0x0  nop
    ctx->pc = 0x2b88a8u;
    // NOP
    // 0x2b88ac: 0x46050803  div.s       $f0, $f1, $f5
    ctx->pc = 0x2b88acu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[5];
    // 0x2b88b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b88b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b88b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b88b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b88b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B88B8u;
    {
        const bool branch_taken_0x2b88b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88B8u;
        // 0x2b88bc: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88b8) {
            ctx->pc = 0x2B88D8u;
            goto label_2b88d8;
        }
    }
    ctx->pc = 0x2B88C0u;
label_2b88c0:
    // 0x2b88c0: 0xc6850010  lwc1        $f5, 0x10($s4)
    ctx->pc = 0x2b88c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b88c4: 0x0  nop
    ctx->pc = 0x2b88c4u;
    // NOP
    // 0x2b88c8: 0x0  nop
    ctx->pc = 0x2b88c8u;
    // NOP
    // 0x2b88cc: 0x46050803  div.s       $f0, $f1, $f5
    ctx->pc = 0x2b88ccu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[5];
    // 0x2b88d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b88d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b88d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b88d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2b88d8:
    // 0x2b88d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b88d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b88dc: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2b88dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b88e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B88E0u;
    {
        const bool branch_taken_0x2b88e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88E0u;
        // 0x2b88e4: 0xc6840014  lwc1        $f4, 0x14($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88e0) {
            ctx->pc = 0x2B8908u;
            goto label_2b8908;
        }
    }
    ctx->pc = 0x2B88E8u;
    // 0x2b88e8: 0x0  nop
    ctx->pc = 0x2b88e8u;
    // NOP
    // 0x2b88ec: 0x0  nop
    ctx->pc = 0x2b88ecu;
    // NOP
    // 0x2b88f0: 0x46046803  div.s       $f0, $f13, $f4
    ctx->pc = 0x2b88f0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[0] = ctx->f[13] / ctx->f[4];
    // 0x2b88f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b88f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b88f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b88f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b88fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B88FCu;
    {
        const bool branch_taken_0x2b88fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B88FCu;
        // 0x2b8900: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b88fc) {
            ctx->pc = 0x2B891Cu;
            goto label_2b891c;
        }
    }
    ctx->pc = 0x2B8904u;
    // 0x2b8904: 0x0  nop
    ctx->pc = 0x2b8904u;
    // NOP
label_2b8908:
    // 0x2b8908: 0x0  nop
    ctx->pc = 0x2b8908u;
    // NOP
    // 0x2b890c: 0x0  nop
    ctx->pc = 0x2b890cu;
    // NOP
    // 0x2b8910: 0x46046803  div.s       $f0, $f13, $f4
    ctx->pc = 0x2b8910u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[0] = ctx->f[13] / ctx->f[4];
    // 0x2b8914: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8918: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b8918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2b891c:
    // 0x2b891c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8920: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b8920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b8924: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b8924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b8928: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b8928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b892c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b892cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8930: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b8930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b8934: 0x46013802  mul.s       $f0, $f7, $f1
    ctx->pc = 0x2b8934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2b8938: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2b8938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2b893c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2b893cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2b8940: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2b8940u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2b8944: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x2b8944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2b8948: 0x46014040  add.s       $f1, $f8, $f1
    ctx->pc = 0x2b8948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
    // 0x2b894c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b894cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b8950: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2b8950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2b8954: 0x0  nop
    ctx->pc = 0x2b8954u;
    // NOP
    // 0x2b8958: 0x0  nop
    ctx->pc = 0x2b8958u;
    // NOP
    // 0x2b895c: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x2b895cu;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[7];
    // 0x2b8960: 0x0  nop
    ctx->pc = 0x2b8960u;
    // NOP
    // 0x2b8964: 0x0  nop
    ctx->pc = 0x2b8964u;
    // NOP
    // 0x2b8968: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2b8968u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[6];
    // 0x2b896c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b896cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b8970: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x2b8970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2b8974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b8974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8978: 0x2633ffff  addiu       $s3, $s1, -0x1
    ctx->pc = 0x2b8978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2b897c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b897cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b8980: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2b8980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2b8984: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b8984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8988: 0xc0ae16c  jal         func_2B85B0
    ctx->pc = 0x2B8988u;
    SET_GPR_U32(ctx, 31, 0x2B8990u);
    ctx->pc = 0x2B898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8988u;
    // 0x2b898c: 0x2612ffff  addiu       $s2, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85B0u, 0x2B8988u, 0x2B8990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8990u;
label_2b8990:
    // 0x2b8990: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8994: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b8998: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b8998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b899c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b899cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89a0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b89a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b89a4: 0xc0ae16c  jal         func_2B85B0
    ctx->pc = 0x2B89A4u;
    SET_GPR_U32(ctx, 31, 0x2B89ACu);
    ctx->pc = 0x2B89A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89A4u;
    // 0x2b89a8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85B0u, 0x2B89A4u, 0x2B89ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89ACu;
label_2b89ac:
    // 0x2b89ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b89acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b89b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b89b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b89b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89bc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b89bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b89c0: 0xc0ae16c  jal         func_2B85B0
    ctx->pc = 0x2B89C0u;
    SET_GPR_U32(ctx, 31, 0x2B89C8u);
    ctx->pc = 0x2B89C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89C0u;
    // 0x2b89c4: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85B0u, 0x2B89C0u, 0x2B89C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89C8u;
label_2b89c8:
    // 0x2b89c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b89c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b89d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b89d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b89d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b89d8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b89d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b89dc: 0xc0ae16c  jal         func_2B85B0
    ctx->pc = 0x2B89DCu;
    SET_GPR_U32(ctx, 31, 0x2B89E4u);
    ctx->pc = 0x2B89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B89DCu;
    // 0x2b89e0: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85B0u, 0x2B89DCu, 0x2B89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B89E4u;
label_2b89e4:
    // 0x2b89e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b89e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b89e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b89e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b89ec: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2b89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2b89f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b89f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b89f4:
    // 0x2b89f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b89f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b89f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b89f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b89fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b89fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8a00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b8a00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8a04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b8a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b8a08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A08u;
        // 0x2b8a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A10u;
label_2b8a10:
    // 0x2b8a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8a14: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8A14u;
    {
        const bool branch_taken_0x2b8a14 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2B8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A14u;
        // 0x2b8a18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a14) {
            ctx->pc = 0x2B8A44u;
            goto label_2b8a44;
        }
    }
    ctx->pc = 0x2B8A1Cu;
    // 0x2b8a1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8a20: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2b8a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b8a24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B8A24u;
    {
        const bool branch_taken_0x2b8a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A24u;
        // 0x2b8a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a24) {
            ctx->pc = 0x2B8A80u;
            goto label_2b8a80;
        }
    }
    ctx->pc = 0x2B8A2Cu;
    // 0x2b8a2c: 0x4e20015  bltzl       $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B8A2Cu;
    {
        const bool branch_taken_0x2b8a2c = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2b8a2c) {
            ctx->pc = 0x2B8A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8A2Cu;
            // 0x2b8a30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8A84u;
            goto label_2b8a84;
        }
    }
    ctx->pc = 0x2B8A34u;
    // 0x2b8a34: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b8a38: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2b8a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b8a3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8A3Cu;
    {
        const bool branch_taken_0x2b8a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8a3c) {
            ctx->pc = 0x2B8A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8A3Cu;
            // 0x2b8a40: 0x8c890030  lw          $t1, 0x30($a0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8A50u;
            goto label_2b8a50;
        }
    }
    ctx->pc = 0x2B8A44u;
label_2b8a44:
    // 0x2b8a44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B8A44u;
    {
        const bool branch_taken_0x2b8a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A44u;
        // 0x2b8a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a44) {
            ctx->pc = 0x2B8A80u;
            goto label_2b8a80;
        }
    }
    ctx->pc = 0x2B8A4Cu;
    // 0x2b8a4c: 0x0  nop
    ctx->pc = 0x2b8a4cu;
    // NOP
label_2b8a50:
    // 0x2b8a50: 0x1120000b  beqz        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B8A50u;
    {
        const bool branch_taken_0x2b8a50 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A50u;
        // 0x2b8a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8a50) {
            ctx->pc = 0x2B8A80u;
            goto label_2b8a80;
        }
    }
    ctx->pc = 0x2B8A58u;
    // 0x2b8a58: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x2b8a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b8a5c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2b8a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8a64: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2b8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b8a68: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b8a6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b8a70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b8a74: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2b8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2b8a78: 0x80ae0a8  j           func_2B82A0
    ctx->pc = 0x2B8A78u;
    ctx->pc = 0x2B8A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8A78u;
    // 0x2b8a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B82A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B82A0u, 0x2B8A78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8A80u;
label_2b8a80:
    // 0x2b8a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8a84:
    // 0x2b8a84: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8A84u;
        // 0x2b8a88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8A8Cu;
    // 0x2b8a8c: 0x0  nop
    ctx->pc = 0x2b8a8cu;
    // NOP
    // 0x2b8a90: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2b8a94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8a98: 0x24a5dfc8  addiu       $a1, $a1, -0x2038
    ctx->pc = 0x2b8a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
    // 0x2b8a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8aa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b8aa4: 0xc04a48c  jal         func_129230
    ctx->pc = 0x2B8AA4u;
    SET_GPR_U32(ctx, 31, 0x2B8AACu);
    ctx->pc = 0x2B8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8AA4u;
    // 0x2b8aa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x2B8AA4u, 0x2B8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8AACu;
label_2b8aac:
    // 0x2b8aac: 0xc78090a4  lwc1        $f0, -0x6F5C($gp)
    ctx->pc = 0x2b8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8ab0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b8ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b8ab4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2b8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b8ab8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b8abc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b8abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8AC4u;
        // 0x2b8ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8ACCu;
    // 0x2b8acc: 0x0  nop
    ctx->pc = 0x2b8accu;
    // NOP
    ctx->pc = 0x2b8ad0u;
}
