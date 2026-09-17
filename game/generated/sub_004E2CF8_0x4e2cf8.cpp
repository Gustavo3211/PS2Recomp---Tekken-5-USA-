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

// Function: sub_004E2CF8
// Address: 0x4e2cf8 - 0x4e2d10
void sub_004E2CF8_0x4e2cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2CF8_0x4e2cf8");
#endif

    ctx->pc = 0x4e2cf8u;

    // 0x4e2cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e2cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e2cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e2d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e2d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e2d04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e2d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e2d08: 0x8138c2c  j           func_4E30B0
    ctx->pc = 0x4E2D08u;
    ctx->pc = 0x4E2D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E2D08u;
    // 0x4e2d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E30B0u, 0x4E2D08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E2D10u;
}
