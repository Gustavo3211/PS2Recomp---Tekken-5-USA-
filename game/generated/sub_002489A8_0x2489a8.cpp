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

// Function: sub_002489A8
// Address: 0x2489a8 - 0x2489d8
void sub_002489A8_0x2489a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002489A8_0x2489a8");
#endif

    switch (ctx->pc) {
        case 0x2489bcu: goto label_2489bc;
        default: break;
    }

    ctx->pc = 0x2489a8u;

    // 0x2489a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2489a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2489ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2489acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2489b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2489b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2489b4: 0xc092258  jal         func_248960
    ctx->pc = 0x2489B4u;
    SET_GPR_U32(ctx, 31, 0x2489BCu);
    ctx->pc = 0x2489B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489B4u;
    // 0x2489b8: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248960u, 0x2489B4u, 0x2489BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489BCu;
label_2489bc:
    // 0x2489bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2489bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2489c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2489c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2489c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2489c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2489c8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2489c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2489cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2489ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2489D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2489D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2489D0u;
        // 0x2489d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2489D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2489D8u;
}
