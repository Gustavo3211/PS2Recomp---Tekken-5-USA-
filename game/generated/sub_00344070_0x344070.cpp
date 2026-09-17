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

// Function: sub_00344070
// Address: 0x344070 - 0x3440d8
void sub_00344070_0x344070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344070_0x344070");
#endif

    ctx->pc = 0x344070u;

    // 0x344070: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x344074: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x344074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x344078: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x344078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x34407c: 0x460c181a  mula.s      $f3, $f12
    ctx->pc = 0x34407cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[12]));
    // 0x344080: 0x460c1102  mul.s       $f4, $f2, $f12
    ctx->pc = 0x344080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x344084: 0x3c02beaa  lui         $v0, 0xBEAA
    ctx->pc = 0x344084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48810 << 16));
    // 0x344088: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x344088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x34408c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x344090: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x344090u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3])));
    // 0x344094: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x344094u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x344098: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x344098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x34409c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3440a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3440a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3440a4: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x3440a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3])));
    // 0x3440a8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x3440a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3440ac: 0x3c02be12  lui         $v0, 0xBE12
    ctx->pc = 0x3440acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48658 << 16));
    // 0x3440b0: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x3440b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
    // 0x3440b4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3440b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3440b8: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x3440b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3])));
    // 0x3440bc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x3440bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3440c0: 0x3c023de3  lui         $v0, 0x3DE3
    ctx->pc = 0x3440c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15843 << 16));
    // 0x3440c4: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x3440c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x3440c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3440c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3440cc: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x3440ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3440d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3440D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3440D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3440D8u;
}
