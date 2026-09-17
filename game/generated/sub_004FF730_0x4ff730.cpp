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

// Function: sub_004FF730
// Address: 0x4ff730 - 0x4ff758
void sub_004FF730_0x4ff730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF730_0x4ff730");
#endif

    switch (ctx->pc) {
        case 0x4ff744u: goto label_4ff744;
        default: break;
    }

    ctx->pc = 0x4ff730u;

    // 0x4ff730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff73c: 0xc140cfc  jal         func_5033F0
    ctx->pc = 0x4FF73Cu;
    SET_GPR_U32(ctx, 31, 0x4FF744u);
    ctx->pc = 0x4FF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF73Cu;
    // 0x4ff740: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5033F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5033F0u, 0x4FF73Cu, 0x4FF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF744u;
label_4ff744:
    // 0x4ff744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff74c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff74cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff750: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF750u;
        // 0x4ff754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF758u;
}
