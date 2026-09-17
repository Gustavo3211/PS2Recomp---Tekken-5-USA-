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

// Function: sub_00501EE8
// Address: 0x501ee8 - 0x501f00
void sub_00501EE8_0x501ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501EE8_0x501ee8");
#endif

    ctx->pc = 0x501ee8u;

    // 0x501ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501eec: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x501eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x501ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x501ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501ef8: 0x81407c0  j           func_501F00
    ctx->pc = 0x501EF8u;
    ctx->pc = 0x501EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501EF8u;
    // 0x501efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x501F00u;
    sub_00501F00_0x501f00(rdram, ctx, runtime); return;
    ctx->pc = 0x501F00u;
}
