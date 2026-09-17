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

// Function: sub_0023FC80
// Address: 0x23fc80 - 0x23fca8
void sub_0023FC80_0x23fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FC80_0x23fc80");
#endif

    switch (ctx->pc) {
        case 0x23fc94u: goto label_23fc94;
        default: break;
    }

    ctx->pc = 0x23fc80u;

    // 0x23fc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fc88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23fc8c: 0xc08fc96  jal         func_23F258
    ctx->pc = 0x23FC8Cu;
    SET_GPR_U32(ctx, 31, 0x23FC94u);
    ctx->pc = 0x23FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC8Cu;
    // 0x23fc90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F258u, 0x23FC8Cu, 0x23FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC94u;
label_23fc94:
    // 0x23fc94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fca0: 0x808fc96  j           func_23F258
    ctx->pc = 0x23FCA0u;
    ctx->pc = 0x23FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FCA0u;
    // 0x23fca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F258u;
    sub_0023F258_0x23f258(rdram, ctx, runtime); return;
    ctx->pc = 0x23FCA8u;
}
