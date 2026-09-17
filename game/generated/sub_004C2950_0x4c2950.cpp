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

// Function: sub_004C2950
// Address: 0x4c2950 - 0x4c2968
void sub_004C2950_0x4c2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C2950_0x4c2950");
#endif

    ctx->pc = 0x4c2950u;

    // 0x4c2950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c2950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c2954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c2954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c2958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c2958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c295c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c2960: 0x8130c2e  j           func_4C30B8
    ctx->pc = 0x4C2960u;
    ctx->pc = 0x4C2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C2960u;
    // 0x4c2964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C30B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C30B8u, 0x4C2960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C2968u;
}
