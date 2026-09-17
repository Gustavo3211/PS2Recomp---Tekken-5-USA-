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

// Function: sub_0031BAB0
// Address: 0x31bab0 - 0x31bae0
void sub_0031BAB0_0x31bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BAB0_0x31bab0");
#endif

    switch (ctx->pc) {
        case 0x31bac4u: goto label_31bac4;
        default: break;
    }

    ctx->pc = 0x31bab0u;

    // 0x31bab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31bab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31bab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31babc: 0xc0c6c30  jal         func_31B0C0
    ctx->pc = 0x31BABCu;
    SET_GPR_U32(ctx, 31, 0x31BAC4u);
    ctx->pc = 0x31BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BABCu;
    // 0x31bac0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0C0u, 0x31BABCu, 0x31BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BAC4u;
label_31bac4:
    // 0x31bac4: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x31bac4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31bac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31bacc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31baccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x31bad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31bad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31bad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bad8: 0x3e00008  jr          $ra
    ctx->pc = 0x31BAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAD8u;
        // 0x31badc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BAE0u;
}
