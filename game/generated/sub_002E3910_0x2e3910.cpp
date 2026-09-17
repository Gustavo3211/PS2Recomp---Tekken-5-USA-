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

// Function: sub_002E3910
// Address: 0x2e3910 - 0x2e39b8
void sub_002E3910_0x2e3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3910_0x2e3910");
#endif

    switch (ctx->pc) {
        case 0x2e3910u: goto label_2e3910;
        case 0x2e3914u: goto label_2e3914;
        case 0x2e3918u: goto label_2e3918;
        case 0x2e391cu: goto label_2e391c;
        case 0x2e3920u: goto label_2e3920;
        case 0x2e3924u: goto label_2e3924;
        case 0x2e3928u: goto label_2e3928;
        case 0x2e392cu: goto label_2e392c;
        case 0x2e3930u: goto label_2e3930;
        case 0x2e3934u: goto label_2e3934;
        case 0x2e3938u: goto label_2e3938;
        case 0x2e393cu: goto label_2e393c;
        case 0x2e3940u: goto label_2e3940;
        case 0x2e3944u: goto label_2e3944;
        case 0x2e3948u: goto label_2e3948;
        case 0x2e394cu: goto label_2e394c;
        case 0x2e3950u: goto label_2e3950;
        case 0x2e3954u: goto label_2e3954;
        case 0x2e3958u: goto label_2e3958;
        case 0x2e395cu: goto label_2e395c;
        case 0x2e3960u: goto label_2e3960;
        case 0x2e3964u: goto label_2e3964;
        case 0x2e3968u: goto label_2e3968;
        case 0x2e396cu: goto label_2e396c;
        case 0x2e3970u: goto label_2e3970;
        case 0x2e3974u: goto label_2e3974;
        case 0x2e3978u: goto label_2e3978;
        case 0x2e397cu: goto label_2e397c;
        case 0x2e3980u: goto label_2e3980;
        case 0x2e3984u: goto label_2e3984;
        case 0x2e3988u: goto label_2e3988;
        case 0x2e398cu: goto label_2e398c;
        case 0x2e3990u: goto label_2e3990;
        case 0x2e3994u: goto label_2e3994;
        case 0x2e3998u: goto label_2e3998;
        case 0x2e399cu: goto label_2e399c;
        case 0x2e39a0u: goto label_2e39a0;
        case 0x2e39a4u: goto label_2e39a4;
        case 0x2e39a8u: goto label_2e39a8;
        case 0x2e39acu: goto label_2e39ac;
        case 0x2e39b0u: goto label_2e39b0;
        case 0x2e39b4u: goto label_2e39b4;
        default: break;
    }

    ctx->pc = 0x2e3910u;

label_2e3910:
    // 0x2e3910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e3914:
    // 0x2e3914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e3918:
    // 0x2e3918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e391c:
    // 0x2e391c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2e3920:
    // 0x2e3920: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_2e3924:
    if (ctx->pc == 0x2E3924u) {
        ctx->pc = 0x2E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3920u;
        // 0x2e3924: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3928u;
        goto label_2e3928;
    }
    ctx->pc = 0x2E3920u;
    {
        const bool branch_taken_0x2e3920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3920u;
        // 0x2e3924: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3920) {
            ctx->pc = 0x2E39A8u;
            goto label_2e39a8;
        }
    }
    ctx->pc = 0x2E3928u;
label_2e3928:
    // 0x2e3928: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2e3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2e392c:
    // 0x2e392c: 0x5840001f  blezl       $v0, . + 4 + (0x1F << 2)
label_2e3930:
    if (ctx->pc == 0x2E3930u) {
        ctx->pc = 0x2E3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E392Cu;
        // 0x2e3930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3934u;
        goto label_2e3934;
    }
    ctx->pc = 0x2E392Cu;
    {
        const bool branch_taken_0x2e392c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e392c) {
            ctx->pc = 0x2E3930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E392Cu;
            // 0x2e3930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E39ACu;
            goto label_2e39ac;
        }
    }
    ctx->pc = 0x2E3934u;
label_2e3934:
    // 0x2e3934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e3938:
    // 0x2e3938: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2e393c:
    if (ctx->pc == 0x2E393Cu) {
        ctx->pc = 0x2E3940u;
        goto label_2e3940;
    }
    ctx->pc = 0x2E3938u;
    {
        const bool branch_taken_0x2e3938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3938) {
            ctx->pc = 0x2E3950u;
            goto label_2e3950;
        }
    }
    ctx->pc = 0x2E3940u;
label_2e3940:
    // 0x2e3940: 0xc090f0e  jal         func_243C38
