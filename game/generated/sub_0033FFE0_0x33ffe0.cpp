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

// Function: sub_0033FFE0
// Address: 0x33ffe0 - 0x340000
void sub_0033FFE0_0x33ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FFE0_0x33ffe0");
#endif

    ctx->pc = 0x33ffe0u;

    // 0x33ffe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ffe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33ffe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ffec: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x33ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x33fff0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33fff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fff4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33fff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33fff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fffc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x33fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    ctx->pc = 0x340000u;
}
