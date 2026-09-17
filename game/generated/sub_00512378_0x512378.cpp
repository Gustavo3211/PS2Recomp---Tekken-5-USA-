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

// Function: sub_00512378
// Address: 0x512378 - 0x512390
void sub_00512378_0x512378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512378_0x512378");
#endif

    ctx->pc = 0x512378u;

    // 0x512378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51237c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x51237cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x512380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x512384: 0x814485a  j           func_512168
    ctx->pc = 0x512384u;
    ctx->pc = 0x512388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512384u;
    // 0x512388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512168u;
    sub_00512168_0x512168(rdram, ctx, runtime); return;
    ctx->pc = 0x51238Cu;
    // 0x51238c: 0x0  nop
    ctx->pc = 0x51238cu;
    // NOP
    ctx->pc = 0x512390u;
}
