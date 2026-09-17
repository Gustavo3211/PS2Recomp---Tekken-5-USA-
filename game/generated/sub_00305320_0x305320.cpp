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

// Function: sub_00305320
// Address: 0x305320 - 0x3054e8
void sub_00305320_0x305320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305320_0x305320");
#endif

    switch (ctx->pc) {
        case 0x30533cu: goto label_30533c;
        case 0x305364u: goto label_305364;
        case 0x30536cu: goto label_30536c;
        case 0x3053acu: goto label_3053ac;
        case 0x3053c0u: goto label_3053c0;
        case 0x3053c8u: goto label_3053c8;
        case 0x3053dcu: goto label_3053dc;
        case 0x3053e8u: goto label_3053e8;
        case 0x3053fcu: goto label_3053fc;
        case 0x305408u: goto label_305408;
        case 0x30541cu: goto label_30541c;
        case 0x305424u: goto label_305424;
        case 0x305438u: goto label_305438;
        case 0x305454u: goto label_305454;
        case 0x305460u: goto label_305460;
        case 0x30546cu: goto label_30546c;
        case 0x3054b4u: goto label_3054b4;
        case 0x3054bcu: goto label_3054bc;
        case 0x3054c8u: goto label_3054c8;
        case 0x3054d0u: goto label_3054d0;
        default: break;
    }

    ctx->pc = 0x305320u;

    // 0x305320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x305324: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x305324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x305328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30532c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x305330: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x305330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x305334: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x305334u;
    SET_GPR_U32(ctx, 31, 0x30533Cu);
    ctx->pc = 0x305338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305334u;
    // 0x305338: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x305334u, 0x30533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30533Cu;
label_30533c:
    // 0x30533c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x30533cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x305340: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x305340u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x305344: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x305344u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x305348: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x305348u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x30534c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x30534cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x305350: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x305350u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x305354: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x305354u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x305358: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30535c: 0xc0c1456  jal         func_305158
    ctx->pc = 0x30535Cu;
    SET_GPR_U32(ctx, 31, 0x305364u);
    ctx->pc = 0x305360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30535Cu;
    // 0x305360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305158u, 0x30535Cu, 0x305364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305364u;
label_305364:
    // 0x305364: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x305364u;
    SET_GPR_U32(ctx, 31, 0x30536Cu);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x305364u, 0x30536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30536Cu;
label_30536c:
    // 0x30536c: 0xc60d00d0  lwc1        $f13, 0xD0($s0)
    ctx->pc = 0x30536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x305370: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x305370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x305374: 0xc60f00d4  lwc1        $f15, 0xD4($s0)
    ctx->pc = 0x305374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x305378: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30537c: 0x46006b07  neg.s       $f12, $f13
    ctx->pc = 0x30537cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    // 0x305380: 0xc61000d8  lwc1        $f16, 0xD8($s0)
    ctx->pc = 0x305380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x305384: 0xc61100dc  lwc1        $f17, 0xDC($s0)
    ctx->pc = 0x305384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x305388: 0x244724e0  addiu       $a3, $v0, 0x24E0
    ctx->pc = 0x305388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 9440));
    // 0x30538c: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x30538cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x305390: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x305390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x305394: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x305394u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4824E8u));
    // 0x305398: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x305398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30539c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x30539cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3053a0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x3053a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x3053a4: 0xc0cb488  jal         func_32D220
    ctx->pc = 0x3053A4u;
    SET_GPR_U32(ctx, 31, 0x3053ACu);
    ctx->pc = 0x3053A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053A4u;
    // 0x3053a8: 0x46007b87  neg.s       $f14, $f15 (Delay Slot)
    ctx->f[14] = FPU_NEG_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D220u, 0x3053A4u, 0x3053ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053ACu;
label_3053ac:
    // 0x3053ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3053acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053b0: 0x260500b8  addiu       $a1, $s0, 0xB8
    ctx->pc = 0x3053b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x3053b4: 0x260600c4  addiu       $a2, $s0, 0xC4
    ctx->pc = 0x3053b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x3053b8: 0xc0cb46e  jal         func_32D1B8
    ctx->pc = 0x3053B8u;
    SET_GPR_U32(ctx, 31, 0x3053C0u);
    ctx->pc = 0x3053BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053B8u;
    // 0x3053bc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D1B8u, 0x3053B8u, 0x3053C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053C0u;
label_3053c0:
    // 0x3053c0: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x3053C0u;
    SET_GPR_U32(ctx, 31, 0x3053C8u);
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x3053C0u, 0x3053C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053C8u;
label_3053c8:
    // 0x3053c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3053c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3053cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3053CCu;
    {
        const bool branch_taken_0x3053cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3053D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053CCu;
        // 0x3053d0: 0x27a50014  addiu       $a1, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3053cc) {
            ctx->pc = 0x305410u;
            goto label_305410;
        }
    }
    ctx->pc = 0x3053D4u;
    // 0x3053d4: 0xc08c278  jal         func_2309E0
    ctx->pc = 0x3053D4u;
    SET_GPR_U32(ctx, 31, 0x3053DCu);
    ctx->pc = 0x2309E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2309E0u, 0x3053D4u, 0x3053DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053DCu;
