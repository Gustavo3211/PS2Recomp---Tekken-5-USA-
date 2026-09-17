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

// Function: sub_0024AB70
// Address: 0x24ab70 - 0x24ab88
void sub_0024AB70_0x24ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AB70_0x24ab70");
#endif

    ctx->pc = 0x24ab70u;

    // 0x24ab70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24ab70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ab74: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x24ab74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x24ab78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ab7c: 0x8ca6005c  lw          $a2, 0x5C($a1)
    ctx->pc = 0x24ab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x24ab80: 0x8092810  j           func_24A040
    ctx->pc = 0x24AB80u;
    ctx->pc = 0x24AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB80u;
    // 0x24ab84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A040u;
    sub_0024A040_0x24a040(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB88u;
}
