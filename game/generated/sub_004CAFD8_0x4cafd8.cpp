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

// Function: sub_004CAFD8
// Address: 0x4cafd8 - 0x4caff0
void sub_004CAFD8_0x4cafd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CAFD8_0x4cafd8");
#endif

    ctx->pc = 0x4cafd8u;

    // 0x4cafd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cafd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cafdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cafdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cafe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cafe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cafe4: 0x8132bfc  j           func_4CAFF0
    ctx->pc = 0x4CAFE4u;
    ctx->pc = 0x4CAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAFE4u;
    // 0x4cafe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAFF0u;
    sub_004CAFF0_0x4caff0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CAFECu;
    // 0x4cafec: 0x0  nop
    ctx->pc = 0x4cafecu;
    // NOP
    ctx->pc = 0x4caff0u;
}
