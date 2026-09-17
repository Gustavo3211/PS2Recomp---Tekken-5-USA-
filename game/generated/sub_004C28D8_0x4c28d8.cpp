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

// Function: sub_004C28D8
// Address: 0x4c28d8 - 0x4c28f0
void sub_004C28D8_0x4c28d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C28D8_0x4c28d8");
#endif

    ctx->pc = 0x4c28d8u;

    // 0x4c28d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c28dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c28dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c28e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c28e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c28e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c28e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c28e8: 0x8130b2e  j           func_4C2CB8
    ctx->pc = 0x4C28E8u;
    ctx->pc = 0x4C28ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C28E8u;
    // 0x4c28ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C2CB8u, 0x4C28E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C28F0u;
}
