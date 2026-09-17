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

// Function: sub_00331118
// Address: 0x331118 - 0x331150
void sub_00331118_0x331118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331118_0x331118");
#endif

    switch (ctx->pc) {
        case 0x33112cu: goto label_33112c;
        case 0x331134u: goto label_331134;
        case 0x33113cu: goto label_33113c;
        default: break;
    }

    ctx->pc = 0x331118u;

    // 0x331118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33111c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33111cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x331120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x331124: 0xc0cc47e  jal         func_3311F8
    ctx->pc = 0x331124u;
    SET_GPR_U32(ctx, 31, 0x33112Cu);
    ctx->pc = 0x331128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331124u;
    // 0x331128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3311F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3311F8u, 0x331124u, 0x33112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33112Cu;
label_33112c:
    // 0x33112c: 0xc0cc454  jal         func_331150
    ctx->pc = 0x33112Cu;
    SET_GPR_U32(ctx, 31, 0x331134u);
    ctx->pc = 0x331130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33112Cu;
    // 0x331130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331150u, 0x33112Cu, 0x331134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331134u;
label_331134:
    // 0x331134: 0xc0cc488  jal         func_331220
    ctx->pc = 0x331134u;
    SET_GPR_U32(ctx, 31, 0x33113Cu);
    ctx->pc = 0x331138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331134u;
    // 0x331138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331220u, 0x331134u, 0x33113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33113Cu;
label_33113c:
    // 0x33113c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33113cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331140: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x331140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331144: 0x3e00008  jr          $ra
    ctx->pc = 0x331144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331144u;
        // 0x331148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33114Cu;
    // 0x33114c: 0x0  nop
    ctx->pc = 0x33114cu;
    // NOP
    ctx->pc = 0x331150u;
}
