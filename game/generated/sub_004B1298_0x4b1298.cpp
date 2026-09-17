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

// Function: sub_004B1298
// Address: 0x4b1298 - 0x4b12a8
void sub_004B1298_0x4b1298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1298_0x4b1298");
#endif

    ctx->pc = 0x4b1298u;

    // 0x4b1298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b129c: 0x812c538  j           func_4B14E0
    ctx->pc = 0x4B129Cu;
    ctx->pc = 0x4B12A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B129Cu;
    // 0x4b12a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B14E0u, 0x4B129Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B12A4u;
    // 0x4b12a4: 0x0  nop
    ctx->pc = 0x4b12a4u;
    // NOP
    ctx->pc = 0x4b12a8u;
}
