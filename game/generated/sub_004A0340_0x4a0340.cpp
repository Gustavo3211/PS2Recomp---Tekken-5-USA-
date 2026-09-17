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

// Function: sub_004A0340
// Address: 0x4a0340 - 0x4a0368
void sub_004A0340_0x4a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0340_0x4a0340");
#endif

    switch (ctx->pc) {
        case 0x4a0354u: goto label_4a0354;
        default: break;
    }

    ctx->pc = 0x4a0340u;

    // 0x4a0340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a0344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a0348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4a0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4a034c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4A034Cu;
    SET_GPR_U32(ctx, 31, 0x4A0354u);
    ctx->pc = 0x4A0350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A034Cu;
    // 0x4a0350: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4A034Cu, 0x4A0354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0354u;
label_4a0354:
    // 0x4a0354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4a0354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a0358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a0358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a035c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a035cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0360: 0x81280a0  j           func_4A0280
    ctx->pc = 0x4A0360u;
    ctx->pc = 0x4A0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0360u;
    // 0x4a0364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0280u, 0x4A0360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A0368u;
}
