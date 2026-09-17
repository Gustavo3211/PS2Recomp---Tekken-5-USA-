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

// Function: sub_00512150
// Address: 0x512150 - 0x512168
void sub_00512150_0x512150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512150_0x512150");
#endif

    ctx->pc = 0x512150u;

    // 0x512150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x512150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x512154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x512154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x512158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x512158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51215c: 0x8144af2  j           func_512BC8
    ctx->pc = 0x51215Cu;
    ctx->pc = 0x512160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51215Cu;
    // 0x512160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    sub_00512BC8_0x512bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x512164u;
    // 0x512164: 0x0  nop
    ctx->pc = 0x512164u;
    // NOP
    ctx->pc = 0x512168u;
}
