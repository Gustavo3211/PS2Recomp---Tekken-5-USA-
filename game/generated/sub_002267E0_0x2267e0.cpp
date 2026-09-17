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

// Function: sub_002267E0
// Address: 0x2267e0 - 0x226800
void sub_002267E0_0x2267e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267E0_0x2267e0");
#endif

    ctx->pc = 0x2267e0u;

    // 0x2267e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2267e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2267e4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2267e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2267e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2267ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2267ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2267f0: 0x248473d8  addiu       $a0, $a0, 0x73D8
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29656));
    // 0x2267f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2267f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267f8: 0x808973a  j           func_225CE8
    ctx->pc = 0x2267F8u;
    ctx->pc = 0x2267FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267F8u;
    // 0x2267fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225CE8u;
    sub_00225CE8_0x225ce8(rdram, ctx, runtime); return;
    ctx->pc = 0x226800u;
}
