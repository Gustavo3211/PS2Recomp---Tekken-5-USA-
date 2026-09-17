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

// Function: sub_00369280
// Address: 0x369280 - 0x369298
void sub_00369280_0x369280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369280_0x369280");
#endif

    ctx->pc = 0x369280u;

    // 0x369280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x369288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36928c: 0x80cba88  j           func_32EA20
    ctx->pc = 0x36928Cu;
    ctx->pc = 0x369290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36928Cu;
    // 0x369290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    sub_0032EA20_0x32ea20(rdram, ctx, runtime); return;
    ctx->pc = 0x369294u;
    // 0x369294: 0x0  nop
    ctx->pc = 0x369294u;
    // NOP
    ctx->pc = 0x369298u;
}
