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

// Function: sub_00240E98
// Address: 0x240e98 - 0x240f30
void sub_00240E98_0x240e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240E98_0x240e98");
#endif

    switch (ctx->pc) {
        case 0x240eb8u: goto label_240eb8;
        case 0x240ed4u: goto label_240ed4;
        case 0x240ee0u: goto label_240ee0;
        default: break;
    }

    ctx->pc = 0x240e98u;

    // 0x240e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240ea8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240eac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x240eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x240eb0: 0xc090f96  jal         func_243E58
    ctx->pc = 0x240EB0u;
    SET_GPR_U32(ctx, 31, 0x240EB8u);
    ctx->pc = 0x240EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240EB0u;
    // 0x240eb4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E58u, 0x240EB0u, 0x240EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EB8u;
label_240eb8:
    // 0x240eb8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x240ebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x240ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ec0: 0x247136c0  addiu       $s1, $v1, 0x36C0
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 14016));
    // 0x240ec4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x240EC4u;
    {
        const bool branch_taken_0x240ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EC4u;
        // 0x240ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ec4) {
            ctx->pc = 0x240F14u;
            goto label_240f14;
        }
    }
    ctx->pc = 0x240ECCu;
    // 0x240ecc: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x240ECCu;
    SET_GPR_U32(ctx, 31, 0x240ED4u);
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x240ECCu, 0x240ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240ED4u;
label_240ed4:
    // 0x240ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x240ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ed8: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x240ED8u;
    SET_GPR_U32(ctx, 31, 0x240EE0u);
    ctx->pc = 0x240EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240ED8u;
    // 0x240edc: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x240ED8u, 0x240EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240EE0u;
label_240ee0:
    // 0x240ee0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x240ee4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x240ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240ee8: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x240ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x240eec: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x240eecu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240ef0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x240ef0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240ef4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x240ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x240ef8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x240ef8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x240efc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x240efcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x240f00: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x240f00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x240f04: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x240f04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x240f08: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x240f08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x240f0c: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x240f0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x240f10: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x240f10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_240f14:
    // 0x240f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240f20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x240f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240f24: 0x3e00008  jr          $ra
    ctx->pc = 0x240F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F24u;
        // 0x240f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240F2Cu;
    // 0x240f2c: 0x0  nop
    ctx->pc = 0x240f2cu;
    // NOP
    ctx->pc = 0x240f30u;
}
