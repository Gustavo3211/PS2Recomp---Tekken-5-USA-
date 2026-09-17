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

// Function: sub_0048EC30
// Address: 0x48ec30 - 0x48ec40
void sub_0048EC30_0x48ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EC30_0x48ec30");
#endif

    ctx->pc = 0x48ec30u;

    // 0x48ec30: 0x24c2f650  addiu       $v0, $a2, -0x9B0
    ctx->pc = 0x48ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
    // 0x48ec34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48EC34u;
    {
        const bool branch_taken_0x48ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EC34u;
        // 0x48ec38: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec34) {
            ctx->pc = 0x48EC48u;
            return;
        }
    }
    ctx->pc = 0x48EC3Cu;
    // 0x48ec3c: 0x0  nop
    ctx->pc = 0x48ec3cu;
    // NOP
    ctx->pc = 0x48ec40u;
}
