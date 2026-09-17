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

// Function: sub_0024A500
// Address: 0x24a500 - 0x24a530
void sub_0024A500_0x24a500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A500_0x24a500");
#endif

    switch (ctx->pc) {
        case 0x24a524u: goto label_24a524;
        default: break;
    }

    ctx->pc = 0x24a500u;

    // 0x24a500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a504: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24a504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a508: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24a508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24a50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a51c: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A51Cu;
    SET_GPR_U32(ctx, 31, 0x24A524u);
    ctx->pc = 0x24A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A51Cu;
    // 0x24a520: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A51Cu, 0x24A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A524u;
label_24a524:
    // 0x24a524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a528: 0x3e00008  jr          $ra
    ctx->pc = 0x24A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A528u;
        // 0x24a52c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A530u;
}
