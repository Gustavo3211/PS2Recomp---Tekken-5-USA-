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

// Function: sub_0031DC18
// Address: 0x31dc18 - 0x31dc20
void sub_0031DC18_0x31dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DC18_0x31dc18");
#endif

    ctx->pc = 0x31dc18u;

    // 0x31dc18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31DC18u;
    {
        const bool branch_taken_0x31dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC18u;
        // 0x31dc1c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc18) {
            ctx->pc = 0x31DC28u;
            return;
        }
    }
    ctx->pc = 0x31DC20u;
}
