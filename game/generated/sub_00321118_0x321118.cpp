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

// Function: sub_00321118
// Address: 0x321118 - 0x321140
void sub_00321118_0x321118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321118_0x321118");
#endif

    switch (ctx->pc) {
        case 0x32112cu: goto label_32112c;
        default: break;
    }

    ctx->pc = 0x321118u;

    // 0x321118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32111c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x321120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x321124: 0xc0cd15c  jal         func_334570
    ctx->pc = 0x321124u;
    SET_GPR_U32(ctx, 31, 0x32112Cu);
    ctx->pc = 0x321128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321124u;
    // 0x321128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334570u, 0x321124u, 0x32112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32112Cu;
label_32112c:
    // 0x32112c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x321134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321138: 0x80c84da  j           func_321368
    ctx->pc = 0x321138u;
    ctx->pc = 0x32113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321138u;
    // 0x32113c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321368u, 0x321138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x321140u;
}
