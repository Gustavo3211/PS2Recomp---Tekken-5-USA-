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

// Function: sub_0027EE08
// Address: 0x27ee08 - 0x27efe8
void sub_0027EE08_0x27ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EE08_0x27ee08");
#endif

    switch (ctx->pc) {
        case 0x27ee38u: goto label_27ee38;
        case 0x27efc8u: goto label_27efc8;
        case 0x27efd0u: goto label_27efd0;
        default: break;
    }

    ctx->pc = 0x27ee08u;

    // 0x27ee08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ee0c: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x27ee0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
    // 0x27ee10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ee14: 0x25230880  addiu       $v1, $t1, 0x880
    ctx->pc = 0x27ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2176));
    // 0x27ee18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27ee1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27ee1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27ee20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee24: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x27ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1708B0u));
    // 0x27ee28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27EE28u;
    {
        const bool branch_taken_0x27ee28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE28u;
        // 0x27ee2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee28) {
            ctx->pc = 0x27EE68u;
            goto label_27ee68;
        }
    }
    ctx->pc = 0x27EE30u;
    // 0x27ee30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x27ee30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ee34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27ee38:
    // 0x27ee38: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x27ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x27ee3c: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x27ee3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27ee40: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27EE40u;
    {
        const bool branch_taken_0x27ee40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE40u;
        // 0x27ee44: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee40) {
            ctx->pc = 0x27EE68u;
            goto label_27ee68;
        }
    }
    ctx->pc = 0x27EE48u;
    // 0x27ee48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27ee4c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x27ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27ee50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27ee54: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x27ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x27ee58: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x27ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x27ee5c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x27EE5Cu;
    {
        const bool branch_taken_0x27ee5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ee5c) {
            ctx->pc = 0x27EE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EE5Cu;
            // 0x27ee60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ee38;
        }
    }
    ctx->pc = 0x27EE64u;
    // 0x27ee64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x27ee64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ee68:
    // 0x27ee68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ee6c: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x27EE6Cu;
    {
        const bool branch_taken_0x27ee6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE6Cu;
        // 0x27ee70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee6c) {
            ctx->pc = 0x27EFD8u;
            goto label_27efd8;
        }
    }
    ctx->pc = 0x27EE74u;
    // 0x27ee74: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x27ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ee78: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x27ee78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x27ee7c: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x27ee7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ee80: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x27EE80u;
    {
        const bool branch_taken_0x27ee80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE80u;
        // 0x27ee84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee80) {
            ctx->pc = 0x27EFDCu;
            goto label_27efdc;
        }
    }
    ctx->pc = 0x27EE88u;
    // 0x27ee88: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x27ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ee8c: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x27ee8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ee90: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x27EE90u;
    {
        const bool branch_taken_0x27ee90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ee90) {
            ctx->pc = 0x27EE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27EE90u;
            // 0x27ee94: 0x71140  sll         $v0, $a3, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27EEA0u;
            goto label_27eea0;
        }
    }
    ctx->pc = 0x27EE98u;
    // 0x27ee98: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27EE98u;
    {
        const bool branch_taken_0x27ee98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ee98) {
            ctx->pc = 0x27EFDCu;
            goto label_27efdc;
        }
    }
    ctx->pc = 0x27EEA0u;
