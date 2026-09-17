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

// Function: sub_00119288
// Address: 0x119288 - 0x119298
void sub_00119288_0x119288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119288_0x119288");
#endif

    ctx->pc = 0x119288u;

    // 0x119288: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x119288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11928c: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x11928cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x119290: 0x8046486  j           func_119218
    ctx->pc = 0x119290u;
    ctx->pc = 0x119294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119290u;
    // 0x119294: 0x34841000  ori         $a0, $a0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119218u;
    entry_119218_0x119288(rdram, ctx, runtime); return;
    ctx->pc = 0x119298u;
}
