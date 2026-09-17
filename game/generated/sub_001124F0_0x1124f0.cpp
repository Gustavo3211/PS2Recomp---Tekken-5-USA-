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

// Function: sub_001124F0
// Address: 0x1124f0 - 0x112530
void sub_001124F0_0x1124f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001124F0_0x1124f0");
#endif

    switch (ctx->pc) {
        case 0x112520u: goto label_112520;
        default: break;
    }

    ctx->pc = 0x1124f0u;

    // 0x1124f0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1124f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124f4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1124f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124f8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1124f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1124fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112500: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x112500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112504: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x112504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11250c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11250cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112510: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x112510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112514: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x112514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112518: 0xc0448de  jal         func_112378
    ctx->pc = 0x112518u;
    SET_GPR_U32(ctx, 31, 0x112520u);
    ctx->pc = 0x11251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112518u;
    // 0x11251c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112378u, 0x112518u, 0x112520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112520u;
label_112520:
    // 0x112520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112524: 0x3e00008  jr          $ra
    ctx->pc = 0x112524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112524u;
        // 0x112528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11252Cu;
    // 0x11252c: 0x0  nop
    ctx->pc = 0x11252cu;
    // NOP
    ctx->pc = 0x112530u;
}
