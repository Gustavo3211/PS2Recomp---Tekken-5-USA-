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

// Function: sub_0030CDC8
// Address: 0x30cdc8 - 0x30cdf0
void sub_0030CDC8_0x30cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CDC8_0x30cdc8");
#endif

    switch (ctx->pc) {
        case 0x30cdd8u: goto label_30cdd8;
        case 0x30cde0u: goto label_30cde0;
        default: break;
    }

    ctx->pc = 0x30cdc8u;

    // 0x30cdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30cdcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30cdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30cdd0: 0xc0c347a  jal         func_30D1E8
    ctx->pc = 0x30CDD0u;
    SET_GPR_U32(ctx, 31, 0x30CDD8u);
    ctx->pc = 0x30D1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D1E8u, 0x30CDD0u, 0x30CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDD8u;
label_30cdd8:
    // 0x30cdd8: 0xc043d88  jal         func_10F620
    ctx->pc = 0x30CDD8u;
    SET_GPR_U32(ctx, 31, 0x30CDE0u);
    ctx->pc = 0x30CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CDD8u;
    // 0x30cddc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x30CDD8u, 0x30CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDE0u;
label_30cde0:
    // 0x30cde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30cde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cde4: 0x3e00008  jr          $ra
    ctx->pc = 0x30CDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDE4u;
        // 0x30cde8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CDECu;
    // 0x30cdec: 0x0  nop
    ctx->pc = 0x30cdecu;
    // NOP
    ctx->pc = 0x30cdf0u;
}
