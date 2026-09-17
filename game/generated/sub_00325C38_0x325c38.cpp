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

// Function: sub_00325C38
// Address: 0x325c38 - 0x325cb0
void sub_00325C38_0x325c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325C38_0x325c38");
#endif

    ctx->pc = 0x325c38u;

    // 0x325c38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x325c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x325c3c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x325c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x325c40: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x325c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x325c44: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x325c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c48: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x325c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x325c4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x325c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x325c50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x325c54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x325c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x325c58: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x325c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x325c5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325c60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x325c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x325c64: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x325c64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x325c68: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x325c68u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x325c6c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x325c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x325c70: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x325c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x325c74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x325c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x325c78: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x325c78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x325c7c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x325c7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x325c80: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x325c80u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x325c84: 0x8ce30040  lw          $v1, 0x40($a3)
    ctx->pc = 0x325c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x325c88: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x325c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x325c8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x325C8Cu;
    {
        const bool branch_taken_0x325c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C8Cu;
        // 0x325c90: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c8c) {
            ctx->pc = 0x325CA0u;
            goto label_325ca0;
        }
    }
    ctx->pc = 0x325C94u;
    // 0x325c94: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x325c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x325c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x325C98u;
    {
        const bool branch_taken_0x325c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C98u;
        // 0x325c9c: 0x7d020010  sq          $v0, 0x10($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c98) {
            ctx->pc = 0x325CA8u;
            goto label_325ca8;
        }
    }
    ctx->pc = 0x325CA0u;
label_325ca0:
    // 0x325ca0: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x325ca0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x325ca4: 0xf9210010  sqc2        $vf1, 0x10($t1)
    ctx->pc = 0x325ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_325ca8:
    // 0x325ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x325CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CA8u;
        // 0x325cac: 0x25020020  addiu       $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325CB0u;
}
