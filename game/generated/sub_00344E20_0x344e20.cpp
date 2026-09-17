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

// Function: sub_00344E20
// Address: 0x344e20 - 0x344e38
void sub_00344E20_0x344e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344E20_0x344e20");
#endif

    ctx->pc = 0x344e20u;

    // 0x344e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344e2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344e30: 0x80d143c  j           func_3450F0
    ctx->pc = 0x344E30u;
    ctx->pc = 0x344E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E30u;
    // 0x344e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3450F0u;
    sub_003450F0_0x3450f0(rdram, ctx, runtime); return;
    ctx->pc = 0x344E38u;
}
