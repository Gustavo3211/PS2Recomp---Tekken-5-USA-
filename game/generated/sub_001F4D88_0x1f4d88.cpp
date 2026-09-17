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

// Function: sub_001F4D88
// Address: 0x1f4d88 - 0x1f50a8
void sub_001F4D88_0x1f4d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4D88_0x1f4d88");
#endif

    switch (ctx->pc) {
        case 0x1f4eccu: goto label_1f4ecc;
        default: break;
    }

    ctx->pc = 0x1f4d88u;

    // 0x1f4d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f4d8c: 0xc7808064  lwc1        $f0, -0x7F9C($gp)
    ctx->pc = 0x1f4d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4d9c: 0x26040750  addiu       $a0, $s0, 0x750
    ctx->pc = 0x1f4d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    // 0x1f4da0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f4da4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f4da8: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x1f4da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4dac: 0x920301a5  lbu         $v1, 0x1A5($s0)
    ctx->pc = 0x1f4dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 421)));
    // 0x1f4db0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f4db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4db4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1f4db8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f4dbc: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1f4dbcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x1f4dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4dc4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4DC4u;
    {
        const bool branch_taken_0x1f4dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DC4u;
        // 0x1f4dc8: 0x24510138  addiu       $s1, $v0, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4dc4) {
            ctx->pc = 0x1F4DD8u;
            goto label_1f4dd8;
        }
    }
    ctx->pc = 0x1F4DCCu;
    // 0x1f4dcc: 0xc7808068  lwc1        $f0, -0x7F98($gp)
    ctx->pc = 0x1f4dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4dd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4DD0u;
    {
        const bool branch_taken_0x1f4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DD0u;
        // 0x1f4dd4: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4dd0) {
            ctx->pc = 0x1F4DF0u;
            goto label_1f4df0;
        }
    }
    ctx->pc = 0x1F4DD8u;
label_1f4dd8:
    // 0x1f4dd8: 0xc780806c  lwc1        $f0, -0x7F94($gp)
    ctx->pc = 0x1f4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4ddc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4ddcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4de0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4DE0u;
    {
        const bool branch_taken_0x1f4de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4de0) {
            ctx->pc = 0x1F4DF0u;
            goto label_1f4df0;
        }
    }
    ctx->pc = 0x1F4DE8u;
    // 0x1f4de8: 0xc7808070  lwc1        $f0, -0x7F90($gp)
    ctx->pc = 0x1f4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4dec: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1f4decu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f4df0:
    // 0x1f4df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f4df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4df4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1f4df4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x1f4df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f4df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4dfc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4DFCu;
    {
        const bool branch_taken_0x1f4dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4dfc) {
            ctx->pc = 0x1F4E0Cu;
            goto label_1f4e0c;
        }
    }
    ctx->pc = 0x1F4E04u;
    // 0x1f4e04: 0xc7808074  lwc1        $f0, -0x7F8C($gp)
    ctx->pc = 0x1f4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f4e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f4e0c:
    // 0x1f4e0c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x1f4e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e10: 0xc784807c  lwc1        $f4, -0x7F84($gp)
    ctx->pc = 0x1f4e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f4e14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4e18: 0xc7818080  lwc1        $f1, -0x7F80($gp)
    ctx->pc = 0x1f4e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4e1c: 0xc4a20074  lwc1        $f2, 0x74($a1)
    ctx->pc = 0x1f4e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4e20: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f4e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4e24: 0x0  nop
    ctx->pc = 0x1f4e24u;
    // NOP
    // 0x1f4e28: 0x0  nop
    ctx->pc = 0x1f4e28u;
    // NOP
    // 0x1f4e2c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1f4e2cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x1f4e30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4e30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4e34: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f4e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4e38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4e3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4E3Cu;
    {
        const bool branch_taken_0x1f4e3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E3Cu;
        // 0x1f4e40: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e3c) {
            ctx->pc = 0x1F4E4Cu;
            goto label_1f4e4c;
        }
    }
    ctx->pc = 0x1F4E44u;
    // 0x1f4e44: 0xc7808084  lwc1        $f0, -0x7F7C($gp)
    ctx->pc = 0x1f4e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e48: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f4e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f4e4c:
    // 0x1f4e4c: 0x920301bc  lbu         $v1, 0x1BC($s0)
    ctx->pc = 0x1f4e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1f4e50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4e54: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F4E54u;
    {
        const bool branch_taken_0x1f4e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4e54) {
            ctx->pc = 0x1F4E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4E54u;
            // 0x1f4e58: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4E90u;
            goto label_1f4e90;
        }
    }
    ctx->pc = 0x1F4E5Cu;
    // 0x1f4e5c: 0xc4a10758  lwc1        $f1, 0x758($a1)
    ctx->pc = 0x1f4e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4e60: 0xc4a00750  lwc1        $f0, 0x750($a1)
    ctx->pc = 0x1f4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e64: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f4e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4e68: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4e6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f4e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f4e70: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1f4e70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1f4e74: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4e74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1f4e78: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1f4e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4e7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4e7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4e80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f4e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f4e84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F4E84u;
    {
        const bool branch_taken_0x1f4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4e84) {
            ctx->pc = 0x1F4EB8u;
            goto label_1f4eb8;
        }
    }
    ctx->pc = 0x1F4E8Cu;
    // 0x1f4e8c: 0x0  nop
    ctx->pc = 0x1f4e8cu;
    // NOP
