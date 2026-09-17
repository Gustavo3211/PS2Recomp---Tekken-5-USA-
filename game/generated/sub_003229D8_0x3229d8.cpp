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

// Function: sub_003229D8
// Address: 0x3229d8 - 0x322a20
void sub_003229D8_0x3229d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003229D8_0x3229d8");
#endif

    ctx->pc = 0x3229d8u;

    // 0x3229d8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3229d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3229dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3229dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3229e0: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x3229e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3229e4: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x3229e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x3229e8: 0x34840036  ori         $a0, $a0, 0x36
    ctx->pc = 0x3229e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54);
    // 0x3229ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3229ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3229f0: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x3229f0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3229f4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x3229f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x3229f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3229f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3229fc: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3229fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x322a00: 0xd8780280  lqc2        $vf24, 0x280($v1)
    ctx->pc = 0x322a00u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(FAST_READ128(0x400700u));
    // 0x322a04: 0xd8790290  lqc2        $vf25, 0x290($v1)
    ctx->pc = 0x322a04u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(FAST_READ128(0x400710u));
    // 0x322a08: 0xd87a02a0  lqc2        $vf26, 0x2A0($v1)
    ctx->pc = 0x322a08u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x400720u));
    // 0x322a0c: 0xd87b02b0  lqc2        $vf27, 0x2B0($v1)
    ctx->pc = 0x322a0cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(FAST_READ128(0x400730u));
    // 0x322a10: 0xf85b0010  sqc2        $vf27, 0x10($v0)
    ctx->pc = 0x322a10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x322a14: 0x3e00008  jr          $ra
    ctx->pc = 0x322A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A14u;
        // 0x322a18: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322A1Cu;
    // 0x322a1c: 0x0  nop
    ctx->pc = 0x322a1cu;
    // NOP
    ctx->pc = 0x322a20u;
}
