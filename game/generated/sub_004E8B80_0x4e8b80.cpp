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

// Function: sub_004E8B80
// Address: 0x4e8b80 - 0x4e8b98
void sub_004E8B80_0x4e8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8B80_0x4e8b80");
#endif

    ctx->pc = 0x4e8b80u;

    // 0x4e8b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e8b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8b88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e8b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e8b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e8b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e8b90: 0x813a4e2  j           func_4E9388
    ctx->pc = 0x4E8B90u;
    ctx->pc = 0x4E8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8B90u;
    // 0x4e8b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9388u, 0x4E8B90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E8B98u;
}
