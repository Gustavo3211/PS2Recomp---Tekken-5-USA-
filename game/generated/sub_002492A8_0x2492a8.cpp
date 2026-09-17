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

// Function: sub_002492A8
// Address: 0x2492a8 - 0x2492c8
void sub_002492A8_0x2492a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002492A8_0x2492a8");
#endif

    switch (ctx->pc) {
        case 0x2492bcu: goto label_2492bc;
        default: break;
    }

    ctx->pc = 0x2492a8u;

    // 0x2492a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2492a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2492ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2492acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2492b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2492b4: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x2492B4u;
    SET_GPR_U32(ctx, 31, 0x2492BCu);
    ctx->pc = 0x2492B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492B4u;
    // 0x2492b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x2492B4u, 0x2492BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492BCu;
label_2492bc:
    // 0x2492bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2492bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2492c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2492C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2492C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492C0u;
        // 0x2492c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2492C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2492C8u;
}
