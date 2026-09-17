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

// Function: sub_0050A910
// Address: 0x50a910 - 0x50a928
void sub_0050A910_0x50a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A910_0x50a910");
#endif

    ctx->pc = 0x50a910u;

    // 0x50a910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a914: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x50a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x50a918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a920: 0x8142688  j           func_509A20
    ctx->pc = 0x50A920u;
    ctx->pc = 0x50A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A920u;
    // 0x50a924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509A20u, 0x50A920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50A928u;
}
