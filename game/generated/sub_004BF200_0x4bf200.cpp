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

// Function: sub_004BF200
// Address: 0x4bf200 - 0x4bf218
void sub_004BF200_0x4bf200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF200_0x4bf200");
#endif

    ctx->pc = 0x4bf200u;

    // 0x4bf200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bf200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bf204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bf204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bf208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4bf208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4bf20c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bf20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bf210: 0x812fe46  j           func_4BF918
    ctx->pc = 0x4BF210u;
    ctx->pc = 0x4BF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF210u;
    // 0x4bf214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BF918u, 0x4BF210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4BF218u;
}
