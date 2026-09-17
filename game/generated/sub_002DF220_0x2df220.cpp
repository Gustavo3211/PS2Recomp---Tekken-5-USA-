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

// Function: sub_002DF220
// Address: 0x2df220 - 0x2df380
void sub_002DF220_0x2df220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF220_0x2df220");
#endif

    switch (ctx->pc) {
        case 0x2df254u: goto label_2df254;
        case 0x2df27cu: goto label_2df27c;
        case 0x2df284u: goto label_2df284;
        case 0x2df2b8u: goto label_2df2b8;
        case 0x2df2d0u: goto label_2df2d0;
        case 0x2df2e8u: goto label_2df2e8;
        case 0x2df310u: goto label_2df310;
        case 0x2df328u: goto label_2df328;
        case 0x2df340u: goto label_2df340;
        case 0x2df354u: goto label_2df354;
        default: break;
    }

    ctx->pc = 0x2df220u;

    // 0x2df220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2df224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2df228: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2df228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df22c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2df22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2df230: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2df230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2df234: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2df234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df238: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2df238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2df23c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2df23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df240: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2df240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2df244: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2df244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2df248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2df248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df24c: 0xc0b7bfa  jal         func_2DEFE8
    ctx->pc = 0x2DF24Cu;
    SET_GPR_U32(ctx, 31, 0x2DF254u);
    ctx->pc = 0x2DF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF24Cu;
    // 0x2df250: 0x8e750068  lw          $s5, 0x68($s3) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEFE8u, 0x2DF24Cu, 0x2DF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF254u;
label_2df254:
    // 0x2df254: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2df254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df258: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2df258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2df25c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2df25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2df260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2df260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2df264: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2df264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df268: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF268u;
    {
        const bool branch_taken_0x2df268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF268u;
        // 0x2df26c: 0x2451006c  addiu       $s1, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df268) {
            ctx->pc = 0x2DF27Cu;
            goto label_2df27c;
        }
    }
    ctx->pc = 0x2DF270u;
    // 0x2df270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2df270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df274: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DF274u;
    SET_GPR_U32(ctx, 31, 0x2DF27Cu);
    ctx->pc = 0x2DF278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF274u;
    // 0x2df278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF450u, 0x2DF274u, 0x2DF27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF27Cu;
label_2df27c:
    // 0x2df27c: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2DF27Cu;
    SET_GPR_U32(ctx, 31, 0x2DF284u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2DF27Cu, 0x2DF284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF284u;
label_2df284:
    // 0x2df284: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2df284u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2df288: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2df288u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2df28c: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2df28cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2df290: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2df290u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2df294: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2df294u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2df298: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2df298u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2df29c: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2df29cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2df2a0: 0x52400017  beql        $s2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DF2A0u;
    {
        const bool branch_taken_0x2df2a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df2a0) {
            ctx->pc = 0x2DF2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF2A0u;
            // 0x2df2a4: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF300u;
            goto label_2df300;
        }
    }
    ctx->pc = 0x2DF2A8u;
    // 0x2df2a8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2df2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2df2ac: 0x12110027  beq         $s0, $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DF2ACu;
    {
        const bool branch_taken_0x2df2ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2df2ac) {
            ctx->pc = 0x2DF34Cu;
            goto label_2df34c;
        }
    }
    ctx->pc = 0x2DF2B4u;
    // 0x2df2b4: 0xae700068  sw          $s0, 0x68($s3)
    ctx->pc = 0x2df2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 16));
label_2df2b8:
    // 0x2df2b8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2df2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2df2bc: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2df2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2df2c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF2C0u;
    {
        const bool branch_taken_0x2df2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2C0u;
        // 0x2df2c4: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2c0) {
            ctx->pc = 0x2DF2D4u;
            goto label_2df2d4;
        }
    }
    ctx->pc = 0x2DF2C8u;
    // 0x2df2c8: 0xc0b7a0a  jal         func_2DE828
    ctx->pc = 0x2DF2C8u;
    SET_GPR_U32(ctx, 31, 0x2DF2D0u);
    ctx->pc = 0x2DF2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2C8u;
    // 0x2df2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE828u, 0x2DF2C8u, 0x2DF2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2D0u;
