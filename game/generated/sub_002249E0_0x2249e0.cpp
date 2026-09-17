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

// Function: sub_002249E0
// Address: 0x2249e0 - 0x224a00
void sub_002249E0_0x2249e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002249E0_0x2249e0");
#endif

    ctx->pc = 0x2249e0u;

    // 0x2249e0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2249e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2249e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2249e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2249e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2249e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2249ec: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x2249ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x2249f0: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2249f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2249f4: 0xac256114  sw          $a1, 0x6114($at)
    ctx->pc = 0x2249f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24852), GPR_U32(ctx, 5));
    // 0x2249f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2249F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2249F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224A00u;
}
