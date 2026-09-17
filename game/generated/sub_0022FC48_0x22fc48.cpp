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

// Function: sub_0022FC48
// Address: 0x22fc48 - 0x22fce0
void sub_0022FC48_0x22fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FC48_0x22fc48");
#endif

    switch (ctx->pc) {
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fcbcu: goto label_22fcbc;
        case 0x22fcc4u: goto label_22fcc4;
        default: break;
    }

    ctx->pc = 0x22fc48u;

    // 0x22fc48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22fc4c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x22fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x22fc50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22fc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc54: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x22fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x22fc58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22fc58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc5c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22fc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22fc60: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x22FC60u;
    SET_GPR_U32(ctx, 31, 0x22FC68u);
    ctx->pc = 0x22FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC60u;
    // 0x22fc64: 0xe7b40068  swc1        $f20, 0x68($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x22FC60u, 0x22FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC68u;
label_22fc68:
    // 0x22fc68: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x22FC68u;
    SET_GPR_U32(ctx, 31, 0x22FC70u);
    ctx->pc = 0x22FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC68u;
    // 0x22fc6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x22FC68u, 0x22FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC70u;
label_22fc70:
    // 0x22fc70: 0xdbbc0000  lqc2        $vf28, 0x0($sp)
    ctx->pc = 0x22fc70u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fc74: 0xdbbd0010  lqc2        $vf29, 0x10($sp)
    ctx->pc = 0x22fc74u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fc78: 0xdbbe0020  lqc2        $vf30, 0x20($sp)
    ctx->pc = 0x22fc78u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fc7c: 0xdbbf0030  lqc2        $vf31, 0x30($sp)
    ctx->pc = 0x22fc7cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fc80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22fc84: 0xc0cbab4  jal         func_32EAD0
    ctx->pc = 0x22FC84u;
    SET_GPR_U32(ctx, 31, 0x22FC8Cu);
    ctx->pc = 0x22FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC84u;
    // 0x22fc88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EAD0u, 0x22FC84u, 0x22FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC8Cu;
label_22fc8c:
    // 0x22fc8c: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x22fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22fc90: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x22fc90u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x22fc94: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x22fc94u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22fc98: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x22fc98u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22fc9c: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x22fc9cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22fca0: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x22fca0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22fca4: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x22fca4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x22fca8: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x22fca8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x22fcac: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x22fcacu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x22fcb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22fcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fcb4: 0xc0cbaea  jal         func_32EBA8
    ctx->pc = 0x22FCB4u;
    SET_GPR_U32(ctx, 31, 0x22FCBCu);
    ctx->pc = 0x22FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FCB4u;
    // 0x22fcb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EBA8u, 0x22FCB4u, 0x22FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCBCu;
label_22fcbc:
    // 0x22fcbc: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x22FCBCu;
    SET_GPR_U32(ctx, 31, 0x22FCC4u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x22FCBCu, 0x22FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCC4u;
label_22fcc4:
    // 0x22fcc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x22fcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22fcc8: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x22fcc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x22fccc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22fcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22fcd0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x22fcd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22fcd4: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x22fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22fcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCD8u;
        // 0x22fcdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FCE0u;
}
