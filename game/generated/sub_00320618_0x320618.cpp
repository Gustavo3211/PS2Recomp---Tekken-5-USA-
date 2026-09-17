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

// Function: sub_00320618
// Address: 0x320618 - 0x320638
void sub_00320618_0x320618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320618_0x320618");
#endif

    switch (ctx->pc) {
        case 0x32062cu: goto label_32062c;
        default: break;
    }

    ctx->pc = 0x320618u;

    // 0x320618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32061c: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x32061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x320620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x320620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x320624: 0xc0c7ffc  jal         func_31FFF0
    ctx->pc = 0x320624u;
    SET_GPR_U32(ctx, 31, 0x32062Cu);
    ctx->pc = 0x320628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320624u;
    // 0x320628: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FFF0u, 0x320624u, 0x32062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32062Cu;
label_32062c:
    // 0x32062c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32062cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320630: 0x3e00008  jr          $ra
    ctx->pc = 0x320630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320630u;
        // 0x320634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320638u;
}
