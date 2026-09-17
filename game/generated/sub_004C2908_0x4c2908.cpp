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

// Function: sub_004C2908
// Address: 0x4c2908 - 0x4c2920
void sub_004C2908_0x4c2908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2908_0x4c2908");
#endif

    ctx->pc = 0x4c2908u;

    // 0x4c2908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c290c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c290cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c2914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c2914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2918: 0x8130ba0  j           func_4C2E80
    ctx->pc = 0x4C2918u;
    ctx->pc = 0x4C291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2918u;
    // 0x4c291c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C2E80u, 0x4C2918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C2920u;
}