label_2df2d0:
    // 0x2df2d0: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2df2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2df2d4:
    // 0x2df2d4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2df2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2df2d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF2D8u;
    {
        const bool branch_taken_0x2df2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df2d8) {
            ctx->pc = 0x2DF2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF2D8u;
            // 0x2df2dc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF2ECu;
            goto label_2df2ec;
        }
    }
    ctx->pc = 0x2DF2E0u;
    // 0x2df2e0: 0xc0b7a38  jal         func_2DE8E0
    ctx->pc = 0x2DF2E0u;
    SET_GPR_U32(ctx, 31, 0x2DF2E8u);
    ctx->pc = 0x2DF2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF2E0u;
    // 0x2df2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8E0u, 0x2DF2E0u, 0x2DF2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF2E8u;
label_2df2e8:
    // 0x2df2e8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2df2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df2ec:
    // 0x2df2ec: 0x5611fff2  bnel        $s0, $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DF2ECu;
    {
        const bool branch_taken_0x2df2ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2df2ec) {
            ctx->pc = 0x2DF2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF2ECu;
            // 0x2df2f0: 0xae700068  sw          $s0, 0x68($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df2b8;
        }
    }
    ctx->pc = 0x2DF2F4u;
    // 0x2df2f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DF2F4u;
    {
        const bool branch_taken_0x2df2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df2f4) {
            ctx->pc = 0x2DF34Cu;
            goto label_2df34c;
        }
    }
    ctx->pc = 0x2DF2FCu;
    // 0x2df2fc: 0x0  nop
    ctx->pc = 0x2df2fcu;
    // NOP
label_2df300:
    // 0x2df300: 0x12110012  beq         $s0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DF300u;
    {
        const bool branch_taken_0x2df300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x2df300) {
            ctx->pc = 0x2DF34Cu;
            goto label_2df34c;
        }
    }
    ctx->pc = 0x2DF308u;
    // 0x2df308: 0xae700068  sw          $s0, 0x68($s3)
    ctx->pc = 0x2df308u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 16));
    // 0x2df30c: 0x0  nop
    ctx->pc = 0x2df30cu;
    // NOP
label_2df310:
    // 0x2df310: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2df310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2df314: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2df314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x2df318: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF318u;
    {
        const bool branch_taken_0x2df318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF318u;
        // 0x2df31c: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df318) {
            ctx->pc = 0x2DF32Cu;
            goto label_2df32c;
        }
    }
    ctx->pc = 0x2DF320u;
    // 0x2df320: 0xc0b7a0a  jal         func_2DE828
    ctx->pc = 0x2DF320u;
    SET_GPR_U32(ctx, 31, 0x2DF328u);
    ctx->pc = 0x2DF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF320u;
    // 0x2df324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE828u, 0x2DF320u, 0x2DF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF328u;
label_2df328:
    // 0x2df328: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2df328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2df32c:
    // 0x2df32c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2df32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2df330: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF330u;
    {
        const bool branch_taken_0x2df330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df330) {
            ctx->pc = 0x2DF334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF330u;
            // 0x2df334: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF344u;
            goto label_2df344;
        }
    }
    ctx->pc = 0x2DF338u;
    // 0x2df338: 0xc0b7a38  jal         func_2DE8E0
    ctx->pc = 0x2DF338u;
    SET_GPR_U32(ctx, 31, 0x2DF340u);
    ctx->pc = 0x2DF33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF338u;
    // 0x2df33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE8E0u, 0x2DF338u, 0x2DF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF340u;
label_2df340:
    // 0x2df340: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2df340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df344:
    // 0x2df344: 0x5611fff2  bnel        $s0, $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2DF344u;
    {
        const bool branch_taken_0x2df344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2df344) {
            ctx->pc = 0x2DF348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF344u;
            // 0x2df348: 0xae700068  sw          $s0, 0x68($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df310;
        }
    }
    ctx->pc = 0x2DF34Cu;
label_2df34c:
    // 0x2df34c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2DF34Cu;
    SET_GPR_U32(ctx, 31, 0x2DF354u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2DF34Cu, 0x2DF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF354u;
label_2df354:
    // 0x2df354: 0xae750068  sw          $s5, 0x68($s3)
    ctx->pc = 0x2df354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 21));
    // 0x2df358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2df358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2df35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2df360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2df360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df364: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2df364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df368: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2df368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df36c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2df36cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df370: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2df370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df374: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF374u;
        // 0x2df378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF37Cu;
    // 0x2df37c: 0x0  nop
    ctx->pc = 0x2df37cu;
    // NOP
    ctx->pc = 0x2df380u;
}
