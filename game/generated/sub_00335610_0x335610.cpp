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

// Function: sub_00335610
// Address: 0x335610 - 0x335638
void sub_00335610_0x335610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335610_0x335610");
#endif

    ctx->pc = 0x335610u;

    // 0x335610: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x335610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x335614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x335618: 0x90630a10  lbu         $v1, 0xA10($v1)
    ctx->pc = 0x335618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x33561c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33561cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x335620: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x335620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x335624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x335624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335628: 0xdc420900  ld          $v0, 0x900($v0)
    ctx->pc = 0x335628u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 2304)));
    // 0x33562c: 0x3e00008  jr          $ra
    ctx->pc = 0x33562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33562Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335634u;
    // 0x335634: 0x0  nop
    ctx->pc = 0x335634u;
    // NOP
    ctx->pc = 0x335638u;
}
