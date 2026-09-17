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

// Function: sub_0050002C
// Address: 0x50002c - 0x50003c
void sub_0050002C_0x50002c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050002C_0x50002c");
#endif

    ctx->pc = 0x50002cu;

    // 0x50002c: 0x2463a650  addiu       $v1, $v1, -0x59B0
    ctx->pc = 0x50002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944336));
    // 0x500030: 0x3012  mflo        $a2
    ctx->pc = 0x500030u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x500034: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x500034u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x500038: 0x70002012  mflo1       $a0
    ctx->pc = 0x500038u;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    ctx->pc = 0x50003cu;
}
