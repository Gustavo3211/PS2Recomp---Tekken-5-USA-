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

// Function: sub_0031A548
// Address: 0x31a548 - 0x31a558
void sub_0031A548_0x31a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A548_0x31a548");
#endif

    ctx->pc = 0x31a548u;

    // 0x31a548: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a54c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31A54Cu;
    {
        const bool branch_taken_0x31a54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A54Cu;
        // 0x31a550: 0xac450db0  sw          $a1, 0xDB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a54c) {
            ctx->pc = 0x31A5F8u;
            return;
        }
    }
    ctx->pc = 0x31A554u;
    // 0x31a554: 0x0  nop
    ctx->pc = 0x31a554u;
    // NOP
    ctx->pc = 0x31a558u;
}
