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

// Function: sub_004B1258
// Address: 0x4b1258 - 0x4b1268
void sub_004B1258_0x4b1258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1258_0x4b1258");
#endif

    ctx->pc = 0x4b1258u;

    // 0x4b1258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b125c: 0x812c514  j           func_4B1450
    ctx->pc = 0x4B125Cu;
    ctx->pc = 0x4B1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B125Cu;
    // 0x4b1260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1450u, 0x4B125Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B1264u;
    // 0x4b1264: 0x0  nop
    ctx->pc = 0x4b1264u;
    // NOP
    ctx->pc = 0x4b1268u;
}
