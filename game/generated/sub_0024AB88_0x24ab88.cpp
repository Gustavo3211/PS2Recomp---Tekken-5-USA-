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

// Function: sub_0024AB88
// Address: 0x24ab88 - 0x24ab98
void sub_0024AB88_0x24ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AB88_0x24ab88");
#endif

    ctx->pc = 0x24ab88u;

    // 0x24ab88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ab88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ab8c: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x24ab8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x24ab90: 0x809294c  j           func_24A530
    ctx->pc = 0x24AB90u;
    ctx->pc = 0x24AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB90u;
    // 0x24ab94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    sub_0024A530_0x24a530(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB98u;
}
