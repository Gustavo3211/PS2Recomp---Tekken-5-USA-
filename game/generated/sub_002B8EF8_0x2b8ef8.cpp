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

// Function: sub_002B8EF8
// Address: 0x2b8ef8 - 0x2b9168
void sub_002B8EF8_0x2b8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8EF8_0x2b8ef8");
#endif

    switch (ctx->pc) {
        case 0x2b8f14u: goto label_2b8f14;
        case 0x2b8f30u: goto label_2b8f30;
        case 0x2b8f50u: goto label_2b8f50;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b914cu: goto label_2b914c;
        default: break;
    }

    ctx->pc = 0x2b8ef8u;

    // 0x2b8ef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b8efc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2b8f00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2b8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2b8f04: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2b8f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2b8f08: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2b8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2b8f0c: 0xc0db44a  jal         func_36D128
    ctx->pc = 0x2B8F0Cu;
    SET_GPR_U32(ctx, 31, 0x2B8F14u);
    ctx->pc = 0x2B8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F0Cu;
    // 0x2b8f10: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D128u, 0x2B8F0Cu, 0x2B8F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F14u;
label_2b8f14:
    // 0x2b8f14: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x2b8f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b8f18: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2b8f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b8f1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8F1Cu;
    {
        const bool branch_taken_0x2b8f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F1Cu;
        // 0x2b8f20: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f1c) {
            ctx->pc = 0x2B8F38u;
            goto label_2b8f38;
        }
    }
    ctx->pc = 0x2B8F24u;
    // 0x2b8f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f28: 0xc0ae2b4  jal         func_2B8AD0
    ctx->pc = 0x2B8F28u;
    SET_GPR_U32(ctx, 31, 0x2B8F30u);
    ctx->pc = 0x2B8F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F28u;
    // 0x2b8f2c: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8AD0u, 0x2B8F28u, 0x2B8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F30u;
label_2b8f30:
    // 0x2b8f30: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2B8F30u;
    {
        const bool branch_taken_0x2b8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f30) {
            ctx->pc = 0x2B9144u;
            goto label_2b9144;
        }
    }
    ctx->pc = 0x2B8F38u;
label_2b8f38:
    // 0x2b8f38: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2b8f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b8f3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b8f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8f40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8F40u;
    {
        const bool branch_taken_0x2b8f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F40u;
        // 0x2b8f44: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f40) {
            ctx->pc = 0x2B8F58u;
            goto label_2b8f58;
        }
    }
    ctx->pc = 0x2B8F48u;
    // 0x2b8f48: 0xc0ae39e  jal         func_2B8E78
    ctx->pc = 0x2B8F48u;
    SET_GPR_U32(ctx, 31, 0x2B8F50u);
    ctx->pc = 0x2B8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F48u;
    // 0x2b8f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8E78u, 0x2B8F48u, 0x2B8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F50u;
label_2b8f50:
    // 0x2b8f50: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2B8F50u;
    {
        const bool branch_taken_0x2b8f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f50) {
            ctx->pc = 0x2B9144u;
            goto label_2b9144;
        }
    }
    ctx->pc = 0x2B8F58u;
label_2b8f58:
    // 0x2b8f58: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x2b8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x2b8f5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8F5Cu;
    {
        const bool branch_taken_0x2b8f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F5Cu;
        // 0x2b8f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f5c) {
            ctx->pc = 0x2B8F74u;
            goto label_2b8f74;
        }
    }
    ctx->pc = 0x2B8F64u;
    // 0x2b8f64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2b8f68: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x2b8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2b8f6c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2b8f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2b8f70: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2b8f70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2b8f74:
    // 0x2b8f74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8F74u;
    {
        const bool branch_taken_0x2b8f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F74u;
        // 0x2b8f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f74) {
            ctx->pc = 0x2B8F88u;
            goto label_2b8f88;
        }
    }
    ctx->pc = 0x2B8F7Cu;
    // 0x2b8f7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8F7Cu;
    {
        const bool branch_taken_0x2b8f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F7Cu;
        // 0x2b8f80: 0xaf80bac4  sw          $zero, -0x453C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f7c) {
            ctx->pc = 0x2B8F8Cu;
            goto label_2b8f8c;
        }
    }
    ctx->pc = 0x2B8F84u;
    // 0x2b8f84: 0x0  nop
    ctx->pc = 0x2b8f84u;
    // NOP
label_2b8f88:
    // 0x2b8f88: 0xaf82bac4  sw          $v0, -0x453C($gp)
    ctx->pc = 0x2b8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949572), GPR_U32(ctx, 2));
label_2b8f8c:
    // 0x2b8f8c: 0x8f82bac4  lw          $v0, -0x453C($gp)
    ctx->pc = 0x2b8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x2b8f90: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2B8F90u;
    {
        const bool branch_taken_0x2b8f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f90) {
            ctx->pc = 0x2B9144u;
            goto label_2b9144;
        }
    }
    ctx->pc = 0x2B8F98u;
    // 0x2b8f98: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x2b8f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b8f9c: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x2b8f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2b8fa0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b8fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b8fa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8FA4u;
    {
        const bool branch_taken_0x2b8fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FA4u;
        // 0x2b8fa8: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fa4) {
            ctx->pc = 0x2B8FC0u;
            goto label_2b8fc0;
        }
    }
    ctx->pc = 0x2B8FACu;
    // 0x2b8fac: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2b8facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2b8fb0: 0xc78090a8  lwc1        $f0, -0x6F58($gp)
    ctx->pc = 0x2b8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8fb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8FB4u;
    {
        const bool branch_taken_0x2b8fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FB4u;
        // 0x2b8fb8: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fb4) {
            ctx->pc = 0x2B8FCCu;
            goto label_2b8fcc;
        }
    }
    ctx->pc = 0x2B8FBCu;
    // 0x2b8fbc: 0x0  nop
    ctx->pc = 0x2b8fbcu;
    // NOP
