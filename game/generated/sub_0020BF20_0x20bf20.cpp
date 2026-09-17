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

// Function: sub_0020BF20
// Address: 0x20bf20 - 0x20bf30
void sub_0020BF20_0x20bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF20_0x20bf20");
#endif

    ctx->pc = 0x20bf20u;

    // 0x20bf20: 0x8f82c8c0  lw          $v0, -0x3740($gp)
    ctx->pc = 0x20bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x20bf24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20BF24u;
    {
        const bool branch_taken_0x20bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF24u;
        // 0x20bf28: 0x30430010  andi        $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf24) {
            ctx->pc = 0x20BF38u;
            return;
        }
    }
    ctx->pc = 0x20BF2Cu;
    // 0x20bf2c: 0x0  nop
    ctx->pc = 0x20bf2cu;
    // NOP
    ctx->pc = 0x20bf30u;
}
