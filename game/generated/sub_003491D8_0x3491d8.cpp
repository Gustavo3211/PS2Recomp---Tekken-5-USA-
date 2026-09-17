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

// Function: sub_003491D8
// Address: 0x3491d8 - 0x3492d0
void sub_003491D8_0x3491d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003491D8_0x3491d8");
#endif

    switch (ctx->pc) {
        case 0x349244u: goto label_349244;
        case 0x34925cu: goto label_34925c;
        default: break;
    }

    ctx->pc = 0x3491d8u;

    // 0x3491d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3491d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3491dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3491dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3491e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3491e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3491e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3491e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3491e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3491e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3491ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3491ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3491f0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3491f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3491f4: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3491f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3491f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3491F8u;
    {
        const bool branch_taken_0x3491f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3491FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491F8u;
        // 0x3491fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3491f8) {
            ctx->pc = 0x349220u;
            goto label_349220;
        }
    }
    ctx->pc = 0x349200u;
    // 0x349200: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x349200u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x349204: 0x26420d00  addiu       $v0, $s2, 0xD00
    ctx->pc = 0x349204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x349208: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x349208u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DDCu));
    // 0x34920c: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x34920Cu;
    {
        const bool branch_taken_0x34920c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34920c) {
            ctx->pc = 0x349210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34920Cu;
            // 0x349210: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x349298u;
            goto label_349298;
        }
    }
    ctx->pc = 0x349214u;
    // 0x349214: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x349214u;
    {
        const bool branch_taken_0x349214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349214u;
        // 0x349218: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349214) {
            ctx->pc = 0x34922Cu;
            goto label_34922c;
        }
    }
    ctx->pc = 0x34921Cu;
    // 0x34921c: 0x0  nop
    ctx->pc = 0x34921cu;
    // NOP
label_349220:
    // 0x349220: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x349220u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x349224: 0x26420d00  addiu       $v0, $s2, 0xD00
    ctx->pc = 0x349224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x349228: 0x245000b0  addiu       $s0, $v0, 0xB0
    ctx->pc = 0x349228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_34922c:
    // 0x34922c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x34922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349230: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x349230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x349234: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x349234u;
    {
        const bool branch_taken_0x349234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349234) {
            ctx->pc = 0x349238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349234u;
            // 0x349238: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34924Cu;
            goto label_34924c;
        }
    }
    ctx->pc = 0x34923Cu;
    // 0x34923c: 0xc0cfd02  jal         func_33F408
    ctx->pc = 0x34923Cu;
    SET_GPR_U32(ctx, 31, 0x349244u);
    ctx->pc = 0x349240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34923Cu;
    // 0x349240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F408u, 0x34923Cu, 0x349244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349244u;
label_349244:
    // 0x349244: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x349244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349248: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x349248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_34924c:
    // 0x34924c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34924Cu;
    {
        const bool branch_taken_0x34924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34924c) {
            ctx->pc = 0x34925Cu;
            goto label_34925c;
        }
    }
    ctx->pc = 0x349254u;
    // 0x349254: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x349254u;
    SET_GPR_U32(ctx, 31, 0x34925Cu);
    ctx->pc = 0x349258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349254u;
    // 0x349258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x349254u, 0x34925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34925Cu;
label_34925c:
    // 0x34925c: 0x4bd5b9ff  .word       0x4BD5B9FF                   # vclipw.xyz  $vf23, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x34925cu;
    { __m128 fs = ctx->vu0_vf[23]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x349260: 0x4bd5b1ff  .word       0x4BD5B1FF                   # vclipw.xyz  $vf22, $vf21w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x349260u;
    { __m128 fs = ctx->vu0_vf[22]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x349264: 0x4a0002ff  vnop
    ctx->pc = 0x349264u;
    // NOP operation, no action needed for VU0
    // 0x349268: 0x4a0002ff  vnop
    ctx->pc = 0x349268u;
    // NOP operation, no action needed for VU0
    // 0x34926c: 0x4a0002ff  vnop
    ctx->pc = 0x34926cu;
    // NOP operation, no action needed for VU0
    // 0x349270: 0x4a0002ff  vnop
    ctx->pc = 0x349270u;
    // NOP operation, no action needed for VU0
    // 0x349274: 0x4a0002ff  vnop
    ctx->pc = 0x349274u;
    // NOP operation, no action needed for VU0
    // 0x349278: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x349278u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x34927c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349280: 0x30420554  andi        $v0, $v0, 0x554
    ctx->pc = 0x349280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1364);
    // 0x349284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x349284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349288: 0x38420554  xori        $v0, $v0, 0x554
    ctx->pc = 0x349288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1364);
    // 0x34928c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x34928cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349290: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x349290u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x349294: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x349294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_349298:
    // 0x349298: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x349298u;
    {
        const bool branch_taken_0x349298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349298) {
            ctx->pc = 0x34929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349298u;
            // 0x34929c: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3492B4u;
            goto label_3492b4;
        }
    }
    ctx->pc = 0x3492A0u;
    // 0x3492a0: 0x26420d00  addiu       $v0, $s2, 0xD00
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3328));
    // 0x3492a4: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x3492a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x3492a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3492A8u;
    {
        const bool branch_taken_0x3492a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3492ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492A8u;
        // 0x3492ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3492a8) {
            ctx->pc = 0x3492B8u;
            goto label_3492b8;
        }
    }
    ctx->pc = 0x3492B0u;
    // 0x3492b0: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x3492b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_3492b4:
    // 0x3492b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3492b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3492b8:
    // 0x3492b8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3492b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3492bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3492bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3492c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3492c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3492c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3492c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3492c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3492C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3492CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3492C8u;
        // 0x3492cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3492C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3492D0u;
}