label_27eea0:
    // 0x27eea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27eea4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27eea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x27eea8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x27eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27eeac: 0x25240880  addiu       $a0, $t1, 0x880
    ctx->pc = 0x27eeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2176));
    // 0x27eeb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27eeb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27eeb8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x27eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27eebc: 0xc7848e38  lwc1        $f4, -0x71C8($gp)
    ctx->pc = 0x27eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27eec0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27eec4: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x27eec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27eec8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x27eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x27eecc: 0xae05004c  sw          $a1, 0x4C($s0)
    ctx->pc = 0x27eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
    // 0x27eed0: 0xe606005c  swc1        $f6, 0x5C($s0)
    ctx->pc = 0x27eed0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x27eed4: 0xe6060058  swc1        $f6, 0x58($s0)
    ctx->pc = 0x27eed4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x27eed8: 0xe6060054  swc1        $f6, 0x54($s0)
    ctx->pc = 0x27eed8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x27eedc: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x27eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27eee0: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x27eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27eee4: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x27eee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x27eee8: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x27eee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x27eeec: 0x0  nop
    ctx->pc = 0x27eeecu;
    // NOP
    // 0x27eef0: 0x0  nop
    ctx->pc = 0x27eef0u;
    // NOP
    // 0x27eef4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27eef4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27eef8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x27eef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x27eefc: 0x0  nop
    ctx->pc = 0x27eefcu;
    // NOP
    // 0x27ef00: 0x0  nop
    ctx->pc = 0x27ef00u;
    // NOP
    // 0x27ef04: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x27ef04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x27ef08: 0x0  nop
    ctx->pc = 0x27ef08u;
    // NOP
    // 0x27ef0c: 0x0  nop
    ctx->pc = 0x27ef0cu;
    // NOP
    // 0x27ef10: 0x46040104  c1          0x40104
    ctx->pc = 0x27ef10u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x27ef14: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x27ef14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x27ef18: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x27ef18u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
    // 0x27ef1c: 0xe6070014  swc1        $f7, 0x14($s0)
    ctx->pc = 0x27ef1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x27ef20: 0xe606001c  swc1        $f6, 0x1C($s0)
    ctx->pc = 0x27ef20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x27ef24: 0x0  nop
    ctx->pc = 0x27ef24u;
    // NOP
    // 0x27ef28: 0x0  nop
    ctx->pc = 0x27ef28u;
    // NOP
    // 0x27ef2c: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x27ef2cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[5];
    // 0x27ef30: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27ef30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x27ef34: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x27ef34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x27ef38: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x27ef38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27ef3c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x27ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x27ef40: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x27ef40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27ef44: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ef48: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x27ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x27ef4c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ef50: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x27ef50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x27ef54: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x27ef54u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x27ef58: 0x460018d6  rsqrt.s     $f3, $f3, $f0
    ctx->pc = 0x27ef58u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x27ef5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ef5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef60: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x27ef60u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27ef64: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x27ef64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x27ef68: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x27ef68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x27ef6c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x27ef6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x27ef70: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x27ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x27ef74: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x27ef74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x27ef78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27ef78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27ef7c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ef80: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x27ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ef84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ef84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ef88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ef88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ef8c: 0x0  nop
    ctx->pc = 0x27ef8cu;
    // NOP
    // 0x27ef90: 0x0  nop
    ctx->pc = 0x27ef90u;
    // NOP
    // 0x27ef94: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27ef94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x27ef98: 0xe60d003c  swc1        $f13, 0x3C($s0)
    ctx->pc = 0x27ef98u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x27ef9c: 0xe60c0038  swc1        $f12, 0x38($s0)
    ctx->pc = 0x27ef9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27efa0: 0x0  nop
    ctx->pc = 0x27efa0u;
    // NOP
    // 0x27efa4: 0x0  nop
    ctx->pc = 0x27efa4u;
    // NOP
    // 0x27efa8: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x27efa8u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
    // 0x27efac: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x27efacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x27efb0: 0x0  nop
    ctx->pc = 0x27efb0u;
    // NOP
    // 0x27efb4: 0x0  nop
    ctx->pc = 0x27efb4u;
    // NOP
    // 0x27efb8: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x27efb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[1];
    // 0x27efbc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x27efbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x27efc0: 0xe6030044  swc1        $f3, 0x44($s0)
    ctx->pc = 0x27efc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x27efc4: 0x0  nop
    ctx->pc = 0x27efc4u;
    // NOP
label_27efc8:
    // 0x27efc8: 0xc09fb1a  jal         func_27EC68
    ctx->pc = 0x27EFC8u;
    SET_GPR_U32(ctx, 31, 0x27EFD0u);
    ctx->pc = 0x27EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFC8u;
    // 0x27efcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EC68u, 0x27EFC8u, 0x27EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFD0u;
label_27efd0:
    // 0x27efd0: 0x1440fffd  bnez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x27EFD0u;
    {
        const bool branch_taken_0x27efd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFD0u;
        // 0x27efd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27efd0) {
            ctx->pc = 0x27EFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27efc8;
        }
    }
    ctx->pc = 0x27EFD8u;
label_27efd8:
    // 0x27efd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27efd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27efdc:
    // 0x27efdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27efdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27efe0: 0x3e00008  jr          $ra
    ctx->pc = 0x27EFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EFE0u;
        // 0x27efe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EFE8u;
}
