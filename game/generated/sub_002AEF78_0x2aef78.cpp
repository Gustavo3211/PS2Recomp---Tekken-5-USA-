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

// Function: sub_002AEF78
// Address: 0x2aef78 - 0x2af7d0
void sub_002AEF78_0x2aef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEF78_0x2aef78");
#endif

    switch (ctx->pc) {
        case 0x2af168u: goto label_2af168;
        case 0x2af3f4u: goto label_2af3f4;
        case 0x2af458u: goto label_2af458;
        case 0x2af4c8u: goto label_2af4c8;
        case 0x2af608u: goto label_2af608;
        case 0x2af6c4u: goto label_2af6c4;
        case 0x2af77cu: goto label_2af77c;
        default: break;
    }

    ctx->pc = 0x2aef78u;

    // 0x2aef78: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2aef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2aef7c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2aef7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef80: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2aef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2aef84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aef84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef88: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2aef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2aef8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2aef8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef90: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2aef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2aef94: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2aef94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef98: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x2aef98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2aef9c: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2aef9cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x2aefa0: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x2aefa0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2aefa4: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2aefa4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2aefa8: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2aefa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2aefac: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2aefacu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2aefb0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2aefb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2aefb4: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x2aefb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x2aefb8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2aefb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2aefbc: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2aefbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2aefc0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2aefc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2aefc4: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2aefc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2aefc8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2aefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2aefcc: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2aefccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2aefd0: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2aefd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2aefd4: 0xe7bc0120  swc1        $f28, 0x120($sp)
    ctx->pc = 0x2aefd4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2aefd8: 0xe7bb0118  swc1        $f27, 0x118($sp)
    ctx->pc = 0x2aefd8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2aefdc: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x2aefdcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2aefe0: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x2aefe0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2aefe4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2aefe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2aefe8: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x2aefe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aefec: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x2aefecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aeff0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2aeff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aeff4: 0x8e700038  lw          $s0, 0x38($s3)
    ctx->pc = 0x2aeff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2aeff8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2aeff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2aeffc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2aeffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2af000: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2af000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2af004: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2af004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2af008: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2af008u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2af00c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x2af00cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2af010: 0x4be1e1bc  vmulax.xyzw $ACC, $vf28, $vf1x
    ctx->pc = 0x2af010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2af014: 0x4be2e8bc  vmaddax.xyzw $ACC, $vf29, $vf2x
    ctx->pc = 0x2af014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2af018: 0x4be3f0bc  vmaddax.xyzw $ACC, $vf30, $vf3x
    ctx->pc = 0x2af018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2af01c: 0x4be0ffcb  vmaddw.xyzw $vf31, $vf31, $vf0w
    ctx->pc = 0x2af01cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2af020: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2af020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2af024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af02c: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2af02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af030: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2af030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af034: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af038: 0x46020702  mul.s       $f28, $f0, $f2
    ctx->pc = 0x2af038u;
    ctx->f[28] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af03c: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x2af03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x2af040: 0x46020ec2  mul.s       $f27, $f1, $f2
    ctx->pc = 0x2af040u;
    ctx->f[27] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2af044: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF044u;
    {
        const bool branch_taken_0x2af044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF044u;
        // 0x2af048: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af044) {
            ctx->pc = 0x2AF080u;
            goto label_2af080;
        }
    }
    ctx->pc = 0x2AF04Cu;
    // 0x2af04c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2af04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2af050: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2af050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x2af054: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF054u;
    {
        const bool branch_taken_0x2af054 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2AF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF054u;
        // 0x2af058: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af054) {
            ctx->pc = 0x2AF070u;
            goto label_2af070;
        }
    }
    ctx->pc = 0x2AF05Cu;
    // 0x2af05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af060: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2af060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2af064: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2af064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2af068: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2af068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2af06c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2af06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2af070:
    // 0x2af070: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2af070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2af074: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x2AF074u;
    {
        const bool branch_taken_0x2af074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF074u;
        // 0x2af078: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af074) {
            ctx->pc = 0x2AF6A0u;
            goto label_2af6a0;
        }
    }
    ctx->pc = 0x2AF07Cu;
    // 0x2af07c: 0x0  nop
    ctx->pc = 0x2af07cu;
    // NOP
