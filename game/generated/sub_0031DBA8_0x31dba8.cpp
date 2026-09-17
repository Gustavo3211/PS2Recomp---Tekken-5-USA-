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

// Function: sub_0031DBA8
// Address: 0x31dba8 - 0x31dbb8
void sub_0031DBA8_0x31dba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DBA8_0x31dba8");
#endif

    ctx->pc = 0x31dba8u;

    // 0x31dba8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x31dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x31dbac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31DBACu;
    {
        const bool branch_taken_0x31dbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBACu;
        // 0x31dbb0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbac) {
            ctx->pc = 0x31DBC0u;
            return;
        }
    }
    ctx->pc = 0x31DBB4u;
    // 0x31dbb4: 0x0  nop
    ctx->pc = 0x31dbb4u;
    // NOP
    ctx->pc = 0x31dbb8u;
}
