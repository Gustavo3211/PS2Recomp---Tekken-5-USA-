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

// Function: sub_0023FEF0
// Address: 0x23fef0 - 0x240078
void sub_0023FEF0_0x23fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FEF0_0x23fef0");
#endif

    switch (ctx->pc) {
        case 0x23ff14u: goto label_23ff14;
        case 0x240020u: goto label_240020;
        case 0x240058u: goto label_240058;
        case 0x240060u: goto label_240060;
        default: break;
    }

    ctx->pc = 0x23fef0u;

    // 0x23fef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23fef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23fef4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x23fef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fefc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x23fefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x23ff00: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x23ff04: 0x50400058  beql        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x23FF04u;
    {
        const bool branch_taken_0x23ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff04) {
            ctx->pc = 0x23FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF04u;
            // 0x23ff08: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240068u;
            goto label_240068;
        }
    }
    ctx->pc = 0x23FF0Cu;
    // 0x23ff0c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x23FF0Cu;
    SET_GPR_U32(ctx, 31, 0x23FF14u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x23FF0Cu, 0x23FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF14u;
label_23ff14:
    // 0x23ff14: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x23ff14u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23ff18: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x23ff18u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x23ff1c: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x23ff1cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23ff20: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x23ff20u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x23ff24: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x23ff24u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23ff28: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x23ff28u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x23ff2c: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x23ff2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x23ff30: 0x86020074  lh          $v0, 0x74($s0)
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x23ff34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23ff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff38: 0x3c0142e4  lui         $at, 0x42E4
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17124 << 16));
    // 0x23ff3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23ff3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ff40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ff44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23ff44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23ff48: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x23ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x23ff4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x23ff4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23ff50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23ff54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23ff54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23ff58: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23ff58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23ff5c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x23ff5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ff60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23ff60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23ff64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FF64u;
    {
        const bool branch_taken_0x23ff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF64u;
        // 0x23ff68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff64) {
            ctx->pc = 0x23FF90u;
            goto label_23ff90;
        }
    }
    ctx->pc = 0x23FF6Cu;
    // 0x23ff6c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ff70: 0x8c43f4dc  lw          $v1, -0xB24($v0)
    ctx->pc = 0x23ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF4DCu));
    // 0x23ff74: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x23ff74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ff78: 0x54a60006  bnel        $a1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x23FF78u;
    {
        const bool branch_taken_0x23ff78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x23ff78) {
            ctx->pc = 0x23FF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF78u;
            // 0x23ff7c: 0x86020076  lh          $v0, 0x76($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF94u;
            goto label_23ff94;
        }
    }
    ctx->pc = 0x23FF80u;
    // 0x23ff80: 0xc7808808  lwc1        $f0, -0x77F8($gp)
    ctx->pc = 0x23ff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ff84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23ff88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FF88u;
    {
        const bool branch_taken_0x23ff88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF88u;
        // 0x23ff8c: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff88) {
            ctx->pc = 0x23FFACu;
            goto label_23ffac;
        }
    }
    ctx->pc = 0x23FF90u;
label_23ff90:
    // 0x23ff90: 0x86020076  lh          $v0, 0x76($s0)
    ctx->pc = 0x23ff90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
label_23ff94:
    // 0x23ff94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ff94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23ff98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ff98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ff9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23ff9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ffa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23ffa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23ffa4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x23ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23ffa8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x23ffa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_23ffac:
    // 0x23ffac: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x23ffacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x23ffb0: 0x86050072  lh          $a1, 0x72($s0)
    ctx->pc = 0x23ffb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x23ffb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x23ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23ffb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ffb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23ffbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ffbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ffc0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x23ffc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x23ffc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x23ffc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ffcc: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x23ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x23ffd0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23ffd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x23ffd4: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x23ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x23ffd8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x23ffd8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23ffdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23ffdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23ffe0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x23ffe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23ffe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ffe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23ffe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23ffec: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x23ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x23fff0: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x23fff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23fff4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x23fff8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x23fffc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x23fffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x240000: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x240000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x240004: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x240004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x240008: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x240008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x24000c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x24000cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x240010: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x240010u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x240014: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x240014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x240018: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x240018u;
    SET_GPR_U32(ctx, 31, 0x240020u);
    ctx->pc = 0x24001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240018u;
    // 0x24001c: 0xafa60044  sw          $a2, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x240018u, 0x240020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240020u;
label_240020:
    // 0x240020: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x240020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x240024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x240024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240028: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x240028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x24002c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x240030: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x240030u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x240034: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x240038: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24003c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x240040: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x240044: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x240044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x240048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x240048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24004c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24004cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x240050: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x240050u;
    SET_GPR_U32(ctx, 31, 0x240058u);
    ctx->pc = 0x240054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240050u;
    // 0x240054: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x240050u, 0x240058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240058u;
label_240058:
    // 0x240058: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x240058u;
    SET_GPR_U32(ctx, 31, 0x240060u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x240058u, 0x240060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240060u;
label_240060:
    // 0x240060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240064: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x240064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_240068:
    // 0x240068: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x240068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24006c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x24006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x240070: 0x3e00008  jr          $ra
    ctx->pc = 0x240070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240070u;
        // 0x240074: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240078u;
}
