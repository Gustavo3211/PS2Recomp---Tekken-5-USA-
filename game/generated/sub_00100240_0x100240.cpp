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

// Function: sub_00100240
// Address: 0x100240 - 0x100250
void sub_00100240_0x100240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100240_0x100240");
#endif

    ctx->pc = 0x100240u;

    // 0x100240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100244: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10024c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10024cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x100250u;
}