label_1f4e90:
    // 0x1f4e90: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1f4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4e94: 0xc4400758  lwc1        $f0, 0x758($v0)
    ctx->pc = 0x1f4e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4e98: 0xc4410750  lwc1        $f1, 0x750($v0)
    ctx->pc = 0x1f4e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4e9c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f4e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4ea0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f4ea0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f4ea4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f4ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f4ea8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1f4eac: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1f4eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4eb0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4eb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f4eb4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1f4eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1f4eb8:
    // 0x1f4eb8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1f4eb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4ebc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f4ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f4ec0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f4ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4ec4: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x1F4EC4u;
    SET_GPR_U32(ctx, 31, 0x1F4ECCu);
    ctx->pc = 0x1F4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EC4u;
    // 0x1f4ec8: 0x46806b60  cvt.s.w     $f13, $f13 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x1F4EC4u, 0x1F4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4ECCu;
label_1f4ecc:
    // 0x1f4ecc: 0xc7818088  lwc1        $f1, -0x7F78($gp)
    ctx->pc = 0x1f4eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4ed0: 0x9608007c  lhu         $t0, 0x7C($s0)
    ctx->pc = 0x1f4ed0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1f4ed4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f4ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f4ed8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4ed8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4edc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f4edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4ee0: 0x2422023  subu        $a0, $s2, $v0
    ctx->pc = 0x1f4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f4ee4: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x1f4ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f4ee8: 0xa604007e  sh          $a0, 0x7E($s0)
    ctx->pc = 0x1f4ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f4eec: 0xa6030082  sh          $v1, 0x82($s0)
    ctx->pc = 0x1f4eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f4ef0: 0xa6020078  sh          $v0, 0x78($s0)
    ctx->pc = 0x1f4ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4ef4: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x1f4ef4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1f4ef8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1f4ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f4efc: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x1f4efcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4f00: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1f4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1f4f04: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x1f4f04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1f4f08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f4f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f4f0c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1f4f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4f10: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1f4f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1f4f14: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1f4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1f4f18: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x1f4f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f4f1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4F1Cu;
    {
        const bool branch_taken_0x1f4f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F1Cu;
        // 0x1f4f20: 0x3069ffff  andi        $t1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f1c) {
            ctx->pc = 0x1F4F30u;
            goto label_1f4f30;
        }
    }
    ctx->pc = 0x1F4F24u;
    // 0x1f4f24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F4F24u;
    {
        const bool branch_taken_0x1f4f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F24u;
        // 0x1f4f28: 0xa6000086  sh          $zero, 0x86($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f24) {
            ctx->pc = 0x1F4F58u;
            goto label_1f4f58;
        }
    }
    ctx->pc = 0x1F4F2Cu;
    // 0x1f4f2c: 0x0  nop
    ctx->pc = 0x1f4f2cu;
    // NOP
label_1f4f30:
    // 0x1f4f30: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1f4f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f4f34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4F34u;
    {
        const bool branch_taken_0x1f4f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f34) {
            ctx->pc = 0x1F4F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F34u;
            // 0x1f4f38: 0x124102b  sltu        $v0, $t1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F48u;
            goto label_1f4f48;
        }
    }
    ctx->pc = 0x1F4F3Cu;
    // 0x1f4f3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4F3Cu;
    {
        const bool branch_taken_0x1f4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F3Cu;
        // 0x1f4f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f3c) {
            ctx->pc = 0x1F4F54u;
            goto label_1f4f54;
        }
    }
    ctx->pc = 0x1F4F44u;
    // 0x1f4f44: 0x0  nop
    ctx->pc = 0x1f4f44u;
    // NOP
label_1f4f48:
    // 0x1f4f48: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4F48u;
    {
        const bool branch_taken_0x1f4f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f48) {
            ctx->pc = 0x1F4F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F48u;
            // 0x1f4f4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F54u;
            goto label_1f4f54;
        }
    }
    ctx->pc = 0x1F4F50u;
    // 0x1f4f50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4f54:
    // 0x1f4f54: 0xa6020086  sh          $v0, 0x86($s0)
    ctx->pc = 0x1f4f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 2));
