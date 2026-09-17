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

// Function: sub_001F11F8
// Address: 0x1f11f8 - 0x1f1210
void sub_001F11F8_0x1f11f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F11F8_0x1f11f8");
#endif

    ctx->pc = 0x1f11f8u;

    // 0x1f11f8: 0x8f839728  lw          $v1, -0x68D8($gp)
    ctx->pc = 0x1f11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940456)));
    // 0x1f11fc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1f11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f1200: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f1200u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f1204: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1204u;
        // 0x1f1208: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F120Cu;
    // 0x1f120c: 0x0  nop
    ctx->pc = 0x1f120cu;
    // NOP
    ctx->pc = 0x1f1210u;
}