label_2b8fc0:
    // 0x2b8fc0: 0x26430040  addiu       $v1, $s2, 0x40
    ctx->pc = 0x2b8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2b8fc4: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x2b8fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2b8fc8: 0xc78090ac  lwc1        $f0, -0x6F54($gp)
    ctx->pc = 0x2b8fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b8fcc:
    // 0x2b8fcc: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b8fccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8fd0: 0xd8d10000  lqc2        $vf17, 0x0($a2)
    ctx->pc = 0x2b8fd0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b8fd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b8fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8fd8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b8fd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b8fdc: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b8fdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b8fe0: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b8fe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8fe4: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b8fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8fe8: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x2b8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2b8fec: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b8fecu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b8ff0: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2b8ff0u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8ff4: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2b8ff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b8ff8: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2b8ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b8ffc: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2b8ffcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9000: 0x4bd080aa  vmul.xyz    $vf2, $vf16, $vf16
    ctx->pc = 0x2b9000u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b9004: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2b9004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b9008: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2b9008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2b900c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2b900cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2b9010: 0x4a0003bf  vwaitq
    ctx->pc = 0x2b9010u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2b9014: 0x4bc0841c  vmulq.xyz   $vf16, $vf16, $Q
    ctx->pc = 0x2b9014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9018: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2b9018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b901c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b901cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2b9020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9024: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x2b9024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2b9028: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x2b9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2b902c: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b902cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9030: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x2b9030u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9034: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b9034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9038: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b9038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b903c: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b903cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b9040: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b9040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9044: 0xf8b00000  sqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2b9044u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9048: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2b9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b904c: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2b904cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b9050: 0xd8910000  lqc2        $vf17, 0x0($a0)
    ctx->pc = 0x2b9050u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9054: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2b9054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9058: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x2b9058u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b905c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2b905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9060: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x2b9060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x2b9064: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x2b9064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2b9068: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b9068u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b906c: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2b906cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9070: 0x4bf1842c  vsub.xyzw   $vf16, $vf16, $vf17
    ctx->pc = 0x2b9070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9074: 0xf8d00000  sqc2        $vf16, 0x0($a2)
    ctx->pc = 0x2b9074u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b9078: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2b9078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b907c: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x2b907cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2b9080: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2b9080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9084: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b9084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9088: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2b9088u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b908c: 0xda310000  lqc2        $vf17, 0x0($s1)
    ctx->pc = 0x2b908cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9090: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b9090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9094: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b9094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9098: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b9098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b909c: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b909cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b90a0: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2b90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b90a4: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x2b90a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b90a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b90a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90ac: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x2b90acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b90b0: 0xc09fc70  jal         func_27F1C0
    ctx->pc = 0x2B90B0u;
    SET_GPR_U32(ctx, 31, 0x2B90B8u);
    ctx->pc = 0x2B90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90B0u;
    // 0x2b90b4: 0xc64e0038  lwc1        $f14, 0x38($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1C0u, 0x2B90B0u, 0x2B90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90B8u;
label_2b90b8:
    // 0x2b90b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b90bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b90bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b90c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b90c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b90c4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2b90c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2b90c8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b90cc: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2b90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2b90d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b90d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b90d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b90d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b90d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b90d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b90dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b90dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b90e0: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x2b90e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b90e4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2b90e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b90e8: 0x0  nop
    ctx->pc = 0x2b90e8u;
    // NOP
    // 0x2b90ec: 0x0  nop
    ctx->pc = 0x2b90ecu;
    // NOP
    // 0x2b90f0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2b90f0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2b90f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b90f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b90f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2b90f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2b90fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b90fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9100: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2b9100u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9104: 0xda310000  lqc2        $vf17, 0x0($s1)
    ctx->pc = 0x2b9104u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9108: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b9108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b910c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b910cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9110: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b9110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b9114: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b9114u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9118: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2b9118u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2b911c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b911cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b9120: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x2b9120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2b9124: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2b9128: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2b9128u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b912c: 0xdbb10000  lqc2        $vf17, 0x0($sp)
    ctx->pc = 0x2b912cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9130: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b9130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b9134: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2b9134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2b9138: 0x4bc0803c  vaddax.xyz  $ACC, $vf16, $vf0x
    ctx->pc = 0x2b9138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2b913c: 0x4bc18c08  vmaddx.xyz  $vf16, $vf17, $vf1x
    ctx->pc = 0x2b913cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2b9140: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2b9140u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_2b9144:
    // 0x2b9144: 0xc0db470  jal         func_36D1C0
    ctx->pc = 0x2B9144u;
    SET_GPR_U32(ctx, 31, 0x2B914Cu);
    ctx->pc = 0x2B9148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9144u;
    // 0x2b9148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D1C0u, 0x2B9144u, 0x2B914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B914Cu;
label_2b914c:
    // 0x2b914c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2b914cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9150: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2b9150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b9154: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b9154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9158: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2b9158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b915c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B915Cu;
        // 0x2b9160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9164u;
    // 0x2b9164: 0x0  nop
    ctx->pc = 0x2b9164u;
    // NOP
    ctx->pc = 0x2b9168u;
}
