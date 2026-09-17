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

// Function: sub_003490D8
// Address: 0x3490d8 - 0x3491d8
void sub_003490D8_0x3490d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003490D8_0x3490d8");
#endif

    switch (ctx->pc) {
        case 0x349158u: goto label_349158;
        case 0x349198u: goto label_349198;
        default: break;
    }

    ctx->pc = 0x3490d8u;

    // 0x3490d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3490d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3490dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3490dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3490e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3490e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3490e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3490e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3490ec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3490ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3490f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3490f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3490f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3490f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3490f8: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3490F8u;
    {
        const bool branch_taken_0x3490f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3490FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490F8u;
        // 0x3490fc: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3490f8) {
            ctx->pc = 0x3491C4u;
            goto label_3491c4;
        }
    }
    ctx->pc = 0x349100u;
    // 0x349100: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x349100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x349104: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x349104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349108: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x349108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x34910c: 0x24850068  addiu       $a1, $a0, 0x68
    ctx->pc = 0x34910cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x349110: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x349110u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x349114: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x349114u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x349118: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x349118u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x34911c: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x34911cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349120: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x349120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x349124: 0x249000b0  addiu       $s0, $a0, 0xB0
    ctx->pc = 0x349124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x349128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x349128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34912c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349130: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x349130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349134: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x349134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x349138: 0xaca0005c  sw          $zero, 0x5C($a1)
    ctx->pc = 0x349138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
    // 0x34913c: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x34913cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x349140: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x349140u;
    {
        const bool branch_taken_0x349140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x349144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349140u;
        // 0x349144: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349140) {
            ctx->pc = 0x3491C0u;
            goto label_3491c0;
        }
    }
    ctx->pc = 0x349148u;
    // 0x349148: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349148u;
    {
        const bool branch_taken_0x349148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349148) {
            ctx->pc = 0x349158u;
            goto label_349158;
        }
    }
    ctx->pc = 0x349150u;
    // 0x349150: 0xc0cfd02  jal         func_33F408
    ctx->pc = 0x349150u;
    SET_GPR_U32(ctx, 31, 0x349158u);
    ctx->pc = 0x349154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349150u;
    // 0x349154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F408u, 0x349150u, 0x349158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349158u;
label_349158:
    // 0x349158: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349158u;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x34915c: 0x4a0002ff  vnop
    ctx->pc = 0x34915cu;
    // NOP operation, no action needed for VU0
    // 0x349160: 0x4a0002ff  vnop
    ctx->pc = 0x349160u;
    // NOP operation, no action needed for VU0
    // 0x349164: 0x4a0002ff  vnop
    ctx->pc = 0x349164u;
    // NOP operation, no action needed for VU0
    // 0x349168: 0x4a0002ff  vnop
    ctx->pc = 0x349168u;
    // NOP operation, no action needed for VU0
    // 0x34916c: 0x4a0002ff  vnop
    ctx->pc = 0x34916cu;
    // NOP operation, no action needed for VU0
    // 0x349170: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x349170u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x349174: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x349174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x349178: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x349178u;
    {
        const bool branch_taken_0x349178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349178u;
        // 0x34917c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349178) {
            ctx->pc = 0x3491C0u;
            goto label_3491c0;
        }
    }
    ctx->pc = 0x349180u;
    // 0x349180: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x349180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349184: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x349184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x349188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349188u;
    {
        const bool branch_taken_0x349188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349188) {
            ctx->pc = 0x349198u;
            goto label_349198;
        }
    }
    ctx->pc = 0x349190u;
    // 0x349190: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x349190u;
    SET_GPR_U32(ctx, 31, 0x349198u);
    ctx->pc = 0x349194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349190u;
    // 0x349194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x349190u, 0x349198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349198u;
label_349198:
    // 0x349198: 0x4bd5b9ff  .word       0x4BD5B9FF                   # vclipw.xyz  $vf23, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349198u;
    { __m128 fs = ctx->vu0_vf[23]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x34919c: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34919cu;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x3491a0: 0x4a0002ff  vnop
    ctx->pc = 0x3491a0u;
    // NOP operation, no action needed for VU0
    // 0x3491a4: 0x4a0002ff  vnop
    ctx->pc = 0x3491a4u;
    // NOP operation, no action needed for VU0
    // 0x3491a8: 0x4a0002ff  vnop
    ctx->pc = 0x3491a8u;
    // NOP operation, no action needed for VU0
    // 0x3491ac: 0x4a0002ff  vnop
    ctx->pc = 0x3491acu;
    // NOP operation, no action needed for VU0
    // 0x3491b0: 0x4a0002ff  vnop
    ctx->pc = 0x3491b0u;
    // NOP operation, no action needed for VU0
    // 0x3491b4: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x3491b4u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x3491b8: 0x30420aa8  andi        $v0, $v0, 0xAA8
    ctx->pc = 0x3491b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2728);
    // 0x3491bc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x3491bcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3491c0:
    // 0x3491c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3491c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3491c4:
    // 0x3491c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3491c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3491c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3491c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3491cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3491CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3491D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491CCu;
        // 0x3491d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3491CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3491D4u;
    // 0x3491d4: 0x0  nop
    ctx->pc = 0x3491d4u;
    // NOP
    ctx->pc = 0x3491d8u;
}
