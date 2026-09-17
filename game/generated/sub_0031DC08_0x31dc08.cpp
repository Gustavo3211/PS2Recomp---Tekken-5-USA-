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

// Function: sub_0031DC08
// Address: 0x31dc08 - 0x31dc18
void sub_0031DC08_0x31dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DC08_0x31dc08");
#endif

    ctx->pc = 0x31dc08u;

    // 0x31dc08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dc0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31DC0Cu;
    {
        const bool branch_taken_0x31dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC0Cu;
        // 0x31dc10: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc0c) {
            ctx->pc = 0x31DC28u;
            return;
        }
    }
    ctx->pc = 0x31DC14u;
    // 0x31dc14: 0x0  nop
    ctx->pc = 0x31dc14u;
    // NOP
    ctx->pc = 0x31dc18u;
}
