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

// Function: sub_003492D0
// Address: 0x3492d0 - 0x3493e0
void sub_003492D0_0x3492d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003492D0_0x3492d0");
#endif

    switch (ctx->pc) {
        case 0x349360u: goto label_349360;
        case 0x3493a0u: goto label_3493a0;
        default: break;
    }

    ctx->pc = 0x3492d0u;

    // 0x3492d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3492d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3492d4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3492d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3492d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3492d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3492dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3492dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3492e0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3492e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3492e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3492e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3492e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3492e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3492ec: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3492ECu;
    {
        const bool branch_taken_0x3492ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3492F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492ECu;
        // 0x3492f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492ec) {
            ctx->pc = 0x3493CCu;
            goto label_3493cc;
        }
    }
    ctx->pc = 0x3492F4u;
    // 0x3492f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3492f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3492f8: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x3492f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3492fc: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x3492fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x349300: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x349300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349304: 0x24860068  addiu       $a2, $a0, 0x68
    ctx->pc = 0x349304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x349308: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x349308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34930c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x34930cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x349310: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x349310u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x349314: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x349314u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349318: 0xe4c00050  swc1        $f0, 0x50($a2)
    ctx->pc = 0x349318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
    // 0x34931c: 0x249000b0  addiu       $s0, $a0, 0xB0
    ctx->pc = 0x34931cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x349320: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x349320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349324: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x349324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x349328: 0x3464000c  ori         $a0, $v1, 0xC
    ctx->pc = 0x349328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x34932c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x34932cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x349330: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x349330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x349334: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x349334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x349338: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x349338u;
    {
        const bool branch_taken_0x349338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349338u;
        // 0x34933c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349338) {
            ctx->pc = 0x3493CCu;
            goto label_3493cc;
        }
    }
    ctx->pc = 0x349340u;
    // 0x349340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x349340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349344: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x349344u;
    {
        const bool branch_taken_0x349344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349344u;
        // 0x349348: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349344) {
            ctx->pc = 0x3493C8u;
            goto label_3493c8;
        }
    }
    ctx->pc = 0x34934Cu;
    // 0x34934c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x34934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x349350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349350u;
    {
        const bool branch_taken_0x349350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349350) {
            ctx->pc = 0x349360u;
            goto label_349360;
        }
    }
    ctx->pc = 0x349358u;
    // 0x349358: 0xc0cfd02  jal         func_33F408
    ctx->pc = 0x349358u;
    SET_GPR_U32(ctx, 31, 0x349360u);
    ctx->pc = 0x34935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349358u;
    // 0x34935c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F408u, 0x349358u, 0x349360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349360u;
label_349360:
    // 0x349360: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349360u;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x349364: 0x4a0002ff  vnop
    ctx->pc = 0x349364u;
    // NOP operation, no action needed for VU0
    // 0x349368: 0x4a0002ff  vnop
    ctx->pc = 0x349368u;
    // NOP operation, no action needed for VU0
    // 0x34936c: 0x4a0002ff  vnop
    ctx->pc = 0x34936cu;
    // NOP operation, no action needed for VU0
    // 0x349370: 0x4a0002ff  vnop
    ctx->pc = 0x349370u;
    // NOP operation, no action needed for VU0
    // 0x349374: 0x4a0002ff  vnop
    ctx->pc = 0x349374u;
    // NOP operation, no action needed for VU0
    // 0x349378: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x349378u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x34937c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x349380: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x349380u;
    {
        const bool branch_taken_0x349380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349380u;
        // 0x349384: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349380) {
            ctx->pc = 0x3493C8u;
            goto label_3493c8;
        }
    }
    ctx->pc = 0x349388u;
    // 0x349388: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x349388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34938c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x349390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349390u;
    {
        const bool branch_taken_0x349390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349390) {
            ctx->pc = 0x3493A0u;
            goto label_3493a0;
        }
    }
    ctx->pc = 0x349398u;
    // 0x349398: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x349398u;
    SET_GPR_U32(ctx, 31, 0x3493A0u);
    ctx->pc = 0x34939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349398u;
    // 0x34939c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x349398u, 0x3493A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3493A0u;
label_3493a0:
    // 0x3493a0: 0x4bd5b9ff  .word       0x4BD5B9FF                   # vclipw.xyz  $vf23, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3493a0u;
    { __m128 fs = ctx->vu0_vf[23]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x3493a4: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3493a4u;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x3493a8: 0x4a0002ff  vnop
    ctx->pc = 0x3493a8u;
    // NOP operation, no action needed for VU0
    // 0x3493ac: 0x4a0002ff  vnop
    ctx->pc = 0x3493acu;
    // NOP operation, no action needed for VU0
    // 0x3493b0: 0x4a0002ff  vnop
    ctx->pc = 0x3493b0u;
    // NOP operation, no action needed for VU0
    // 0x3493b4: 0x4a0002ff  vnop
    ctx->pc = 0x3493b4u;
    // NOP operation, no action needed for VU0
    // 0x3493b8: 0x4a0002ff  vnop
    ctx->pc = 0x3493b8u;
    // NOP operation, no action needed for VU0
    // 0x3493bc: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x3493bcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x3493c0: 0x30420aa8  andi        $v0, $v0, 0xAA8
    ctx->pc = 0x3493c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2728);
    // 0x3493c4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x3493c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3493c8:
    // 0x3493c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3493c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3493cc:
    // 0x3493cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3493ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3493d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3493d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3493d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3493D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3493D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3493D4u;
        // 0x3493d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3493D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3493DCu;
    // 0x3493dc: 0x0  nop
    ctx->pc = 0x3493dcu;
    // NOP
    ctx->pc = 0x3493e0u;
}
