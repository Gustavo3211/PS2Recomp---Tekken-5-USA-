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

// Function: sub_004B2158
// Address: 0x4b2158 - 0x4b2170
void sub_004B2158_0x4b2158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2158_0x4b2158");
#endif

    ctx->pc = 0x4b2158u;

    // 0x4b2158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b215c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b215cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b2160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b2164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b2164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2168: 0x812ca80  j           func_4B2A00
    ctx->pc = 0x4B2168u;
    ctx->pc = 0x4B216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2168u;
    // 0x4b216c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2A00u, 0x4B2168u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B2170u;
}
