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

// Function: sub_002AFF90
// Address: 0x2aff90 - 0x2aff9c
void sub_002AFF90_0x2aff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFF90_0x2aff90");
#endif

    ctx->pc = 0x2aff90u;

    // 0x2aff90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aff94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x2aff9cu;
}
