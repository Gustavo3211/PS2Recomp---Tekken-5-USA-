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

// Function: sub_004E8B68
// Address: 0x4e8b68 - 0x4e8b80
void sub_004E8B68_0x4e8b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8B68_0x4e8b68");
#endif

    ctx->pc = 0x4e8b68u;

    // 0x4e8b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e8b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e8b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e8b70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e8b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e8b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e8b78: 0x813a49e  j           func_4E9278
    ctx->pc = 0x4E8B78u;
    ctx->pc = 0x4E8B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8B78u;
    // 0x4e8b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9278u, 0x4E8B78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E8B80u;
}
