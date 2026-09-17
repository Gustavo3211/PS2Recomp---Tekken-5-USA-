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

// Function: sub_00342E40
// Address: 0x342e40 - 0x342e60
void sub_00342E40_0x342e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342E40_0x342e40");
#endif

    ctx->pc = 0x342e40u;

    // 0x342e40: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x342e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342e44: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x342e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x342e48: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x342e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x342e4c: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x342e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x342e50: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x342e50u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x342e54: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x342e54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x342e58: 0x3e00008  jr          $ra
    ctx->pc = 0x342E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E58u;
        // 0x342e5c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E60u;
}
