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

// Function: sub_004FDF30
// Address: 0x4fdf30 - 0x4fe320
void sub_004FDF30_0x4fdf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FDF30_0x4fdf30");
#endif

    switch (ctx->pc) {
        case 0x4fdfccu: goto label_4fdfcc;
        case 0x4fe024u: goto label_4fe024;
        case 0x4fe140u: goto label_4fe140;
        case 0x4fe164u: goto label_4fe164;
        case 0x4fe194u: goto label_4fe194;
        case 0x4fe1c8u: goto label_4fe1c8;
        case 0x4fe1ecu: goto label_4fe1ec;
        case 0x4fe21cu: goto label_4fe21c;
        case 0x4fe224u: goto label_4fe224;
        case 0x4fe248u: goto label_4fe248;
        case 0x4fe258u: goto label_4fe258;
        case 0x4fe26cu: goto label_4fe26c;
        case 0x4fe280u: goto label_4fe280;
        case 0x4fe2f0u: goto label_4fe2f0;
        default: break;
    }

    ctx->pc = 0x4fdf30u;

    // 0x4fdf30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4fdf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4fdf34: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x4fdf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x4fdf38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4fdf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4fdf3c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x4fdf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x4fdf40: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4fdf40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x4fdf44: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x4fdf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x4fdf48: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x4fdf48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x4fdf4c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x4fdf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x4fdf50: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4fdf50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4fdf54: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x4fdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x4fdf58: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x4fdf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x4fdf5c: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x4fdf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x4fdf60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4fdf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4fdf64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4fdf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4fdf68: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x4fdf68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6C4u));
    // 0x4fdf6c: 0x6843003b  ldl         $v1, 0x3B($v0)
    ctx->pc = 0x4fdf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4fdf70: 0x6c430034  ldr         $v1, 0x34($v0)
    ctx->pc = 0x4fdf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4fdf74: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x4fdf74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x4fdf78: 0xb3a30067  sdl         $v1, 0x67($sp)
    ctx->pc = 0x4fdf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fdf7c: 0xb7a30060  sdr         $v1, 0x60($sp)
    ctx->pc = 0x4fdf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fdf80: 0xa7a40068  sh          $a0, 0x68($sp)
    ctx->pc = 0x4fdf80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fdf84: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x4fdf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x4fdf88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x4fdf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x4fdf8c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x4fdf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x4fdf90: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4fdf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x4fdf94: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x4fdf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x4fdf98: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x4fdf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x4fdf9c: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x4fdf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
    // 0x4fdfa0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x4fdfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x4fdfa4: 0x26310044  addiu       $s1, $s1, 0x44
    ctx->pc = 0x4fdfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x4fdfa8: 0x27b40014  addiu       $s4, $sp, 0x14
    ctx->pc = 0x4fdfa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x4fdfac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72D6C4u));
    // 0x4fdfb0: 0x27b30028  addiu       $s3, $sp, 0x28
    ctx->pc = 0x4fdfb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x4fdfb4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x4fdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x4fdfb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fdfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fdfbc: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x4fdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x4fdfc0: 0x24840026  addiu       $a0, $a0, 0x26
    ctx->pc = 0x4fdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 38));
    // 0x4fdfc4: 0xc13f1ac  jal         func_4FC6B0
    ctx->pc = 0x4FDFC4u;
    SET_GPR_U32(ctx, 31, 0x4FDFCCu);
    ctx->pc = 0x4FDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FDFC4u;
    // 0x4fdfc8: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC6B0u, 0x4FDFC4u, 0x4FDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FDFCCu;