label_3053dc:
    // 0x3053dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3053dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053e0: 0xc0cb50e  jal         func_32D438
    ctx->pc = 0x3053E0u;
    SET_GPR_U32(ctx, 31, 0x3053E8u);
    ctx->pc = 0x3053E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053E0u;
    // 0x3053e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D438u, 0x3053E0u, 0x3053E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053E8u;
label_3053e8:
    // 0x3053e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3053e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053ec: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x3053ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3053f0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3053f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3053f4: 0xc0cb532  jal         func_32D4C8
    ctx->pc = 0x3053F4u;
    SET_GPR_U32(ctx, 31, 0x3053FCu);
    ctx->pc = 0x3053F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053F4u;
    // 0x3053f8: 0xc7ae0014  lwc1        $f14, 0x14($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D4C8u, 0x3053F4u, 0x3053FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053FCu;
label_3053fc:
    // 0x3053fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3053fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305400: 0xc08c2c8  jal         func_230B20
    ctx->pc = 0x305400u;
    SET_GPR_U32(ctx, 31, 0x305408u);
    ctx->pc = 0x305404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305400u;
    // 0x305404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B20u, 0x305400u, 0x305408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305408u;
label_305408:
    // 0x305408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x305408u;
    {
        const bool branch_taken_0x305408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305408) {
            ctx->pc = 0x30541Cu;
            goto label_30541c;
        }
    }
    ctx->pc = 0x305410u;
label_305410:
    // 0x305410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305414: 0xc08c2c8  jal         func_230B20
    ctx->pc = 0x305414u;
    SET_GPR_U32(ctx, 31, 0x30541Cu);
    ctx->pc = 0x305418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305414u;
    // 0x305418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B20u, 0x305414u, 0x30541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30541Cu;
label_30541c:
    // 0x30541c: 0xc08eaca  jal         func_23AB28
    ctx->pc = 0x30541Cu;
    SET_GPR_U32(ctx, 31, 0x305424u);
    ctx->pc = 0x23AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB28u, 0x30541Cu, 0x305424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305424u;
label_305424:
    // 0x305424: 0x3c0510bf  lui         $a1, 0x10BF
    ctx->pc = 0x305424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4287 << 16));
    // 0x305428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x305428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30542c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x30542cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x305430: 0xc0cb54c  jal         func_32D530
    ctx->pc = 0x305430u;
    SET_GPR_U32(ctx, 31, 0x305438u);
    ctx->pc = 0x305434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305430u;
    // 0x305434: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D530u, 0x305430u, 0x305438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305438u;
label_305438:
    // 0x305438: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x305438u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30543c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30543cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x305440: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x305440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x305444: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30544c: 0xc0cb56e  jal         func_32D5B8
    ctx->pc = 0x30544Cu;
    SET_GPR_U32(ctx, 31, 0x305454u);
    ctx->pc = 0x305450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30544Cu;
    // 0x305450: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D5B8u, 0x30544Cu, 0x305454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305454u;
label_305454:
    // 0x305454: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305458: 0xc0cb57c  jal         func_32D5F0
    ctx->pc = 0x305458u;
    SET_GPR_U32(ctx, 31, 0x305460u);
    ctx->pc = 0x30545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305458u;
    // 0x30545c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D5F0u, 0x305458u, 0x305460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305460u;
label_305460:
    // 0x305460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305464: 0xc0cb58e  jal         func_32D638
    ctx->pc = 0x305464u;
    SET_GPR_U32(ctx, 31, 0x30546Cu);
    ctx->pc = 0x305468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305464u;
    // 0x305468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D638u, 0x305464u, 0x30546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30546Cu;
label_30546c:
    // 0x30546c: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x30546cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x305470: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x305470u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x305474: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x305474u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x305478: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x305478u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x30547c: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x30547cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x305480: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x305480u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x305484: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x305484u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x305488: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x305488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x30548c: 0x86260012  lh          $a2, 0x12($s1)
    ctx->pc = 0x30548cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x305490: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x305490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x305494: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305498: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x30549c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x30549cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3054a0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3054a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3054a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3054a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3054a8: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x3054a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3054ac: 0xc0cb5da  jal         func_32D768
    ctx->pc = 0x3054ACu;
    SET_GPR_U32(ctx, 31, 0x3054B4u);
    ctx->pc = 0x3054B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054ACu;
    // 0x3054b0: 0x73903  sra         $a3, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D768u, 0x3054ACu, 0x3054B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054B4u;
label_3054b4:
    // 0x3054b4: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x3054B4u;
    SET_GPR_U32(ctx, 31, 0x3054BCu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x3054B4u, 0x3054BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054BCu;
label_3054bc:
    // 0x3054bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3054bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3054c0: 0xc0cb58e  jal         func_32D638
    ctx->pc = 0x3054C0u;
    SET_GPR_U32(ctx, 31, 0x3054C8u);
    ctx->pc = 0x3054C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054C0u;
    // 0x3054c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D638u, 0x3054C0u, 0x3054C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054C8u;
label_3054c8:
    // 0x3054c8: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x3054C8u;
    SET_GPR_U32(ctx, 31, 0x3054D0u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x3054C8u, 0x3054D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3054D0u;
label_3054d0:
    // 0x3054d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3054d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3054d4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3054d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3054d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3054d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3054dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3054DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3054E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054DCu;
        // 0x3054e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3054DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3054E4u;
    // 0x3054e4: 0x0  nop
    ctx->pc = 0x3054e4u;
    // NOP
    ctx->pc = 0x3054e8u;
}
