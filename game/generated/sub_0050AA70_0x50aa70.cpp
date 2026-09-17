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

// Function: sub_0050AA70
// Address: 0x50aa70 - 0x50aa88
void sub_0050AA70_0x50aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AA70_0x50aa70");
#endif

    ctx->pc = 0x50aa70u;

    // 0x50aa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50aa74: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x50aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x50aa78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50aa7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aa7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aa80: 0x8142688  j           func_509A20
    ctx->pc = 0x50AA80u;
    ctx->pc = 0x50AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AA80u;
    // 0x50aa84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509A20u, 0x50AA80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50AA88u;
}
