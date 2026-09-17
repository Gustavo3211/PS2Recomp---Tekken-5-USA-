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

// Function: sub_001001B8
// Address: 0x1001b8 - 0x1001d8
void sub_001001B8_0x1001b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001001B8_0x1001b8");
#endif

    switch (ctx->pc) {
        case 0x1001ccu: goto label_1001cc;
        default: break;
    }

    ctx->pc = 0x1001b8u;

    // 0x1001b8: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1001b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1001bc: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x1001bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1001c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1001c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1E5EC0u));
    // 0x1001c4: 0xc07c1e4  jal         func_1F0790
    ctx->pc = 0x1001C4u;
    SET_GPR_U32(ctx, 31, 0x1001CCu);
    ctx->pc = 0x1001C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001C4u;
    // 0x1001c8: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0790u, 0x1001C4u, 0x1001CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1001CCu;
label_1001cc:
    // 0x1001cc: 0x8049dc0  j           func_127700
    ctx->pc = 0x1001CCu;
    ctx->pc = 0x1001D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1001CCu;
    // 0x1001d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127700u;
    sub_00127700_0x127700(rdram, ctx, runtime); return;
    ctx->pc = 0x1001D4u;
    // 0x1001d4: 0x0  nop
    ctx->pc = 0x1001d4u;
    // NOP
    ctx->pc = 0x1001d8u;
}
