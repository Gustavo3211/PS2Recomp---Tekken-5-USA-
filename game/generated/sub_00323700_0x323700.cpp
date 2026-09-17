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

// Function: sub_00323700
// Address: 0x323700 - 0x323728
void sub_00323700_0x323700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323700_0x323700");
#endif

    ctx->pc = 0x323700u;

    // 0x323700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323704: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x323704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32370c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32370cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x323710: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x323710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x323714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32371c: 0x248408c0  addiu       $a0, $a0, 0x8C0
    ctx->pc = 0x32371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2240));
    // 0x323720: 0x80c9006  j           func_324018
    ctx->pc = 0x323720u;
    ctx->pc = 0x323724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323720u;
    // 0x323724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324018u, 0x323720u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323728u;
}
