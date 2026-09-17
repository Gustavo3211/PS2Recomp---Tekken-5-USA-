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

// Function: sub_00330598
// Address: 0x330598 - 0x3305c0
void sub_00330598_0x330598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330598_0x330598");
#endif

    switch (ctx->pc) {
        case 0x3305acu: goto label_3305ac;
        case 0x3305b4u: goto label_3305b4;
        default: break;
    }

    ctx->pc = 0x330598u;

    // 0x330598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33059c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x33059cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3305a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3305a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3305a4: 0xc0c94ca  jal         func_325328
    ctx->pc = 0x3305A4u;
    SET_GPR_U32(ctx, 31, 0x3305ACu);
    ctx->pc = 0x3305A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3305A4u;
    // 0x3305a8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325328u, 0x3305A4u, 0x3305ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305ACu;
label_3305ac:
    // 0x3305ac: 0xc0c8dee  jal         func_3237B8
    ctx->pc = 0x3305ACu;
    SET_GPR_U32(ctx, 31, 0x3305B4u);
    ctx->pc = 0x3237B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3237B8u, 0x3305ACu, 0x3305B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3305B4u;
label_3305b4:
    // 0x3305b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3305b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3305b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3305B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3305BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3305B8u;
        // 0x3305bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3305B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3305C0u;
}
