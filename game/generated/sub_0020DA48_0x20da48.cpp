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

// Function: sub_0020DA48
// Address: 0x20da48 - 0x20dd60
void sub_0020DA48_0x20da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA48_0x20da48");
#endif

    ctx->pc = 0x20da48u;

    // 0x20da48: 0xc48b000c  lwc1        $f11, 0xC($a0)
    ctx->pc = 0x20da48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20da4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20da4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20da50: 0xc4880000  lwc1        $f8, 0x0($a0)
    ctx->pc = 0x20da50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20da54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20da54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20da58: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x20da58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x20da5c: 0x46085b41  sub.s       $f13, $f11, $f8
    ctx->pc = 0x20da5cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x20da60: 0xc4af0000  lwc1        $f15, 0x0($a1)
    ctx->pc = 0x20da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x20da64: 0x46085800  add.s       $f0, $f11, $f8
    ctx->pc = 0x20da64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x20da68: 0xc4a70010  lwc1        $f7, 0x10($a1)
    ctx->pc = 0x20da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20da6c: 0x46006845  abs.s       $f1, $f13
    ctx->pc = 0x20da6cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[13]);
    // 0x20da70: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x20da70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x20da74: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x20da74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x20da78: 0x46007801  sub.s       $f0, $f15, $f0
    ctx->pc = 0x20da78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x20da7c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x20da7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x20da80: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20da80u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20da84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20da84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20da88: 0x450100b3  bc1t        . + 4 + (0xB3 << 2)
    ctx->pc = 0x20DA88u;
    {
        const bool branch_taken_0x20da88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA88u;
        // 0x20da8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da88) {
            ctx->pc = 0x20DD58u;
            goto label_20dd58;
        }
    }
    ctx->pc = 0x20DA90u;
    // 0x20da90: 0xc4850014  lwc1        $f5, 0x14($a0)
    ctx->pc = 0x20da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20da94: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x20da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20da98: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x20da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20da9c: 0x46062b01  sub.s       $f12, $f5, $f6
    ctx->pc = 0x20da9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x20daa0: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x20daa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x20daa4: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x20daa4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x20daa8: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x20daa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x20daac: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x20daacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x20dab0: 0x46007001  sub.s       $f0, $f14, $f0
    ctx->pc = 0x20dab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x20dab4: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x20dab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x20dab8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20dab8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20dabc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20dabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dac0: 0x450100a5  bc1t        . + 4 + (0xA5 << 2)
    ctx->pc = 0x20DAC0u;
    {
        const bool branch_taken_0x20dac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dac0) {
            ctx->pc = 0x20DD58u;
            goto label_20dd58;
        }
    }
    ctx->pc = 0x20DAC8u;
    // 0x20dac8: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x20dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20dacc: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x20daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20dad0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x20dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20dad4: 0x46032241  sub.s       $f9, $f4, $f3
    ctx->pc = 0x20dad4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x20dad8: 0x46032000  add.s       $f0, $f4, $f3
    ctx->pc = 0x20dad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x20dadc: 0x46004845  abs.s       $f1, $f9
    ctx->pc = 0x20dadcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[9]);
    // 0x20dae0: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x20dae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x20dae4: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x20dae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x20dae8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x20dae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x20daec: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x20daecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x20daf0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20daf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20daf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20daf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20daf8: 0x45010097  bc1t        . + 4 + (0x97 << 2)
    ctx->pc = 0x20DAF8u;
    {
        const bool branch_taken_0x20daf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20daf8) {
            ctx->pc = 0x20DD58u;
            goto label_20dd58;
        }
    }
    ctx->pc = 0x20DB00u;
    // 0x20db00: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x20db00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20db04: 0xe7ab000c  swc1        $f11, 0xC($sp)
    ctx->pc = 0x20db04u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x20db08: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x20db08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20db0c: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x20db0cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20db10: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x20DB10u;
    {
        const bool branch_taken_0x20db10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB10u;
        // 0x20db14: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db10) {
            ctx->pc = 0x20DC70u;
            goto label_20dc70;
        }
    }
    ctx->pc = 0x20DB18u;
    // 0x20db18: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x20db18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20db1c: 0x46071000  add.s       $f0, $f2, $f7
    ctx->pc = 0x20db1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x20db20: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x20DB20u;
    {
        const bool branch_taken_0x20db20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB20u;
        // 0x20db24: 0x46071141  sub.s       $f5, $f2, $f7 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db20) {
            ctx->pc = 0x20DBD0u;
            goto label_20dbd0;
        }
    }
    ctx->pc = 0x20DB28u;
    // 0x20db28: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x20db28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20db2c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x20DB2Cu;
    {
        const bool branch_taken_0x20db2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20db2c) {
            ctx->pc = 0x20DB78u;
            goto label_20db78;
        }
    }
    ctx->pc = 0x20DB34u;
    // 0x20db34: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x20db34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x20db38: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x20db38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x20db3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20db3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20db40: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x20db40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x20db44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20db44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20db48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20db48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20db4c: 0x0  nop
    ctx->pc = 0x20db4cu;
    // NOP
    // 0x20db50: 0x0  nop
    ctx->pc = 0x20db50u;
    // NOP
    // 0x20db54: 0x46090003  div.s       $f0, $f0, $f9
    ctx->pc = 0x20db54u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[9];
    // 0x20db58: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x20db58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20db5c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20db5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x20db60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20db60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20db64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20db64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20db68: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x20db68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x20db6c: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x20db6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x20db70: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20db70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20db74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20db74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20db78:
    // 0x20db78: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x20db78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20db7c: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x20DB7Cu;
    {
        const bool branch_taken_0x20db7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DB7Cu;
        // 0x20db80: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db7c) {
            ctx->pc = 0x20DC74u;
            goto label_20dc74;
        }
    }
    ctx->pc = 0x20DB84u;
    // 0x20db84: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x20db84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x20db88: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x20db88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x20db8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20db8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20db90: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x20db90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x20db94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20db94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20db98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20db98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20db9c: 0x0  nop
    ctx->pc = 0x20db9cu;
    // NOP
    // 0x20dba0: 0x0  nop
    ctx->pc = 0x20dba0u;
    // NOP
    // 0x20dba4: 0x46090003  div.s       $f0, $f0, $f9
    ctx->pc = 0x20dba4u;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[9];
    // 0x20dba8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x20dba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20dbac: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20dbacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x20dbb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20dbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20dbb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20dbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20dbb8: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x20dbb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x20dbbc: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x20dbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x20dbc0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x20dbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20dbc4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x20DBC4u;
    {
        const bool branch_taken_0x20dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DBC4u;
        // 0x20dbc8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dbc4) {
            ctx->pc = 0x20DC70u;
            goto label_20dc70;
        }
    }
    ctx->pc = 0x20DBCCu;
    // 0x20dbcc: 0x0  nop
    ctx->pc = 0x20dbccu;
    // NOP
