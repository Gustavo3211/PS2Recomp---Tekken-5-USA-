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

// Function: sub_00345F60
// Address: 0x345f60 - 0x346048
void sub_00345F60_0x345f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345F60_0x345f60");
#endif

    switch (ctx->pc) {
        case 0x345fc8u: goto label_345fc8;
        case 0x346008u: goto label_346008;
        default: break;
    }

    ctx->pc = 0x345f60u;

    // 0x345f60: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x345f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x345f64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345f68: 0x24a50d00  addiu       $a1, $a1, 0xD00
    ctx->pc = 0x345f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
    // 0x345f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345f70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x345f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x345f74: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x345f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x345f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x345f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345f7c: 0x24a60068  addiu       $a2, $a1, 0x68
    ctx->pc = 0x345f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x345f80: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x345f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x345f84: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x345f84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x345f88: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x345f88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x345f8c: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x345f8cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345f90: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x345f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x345f94: 0x24b000b0  addiu       $s0, $a1, 0xB0
    ctx->pc = 0x345f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x345f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345f9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x345f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x345fa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x345fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345fa4: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x345fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x345fa8: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x345fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x345fac: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x345facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x345fb0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x345FB0u;
    {
        const bool branch_taken_0x345fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x345FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FB0u;
        // 0x345fb4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fb0) {
            ctx->pc = 0x346030u;
            goto label_346030;
        }
    }
    ctx->pc = 0x345FB8u;
    // 0x345fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345FB8u;
    {
        const bool branch_taken_0x345fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345fb8) {
            ctx->pc = 0x345FC8u;
            goto label_345fc8;
        }
    }
    ctx->pc = 0x345FC0u;
    // 0x345fc0: 0xc0cfd02  jal         func_33F408
    ctx->pc = 0x345FC0u;
    SET_GPR_U32(ctx, 31, 0x345FC8u);
    ctx->pc = 0x345FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FC0u;
    // 0x345fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F408u, 0x345FC0u, 0x345FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FC8u;
label_345fc8:
    // 0x345fc8: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x345fc8u;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x345fcc: 0x4a0002ff  vnop
    ctx->pc = 0x345fccu;
    // NOP operation, no action needed for VU0
    // 0x345fd0: 0x4a0002ff  vnop
    ctx->pc = 0x345fd0u;
    // NOP operation, no action needed for VU0
    // 0x345fd4: 0x4a0002ff  vnop
    ctx->pc = 0x345fd4u;
    // NOP operation, no action needed for VU0
    // 0x345fd8: 0x4a0002ff  vnop
    ctx->pc = 0x345fd8u;
    // NOP operation, no action needed for VU0
    // 0x345fdc: 0x4a0002ff  vnop
    ctx->pc = 0x345fdcu;
    // NOP operation, no action needed for VU0
    // 0x345fe0: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x345fe0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x345fe4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x345fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x345fe8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x345FE8u;
    {
        const bool branch_taken_0x345fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FE8u;
        // 0x345fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fe8) {
            ctx->pc = 0x346030u;
            goto label_346030;
        }
    }
    ctx->pc = 0x345FF0u;
    // 0x345ff0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x345ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x345ff4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x345ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x345ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345FF8u;
    {
        const bool branch_taken_0x345ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ff8) {
            ctx->pc = 0x346008u;
            goto label_346008;
        }
    }
    ctx->pc = 0x346000u;
    // 0x346000: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x346000u;
    SET_GPR_U32(ctx, 31, 0x346008u);
    ctx->pc = 0x346004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346000u;
    // 0x346004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x346000u, 0x346008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346008u;
label_346008:
    // 0x346008: 0x4bd5b9ff  .word       0x4BD5B9FF                   # vclipw.xyz  $vf23, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x346008u;
    { __m128 fs = ctx->vu0_vf[23]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x34600c: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34600cu;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x346010: 0x4a0002ff  vnop
    ctx->pc = 0x346010u;
    // NOP operation, no action needed for VU0
    // 0x346014: 0x4a0002ff  vnop
    ctx->pc = 0x346014u;
    // NOP operation, no action needed for VU0
    // 0x346018: 0x4a0002ff  vnop
    ctx->pc = 0x346018u;
    // NOP operation, no action needed for VU0
    // 0x34601c: 0x4a0002ff  vnop
    ctx->pc = 0x34601cu;
    // NOP operation, no action needed for VU0
    // 0x346020: 0x4a0002ff  vnop
    ctx->pc = 0x346020u;
    // NOP operation, no action needed for VU0
    // 0x346024: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x346024u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x346028: 0x30420aa8  andi        $v0, $v0, 0xAA8
    ctx->pc = 0x346028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2728);
    // 0x34602c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x34602cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_346030:
    // 0x346030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346034: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x346034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34603c: 0x3e00008  jr          $ra
    ctx->pc = 0x34603Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34603Cu;
        // 0x346040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34603Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346044u;
    // 0x346044: 0x0  nop
    ctx->pc = 0x346044u;
    // NOP
    ctx->pc = 0x346048u;
}
