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

// Function: sub_003355E8
// Address: 0x3355e8 - 0x335610
void sub_003355E8_0x3355e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003355E8_0x3355e8");
#endif

    ctx->pc = 0x3355e8u;

    // 0x3355e8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3355e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3355ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3355f0: 0x90420a10  lbu         $v0, 0xA10($v0)
    ctx->pc = 0x3355f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2576)));
    // 0x3355f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3355f8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x3355f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x3355fc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x3355fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x335600: 0xfc250900  sd          $a1, 0x900($at)
    ctx->pc = 0x335600u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 2304), GPR_U64(ctx, 5));
    // 0x335604: 0x3e00008  jr          $ra
    ctx->pc = 0x335604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33560Cu;
    // 0x33560c: 0x0  nop
    ctx->pc = 0x33560cu;
    // NOP
    ctx->pc = 0x335610u;
}