label_2af080:
    // 0x2af080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af084: 0x14620166  bne         $v1, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x2AF084u;
    {
        const bool branch_taken_0x2af084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF084u;
        // 0x2af088: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af084) {
            ctx->pc = 0x2AF620u;
            goto label_2af620;
        }
    }
    ctx->pc = 0x2AF08Cu;
    // 0x2af08c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2af08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2af090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF090u;
    {
        const bool branch_taken_0x2af090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF090u;
        // 0x2af094: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af090) {
            ctx->pc = 0x2AF0A0u;
            goto label_2af0a0;
        }
    }
    ctx->pc = 0x2AF098u;
    // 0x2af098: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF098u;
    {
        const bool branch_taken_0x2af098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF098u;
        // 0x2af09c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af098) {
            ctx->pc = 0x2AF0B0u;
            goto label_2af0b0;
        }
    }
    ctx->pc = 0x2AF0A0u;
label_2af0a0:
    // 0x2af0a0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2af0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af0a4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2af0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af0a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af0ac: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2af0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2af0b0:
    // 0x2af0b0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2af0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af0b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af0b8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2af0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af0bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2af0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af0c0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF0C0u;
    {
        const bool branch_taken_0x2af0c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2af0c0) {
            ctx->pc = 0x2AF0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF0C0u;
            // 0x2af0c4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF0E8u;
            goto label_2af0e8;
        }
    }
    ctx->pc = 0x2AF0C8u;
    // 0x2af0c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2af0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af0cc: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2af0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2af0d0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2af0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2af0d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af0d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2af0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2af0dc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2af0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2af0e0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2af0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af0e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2af0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2af0e8:
    // 0x2af0e8: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x2af0e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x2af0ec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2af0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2af0f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2af0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af0f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af0f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af0fc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2af0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af100: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2AF100u;
    {
        const bool branch_taken_0x2af100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2af100) {
            ctx->pc = 0x2AF104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF100u;
            // 0x2af104: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF108u;
            goto label_2af108;
        }
    }
    ctx->pc = 0x2AF108u;
label_2af108:
    // 0x2af108: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x2af108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2af10c: 0x8e236930  lw          $v1, 0x6930($s1)
    ctx->pc = 0x2af10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26928)));
    // 0x2af110: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2af110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2af114: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af118: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2af118u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af11c: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF11Cu;
    {
        const bool branch_taken_0x2af11c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF11Cu;
        // 0x2af120: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af11c) {
            ctx->pc = 0x2AF138u;
            goto label_2af138;
        }
    }
    ctx->pc = 0x2AF124u;
    // 0x2af124: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2af124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2af128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af12c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2af12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2af130: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2af130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2af134: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2af138:
    // 0x2af138: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af13c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2af148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2af14c: 0x8c5708c0  lw          $s7, 0x8C0($v0)
    ctx->pc = 0x2af14cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2240)));
    // 0x2af150: 0x1ae000ab  blez        $s7, . + 4 + (0xAB << 2)
    ctx->pc = 0x2AF150u;
    {
        const bool branch_taken_0x2af150 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2AF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF150u;
        // 0x2af154: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af150) {
            ctx->pc = 0x2AF400u;
            goto label_2af400;
        }
    }
    ctx->pc = 0x2AF158u;
    // 0x2af158: 0x26350008  addiu       $s5, $s1, 0x8
    ctx->pc = 0x2af158u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2af15c: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x2af15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2af160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF160u;
    {
        const bool branch_taken_0x2af160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF160u;
        // 0x2af164: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af160) {
            ctx->pc = 0x2AF170u;
            goto label_2af170;
        }
    }
    ctx->pc = 0x2AF168u;
label_2af168:
    // 0x2af168: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af16c: 0x0  nop
    ctx->pc = 0x2af16cu;
    // NOP
