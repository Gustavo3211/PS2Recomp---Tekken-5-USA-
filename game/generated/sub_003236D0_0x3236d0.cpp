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

// Function: sub_003236D0
// Address: 0x3236d0 - 0x323700
void sub_003236D0_0x3236d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003236D0_0x3236d0");
#endif

    ctx->pc = 0x3236d0u;

    // 0x3236d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3236d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3236d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3236d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3236d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3236dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3236dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3236e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3236e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3236e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3236e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3236ec: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x3236ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x3236f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3236f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3236f4: 0x80c8fb4  j           func_323ED0
    ctx->pc = 0x3236F4u;
    ctx->pc = 0x3236F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3236F4u;
    // 0x3236f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323ED0u, 0x3236F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3236FCu;
    // 0x3236fc: 0x0  nop
    ctx->pc = 0x3236fcu;
    // NOP
    ctx->pc = 0x323700u;
}
