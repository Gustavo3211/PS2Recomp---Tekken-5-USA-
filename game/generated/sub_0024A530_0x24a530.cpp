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

// Function: sub_0024A530
// Address: 0x24a530 - 0x24a560
void sub_0024A530_0x24a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A530_0x24a530");
#endif

    switch (ctx->pc) {
        case 0x24a554u: goto label_24a554;
        default: break;
    }

    ctx->pc = 0x24a530u;

    // 0x24a530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a534: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24a534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a538: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a53c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a53cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a540: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24a544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a54c: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A54Cu;
    SET_GPR_U32(ctx, 31, 0x24A554u);
    ctx->pc = 0x24A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A54Cu;
    // 0x24a550: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A54Cu, 0x24A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A554u;
label_24a554:
    // 0x24a554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a558: 0x3e00008  jr          $ra
    ctx->pc = 0x24A558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A558u;
        // 0x24a55c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A560u;
}
