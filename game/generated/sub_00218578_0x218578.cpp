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

// Function: sub_00218578
// Address: 0x218578 - 0x218598
void sub_00218578_0x218578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218578_0x218578");
#endif

    switch (ctx->pc) {
        case 0x21858cu: goto label_21858c;
        default: break;
    }

    ctx->pc = 0x218578u;

    // 0x218578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21857c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218584: 0xc084cfe  jal         func_2133F8
    ctx->pc = 0x218584u;
    SET_GPR_U32(ctx, 31, 0x21858Cu);
    ctx->pc = 0x218588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218584u;
    // 0x218588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2133F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2133F8u, 0x218584u, 0x21858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21858Cu;
label_21858c:
    // 0x21858c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218590: 0x3e00008  jr          $ra
    ctx->pc = 0x218590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218590u;
        // 0x218594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218598u;
}
