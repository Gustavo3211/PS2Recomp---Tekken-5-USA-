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

// Function: sub_00119298
// Address: 0x119298 - 0x1192a8
void sub_00119298_0x119298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119298_0x119298");
#endif

    ctx->pc = 0x119298u;

    // 0x119298: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x119298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11929c: 0x3c04b000  lui         $a0, 0xB000
    ctx->pc = 0x11929cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45056 << 16));
    // 0x1192a0: 0x8046486  j           func_119218
    ctx->pc = 0x1192A0u;
    ctx->pc = 0x1192A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192A0u;
    // 0x1192a4: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119218u;
    entry_119218_0x119288(rdram, ctx, runtime); return;
    ctx->pc = 0x1192A8u;
}