label_4fdfcc:
    // 0x4fdfcc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x4fdfccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4fdfd0: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x4fdfd0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fdfd4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x4fdfd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fdfd8: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x4fdfd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fdfdc: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x4fdfdcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fdfe0: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x4fdfe0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fdfe4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x4fdfe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fdfe8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x4fdfe8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fdfec: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x4fdfecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fdff0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x4fdff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x4fdff4: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x4fdff4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x4fdff8: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x4fdff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x4fdffc: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x4fdffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x4fe000: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x4fe000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
    // 0x4fe004: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x4fe004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x4fe008: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fe008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fe00c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fe00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe010: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x4fe010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x4fe014: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x4fe014u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x4fe018: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x4fe018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x4fe01c: 0xc13f1ac  jal         func_4FC6B0
    ctx->pc = 0x4FE01Cu;
    SET_GPR_U32(ctx, 31, 0x4FE024u);
    ctx->pc = 0x4FE020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE01Cu;
    // 0x4fe020: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC6B0u, 0x4FE01Cu, 0x4FE024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE024u;
label_4fe024:
    // 0x4fe024: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x4fe024u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fe028: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x4fe028u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fe02c: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x4fe02cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fe030: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x4fe030u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fe034: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x4fe034u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fe038: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x4fe038u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fe03c: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x4fe03cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fe040: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x4fe040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4fe044: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x4fe044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x4fe048: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x4fe048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x4fe04c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x4fe04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4fe050: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x4fe050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4fe054: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fe054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4fe058: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x4fe058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x4fe05c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x4fe05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4fe060: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fe060u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4fe064: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4fe064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4fe068: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4fe068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4fe06c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4fe06cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4fe070: 0x24c20064  addiu       $v0, $a2, 0x64
    ctx->pc = 0x4fe070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x4fe074: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x4fe074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x4fe078: 0x2c4200c9  sltiu       $v0, $v0, 0xC9
    ctx->pc = 0x4fe078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)201) ? 1 : 0);
    // 0x4fe07c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4fe07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4fe080: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4FE080u;
    {
        const bool branch_taken_0x4fe080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE080u;
        // 0x4fe084: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe080) {
            ctx->pc = 0x4FE0D0u;
            goto label_4fe0d0;
        }
    }
    ctx->pc = 0x4FE088u;
    // 0x4fe088: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4fe088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4fe08c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4fe08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4fe090: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fe090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fe094: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4fe094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4fe098: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4fe098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x4fe09c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4fe09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4fe0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fe0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fe0a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4fe0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4fe0a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fe0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fe0ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fe0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fe0b0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4fe0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4fe0b4: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x4fe0b4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fe0b8: 0x7066001a  div1        $zero, $v1, $a2
    ctx->pc = 0x4fe0b8u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x4fe0bc: 0x1012  mflo        $v0
    ctx->pc = 0x4fe0bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4fe0c0: 0x70001812  mflo1       $v1
    ctx->pc = 0x4fe0c0u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x4fe0c4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4fe0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x4fe0c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4FE0C8u;
    {
        const bool branch_taken_0x4fe0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE0C8u;
        // 0x4fe0cc: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe0c8) {
            ctx->pc = 0x4FE0F8u;
            goto label_4fe0f8;
        }
    }
    ctx->pc = 0x4FE0D0u;
label_4fe0d0:
    // 0x4fe0d0: 0x58800002  blezl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FE0D0u;
    {
        const bool branch_taken_0x4fe0d0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x4fe0d0) {
            ctx->pc = 0x4FE0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FE0D0u;
            // 0x4fe0d4: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0DCu;
            goto label_4fe0dc;
        }
    }
    ctx->pc = 0x4FE0D8u;
    // 0x4fe0d8: 0x2402fda8  addiu       $v0, $zero, -0x258
    ctx->pc = 0x4fe0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966696));