label_20dbd0:
    // 0x20dbd0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x20dbd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dbd4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x20DBD4u;
    {
        const bool branch_taken_0x20dbd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dbd4) {
            ctx->pc = 0x20DC20u;
            goto label_20dc20;
        }
    }
    ctx->pc = 0x20DBDCu;
    // 0x20dbdc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x20dbdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x20dbe0: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x20dbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x20dbe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20dbe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20dbe8: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x20dbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x20dbec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20dbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20dbf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20dbf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20dbf4: 0x0  nop
    ctx->pc = 0x20dbf4u;
    // NOP
    // 0x20dbf8: 0x0  nop
    ctx->pc = 0x20dbf8u;
    // NOP
    // 0x20dbfc: 0x46090003  div.s       $f0, $f0, $f9
    ctx->pc = 0x20dbfcu;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[9];
    // 0x20dc00: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x20dc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20dc04: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20dc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x20dc08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20dc08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20dc0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20dc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20dc10: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x20dc10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x20dc14: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x20dc14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x20dc18: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x20dc18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20dc1c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x20dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_20dc20:
    // 0x20dc20: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x20dc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dc24: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20DC24u;
    {
        const bool branch_taken_0x20dc24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DC24u;
        // 0x20dc28: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc24) {
            ctx->pc = 0x20DC74u;
            goto label_20dc74;
        }
    }
    ctx->pc = 0x20DC2Cu;
    // 0x20dc2c: 0x46032801  sub.s       $f0, $f5, $f3
    ctx->pc = 0x20dc2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x20dc30: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x20dc34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20dc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20dc38: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x20dc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x20dc3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20dc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20dc40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20dc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20dc44: 0x0  nop
    ctx->pc = 0x20dc44u;
    // NOP
    // 0x20dc48: 0x0  nop
    ctx->pc = 0x20dc48u;
    // NOP
    // 0x20dc4c: 0x46090003  div.s       $f0, $f0, $f9
    ctx->pc = 0x20dc4cu;
    if (ctx->f[9] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[9];
    // 0x20dc50: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x20dc50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20dc54: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20dc54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x20dc58: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20dc58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20dc5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20dc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20dc60: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x20dc60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x20dc64: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x20dc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x20dc68: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20dc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20dc6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20dc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20dc70:
    // 0x20dc70: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20dc74:
    // 0x20dc74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x20dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20dc78: 0xc7ab000c  lwc1        $f11, 0xC($sp)
    ctx->pc = 0x20dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20dc7c: 0x460f0201  sub.s       $f8, $f0, $f15
    ctx->pc = 0x20dc7cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x20dc80: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x20dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20dc84: 0x460e09c1  sub.s       $f7, $f1, $f14
    ctx->pc = 0x20dc84u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[14]);
    // 0x20dc88: 0x46005981  sub.s       $f6, $f11, $f0
    ctx->pc = 0x20dc88u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x20dc8c: 0x46015141  sub.s       $f5, $f10, $f1
    ctx->pc = 0x20dc8cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x20dc90: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x20dc90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x20dc94: 0x460630c2  mul.s       $f3, $f6, $f6
    ctx->pc = 0x20dc94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x20dc98: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x20dc98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x20dc9c: 0x46083002  mul.s       $f0, $f6, $f8
    ctx->pc = 0x20dc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x20dca0: 0x46072842  mul.s       $f1, $f5, $f7
    ctx->pc = 0x20dca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x20dca4: 0x46021900  add.s       $f4, $f3, $f2
    ctx->pc = 0x20dca4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x20dca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20dca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20dcac: 0x46092032  c.eq.s      $f4, $f9
    ctx->pc = 0x20dcacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dcb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20DCB0u;
    {
        const bool branch_taken_0x20dcb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCB0u;
        // 0x20dcb4: 0x460000c7  neg.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcb0) {
            ctx->pc = 0x20DCC8u;
            goto label_20dcc8;
        }
    }
    ctx->pc = 0x20DCB8u;
    // 0x20dcb8: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x20dcb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x20dcbc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20DCBCu;
    {
        const bool branch_taken_0x20dcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCBCu;
        // 0x20dcc0: 0x46073802  mul.s       $f0, $f7, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcbc) {
            ctx->pc = 0x20DD44u;
            goto label_20dd44;
        }
    }
    ctx->pc = 0x20DCC4u;
    // 0x20dcc4: 0x0  nop
    ctx->pc = 0x20dcc4u;
    // NOP
