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

// Function: sub_001006F0
// Address: 0x1006f0 - 0x100700
void sub_001006F0_0x1006f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001006F0_0x1006f0");
#endif

    ctx->pc = 0x1006f0u;

    // 0x1006f0: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x1006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x1006f4: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x1006f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1006f8: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1006f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA2FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2FCu, _value); } while (0);
    // 0x1006fc: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x1006fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1BCA2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2F0u, _value); } while (0);
    ctx->pc = 0x100700u;
}
