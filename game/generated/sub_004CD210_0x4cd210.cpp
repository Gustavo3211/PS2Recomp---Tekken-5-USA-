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

// Function: sub_004CD210
// Address: 0x4cd210 - 0x4cd228
void sub_004CD210_0x4cd210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD210_0x4cd210");
#endif

    ctx->pc = 0x4cd210u;

    // 0x4cd210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cd210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd21c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd220: 0x8133636  j           func_4CD8D8
    ctx->pc = 0x4CD220u;
    ctx->pc = 0x4CD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD220u;
    // 0x4cd224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD8D8u, 0x4CD220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CD228u;
}
