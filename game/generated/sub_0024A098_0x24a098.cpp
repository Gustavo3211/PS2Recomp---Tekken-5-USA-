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

// Function: sub_0024A098
// Address: 0x24a098 - 0x24a0a8
void sub_0024A098_0x24a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A098_0x24a098");
#endif

    ctx->pc = 0x24a098u;

    // 0x24a098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a09c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0a0: 0x8091dea  j           func_2477A8
    ctx->pc = 0x24A0A0u;
    ctx->pc = 0x24A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0A0u;
    // 0x24a0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2477A8u;
    sub_002477A8_0x2477a8(rdram, ctx, runtime); return;
    ctx->pc = 0x24A0A8u;
}
