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

// Function: sub_004C9C00
// Address: 0x4c9c00 - 0x4c9c18
void sub_004C9C00_0x4c9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9C00_0x4c9c00");
#endif

    switch (ctx->pc) {
        case 0x4c9c04u: goto label_4c9c04;
        default: break;
    }

    ctx->pc = 0x4c9c00u;

    // 0x4c9c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9c04:
    // 0x4c9c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c9c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c9c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c9c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9c10: 0x813271a  j           func_4C9C68
    ctx->pc = 0x4C9C10u;
    ctx->pc = 0x4C9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9C10u;
    // 0x4c9c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C68u, 0x4C9C10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C9C18u;
}
