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

// Function: sub_00510760
// Address: 0x510760 - 0x510788
void sub_00510760_0x510760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510760_0x510760");
#endif

    switch (ctx->pc) {
        case 0x510774u: goto label_510774;
        default: break;
    }

    ctx->pc = 0x510760u;

    // 0x510760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x510760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x510764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x510764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x510768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x510768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x51076c: 0xc14413a  jal         func_5104E8
    ctx->pc = 0x51076Cu;
    SET_GPR_U32(ctx, 31, 0x510774u);
    ctx->pc = 0x510770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51076Cu;
    // 0x510770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5104E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5104E8u, 0x51076Cu, 0x510774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x510774u;
label_510774:
    // 0x510774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x510774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x510778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x510778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51077c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x51077cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x510780: 0x8144af2  j           func_512BC8
    ctx->pc = 0x510780u;
    ctx->pc = 0x510784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x510780u;
    // 0x510784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    sub_00512BC8_0x512bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x510788u;
}