label_2af170:
    // 0x2af170: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2af170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af174: 0x1640c0  sll         $t0, $s6, 3
    ctx->pc = 0x2af174u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x2af178: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af17c: 0x1164023  subu        $t0, $t0, $s6
    ctx->pc = 0x2af17cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
    // 0x2af180: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2af184: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2af188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2af188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af18c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af190: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2af190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2af194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af198: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af19c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2af19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2af1a0: 0x3c091c00  lui         $t1, 0x1C00
    ctx->pc = 0x2af1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7168 << 16));
    // 0x2af1a4: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x2af1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2af1a8: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2af1ac: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x2af1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2af1b0: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2af1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2af1b4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2af1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af1b8: 0x35294000  ori         $t1, $t1, 0x4000
    ctx->pc = 0x2af1b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x2af1bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2af1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af1c0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2af1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2af1c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2af1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af1c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af1cc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2af1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2af1d0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2af1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2af1d4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2af1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2af1d8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2af1d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af1dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af1dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af1e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af1e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2af1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2af1e8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2af1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2af1ec: 0x461c0001  sub.s       $f0, $f0, $f28
    ctx->pc = 0x2af1ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[28]);
    // 0x2af1f0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2af1f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af1f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2af1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2af1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af1fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2af1fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2af200: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2af200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af204: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2af204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2af208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2af20c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2af20cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2af210: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2af210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2af214: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2af214u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2af218: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2af218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2af21c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2af21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af220: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2af220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af224: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2af224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2af228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af22c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2af22cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2af230: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af238: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af23c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2af23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af240: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2af240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2af244: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af248: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2af248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2af24c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af24cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af254: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x2af254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x2af258: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2af258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2af25c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af25cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af260: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2af260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2af264: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af268: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af26c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af270: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af27c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2af27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af280: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2af280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2af284: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2af284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2af288: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2af288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af28c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af28cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af290: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2af290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af298: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2af298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2af29c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2af29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2af2a0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af2a4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2af2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af2a8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af2ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af2b0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af2b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af2bc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2af2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af2c0: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x2af2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2af2c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2af2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2af2c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2af2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af2cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af2d0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2af2d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2af2d4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2af2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af2d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af2dc: 0xe7b70024  swc1        $f23, 0x24($sp)
    ctx->pc = 0x2af2dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2af2e0: 0xe7b80028  swc1        $f24, 0x28($sp)
    ctx->pc = 0x2af2e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2af2e4: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x2af2e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2af2e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2af2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2af2ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2af2ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2af2f0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2af2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2af2f4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af2f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af2fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af300: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af308: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af30c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af310: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2af310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2af314: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2af314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af31c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2af31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2af320: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af324: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af328: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af32c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af330: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af338: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2af338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af33c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2af33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2af340: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2af340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af348: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2af348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2af34c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2af34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2af350: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af354: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af358: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af35c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af368: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2af368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af36c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2af36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2af370: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2af370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af378: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2af378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2af37c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af380: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2af380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2af384: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2af384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af388: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af394: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2af394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2af398: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x2af398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x2af39c: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x2af39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af3a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2af3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2af3a8: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x2af3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x2af3ac: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x2af3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x2af3b0: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x2af3b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2af3b4: 0x494824  and         $t1, $v0, $t1
    ctx->pc = 0x2af3b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2af3b8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2af3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2af3bc: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x2af3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x2af3c0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2af3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2af3c4: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x2af3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x2af3c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2af3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2af3cc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2af3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2af3d0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2af3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af3d4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2af3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2af3d8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2af3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af3dc: 0x7fac0080  sq          $t4, 0x80($sp)
    ctx->pc = 0x2af3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 12));
    // 0x2af3e0: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x2af3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x2af3e4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2af3e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2af3e8: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2af3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x2af3ec: 0xc0a9c48  jal         func_2A7120
    ctx->pc = 0x2AF3ECu;
    SET_GPR_U32(ctx, 31, 0x2AF3F4u);
    ctx->pc = 0x2AF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3ECu;
    // 0x2af3f0: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7120u, 0x2AF3ECu, 0x2AF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3F4u;
label_2af3f4:
    // 0x2af3f4: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x2af3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2af3f8: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x2AF3F8u;
    {
        const bool branch_taken_0x2af3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3F8u;
        // 0x2af3fc: 0x7bac0080  lq          $t4, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3f8) {
            ctx->pc = 0x2AF168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af168;
        }
    }
    ctx->pc = 0x2AF400u;
label_2af400:
    // 0x2af400: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2af400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af404: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2af404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af408: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2af408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2af40c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af410: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x2af410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af414: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2af414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af418: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2af418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af41c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2af41cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2af420: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2af420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2af424: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2af424u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2af428: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x2af428u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2af42c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2af42cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2af430: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2af430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af434: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2af434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af438: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2af438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af43c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2af43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af440: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af444: 0xc6100014  lwc1        $f16, 0x14($s0)
    ctx->pc = 0x2af444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2af448: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2af448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2af44c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2af44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2af450: 0xc0abdf4  jal         func_2AF7D0
    ctx->pc = 0x2AF450u;
    SET_GPR_U32(ctx, 31, 0x2AF458u);
    ctx->pc = 0x2AF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF450u;
    // 0x2af454: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF7D0u, 0x2AF450u, 0x2AF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF458u;
