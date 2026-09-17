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

// Function: sub_004B1278
// Address: 0x4b1278 - 0x4b1288
void sub_004B1278_0x4b1278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1278_0x4b1278");
#endif

    ctx->pc = 0x4b1278u;

    // 0x4b1278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b127c: 0x812c4fe  j           func_4B13F8
    ctx->pc = 0x4B127Cu;
    ctx->pc = 0x4B1280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B127Cu;
    // 0x4b1280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B13F8u, 0x4B127Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B1284u;
    // 0x4b1284: 0x0  nop
    ctx->pc = 0x4b1284u;
    // NOP
    ctx->pc = 0x4b1288u;
}
