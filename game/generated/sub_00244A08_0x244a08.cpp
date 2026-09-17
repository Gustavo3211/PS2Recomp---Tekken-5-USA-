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

// Function: sub_00244A08
// Address: 0x244a08 - 0x244bc8
void sub_00244A08_0x244a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244A08_0x244a08");
#endif

    switch (ctx->pc) {
        case 0x244a38u: goto label_244a38;
        case 0x244a90u: goto label_244a90;
        default: break;
    }

    ctx->pc = 0x244a08u;

    // 0x244a08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x244a0c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x244a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x244a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a18: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x244a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x244a1c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x244a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x244a20: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x244a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x244a24: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x244a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x244a28: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x244a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x244a2c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x244a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x244a30: 0xc091220  jal         func_244880
    ctx->pc = 0x244A30u;
    SET_GPR_U32(ctx, 31, 0x244A38u);
    ctx->pc = 0x244A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A30u;
    // 0x244a34: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x244880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244880u, 0x244A30u, 0x244A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A38u;
label_244a38:
    // 0x244a38: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x244a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x244a3c: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x244a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x244a40: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x244a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244a44: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x244a44u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244a48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x244a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244a4c: 0x26190004  addiu       $t9, $s0, 0x4
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x244a50: 0xc6020088  lwc1        $f2, 0x88($s0)
    ctx->pc = 0x244a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x244a54: 0x26180008  addiu       $t8, $s0, 0x8
    ctx->pc = 0x244a54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x244a58: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244a5c: 0xc603008c  lwc1        $f3, 0x8C($s0)
    ctx->pc = 0x244a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x244a60: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x244a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x244a64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244a64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244a68: 0xe6010084  swc1        $f1, 0x84($s0)
    ctx->pc = 0x244a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x244a6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x244a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244a70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244a74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x244a74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x244a78: 0xe6020088  swc1        $f2, 0x88($s0)
    ctx->pc = 0x244a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x244a7c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x244a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244a80: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244a84: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x244a84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x244a88: 0xe603008c  swc1        $f3, 0x8C($s0)
    ctx->pc = 0x244a88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x244a8c: 0x0  nop
    ctx->pc = 0x244a8cu;
    // NOP
label_244a90:
    // 0x244a90: 0xf2080  sll         $a0, $t7, 2
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x244a94: 0xf1840  sll         $v1, $t7, 1
    ctx->pc = 0x244a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x244a98: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x244a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x244a9c: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x244aa0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x244aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244aa4: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x244aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x244aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x244aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x244aac: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x244aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x244ab0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x244ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244ab4: 0x2034821  addu        $t1, $s0, $v1
    ctx->pc = 0x244ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x244ab8: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x244ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244abc: 0x3235821  addu        $t3, $t9, $v1
    ctx->pc = 0x244abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x244ac0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244ac4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x244ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244ac8: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x244ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x244acc: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x244accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x244ad0: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x244ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x244ad4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x244ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x244ad8: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x244adc: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x244adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x244ae0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244ae0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244ae4: 0x3225021  addu        $t2, $t9, $v0
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x244ae8: 0x3026021  addu        $t4, $t8, $v0
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x244aec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x244aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x244af0: 0x3252021  addu        $a0, $t9, $a1
    ctx->pc = 0x244af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x244af4: 0x3056821  addu        $t5, $t8, $a1
    ctx->pc = 0x244af4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x244af8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x244af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x244afc: 0x29ee0003  slti        $t6, $t7, 0x3
    ctx->pc = 0x244afcu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x244b00: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x244b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x244b04: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x244b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b08: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x244b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b14: 0xe5610000  swc1        $f1, 0x0($t3)
    ctx->pc = 0x244b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x244b18: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x244b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x244b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b28: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x244b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x244b2c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x244b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b30: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x244b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b3c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x244b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x244b40: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x244b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b44: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x244b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b48: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b50: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x244b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x244b54: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x244b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b58: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x244b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b64: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x244b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x244b68: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x244b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b6c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x244b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b78: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x244b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x244b7c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x244b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b80: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x244b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b84: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244b8c: 0xe5a10000  swc1        $f1, 0x0($t5)
    ctx->pc = 0x244b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x244b90: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x244b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244b94: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x244b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244b98: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x244b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x244b9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244ba0: 0x15c0ffbb  bnez        $t6, . + 4 + (-0x45 << 2)
    ctx->pc = 0x244BA0u;
    {
        const bool branch_taken_0x244ba0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x244BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BA0u;
        // 0x244ba4: 0xe4a10000  swc1        $f1, 0x0($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ba0) {
            ctx->pc = 0x244A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244a90;
        }
    }
    ctx->pc = 0x244BA8u;
    // 0x244ba8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x244ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x244bac: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x244bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x244bb0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x244bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x244bb4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x244bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x244bb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x244bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x244bbc: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x244bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x244BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BC0u;
        // 0x244bc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244BC8u;
}
