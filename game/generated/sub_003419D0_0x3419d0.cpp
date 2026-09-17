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

// Function: sub_003419D0
// Address: 0x3419d0 - 0x3419f0
void sub_003419D0_0x3419d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003419D0_0x3419d0");
#endif

    ctx->pc = 0x3419d0u;

    // 0x3419d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3419d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3419d4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3419d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3419d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3419d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3419dc: 0x24a519f0  addiu       $a1, $a1, 0x19F0
    ctx->pc = 0x3419dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6640));
    // 0x3419e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3419e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3419e4: 0x80d04d6  j           func_341358
    ctx->pc = 0x3419E4u;
    ctx->pc = 0x3419E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3419E4u;
    // 0x3419e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x3419E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3419ECu;
    // 0x3419ec: 0x0  nop
    ctx->pc = 0x3419ecu;
    // NOP
    ctx->pc = 0x3419f0u;
}
