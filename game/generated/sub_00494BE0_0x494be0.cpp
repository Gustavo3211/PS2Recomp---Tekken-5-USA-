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

// Function: sub_00494BE0
// Address: 0x494be0 - 0x494bf0
void sub_00494BE0_0x494be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494BE0_0x494be0");
#endif

    ctx->pc = 0x494be0u;

    // 0x494be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494be4: 0x81252be  j           func_494AF8
    ctx->pc = 0x494BE4u;
    ctx->pc = 0x494BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494BE4u;
    // 0x494be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494AF8u, 0x494BE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x494BECu;
    // 0x494bec: 0x0  nop
    ctx->pc = 0x494becu;
    // NOP
    ctx->pc = 0x494bf0u;
}