label_2af458:
    // 0x2af458: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2af458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2af45c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2af45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2af460: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2af460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2af464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af468: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x2af468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x2af46c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2af46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2af470: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2af470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2af474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af478: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af47c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2af47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2af480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af484: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2af484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2af488: 0x8c57fffc  lw          $s7, -0x4($v0)
    ctx->pc = 0x2af488u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2af48c: 0x1ae000bb  blez        $s7, . + 4 + (0xBB << 2)
    ctx->pc = 0x2AF48Cu;
    {
        const bool branch_taken_0x2af48c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2AF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF48Cu;
        // 0x2af490: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af48c) {
            ctx->pc = 0x2AF77Cu;
            goto label_2af77c;
        }
    }
    ctx->pc = 0x2AF494u;
    // 0x2af494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af498: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2af498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2af49c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2af4a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4a4: 0x26350008  addiu       $s5, $s1, 0x8
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2af4a8: 0x4619ae82  mul.s       $f26, $f21, $f25
    ctx->pc = 0x2af4a8u;
    ctx->f[26] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    // 0x2af4ac: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2af4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2af4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2af4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4b4: 0x2634000c  addiu       $s4, $s1, 0xC
    ctx->pc = 0x2af4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2af4b8: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x2af4b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af4bc: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2af4c0: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x2af4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2af4c4: 0x0  nop
    ctx->pc = 0x2af4c4u;
    // NOP
label_2af4c8:
    // 0x2af4c8: 0x8fab0000  lw          $t3, 0x0($sp)
    ctx->pc = 0x2af4c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af4cc: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x2af4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2af4d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2af4d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2af4d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2af4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2af4d8: 0x8fc90080  lw          $t1, 0x80($fp)
    ctx->pc = 0x2af4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
    // 0x2af4dc: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x2af4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2af4e0: 0x3c081c00  lui         $t0, 0x1C00
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7168 << 16));
    // 0x2af4e4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x2af4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2af4e8: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x2af4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2af4ec: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2af4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2af4f0: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x2af4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2af4f4: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x2af4f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af4f8: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x2af4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2af4fc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2af4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af500: 0x2651821  addu        $v1, $s3, $a1
    ctx->pc = 0x2af500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2af504: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2af504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af508: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2af508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2af50c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2af50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af510: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x2af510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2af514: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2af514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2af518: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2af518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2af51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af524: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2af524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2af528: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2af528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2af52c: 0x8fc60078  lw          $a2, 0x78($fp)
    ctx->pc = 0x2af52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x2af530: 0x461c1081  sub.s       $f2, $f2, $f28
    ctx->pc = 0x2af530u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[28]);
    // 0x2af534: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2af534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2af538: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2af538u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af53c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af53cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af540: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x2af540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x2af544: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x2af544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x2af548: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2af548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2af54c: 0x44873000  mtc1        $a3, $f6
    ctx->pc = 0x2af54cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2af550: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2af550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2af554: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2af554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af558: 0x448a2800  mtc1        $t2, $f5
    ctx->pc = 0x2af558u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2af55c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2af55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2af560: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2af560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2af564: 0x461b0840  add.s       $f1, $f1, $f27
    ctx->pc = 0x2af564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[27]);
    // 0x2af568: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x2af568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x2af56c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2af56cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2af570: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x2af570u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2af574: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2af574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af578: 0x460530c1  sub.s       $f3, $f6, $f5
    ctx->pc = 0x2af578u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x2af57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af580: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2af580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2af584: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2af584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af588: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2af588u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2af58c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2af58cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2af590: 0x461a0841  sub.s       $f1, $f1, $f26
    ctx->pc = 0x2af590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x2af594: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2af594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2af598: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2af598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af59c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2af59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2af5a0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2af5a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2af5a4: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2af5a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2af5a8: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x2af5a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2af5ac: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x2af5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x2af5b0: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2af5b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2af5b4: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x2af5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x2af5b8: 0x46151040  add.s       $f1, $f2, $f21
    ctx->pc = 0x2af5b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
    // 0x2af5bc: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2af5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x2af5c0: 0xe7b70024  swc1        $f23, 0x24($sp)
    ctx->pc = 0x2af5c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2af5c4: 0xe7b80028  swc1        $f24, 0x28($sp)
    ctx->pc = 0x2af5c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2af5c8: 0x46152001  sub.s       $f0, $f4, $f21
    ctx->pc = 0x2af5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x2af5cc: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x2af5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2af5d0: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2af5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2af5d4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2af5d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2af5d8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2af5d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2af5dc: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2af5dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2af5e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2af5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2af5e4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2af5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2af5e8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2af5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af5ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2af5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2af5f0: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x2af5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af5f4: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x2af5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x2af5f8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2af5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2af5fc: 0xafa6005c  sw          $a2, 0x5C($sp)
    ctx->pc = 0x2af5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 6));
    // 0x2af600: 0xc0a9c48  jal         func_2A7120
    ctx->pc = 0x2AF600u;
    SET_GPR_U32(ctx, 31, 0x2AF608u);
    ctx->pc = 0x2AF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF600u;
    // 0x2af604: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7120u, 0x2AF600u, 0x2AF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF608u;
