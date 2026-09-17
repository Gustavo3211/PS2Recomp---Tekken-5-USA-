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

// Function: sub_0024A0C8
// Address: 0x24a0c8 - 0x24a0d8
void sub_0024A0C8_0x24a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A0C8_0x24a0c8");
#endif

    ctx->pc = 0x24a0c8u;

    // 0x24a0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a0cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a0d0: 0x8091e10  j           func_247840
    ctx->pc = 0x24A0D0u;
    ctx->pc = 0x24A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0D0u;
    // 0x24a0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247840u;
    sub_00247840_0x247840(rdram, ctx, runtime); return;
    ctx->pc = 0x24A0D8u;
}
