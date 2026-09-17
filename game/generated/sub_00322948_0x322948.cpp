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

// Function: sub_00322948
// Address: 0x322948 - 0x322980
void sub_00322948_0x322948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322948_0x322948");
#endif

    ctx->pc = 0x322948u;

    // 0x322948: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x322948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32294c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x32294cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x322950: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x322950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x322954: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x322954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x322958: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x322958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x32295c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x32295cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x322960: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x322960u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x322964: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x322964u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x322968: 0xf85c0010  sqc2        $vf28, 0x10($v0)
    ctx->pc = 0x322968u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32296c: 0xf85d0020  sqc2        $vf29, 0x20($v0)
    ctx->pc = 0x32296cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x322970: 0xf85e0030  sqc2        $vf30, 0x30($v0)
    ctx->pc = 0x322970u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x322974: 0xf85f0040  sqc2        $vf31, 0x40($v0)
    ctx->pc = 0x322974u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x322978: 0x3e00008  jr          $ra
    ctx->pc = 0x322978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322978u;
        // 0x32297c: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322980u;
}
