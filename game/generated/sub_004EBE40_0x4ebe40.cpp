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

// Function: sub_004EBE40
// Address: 0x4ebe40 - 0x4ebe60
void sub_004EBE40_0x4ebe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBE40_0x4ebe40");
#endif

    ctx->pc = 0x4ebe40u;

    // 0x4ebe40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ebe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ebe44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4ebe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4ebe48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ebe4c: 0xa4820164  sh          $v0, 0x164($a0)
    ctx->pc = 0x4ebe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ebe50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ebe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ebe54: 0x813af98  j           func_4EBE60
    ctx->pc = 0x4EBE54u;
    ctx->pc = 0x4EBE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBE54u;
    // 0x4ebe58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EBE60u;
    sub_004EBE60_0x4ebe60(rdram, ctx, runtime); return;
    ctx->pc = 0x4EBE5Cu;
    // 0x4ebe5c: 0x0  nop
    ctx->pc = 0x4ebe5cu;
    // NOP
    ctx->pc = 0x4ebe60u;
}
