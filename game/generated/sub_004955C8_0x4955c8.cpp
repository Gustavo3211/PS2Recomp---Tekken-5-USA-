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

// Function: sub_004955C8
// Address: 0x4955c8 - 0x4955d8
void sub_004955C8_0x4955c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004955C8_0x4955c8");
#endif

    ctx->pc = 0x4955c8u;

    // 0x4955c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4955c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4955cc: 0x812553a  j           func_4954E8
    ctx->pc = 0x4955CCu;
    ctx->pc = 0x4955D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4955CCu;
    // 0x4955d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4954E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4954E8u, 0x4955CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4955D4u;
    // 0x4955d4: 0x0  nop
    ctx->pc = 0x4955d4u;
    // NOP
    ctx->pc = 0x4955d8u;
}
