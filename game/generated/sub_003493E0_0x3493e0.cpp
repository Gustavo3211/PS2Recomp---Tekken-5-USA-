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

// Function: sub_003493E0
// Address: 0x3493e0 - 0x3494d8
void sub_003493E0_0x3493e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003493E0_0x3493e0");
#endif

    switch (ctx->pc) {
        case 0x34944cu: goto label_34944c;
        case 0x349464u: goto label_349464;
        default: break;
    }

    ctx->pc = 0x3493e0u;

    // 0x3493e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3493e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3493e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3493e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3493e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3493e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3493ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3493ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3493f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3493f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3493f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3493f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3493f8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3493f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3493fc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3493fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x349400: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x349400u;
    {
        const bool branch_taken_0x349400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349400u;
        // 0x349404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349400) {
            ctx->pc = 0x349428u;
            goto label_349428;
        }
    }
    ctx->pc = 0x349408u;
    // 0x349408: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x349408u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x34940c: 0x26420d00  addiu       $v0, $s2, 0xD00
    ctx->pc = 0x34940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x349410: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x349410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DDCu));
    // 0x349414: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x349414u;
    {
        const bool branch_taken_0x349414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349414) {
            ctx->pc = 0x349418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349414u;
            // 0x349418: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3494A0u;
            goto label_3494a0;
        }
    }
    ctx->pc = 0x34941Cu;
    // 0x34941c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34941Cu;
    {
        const bool branch_taken_0x34941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34941Cu;
        // 0x349420: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34941c) {
            ctx->pc = 0x349434u;
            goto label_349434;
        }
    }
    ctx->pc = 0x349424u;
    // 0x349424: 0x0  nop
    ctx->pc = 0x349424u;
    // NOP
label_349428:
    // 0x349428: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x349428u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x34942c: 0x26420d00  addiu       $v0, $s2, 0xD00
    ctx->pc = 0x34942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x349430: 0x245000b0  addiu       $s0, $v0, 0xB0
    ctx->pc = 0x349430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_349434:
    // 0x349434: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x349434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349438: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x349438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x34943c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34943Cu;
    {
        const bool branch_taken_0x34943c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34943c) {
            ctx->pc = 0x349440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34943Cu;
            // 0x349440: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349454u;
            goto label_349454;
        }
    }
    ctx->pc = 0x349444u;
    // 0x349444: 0xc0cfd02  jal         func_33F408
    ctx->pc = 0x349444u;
    SET_GPR_U32(ctx, 31, 0x34944Cu);
    ctx->pc = 0x349448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349444u;
    // 0x349448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F408u, 0x349444u, 0x34944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34944Cu;
label_34944c:
    // 0x34944c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x34944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349450: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x349450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_349454:
    // 0x349454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349454u;
    {
        const bool branch_taken_0x349454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349454) {
            ctx->pc = 0x349464u;
            goto label_349464;
        }
    }
    ctx->pc = 0x34945Cu;
    // 0x34945c: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x34945Cu;
    SET_GPR_U32(ctx, 31, 0x349464u);
    ctx->pc = 0x349460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34945Cu;
    // 0x349460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x34945Cu, 0x349464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349464u;
label_349464:
    // 0x349464: 0x4bd5b9ff  .word       0x4BD5B9FF                   # vclipw.xyz  $vf23, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349464u;
    { __m128 fs = ctx->vu0_vf[23]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x349468: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349468u;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x34946c: 0x4a0002ff  vnop
    ctx->pc = 0x34946cu;
    // NOP operation, no action needed for VU0
    // 0x349470: 0x4a0002ff  vnop
    ctx->pc = 0x349470u;
    // NOP operation, no action needed for VU0
    // 0x349474: 0x4a0002ff  vnop
    ctx->pc = 0x349474u;
    // NOP operation, no action needed for VU0
    // 0x349478: 0x4a0002ff  vnop
    ctx->pc = 0x349478u;
    // NOP operation, no action needed for VU0
    // 0x34947c: 0x4a0002ff  vnop
    ctx->pc = 0x34947cu;
    // NOP operation, no action needed for VU0
    // 0x349480: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x349480u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x349484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349488: 0x30420554  andi        $v0, $v0, 0x554
    ctx->pc = 0x349488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1364);
    // 0x34948c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349490: 0x38420554  xori        $v0, $v0, 0x554
    ctx->pc = 0x349490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1364);
    // 0x349494: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x349494u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349498: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x349498u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x34949c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x34949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_3494a0:
    // 0x3494a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3494A0u;
    {
        const bool branch_taken_0x3494a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3494a0) {
            ctx->pc = 0x3494A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3494A0u;
            // 0x3494a4: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3494BCu;
            goto label_3494bc;
        }
    }
    ctx->pc = 0x3494A8u;
    // 0x3494a8: 0x26420d00  addiu       $v0, $s2, 0xD00
    ctx->pc = 0x3494a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x3494ac: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x3494acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x3494b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3494B0u;
    {
        const bool branch_taken_0x3494b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3494B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494B0u;
        // 0x3494b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494b0) {
            ctx->pc = 0x3494C0u;
            goto label_3494c0;
        }
    }
    ctx->pc = 0x3494B8u;
    // 0x3494b8: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x3494b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_3494bc:
    // 0x3494bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3494bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3494c0:
    // 0x3494c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3494c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3494c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3494c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3494c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3494cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3494ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3494d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3494D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3494D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494D0u;
        // 0x3494d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3494D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3494D8u;
}