label_4fe0dc:
    // 0x4fe0dc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4fe0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x4fe0e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x4fe0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fe0e4: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FE0E4u;
    {
        const bool branch_taken_0x4fe0e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4fe0e4) {
            ctx->pc = 0x4FE0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FE0E4u;
            // 0x4fe0e8: 0x8fb30054  lw          $s3, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE0FCu;
            goto label_4fe0fc;
        }
    }
    ctx->pc = 0x4FE0ECu;
    // 0x4fe0ec: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x4fe0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x4fe0f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4fe0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4fe0f4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4fe0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_4fe0f8:
    // 0x4fe0f8: 0x8fb30054  lw          $s3, 0x54($sp)
    ctx->pc = 0x4fe0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_4fe0fc:
    // 0x4fe0fc: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x4fe0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4fe100: 0x87a60060  lh          $a2, 0x60($sp)
    ctx->pc = 0x4fe100u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fe104: 0x2405fda8  addiu       $a1, $zero, -0x258
    ctx->pc = 0x4fe104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966696));
    // 0x4fe108: 0x2a620259  slti        $v0, $s3, 0x259
    ctx->pc = 0x4fe108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x4fe10c: 0x82980a  movz        $s3, $a0, $v0
    ctx->pc = 0x4fe10cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x4fe110: 0x2a63fda8  slti        $v1, $s3, -0x258
    ctx->pc = 0x4fe110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966696) ? 1 : 0);
    // 0x4fe114: 0x18c0001f  blez        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x4FE114u;
    {
        const bool branch_taken_0x4fe114 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x4FE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE114u;
        // 0x4fe118: 0xa3980b  movn        $s3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe114) {
            ctx->pc = 0x4FE194u;
            goto label_4fe194;
        }
    }
    ctx->pc = 0x4FE11Cu;
    // 0x4fe11c: 0x87a20064  lh          $v0, 0x64($sp)
    ctx->pc = 0x4fe11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4fe120: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x4fe120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x4fe124: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x4FE124u;
    {
        const bool branch_taken_0x4fe124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fe124) {
            ctx->pc = 0x4FE128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FE124u;
            // 0x4fe128: 0xa7a30064  sh          $v1, 0x64($sp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE12Cu;
            goto label_4fe12c;
        }
    }
    ctx->pc = 0x4FE12Cu;
label_4fe12c:
    // 0x4fe12c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x4fe12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4fe130: 0x87b00066  lh          $s0, 0x66($sp)
    ctx->pc = 0x4fe130u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 102)));
    // 0x4fe134: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fe134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe138: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4FE138u;
    {
        const bool branch_taken_0x4fe138 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4FE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE138u;
        // 0x4fe13c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe138) {
            ctx->pc = 0x4FE178u;
            goto label_4fe178;
        }
    }
    ctx->pc = 0x4FE140u;
label_4fe140:
    // 0x4fe140: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x4fe140u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fe144: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4fe144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe14c: 0x26310005  addiu       $s1, $s1, 0x5
    ctx->pc = 0x4fe14cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    // 0x4fe150: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fe150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fe154: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x4fe154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4fe158: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fe158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe15c: 0xc13f716  jal         func_4FDC58
    ctx->pc = 0x4FE15Cu;
    SET_GPR_U32(ctx, 31, 0x4FE164u);
    ctx->pc = 0x4FE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE15Cu;
    // 0x4fe160: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FDC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FDC58u, 0x4FE15Cu, 0x4FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE164u;
label_4fe164:
    // 0x4fe164: 0x87a20060  lh          $v0, 0x60($sp)
    ctx->pc = 0x4fe164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fe168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fe168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fe16c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x4fe16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fe170: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4FE170u;
    {
        const bool branch_taken_0x4fe170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE170u;
        // 0x4fe174: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe170) {
            ctx->pc = 0x4FE140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fe140;
        }
    }
    ctx->pc = 0x4FE178u;
label_4fe178:
    // 0x4fe178: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x4fe178u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fe17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe180: 0x240504b0  addiu       $a1, $zero, 0x4B0
    ctx->pc = 0x4fe180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x4fe184: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x4fe184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4fe188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4fe188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe18c: 0xc13f716  jal         func_4FDC58
    ctx->pc = 0x4FE18Cu;
    SET_GPR_U32(ctx, 31, 0x4FE194u);
    ctx->pc = 0x4FE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE18Cu;
    // 0x4fe190: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FDC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FDC58u, 0x4FE18Cu, 0x4FE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE194u;
