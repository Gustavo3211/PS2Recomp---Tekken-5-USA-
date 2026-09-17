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

// Function: sub_0022A578
// Address: 0x22a578 - 0x22a598
void sub_0022A578_0x22a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A578_0x22a578");
#endif

    switch (ctx->pc) {
        case 0x22a588u: goto label_22a588;
        default: break;
    }

    ctx->pc = 0x22a578u;

    // 0x22a578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a580: 0xc08baee  jal         func_22EBB8
    ctx->pc = 0x22A580u;
    SET_GPR_U32(ctx, 31, 0x22A588u);
    ctx->pc = 0x22A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A580u;
    // 0x22a584: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EBB8u, 0x22A580u, 0x22A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A588u;
label_22a588:
    // 0x22a588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a58c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A58Cu;
        // 0x22a590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A594u;
    // 0x22a594: 0x0  nop
    ctx->pc = 0x22a594u;
    // NOP
    ctx->pc = 0x22a598u;
}
