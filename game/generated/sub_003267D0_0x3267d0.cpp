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

// Function: sub_003267D0
// Address: 0x3267d0 - 0x3267f0
void sub_003267D0_0x3267d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267D0_0x3267d0");
#endif

    ctx->pc = 0x3267d0u;

    // 0x3267d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3267d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3267d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3267d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3267d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3267d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3267dc: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x3267dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x3267e0: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x3267e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x3267e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3267e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3267e8: 0x80c89a4  j           func_322690
    ctx->pc = 0x3267E8u;
    ctx->pc = 0x3267ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3267E8u;
    // 0x3267ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322690u, 0x3267E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3267F0u;
}
