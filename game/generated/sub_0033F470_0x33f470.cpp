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

// Function: sub_0033F470
// Address: 0x33f470 - 0x33f4d0
void sub_0033F470_0x33f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F470_0x33f470");
#endif

    switch (ctx->pc) {
        case 0x33f498u: goto label_33f498;
        default: break;
    }

    ctx->pc = 0x33f470u;

    // 0x33f470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f478: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f47c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f480: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33f480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f484: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x33f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33f488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33F488u;
    {
        const bool branch_taken_0x33f488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f488) {
            ctx->pc = 0x33F49Cu;
            goto label_33f49c;
        }
    }
    ctx->pc = 0x33F490u;
    // 0x33f490: 0xc0cfd34  jal         func_33F4D0
    ctx->pc = 0x33F490u;
    SET_GPR_U32(ctx, 31, 0x33F498u);
    ctx->pc = 0x33F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F4D0u, 0x33F490u, 0x33F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F498u;
label_33f498:
    // 0x33f498: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33f49c:
    // 0x33f49c: 0x4bf581bc  vmulax.xyzw $ACC, $vf16, $vf21x
    ctx->pc = 0x33f49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4a0: 0x4bf588bd  vmadday.xyzw $ACC, $vf17, $vf21y
    ctx->pc = 0x33f4a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4a4: 0x4bf590be  vmaddaz.xyzw $ACC, $vf18, $vf21z
    ctx->pc = 0x33f4a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[21], ctx->vu0_vf[21], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33f4a8: 0x4be09dcb  vmaddw.xyzw $vf23, $vf19, $vf0w
    ctx->pc = 0x33f4a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = _mm_blendv_ps(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x33f4ac: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x33f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33f4b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33f4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33f4b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x33f4b8: 0x4a56bb3d  vmr32.z     $vf22, $vf23
    ctx->pc = 0x33f4b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[23], ctx->vu0_vf[23], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x33f4bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f4bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f4c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F4C4u;
        // 0x33f4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F4CCu;
    // 0x33f4cc: 0x0  nop
    ctx->pc = 0x33f4ccu;
    // NOP
    ctx->pc = 0x33f4d0u;
}
