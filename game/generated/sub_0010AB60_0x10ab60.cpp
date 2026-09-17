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

// Function: sub_0010AB60
// Address: 0x10ab60 - 0x10ab68
void sub_0010AB60_0x10ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AB60_0x10ab60");
#endif

    ctx->pc = 0x10ab60u;

    // 0x10ab60: 0x8042a80  j           func_10AA00
    ctx->pc = 0x10AB60u;
    ctx->pc = 0x10AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB60u;
    // 0x10ab64: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA00u;
    sub_0010AA00_0x10aa00(rdram, ctx, runtime); return;
    ctx->pc = 0x10AB68u;
}