label_2e3944:
    if (ctx->pc == 0x2E3944u) {
        ctx->pc = 0x2E3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3940u;
        // 0x2e3944: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3948u;
        goto label_2e3948;
    }
    ctx->pc = 0x2E3940u;
    SET_GPR_U32(ctx, 31, 0x2E3948u);
    ctx->pc = 0x2E3944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3940u;
    // 0x2e3944: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C38u, 0x2E3940u, 0x2E3948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3948u;
label_2e3948:
    // 0x2e3948: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e394c:
    if (ctx->pc == 0x2E394Cu) {
        ctx->pc = 0x2E3950u;
        goto label_2e3950;
    }
    ctx->pc = 0x2E3948u;
    {
        const bool branch_taken_0x2e3948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3948) {
            ctx->pc = 0x2E3960u;
            goto label_2e3960;
        }
    }
    ctx->pc = 0x2E3950u;
label_2e3950:
    // 0x2e3950: 0xc08f110  jal         func_23C440
label_2e3954:
    if (ctx->pc == 0x2E3954u) {
        ctx->pc = 0x2E3958u;
        goto label_2e3958;
    }
    ctx->pc = 0x2E3950u;
    SET_GPR_U32(ctx, 31, 0x2E3958u);
    ctx->pc = 0x23C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C440u, 0x2E3950u, 0x2E3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3958u;
label_2e3958:
    // 0x2e3958: 0xc090f0e  jal         func_243C38
label_2e395c:
    if (ctx->pc == 0x2E395Cu) {
        ctx->pc = 0x2E395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3958u;
        // 0x2e395c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E3960u;
        goto label_2e3960;
    }
    ctx->pc = 0x2E3958u;
    SET_GPR_U32(ctx, 31, 0x2E3960u);
    ctx->pc = 0x2E395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3958u;
    // 0x2e395c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C38u, 0x2E3958u, 0x2E3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3960u;
label_2e3960:
    // 0x2e3960: 0xc0cb7d4  jal         func_32DF50
label_2e3964:
    if (ctx->pc == 0x2E3964u) {
        ctx->pc = 0x2E3968u;
        goto label_2e3968;
    }
    ctx->pc = 0x2E3960u;
    SET_GPR_U32(ctx, 31, 0x2E3968u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2E3960u, 0x2E3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3968u;
label_2e3968:
    // 0x2e3968: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2e3968u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2e396c:
    // 0x2e396c: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2e396cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2e3970:
    // 0x2e3970: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2e3970u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2e3974:
    // 0x2e3974: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2e3974u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2e3978:
    // 0x2e3978: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2e3978u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_2e397c:
    // 0x2e397c: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2e397cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_2e3980:
    // 0x2e3980: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2e3980u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e3984:
    // 0x2e3984: 0x26050088  addiu       $a1, $s0, 0x88
    ctx->pc = 0x2e3984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_2e3988:
    // 0x2e3988: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2e3988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_2e398c:
    // 0x2e398c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2e398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2e3990:
    // 0x2e3990: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2e3990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e3994:
    // 0x2e3994: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e3994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e3998:
    // 0x2e3998: 0x60f809  jalr        $v1
label_2e399c:
    if (ctx->pc == 0x2E399Cu) {
        ctx->pc = 0x2E399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3998u;
        // 0x2e399c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39A0u;
        goto label_2e39a0;
    }
    ctx->pc = 0x2E3998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E39A0u);
        ctx->pc = 0x2E399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3998u;
        // 0x2e399c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3998u, 0x2E39A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E39A0u;
label_2e39a0:
    // 0x2e39a0: 0xc0cb7e0  jal         func_32DF80
label_2e39a4:
    if (ctx->pc == 0x2E39A4u) {
        ctx->pc = 0x2E39A8u;
        goto label_2e39a8;
    }
    ctx->pc = 0x2E39A0u;
    SET_GPR_U32(ctx, 31, 0x2E39A8u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2E39A0u, 0x2E39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E39A8u;
label_2e39a8:
    // 0x2e39a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e39a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e39ac:
    // 0x2e39ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e39acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e39b0:
    // 0x2e39b0: 0x3e00008  jr          $ra
label_2e39b4:
    if (ctx->pc == 0x2E39B4u) {
        ctx->pc = 0x2E39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39B0u;
        // 0x2e39b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E39B8u;
        goto label_fallthrough_0x2e39b0;
    }
    ctx->pc = 0x2E39B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E39B0u;
        // 0x2e39b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E39B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e39b0:
    ctx->pc = 0x2E39B8u;
}
