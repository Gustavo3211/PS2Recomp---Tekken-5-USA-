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

// Function: sub_002D16E0
// Address: 0x2d16e0 - 0x2d1710
void sub_002D16E0_0x2d16e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D16E0_0x2d16e0");
#endif

    ctx->pc = 0x2d16e0u;

    // 0x2d16e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d16e4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2d16e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d16e8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2d16e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2d16ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2d16ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2d16f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2d16f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2d16f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2d16f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2d16f8: 0x8c43f668  lw          $v1, -0x998($v0)
    ctx->pc = 0x2d16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964840)));
    // 0x2d16fc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d16fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1700: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d1700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d1704: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1704u;
        // 0x2d1708: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D170Cu;
    // 0x2d170c: 0x0  nop
    ctx->pc = 0x2d170cu;
    // NOP
    ctx->pc = 0x2d1710u;
}
