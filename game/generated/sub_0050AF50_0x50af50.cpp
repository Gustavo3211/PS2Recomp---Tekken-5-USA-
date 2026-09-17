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

// Function: sub_0050AF50
// Address: 0x50af50 - 0x50af60
void sub_0050AF50_0x50af50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AF50_0x50af50");
#endif

    ctx->pc = 0x50af50u;

    // 0x50af50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50af50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50af54: 0x8142c02  j           func_50B008
    ctx->pc = 0x50AF54u;
    ctx->pc = 0x50AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AF54u;
    // 0x50af58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B008u;
    sub_0050B008_0x50b008(rdram, ctx, runtime); return;
    ctx->pc = 0x50AF5Cu;
    // 0x50af5c: 0x0  nop
    ctx->pc = 0x50af5cu;
    // NOP
    ctx->pc = 0x50af60u;
}
