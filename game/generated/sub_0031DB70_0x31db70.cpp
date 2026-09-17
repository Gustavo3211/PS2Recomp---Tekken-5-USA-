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

// Function: sub_0031DB70
// Address: 0x31db70 - 0x31db80
void sub_0031DB70_0x31db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DB70_0x31db70");
#endif

    ctx->pc = 0x31db70u;

    // 0x31db70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31db74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31DB74u;
    {
        const bool branch_taken_0x31db74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB74u;
        // 0x31db78: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db74) {
            ctx->pc = 0x31DBC0u;
            return;
        }
    }
    ctx->pc = 0x31DB7Cu;
    // 0x31db7c: 0x0  nop
    ctx->pc = 0x31db7cu;
    // NOP
    ctx->pc = 0x31db80u;
}
