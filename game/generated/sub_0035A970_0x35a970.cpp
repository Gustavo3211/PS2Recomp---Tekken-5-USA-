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

// Function: sub_0035A970
// Address: 0x35a970 - 0x35a9a0
void sub_0035A970_0x35a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A970_0x35a970");
#endif

    ctx->pc = 0x35a970u;

    // 0x35a970: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x35a970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x35a974: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x35a974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x35a978: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35a97c: 0x2421efc0  addiu       $at, $at, -0x1040
    ctx->pc = 0x35a97cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294963136));
    // 0x35a980: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x35a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35a984: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35a984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35a988: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35a988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35a98c: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x35a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x35a990: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x35a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x35a994: 0x3e00008  jr          $ra
    ctx->pc = 0x35A994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A99Cu;
    // 0x35a99c: 0x0  nop
    ctx->pc = 0x35a99cu;
    // NOP
    ctx->pc = 0x35a9a0u;
}