label_2af608:
    // 0x2af608: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x2af608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2af60c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2AF60Cu;
    {
        const bool branch_taken_0x2af60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF60Cu;
        // 0x2af610: 0x1228c0  sll         $a1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af60c) {
            ctx->pc = 0x2AF4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af4c8;
        }
    }
    ctx->pc = 0x2AF614u;
    // 0x2af614: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2AF614u;
    {
        const bool branch_taken_0x2af614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF614u;
        // 0x2af618: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af614) {
            ctx->pc = 0x2AF780u;
            goto label_2af780;
        }
    }
    ctx->pc = 0x2AF61Cu;
    // 0x2af61c: 0x0  nop
    ctx->pc = 0x2af61cu;
    // NOP
label_2af620:
    // 0x2af620: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AF620u;
    {
        const bool branch_taken_0x2af620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF620u;
        // 0x2af624: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af620) {
            ctx->pc = 0x2AF6D0u;
            goto label_2af6d0;
        }
    }
    ctx->pc = 0x2AF628u;
    // 0x2af628: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2af628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2af62c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2af62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2af630: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2af630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x2af634: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2af634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2af638: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af648: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af64c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2af64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2af650: 0x0  nop
    ctx->pc = 0x2af650u;
    // NOP
    // 0x2af654: 0x0  nop
    ctx->pc = 0x2af654u;
    // NOP
    // 0x2af658: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2af658u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2af65c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2af65cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2af660: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2af660u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2af664: 0x4610a034  c.lt.s      $f20, $f16
    ctx->pc = 0x2af664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af668: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF668u;
    {
        const bool branch_taken_0x2af668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF668u;
        // 0x2af66c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af668) {
            ctx->pc = 0x2AF674u;
            goto label_2af674;
        }
    }
    ctx->pc = 0x2AF670u;
    // 0x2af670: 0x46008506  mov.s       $f20, $f16
    ctx->pc = 0x2af670u;
    ctx->f[20] = FPU_MOV_S(ctx->f[16]);
label_2af674:
    // 0x2af674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af67c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2af67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af680: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2AF680u;
    {
        const bool branch_taken_0x2af680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2af680) {
            ctx->pc = 0x2AF684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF680u;
            // 0x2af684: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF688u;
            goto label_2af688;
        }
    }
    ctx->pc = 0x2AF688u;
label_2af688:
    // 0x2af688: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF688u;
    {
        const bool branch_taken_0x2af688 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2AF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF688u;
        // 0x2af68c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af688) {
            ctx->pc = 0x2AF6A0u;
            goto label_2af6a0;
        }
    }
    ctx->pc = 0x2AF690u;
    // 0x2af690: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2af690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af694: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2af694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2af698: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2af698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2af69c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2af69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2af6a0:
    // 0x2af6a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af6a4: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x2af6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af6a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2af6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af6ac: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2af6acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2af6b0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2af6b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2af6b4: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x2af6b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2af6b8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2af6b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2af6bc: 0xc0abdf4  jal         func_2AF7D0
    ctx->pc = 0x2AF6BCu;
    SET_GPR_U32(ctx, 31, 0x2AF6C4u);
    ctx->pc = 0x2AF6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF6BCu;
    // 0x2af6c0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF7D0u, 0x2AF6BCu, 0x2AF6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6C4u;
