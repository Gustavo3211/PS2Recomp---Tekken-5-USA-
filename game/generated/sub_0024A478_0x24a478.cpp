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

// Function: sub_0024A478
// Address: 0x24a478 - 0x24a4a0
void sub_0024A478_0x24a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A478_0x24a478");
#endif

    switch (ctx->pc) {
        case 0x24a490u: goto label_24a490;
        default: break;
    }

    ctx->pc = 0x24a478u;

    // 0x24a478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a47c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24a484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24a488: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A488u;
    SET_GPR_U32(ctx, 31, 0x24A490u);
    ctx->pc = 0x24A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A488u;
    // 0x24a48c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A488u, 0x24A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A490u;
label_24a490:
    // 0x24a490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a494: 0x3e00008  jr          $ra
    ctx->pc = 0x24A494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A494u;
        // 0x24a498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A49Cu;
    // 0x24a49c: 0x0  nop
    ctx->pc = 0x24a49cu;
    // NOP
    ctx->pc = 0x24a4a0u;
}
