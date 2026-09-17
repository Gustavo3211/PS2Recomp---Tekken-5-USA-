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

// Function: sub_004D0730
// Address: 0x4d0730 - 0x4d0748
void sub_004D0730_0x4d0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0730_0x4d0730");
#endif

    ctx->pc = 0x4d0730u;

    // 0x4d0730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d0730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d0734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d0738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d0738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d073c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d0740: 0x813445a  j           func_4D1168
    ctx->pc = 0x4D0740u;
    ctx->pc = 0x4D0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0740u;
    // 0x4d0744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D1168u, 0x4D0740u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D0748u;
}
