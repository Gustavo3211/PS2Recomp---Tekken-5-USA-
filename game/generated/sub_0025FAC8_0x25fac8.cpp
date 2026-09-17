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

// Function: sub_0025FAC8
// Address: 0x25fac8 - 0x25fce8
void sub_0025FAC8_0x25fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FAC8_0x25fac8");
#endif

    switch (ctx->pc) {
        case 0x25fb10u: goto label_25fb10;
        case 0x25fc7cu: goto label_25fc7c;
        default: break;
    }

    ctx->pc = 0x25fac8u;

    // 0x25fac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25facc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25fad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25fad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fad8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x25fad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25fae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25fae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fae4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25fae8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x25fae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x25faf0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x25faf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faf4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x25faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x25faf8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25faf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fafc: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x25fafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25fb00: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x25fb00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25fb04: 0x1a40006e  blez        $s2, . + 4 + (0x6E << 2)
    ctx->pc = 0x25FB04u;
    {
        const bool branch_taken_0x25fb04 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x25FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB04u;
        // 0x25fb08: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb04) {
            ctx->pc = 0x25FCC0u;
            goto label_25fcc0;
        }
    }
    ctx->pc = 0x25FB0Cu;
    // 0x25fb0c: 0x0  nop
    ctx->pc = 0x25fb0cu;
    // NOP
label_25fb10:
    // 0x25fb10: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25fb14: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25fb18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fb1c: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x25FB1Cu;
    {
        const bool branch_taken_0x25fb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB1Cu;
        // 0x25fb20: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb1c) {
            ctx->pc = 0x25FCB0u;
            goto label_25fcb0;
        }
    }
    ctx->pc = 0x25FB24u;
    // 0x25fb24: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x25fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25fb28: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x25fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x25fb2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25fb30: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x25fb30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fb34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x25fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25fb38: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x25fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x25fb3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25fb40: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x25fb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x25fb44: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x25FB44u;
    {
        const bool branch_taken_0x25fb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fb44) {
            ctx->pc = 0x25FB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FB44u;
            // 0x25fb48: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FCB4u;
            goto label_25fcb4;
        }
    }
    ctx->pc = 0x25FB4Cu;
    // 0x25fb4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25fb50: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25fb54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25fb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25fb58: 0x8c6326b0  lw          $v1, 0x26B0($v1)
    ctx->pc = 0x25fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9904)));
    // 0x25fb5c: 0x600008  jr          $v1
    ctx->pc = 0x25FB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FB68u: goto label_25fb68;
            case 0x25FB98u: goto label_25fb98;
            case 0x25FBC8u: goto label_25fbc8;
            case 0x25FBF8u: goto label_25fbf8;
            case 0x25FC70u: goto label_25fc70;
            case 0x25FC88u: goto label_25fc88;
            case 0x25FCB0u: goto label_25fcb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25FB64u;
    // 0x25fb64: 0x0  nop
    ctx->pc = 0x25fb64u;
    // NOP
label_25fb68:
    // 0x25fb68: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fb6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x25fb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb70: 0xc7808be8  lwc1        $f0, -0x7418($gp)
    ctx->pc = 0x25fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fb74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25fb74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25fb78: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fb78u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fb7c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25fb7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25fb80: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25fb80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25fb84: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fb84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fb88: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fb8c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x25FB8Cu;
    {
        const bool branch_taken_0x25fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FB8Cu;
        // 0x25fb90: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb8c) {
            ctx->pc = 0x25FCB4u;
            goto label_25fcb4;
        }
    }
    ctx->pc = 0x25FB94u;
    // 0x25fb94: 0x0  nop
    ctx->pc = 0x25fb94u;
    // NOP
label_25fb98:
    // 0x25fb98: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x25fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fb9c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x25fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x25fba0: 0xc7808bec  lwc1        $f0, -0x7414($gp)
    ctx->pc = 0x25fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25fba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25fba8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fba8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fbac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25fbacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25fbb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25fbb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25fbb4: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fbb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fbb8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fbbc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x25FBBCu;
    {
        const bool branch_taken_0x25fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBBCu;
        // 0x25fbc0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbbc) {
            ctx->pc = 0x25FCB4u;
            goto label_25fcb4;
        }
    }
    ctx->pc = 0x25FBC4u;
    // 0x25fbc4: 0x0  nop
    ctx->pc = 0x25fbc4u;
    // NOP
