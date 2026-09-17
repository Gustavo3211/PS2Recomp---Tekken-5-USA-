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

// Function: sub_0021D108
// Address: 0x21d108 - 0x21d120
void sub_0021D108_0x21d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D108_0x21d108");
#endif

    ctx->pc = 0x21d108u;

    // 0x21d108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d110: 0x9084002d  lbu         $a0, 0x2D($a0)
    ctx->pc = 0x21d110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x21d114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d118: 0x8086644  j           func_219910
    ctx->pc = 0x21D118u;
    ctx->pc = 0x21D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D118u;
    // 0x21d11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    sub_00219910_0x219910(rdram, ctx, runtime); return;
    ctx->pc = 0x21D120u;
}
