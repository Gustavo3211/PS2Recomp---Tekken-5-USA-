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

// Function: sub_00339688
// Address: 0x339688 - 0x3396c8
void sub_00339688_0x339688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339688_0x339688");
#endif

    ctx->pc = 0x339688u;

    // 0x339688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33968c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x33968cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339690: 0xd8980200  lqc2        $vf24, 0x200($a0)
    ctx->pc = 0x339690u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x339694: 0xd8990210  lqc2        $vf25, 0x210($a0)
    ctx->pc = 0x339694u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x339698: 0xd89a0220  lqc2        $vf26, 0x220($a0)
    ctx->pc = 0x339698u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x33969c: 0xd89b0230  lqc2        $vf27, 0x230($a0)
    ctx->pc = 0x33969cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x3396a0: 0xf8580000  sqc2        $vf24, 0x0($v0)
    ctx->pc = 0x3396a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x3396a4: 0xf8590010  sqc2        $vf25, 0x10($v0)
    ctx->pc = 0x3396a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x3396a8: 0xf85a0020  sqc2        $vf26, 0x20($v0)
    ctx->pc = 0x3396a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x3396ac: 0xf85b0030  sqc2        $vf27, 0x30($v0)
    ctx->pc = 0x3396acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x3396b0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3396b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3396b4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3396b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3396b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3396b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3396bc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3396bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3396c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3396C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3396C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396C0u;
        // 0x3396c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3396C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3396C8u;
}
