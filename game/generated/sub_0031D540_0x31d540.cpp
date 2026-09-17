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

// Function: sub_0031D540
// Address: 0x31d540 - 0x31d560
void sub_0031D540_0x31d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D540_0x31d540");
#endif

    switch (ctx->pc) {
        case 0x31d550u: goto label_31d550;
        default: break;
    }

    ctx->pc = 0x31d540u;

    // 0x31d540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31d544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d548: 0xc0ce694  jal         func_339A50
    ctx->pc = 0x31D548u;
    SET_GPR_U32(ctx, 31, 0x31D550u);
    ctx->pc = 0x31D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D548u;
    // 0x31d54c: 0x24840128  addiu       $a0, $a0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A50u, 0x31D548u, 0x31D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D550u;
label_31d550:
    // 0x31d550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d554: 0x3e00008  jr          $ra
    ctx->pc = 0x31D554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D554u;
        // 0x31d558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D55Cu;
    // 0x31d55c: 0x0  nop
    ctx->pc = 0x31d55cu;
    // NOP
    ctx->pc = 0x31d560u;
}
