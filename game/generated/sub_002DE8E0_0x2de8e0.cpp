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

// Function: sub_002DE8E0
// Address: 0x2de8e0 - 0x2de918
void sub_002DE8E0_0x2de8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE8E0_0x2de8e0");
#endif

    switch (ctx->pc) {
        case 0x2de8f4u: goto label_2de8f4;
        case 0x2de8fcu: goto label_2de8fc;
        default: break;
    }

    ctx->pc = 0x2de8e0u;

    // 0x2de8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de8e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2de8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2de8ec: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x2DE8ECu;
    SET_GPR_U32(ctx, 31, 0x2DE8F4u);
    ctx->pc = 0x2DE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8ECu;
    // 0x2de8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x2DE8ECu, 0x2DE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8F4u;
label_2de8f4:
    // 0x2de8f4: 0xc0b7a24  jal         func_2DE890
    ctx->pc = 0x2DE8F4u;
    SET_GPR_U32(ctx, 31, 0x2DE8FCu);
    ctx->pc = 0x2DE8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE8F4u;
    // 0x2de8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE890u, 0x2DE8F4u, 0x2DE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8FCu;
label_2de8fc:
    // 0x2de8fc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2de900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2de900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de908: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2de908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de90c: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2de90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2de910: 0x80b7c4c  j           func_2DF130
    ctx->pc = 0x2DE910u;
    ctx->pc = 0x2DE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE910u;
    // 0x2de914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF130u;
    sub_002DF130_0x2df130(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE918u;
}
