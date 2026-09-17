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

// Function: sub_0033BFE8
// Address: 0x33bfe8 - 0x33c000
void sub_0033BFE8_0x33bfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BFE8_0x33bfe8");
#endif

    ctx->pc = 0x33bfe8u;

    // 0x33bfe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33bfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33bfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33bff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33bff8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33bff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bffc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x33bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x33c000u;
}
