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

// Function: sub_00363058
// Address: 0x363058 - 0x363070
void sub_00363058_0x363058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363058_0x363058");
#endif

    ctx->pc = 0x363058u;

    // 0x363058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36305c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363064: 0x80d6d30  j           func_35B4C0
    ctx->pc = 0x363064u;
    ctx->pc = 0x363068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363064u;
    // 0x363068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B4C0u;
    sub_0035B4C0_0x35b4c0(rdram, ctx, runtime); return;
    ctx->pc = 0x36306Cu;
    // 0x36306c: 0x0  nop
    ctx->pc = 0x36306cu;
    // NOP
    ctx->pc = 0x363070u;
}
