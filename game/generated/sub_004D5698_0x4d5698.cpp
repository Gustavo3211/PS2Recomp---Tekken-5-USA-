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

// Function: sub_004D5698
// Address: 0x4d5698 - 0x4d56b0
void sub_004D5698_0x4d5698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D5698_0x4d5698");
#endif

    ctx->pc = 0x4d5698u;

    // 0x4d5698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d5698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d569c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d56a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d56a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d56a4: 0x81355ac  j           func_4D56B0
    ctx->pc = 0x4D56A4u;
    ctx->pc = 0x4D56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56A4u;
    // 0x4d56a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D56B0u;
    sub_004D56B0_0x4d56b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D56ACu;
    // 0x4d56ac: 0x0  nop
    ctx->pc = 0x4d56acu;
    // NOP
    ctx->pc = 0x4d56b0u;
}
