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

// Function: sub_0024A560
// Address: 0x24a560 - 0x24a590
void sub_0024A560_0x24a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A560_0x24a560");
#endif

    switch (ctx->pc) {
        case 0x24a584u: goto label_24a584;
        default: break;
    }

    ctx->pc = 0x24a560u;

    // 0x24a560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a564: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24a564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a568: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24a568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24a56c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a570: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24a574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a57c: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A57Cu;
    SET_GPR_U32(ctx, 31, 0x24A584u);
    ctx->pc = 0x24A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A57Cu;
    // 0x24a580: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A57Cu, 0x24A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A584u;
label_24a584:
    // 0x24a584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a588: 0x3e00008  jr          $ra
    ctx->pc = 0x24A588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A588u;
        // 0x24a58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A590u;
}