label_2af6c4:
    // 0x2af6c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2AF6C4u;
    {
        const bool branch_taken_0x2af6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6C4u;
        // 0x2af6c8: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6c4) {
            ctx->pc = 0x2AF780u;
            goto label_2af780;
        }
    }
    ctx->pc = 0x2AF6CCu;
    // 0x2af6cc: 0x0  nop
    ctx->pc = 0x2af6ccu;
    // NOP
label_2af6d0:
    // 0x2af6d0: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AF6D0u;
    {
        const bool branch_taken_0x2af6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af6d0) {
            ctx->pc = 0x2AF6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF6D0u;
            // 0x2af6d4: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF780u;
            goto label_2af780;
        }
    }
    ctx->pc = 0x2AF6D8u;
    // 0x2af6d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2af6dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2af6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2af6e0: 0x2444fffb  addiu       $a0, $v0, -0x5
    ctx->pc = 0x2af6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x2af6e4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2af6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2af6e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af6ec: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x2af6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af6f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af6f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2af6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2af6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2af6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2af700: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2af700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2af704: 0x0  nop
    ctx->pc = 0x2af704u;
    // NOP
    // 0x2af708: 0x0  nop
    ctx->pc = 0x2af708u;
    // NOP
    // 0x2af70c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2af70cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2af710: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2af710u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2af714: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2af714u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2af718: 0x4610a034  c.lt.s      $f20, $f16
    ctx->pc = 0x2af718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af71c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF71Cu;
    {
        const bool branch_taken_0x2af71c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF71Cu;
        // 0x2af720: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af71c) {
            ctx->pc = 0x2AF728u;
            goto label_2af728;
        }
    }
    ctx->pc = 0x2AF724u;
    // 0x2af724: 0x46008506  mov.s       $f20, $f16
    ctx->pc = 0x2af724u;
    ctx->f[20] = FPU_MOV_S(ctx->f[16]);
label_2af728:
    // 0x2af728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af730: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2af730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af734: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2AF734u;
    {
        const bool branch_taken_0x2af734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2af734) {
            ctx->pc = 0x2AF738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF734u;
            // 0x2af738: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF73Cu;
            goto label_2af73c;
        }
    }
    ctx->pc = 0x2AF73Cu;
label_2af73c:
    // 0x2af73c: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF73Cu;
    {
        const bool branch_taken_0x2af73c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2AF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF73Cu;
        // 0x2af740: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af73c) {
            ctx->pc = 0x2AF758u;
            goto label_2af758;
        }
    }
    ctx->pc = 0x2AF744u;
    // 0x2af744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af748: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2af748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2af74c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2af74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2af750: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2af750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2af754: 0xe6100014  swc1        $f16, 0x14($s0)
    ctx->pc = 0x2af754u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2af758:
    // 0x2af758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2af758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af75c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x2af75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af760: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2af760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af764: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2af764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2af768: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2af768u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2af76c: 0x4600c386  mov.s       $f14, $f24
    ctx->pc = 0x2af76cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2af770: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2af770u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2af774: 0xc0abdf4  jal         func_2AF7D0
    ctx->pc = 0x2AF774u;
    SET_GPR_U32(ctx, 31, 0x2AF77Cu);
    ctx->pc = 0x2AF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF774u;
    // 0x2af778: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF7D0u, 0x2AF774u, 0x2AF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF77Cu;
label_2af77c:
    // 0x2af77c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2af77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2af780:
    // 0x2af780: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2af780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2af784: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2af784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2af788: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2af788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2af78c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2af78cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2af790: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2af790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2af794: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2af794u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2af798: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2af798u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2af79c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2af79cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2af7a0: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2af7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2af7a4: 0xc7bc0120  lwc1        $f28, 0x120($sp)
    ctx->pc = 0x2af7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2af7a8: 0xc7bb0118  lwc1        $f27, 0x118($sp)
    ctx->pc = 0x2af7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2af7ac: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x2af7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2af7b0: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x2af7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2af7b4: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x2af7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2af7b8: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x2af7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2af7bc: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2af7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2af7c0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2af7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2af7c4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2af7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2af7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7C8u;
        // 0x2af7cc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF7D0u;
}