label_4fe194:
    // 0x4fe194: 0x87a40062  lh          $a0, 0x62($sp)
    ctx->pc = 0x4fe194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x4fe198: 0x18800020  blez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4FE198u;
    {
        const bool branch_taken_0x4fe198 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4FE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE198u;
        // 0x4fe19c: 0x87a20064  lh          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe198) {
            ctx->pc = 0x4FE21Cu;
            goto label_4fe21c;
        }
    }
    ctx->pc = 0x4FE1A0u;
    // 0x4fe1a0: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x4fe1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x4fe1a4: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x4FE1A4u;
    {
        const bool branch_taken_0x4fe1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fe1a4) {
            ctx->pc = 0x4FE1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FE1A4u;
            // 0x4fe1a8: 0xa7a30064  sh          $v1, 0x64($sp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE1ACu;
            goto label_4fe1ac;
        }
    }
    ctx->pc = 0x4FE1ACu;
label_4fe1ac:
    // 0x4fe1ac: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4fe1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4fe1b0: 0x87b00068  lh          $s0, 0x68($sp)
    ctx->pc = 0x4fe1b0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fe1b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fe1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe1b8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4FE1B8u;
    {
        const bool branch_taken_0x4fe1b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4FE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE1B8u;
        // 0x4fe1bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe1b8) {
            ctx->pc = 0x4FE200u;
            goto label_4fe200;
        }
    }
    ctx->pc = 0x4FE1C0u;
    // 0x4fe1c0: 0x2414fffb  addiu       $s4, $zero, -0x5
    ctx->pc = 0x4fe1c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x4fe1c4: 0x0  nop
    ctx->pc = 0x4fe1c4u;
    // NOP
label_4fe1c8:
    // 0x4fe1c8: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x4fe1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fe1cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4fe1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe1d4: 0x2631fffb  addiu       $s1, $s1, -0x5
    ctx->pc = 0x4fe1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    // 0x4fe1d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fe1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe1dc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x4fe1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4fe1e0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fe1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe1e4: 0xc13f716  jal         func_4FDC58
    ctx->pc = 0x4FE1E4u;
    SET_GPR_U32(ctx, 31, 0x4FE1ECu);
    ctx->pc = 0x4FE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE1E4u;
    // 0x4fe1e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FDC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FDC58u, 0x4FE1E4u, 0x4FE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE1ECu;
label_4fe1ec:
    // 0x4fe1ec: 0x87a20062  lh          $v0, 0x62($sp)
    ctx->pc = 0x4fe1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x4fe1f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fe1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fe1f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x4fe1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4fe1f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4FE1F8u;
    {
        const bool branch_taken_0x4fe1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE1F8u;
        // 0x4fe1fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe1f8) {
            ctx->pc = 0x4FE1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fe1c8;
        }
    }
    ctx->pc = 0x4FE200u;
label_4fe200:
    // 0x4fe200: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x4fe200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fe204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fe204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe208: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4fe208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe20c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x4fe20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe210: 0x2405fb50  addiu       $a1, $zero, -0x4B0
    ctx->pc = 0x4fe210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966096));
    // 0x4fe214: 0xc13f716  jal         func_4FDC58
    ctx->pc = 0x4FE214u;
    SET_GPR_U32(ctx, 31, 0x4FE21Cu);
    ctx->pc = 0x4FE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE214u;
    // 0x4fe218: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FDC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FDC58u, 0x4FE214u, 0x4FE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE21Cu;
label_4fe21c:
    // 0x4fe21c: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FE21Cu;
    SET_GPR_U32(ctx, 31, 0x4FE224u);
    ctx->pc = 0x4FE220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE21Cu;
    // 0x4fe220: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FE21Cu, 0x4FE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE224u;
