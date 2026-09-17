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

// Function: sub_0026FFF0
// Address: 0x26fff0 - 0x270000
void sub_0026FFF0_0x26fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FFF0_0x26fff0");
#endif

    ctx->pc = 0x26fff0u;

    // 0x26fff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26fff4: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x26fff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fff8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x26fff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x26fffc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x270000u;
}
