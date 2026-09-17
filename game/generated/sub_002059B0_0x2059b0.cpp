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

// Function: sub_002059B0
// Address: 0x2059b0 - 0x2059d8
void sub_002059B0_0x2059b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002059B0_0x2059b0");
#endif

    switch (ctx->pc) {
        case 0x2059c8u: goto label_2059c8;
        default: break;
    }

    ctx->pc = 0x2059b0u;

    // 0x2059b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2059b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2059b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2059b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2059b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2059bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2059bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2059c0: 0xc08163a  jal         func_2058E8
    ctx->pc = 0x2059C0u;
    SET_GPR_U32(ctx, 31, 0x2059C8u);
    ctx->pc = 0x2059C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2059C0u;
    // 0x2059c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2058E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2058E8u, 0x2059C0u, 0x2059C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059C8u;
label_2059c8:
    // 0x2059c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2059c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2059cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2059CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2059D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059CCu;
        // 0x2059d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2059CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2059D4u;
    // 0x2059d4: 0x0  nop
    ctx->pc = 0x2059d4u;
    // NOP
    ctx->pc = 0x2059d8u;
}