label_1f4f58:
    // 0x1f4f58: 0x96040078  lhu         $a0, 0x78($s0)
    ctx->pc = 0x1f4f58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1f4f5c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1f4f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4f60: 0x1041823  subu        $v1, $t0, $a0
    ctx->pc = 0x1f4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1f4f64: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1f4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f4f68: 0x34403  sra         $t0, $v1, 16
    ctx->pc = 0x1f4f68u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f4f6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f4f70: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1f4f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4f74: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x1f4f74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f4f78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4F78u;
    {
        const bool branch_taken_0x1f4f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F78u;
        // 0x1f4f7c: 0xc5102b  sltu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f78) {
            ctx->pc = 0x1F4F88u;
            goto label_1f4f88;
        }
    }
    ctx->pc = 0x1F4F80u;
    // 0x1f4f80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4F80u;
    {
        const bool branch_taken_0x1f4f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F80u;
        // 0x1f4f84: 0xa6000088  sh          $zero, 0x88($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f80) {
            ctx->pc = 0x1F4FA8u;
            goto label_1f4fa8;
        }
    }
    ctx->pc = 0x1F4F88u;
label_1f4f88:
    // 0x1f4f88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4F88u;
    {
        const bool branch_taken_0x1f4f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f88) {
            ctx->pc = 0x1F4F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F88u;
            // 0x1f4f8c: 0x125102b  sltu        $v0, $t1, $a1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F98u;
            goto label_1f4f98;
        }
    }
    ctx->pc = 0x1F4F90u;
    // 0x1f4f90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4F90u;
    {
        const bool branch_taken_0x1f4f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F90u;
        // 0x1f4f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f90) {
            ctx->pc = 0x1F4FA4u;
            goto label_1f4fa4;
        }
    }
    ctx->pc = 0x1F4F98u;
label_1f4f98:
    // 0x1f4f98: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4F98u;
    {
        const bool branch_taken_0x1f4f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4f98) {
            ctx->pc = 0x1F4F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4F98u;
            // 0x1f4f9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4FA4u;
            goto label_1f4fa4;
        }
    }
    ctx->pc = 0x1F4FA0u;
    // 0x1f4fa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4fa4:
    // 0x1f4fa4: 0xa6020088  sh          $v0, 0x88($s0)
    ctx->pc = 0x1f4fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 2));
label_1f4fa8:
    // 0x1f4fa8: 0x8603007e  lh          $v1, 0x7E($s0)
    ctx->pc = 0x1f4fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x1f4fac: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4FACu;
    {
        const bool branch_taken_0x1f4fac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f4fac) {
            ctx->pc = 0x1F4FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4FACu;
            // 0x1f4fb0: 0xa6030080  sh          $v1, 0x80($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4FBCu;
            goto label_1f4fbc;
        }
    }
    ctx->pc = 0x1F4FB4u;
    // 0x1f4fb4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1f4fb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1f4fb8: 0xa6020080  sh          $v0, 0x80($s0)
    ctx->pc = 0x1f4fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
label_1f4fbc:
    // 0x1f4fbc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1f4fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fc0: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4FC0u;
    {
        const bool branch_taken_0x1f4fc0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f4fc0) {
            ctx->pc = 0x1F4FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4FC0u;
            // 0x1f4fc4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4FD8u;
            goto label_1f4fd8;
        }
    }
    ctx->pc = 0x1F4FC8u;
    // 0x1f4fc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f4fcc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4fd0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4fd4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1f4fd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1f4fd8:
    // 0x1f4fd8: 0x86030082  lh          $v1, 0x82($s0)
    ctx->pc = 0x1f4fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x1f4fdc: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4FDCu;
    {
        const bool branch_taken_0x1f4fdc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f4fdc) {
            ctx->pc = 0x1F4FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4FDCu;
            // 0x1f4fe0: 0xa6030084  sh          $v1, 0x84($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4FECu;
            goto label_1f4fec;
        }
    }
    ctx->pc = 0x1F4FE4u;
    // 0x1f4fe4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1f4fe4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1f4fe8: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x1f4fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
