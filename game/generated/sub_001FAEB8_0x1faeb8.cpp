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

// Function: sub_001FAEB8
// Address: 0x1faeb8 - 0x1faed0
void sub_001FAEB8_0x1faeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAEB8_0x1faeb8");
#endif

    ctx->pc = 0x1faeb8u;

    // 0x1faeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1faeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1faebc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1faec0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faec4: 0x809d3f8  j           func_274FE0
    ctx->pc = 0x1FAEC4u;
    ctx->pc = 0x1FAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAEC4u;
    // 0x1faec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE0u, 0x1FAEC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1FAECCu;
    // 0x1faecc: 0x0  nop
    ctx->pc = 0x1faeccu;
    // NOP
    ctx->pc = 0x1faed0u;
}
