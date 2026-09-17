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

// Function: sub_0033CEA8
// Address: 0x33cea8 - 0x33ceb8
void sub_0033CEA8_0x33cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CEA8_0x33cea8");
#endif

    ctx->pc = 0x33cea8u;

    // 0x33cea8: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x33cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x33ceac: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x33ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x33ceb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33CEB0u;
    {
        const bool branch_taken_0x33ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEB0u;
        // 0x33ceb4: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ceb0) {
            ctx->pc = 0x33CEBCu;
            return;
        }
    }
    ctx->pc = 0x33CEB8u;
}
