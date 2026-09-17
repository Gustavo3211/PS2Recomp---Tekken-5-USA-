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

// Function: sub_004A0368
// Address: 0x4a0368 - 0x4a0390
void sub_004A0368_0x4a0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0368_0x4a0368");
#endif

    switch (ctx->pc) {
        case 0x4a037cu: goto label_4a037c;
        default: break;
    }

    ctx->pc = 0x4a0368u;

    // 0x4a0368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a036c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a0370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4a0370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4a0374: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4A0374u;
    SET_GPR_U32(ctx, 31, 0x4A037Cu);
    ctx->pc = 0x4A0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0374u;
    // 0x4a0378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4A0374u, 0x4A037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A037Cu;
label_4a037c:
    // 0x4a037c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4a037cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a0380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a0380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a0384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0388: 0x8128090  j           func_4A0240
    ctx->pc = 0x4A0388u;
    ctx->pc = 0x4A038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0388u;
    // 0x4a038c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0240u, 0x4A0388u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A0390u;
}