label_20dcc8:
    // 0x20dcc8: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x20dcc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dccc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x20DCCCu;
    {
        const bool branch_taken_0x20dccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dccc) {
            ctx->pc = 0x20DD18u;
            goto label_20dd18;
        }
    }
    ctx->pc = 0x20DCD4u;
    // 0x20dcd4: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x20dcd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dcd8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x20DCD8u;
    {
        const bool branch_taken_0x20dcd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dcd8) {
            ctx->pc = 0x20DD18u;
            goto label_20dd18;
        }
    }
    ctx->pc = 0x20DCE0u;
    // 0x20dce0: 0x46032842  mul.s       $f1, $f5, $f3
    ctx->pc = 0x20dce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x20dce4: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x20dce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x20dce8: 0x0  nop
    ctx->pc = 0x20dce8u;
    // NOP
    // 0x20dcec: 0x0  nop
    ctx->pc = 0x20dcecu;
    // NOP
    // 0x20dcf0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x20dcf0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x20dcf4: 0x0  nop
    ctx->pc = 0x20dcf4u;
    // NOP
    // 0x20dcf8: 0x0  nop
    ctx->pc = 0x20dcf8u;
    // NOP
    // 0x20dcfc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x20dcfcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x20dd00: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x20dd00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x20dd04: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20dd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20dd08: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x20dd08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x20dd0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20dd0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20dd10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20DD10u;
    {
        const bool branch_taken_0x20dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD10u;
        // 0x20dd14: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd10) {
            ctx->pc = 0x20DD48u;
            goto label_20dd48;
        }
    }
    ctx->pc = 0x20DD18u;
label_20dd18:
    // 0x20dd18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20dd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20dd1c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x20dd1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dd20: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x20DD20u;
    {
        const bool branch_taken_0x20dd20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dd20) {
            ctx->pc = 0x20DD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DD20u;
            // 0x20dd24: 0x460f5841  sub.s       $f1, $f11, $f15 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[15]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DD38u;
            goto label_20dd38;
        }
    }
    ctx->pc = 0x20DD28u;
    // 0x20dd28: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x20dd28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x20dd2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20DD2Cu;
    {
        const bool branch_taken_0x20dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD2Cu;
        // 0x20dd30: 0x46073802  mul.s       $f0, $f7, $f7 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd2c) {
            ctx->pc = 0x20DD44u;
            goto label_20dd44;
        }
    }
    ctx->pc = 0x20DD34u;
    // 0x20dd34: 0x0  nop
    ctx->pc = 0x20dd34u;
    // NOP
label_20dd38:
    // 0x20dd38: 0x460e5001  sub.s       $f0, $f10, $f14
    ctx->pc = 0x20dd38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[14]);
    // 0x20dd3c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20dd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20dd40: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20dd40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_20dd44:
    // 0x20dd44: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20dd44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20dd48:
    // 0x20dd48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x20dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20dd4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20dd4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dd50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20DD50u;
    {
        const bool branch_taken_0x20dd50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20dd50) {
            ctx->pc = 0x20DD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DD50u;
            // 0x20dd54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DD58u;
            goto label_20dd58;
        }
    }
    ctx->pc = 0x20DD58u;
label_20dd58:
    // 0x20dd58: 0x3e00008  jr          $ra
    ctx->pc = 0x20DD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD58u;
        // 0x20dd5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DD60u;
}
