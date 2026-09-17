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

// Function: sub_005123C0
// Address: 0x5123c0 - 0x5123d8
void sub_005123C0_0x5123c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005123C0_0x5123c0");
#endif

    ctx->pc = 0x5123c0u;

    // 0x5123c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5123c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5123c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5123c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5123c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5123c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5123cc: 0x814485a  j           func_512168
    ctx->pc = 0x5123CCu;
    ctx->pc = 0x5123D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5123CCu;
    // 0x5123d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512168u;
    sub_00512168_0x512168(rdram, ctx, runtime); return;
    ctx->pc = 0x5123D4u;
    // 0x5123d4: 0x0  nop
    ctx->pc = 0x5123d4u;
    // NOP
    ctx->pc = 0x5123d8u;
}