label_1f4fec:
    // 0x1f4fec: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x1f4fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4ff0: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1f4ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1f4ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f4ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f4ff8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f4ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4ffc: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x1F4FFCu;
    {
        const bool branch_taken_0x1f4ffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4ffc) {
            ctx->pc = 0x1F5000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4FFCu;
            // 0x1f5000: 0x86030086  lh          $v1, 0x86($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5048u;
            goto label_1f5048;
        }
    }
    ctx->pc = 0x1F5004u;
    // 0x1f5004: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x1f5004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1f5008: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x1f5008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1f500c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F500Cu;
    {
        const bool branch_taken_0x1f500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F500Cu;
        // 0x1f5010: 0x24828000  addiu       $v0, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f500c) {
            ctx->pc = 0x1F5020u;
            goto label_1f5020;
        }
    }
    ctx->pc = 0x1F5014u;
    // 0x1f5014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5014u;
    {
        const bool branch_taken_0x1f5014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5014u;
        // 0x1f5018: 0xa604008a  sh          $a0, 0x8A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5014) {
            ctx->pc = 0x1F5024u;
            goto label_1f5024;
        }
    }
    ctx->pc = 0x1F501Cu;
    // 0x1f501c: 0x0  nop
    ctx->pc = 0x1f501cu;
    // NOP
label_1f5020:
    // 0x1f5020: 0xa602008a  sh          $v0, 0x8A($s0)
    ctx->pc = 0x1f5020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 2));
label_1f5024:
    // 0x1f5024: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1f5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f5028: 0x2c424000  sltiu       $v0, $v0, 0x4000
    ctx->pc = 0x1f5028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1f502c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F502Cu;
    {
        const bool branch_taken_0x1f502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F502Cu;
        // 0x1f5030: 0x24828000  addiu       $v0, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f502c) {
            ctx->pc = 0x1F5040u;
            goto label_1f5040;
        }
    }
    ctx->pc = 0x1F5034u;
    // 0x1f5034: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5034u;
    {
        const bool branch_taken_0x1f5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5034u;
        // 0x1f5038: 0xa604008c  sh          $a0, 0x8C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5034) {
            ctx->pc = 0x1F5044u;
            goto label_1f5044;
        }
    }
    ctx->pc = 0x1F503Cu;
    // 0x1f503c: 0x0  nop
    ctx->pc = 0x1f503cu;
    // NOP
label_1f5040:
    // 0x1f5040: 0xa602008c  sh          $v0, 0x8C($s0)
    ctx->pc = 0x1f5040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 2));
label_1f5044:
    // 0x1f5044: 0x86030086  lh          $v1, 0x86($s0)
    ctx->pc = 0x1f5044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
label_1f5048:
    // 0x1f5048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f504c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F504Cu;
    {
        const bool branch_taken_0x1f504c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F504Cu;
        // 0x1f5050: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f504c) {
            ctx->pc = 0x1F5060u;
            goto label_1f5060;
        }
    }
    ctx->pc = 0x1F5054u;
    // 0x1f5054: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f5054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5058u;
    {
        const bool branch_taken_0x1f5058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5058u;
        // 0x1f505c: 0xa6020086  sh          $v0, 0x86($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5058) {
            ctx->pc = 0x1F5068u;
            goto label_1f5068;
        }
    }
    ctx->pc = 0x1F5060u;
label_1f5060:
    // 0x1f5060: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5060u;
    {
        const bool branch_taken_0x1f5060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f5060) {
            ctx->pc = 0x1F5064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5060u;
            // 0x1f5064: 0xa6040086  sh          $a0, 0x86($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5068u;
            goto label_1f5068;
        }
    }
    ctx->pc = 0x1F5068u;
label_1f5068:
    // 0x1f5068: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x1f5068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1f506c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5070: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5070u;
    {
        const bool branch_taken_0x1f5070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5070u;
        // 0x1f5074: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5070) {
            ctx->pc = 0x1F5088u;
            goto label_1f5088;
        }
    }
    ctx->pc = 0x1F5078u;
    // 0x1f5078: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f5078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f507c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F507Cu;
    {
        const bool branch_taken_0x1f507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F507Cu;
        // 0x1f5080: 0xa6020088  sh          $v0, 0x88($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f507c) {
            ctx->pc = 0x1F5090u;
            goto label_1f5090;
        }
    }
    ctx->pc = 0x1F5084u;
    // 0x1f5084: 0x0  nop
    ctx->pc = 0x1f5084u;
    // NOP
label_1f5088:
    // 0x1f5088: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5088u;
    {
        const bool branch_taken_0x1f5088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f5088) {
            ctx->pc = 0x1F508Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5088u;
            // 0x1f508c: 0xa6040088  sh          $a0, 0x88($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5090u;
            goto label_1f5090;
        }
    }
    ctx->pc = 0x1F5090u;
label_1f5090:
    // 0x1f5090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5094: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5098: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f509c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f50a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F50A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F50A0u;
        // 0x1f50a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F50A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F50A8u;
}
