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

// Function: sub_0023CC70
// Address: 0x23cc70 - 0x23cc90
void sub_0023CC70_0x23cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CC70_0x23cc70");
#endif

    ctx->pc = 0x23cc70u;

    // 0x23cc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23cc74: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23cc78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cc7c: 0x2484ae38  addiu       $a0, $a0, -0x51C8
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946360));
    // 0x23cc80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cc84: 0x808f2e6  j           func_23CB98
    ctx->pc = 0x23CC84u;
    ctx->pc = 0x23CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CC84u;
    // 0x23cc88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CB98u;
    sub_0023CB98_0x23cb98(rdram, ctx, runtime); return;
    ctx->pc = 0x23CC8Cu;
    // 0x23cc8c: 0x0  nop
    ctx->pc = 0x23cc8cu;
    // NOP
    ctx->pc = 0x23cc90u;
}