label_25fbc8:
    // 0x25fbc8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x25fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fbcc: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x25fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x25fbd0: 0xc7808bf0  lwc1        $f0, -0x7410($gp)
    ctx->pc = 0x25fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fbd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25fbd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25fbd8: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fbd8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fbdc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x25fbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x25fbe0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x25fbe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x25fbe4: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fbe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fbe8: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fbec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x25FBECu;
    {
        const bool branch_taken_0x25fbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBECu;
        // 0x25fbf0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbec) {
            ctx->pc = 0x25FCB4u;
            goto label_25fcb4;
        }
    }
    ctx->pc = 0x25FBF4u;
    // 0x25fbf4: 0x0  nop
    ctx->pc = 0x25fbf4u;
    // NOP
label_25fbf8:
    // 0x25fbf8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x25fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fbfc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x25fbfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc00: 0xc7808bf4  lwc1        $f0, -0x740C($gp)
    ctx->pc = 0x25fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fc04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x25fc04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25fc08: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25fc08u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fc0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x25fc0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25fc10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25fc10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25fc14: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fc14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fc18: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fc1c: 0xc7818bf8  lwc1        $f1, -0x7408($gp)
    ctx->pc = 0x25fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fc20: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x25fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fc24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x25fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x25fc28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25fc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25fc2c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fc2cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fc30: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x25fc30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x25fc34: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x25fc34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x25fc38: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fc38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fc3c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fc40: 0xc7818bfc  lwc1        $f1, -0x7404($gp)
    ctx->pc = 0x25fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fc44: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x25fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fc48: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x25fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x25fc4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25fc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25fc50: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25fc50u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fc54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25fc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25fc58: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25fc58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25fc5c: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fc5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fc60: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25fc60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fc64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25FC64u;
    {
        const bool branch_taken_0x25fc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC64u;
        // 0x25fc68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc64) {
            ctx->pc = 0x25FCB4u;
            goto label_25fcb4;
        }
    }
    ctx->pc = 0x25FC6Cu;
    // 0x25fc6c: 0x0  nop
    ctx->pc = 0x25fc6cu;
    // NOP
label_25fc70:
    // 0x25fc70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc74: 0xc097084  jal         func_25C210
    ctx->pc = 0x25FC74u;
    SET_GPR_U32(ctx, 31, 0x25FC7Cu);
    ctx->pc = 0x25FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC74u;
    // 0x25fc78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25FC74u, 0x25FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC7Cu;
label_25fc7c:
    // 0x25fc7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25FC7Cu;
    {
        const bool branch_taken_0x25fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC7Cu;
        // 0x25fc80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc7c) {
            ctx->pc = 0x25FCB4u;
            goto label_25fcb4;
        }
    }
    ctx->pc = 0x25FC84u;
    // 0x25fc84: 0x0  nop
    ctx->pc = 0x25fc84u;
    // NOP
label_25fc88:
    // 0x25fc88: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x25fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x25fc8c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x25fc8cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x25fc90: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x25fc90u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25fc94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25fc94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25fc98: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25fc98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25fc9c: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x25fc9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25fca0: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25fca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25fca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25fca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fcac: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x25fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
label_25fcb0:
    // 0x25fcb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25fcb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25fcb4:
    // 0x25fcb4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x25fcb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x25fcb8: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x25FCB8u;
    {
        const bool branch_taken_0x25fcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCB8u;
        // 0x25fcbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcb8) {
            ctx->pc = 0x25FB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25fb10;
        }
    }
    ctx->pc = 0x25FCC0u;
label_25fcc0:
    // 0x25fcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fcc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25fcc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25fcc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25fcc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fccc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25fcccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25fcd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25fcd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fcd4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x25fcd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25fcd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25fcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fcdc: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x25fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x25FCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCE0u;
        // 0x25fce4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FCE8u;
}
