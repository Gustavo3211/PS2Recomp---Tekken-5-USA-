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

// Function: sub_00503B30
// Address: 0x503b30 - 0x503b58
void sub_00503B30_0x503b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503B30_0x503b30");
#endif

    ctx->pc = 0x503b30u;

    // 0x503b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503b34: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x503b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503b40: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x503b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x503b44: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x503b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x503b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x503b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503b4c: 0x81454f8  j           func_5153E0
    ctx->pc = 0x503B4Cu;
    ctx->pc = 0x503B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503B4Cu;
    // 0x503b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5153E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5153E0u, 0x503B4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x503B54u;
    // 0x503b54: 0x0  nop
    ctx->pc = 0x503b54u;
    // NOP
    ctx->pc = 0x503b58u;
}