label_4fe224:
    // 0x4fe224: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fe224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fe228: 0x8c44ced8  lw          $a0, -0x3128($v0)
    ctx->pc = 0x4fe228u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CED8u));
    // 0x4fe22c: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x4fe22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x4fe230: 0x2473c748  addiu       $s3, $v1, -0x38B8
    ctx->pc = 0x4fe230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952776));
    // 0x4fe234: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x4fe234u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x4fe238: 0x48982  srl         $s1, $a0, 6
    ctx->pc = 0x4fe238u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x4fe23c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4FE23Cu;
    {
        const bool branch_taken_0x4fe23c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE23Cu;
        // 0x4fe240: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe23c) {
            ctx->pc = 0x4FE278u;
            goto label_4fe278;
        }
    }
    ctx->pc = 0x4FE244u;
    // 0x4fe244: 0x2632ffff  addiu       $s2, $s1, -0x1
    ctx->pc = 0x4fe244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4fe248:
    // 0x4fe248: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4fe248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4fe24c: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x4fe24cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x4fe250: 0xc13f652  jal         func_4FD948
    ctx->pc = 0x4FE250u;
    SET_GPR_U32(ctx, 31, 0x4FE258u);
    ctx->pc = 0x4FE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE250u;
    // 0x4fe254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD948u, 0x4FE250u, 0x4FE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE258u;
label_4fe258:
    // 0x4fe258: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x4fe258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x4fe25c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FE25Cu;
    {
        const bool branch_taken_0x4fe25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE25Cu;
        // 0x4fe260: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe25c) {
            ctx->pc = 0x4FE26Cu;
            goto label_4fe26c;
        }
    }
    ctx->pc = 0x4FE264u;
    // 0x4fe264: 0xc13ea48  jal         func_4FA920
    ctx->pc = 0x4FE264u;
    SET_GPR_U32(ctx, 31, 0x4FE26Cu);
    ctx->pc = 0x4FA920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA920u, 0x4FE264u, 0x4FE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE26Cu;
label_4fe26c:
    // 0x4fe26c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x4fe26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x4fe270: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4FE270u;
    {
        const bool branch_taken_0x4fe270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE270u;
        // 0x4fe274: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe270) {
            ctx->pc = 0x4FE248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fe248;
        }
    }
    ctx->pc = 0x4FE278u;
label_4fe278:
    // 0x4fe278: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FE278u;
    SET_GPR_U32(ctx, 31, 0x4FE280u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FE278u, 0x4FE280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE280u;
label_4fe280:
    // 0x4fe280: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x4fe280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fe284: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x4fe284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fe288: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x4fe288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fe28c: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x4fe28cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fe290: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x4fe290u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4fe294: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x4fe294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4fe298: 0x3e00008  jr          $ra
    ctx->pc = 0x4FE298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE298u;
        // 0x4fe29c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FE298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FE2A0u;
    // 0x4fe2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4fe2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4fe2a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4fe2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4fe2a8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4fe2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe2ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4fe2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4fe2b0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x4fe2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe2b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4fe2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4fe2b8: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4fe2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe2bc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4fe2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4fe2c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4fe2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fe2c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4fe2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fe2c8: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4fe2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4fe2cc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4fe2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4fe2d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fe2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe2d4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4fe2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4fe2d8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x4fe2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fe2dc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4fe2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4fe2e0: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4fe2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4fe2e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4fe2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4fe2e8: 0xc13faee  jal         func_4FEBB8
    ctx->pc = 0x4FE2E8u;
    SET_GPR_U32(ctx, 31, 0x4FE2F0u);
    ctx->pc = 0x4FE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE2E8u;
    // 0x4fe2ec: 0xafa80018  sw          $t0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEBB8u, 0x4FE2E8u, 0x4FE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FE2F0u;
label_4fe2f0:
    // 0x4fe2f0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4fe2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fe2f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4fe2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fe2f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4fe2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fe2fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4fe2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fe300: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4fe300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4fe304: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fe304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4fe308: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4fe308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fe30c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4fe30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4fe310: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4fe310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fe314: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4fe314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fe318: 0x3e00008  jr          $ra
    ctx->pc = 0x4FE318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE318u;
        // 0x4fe31c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FE318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FE320u;
}
