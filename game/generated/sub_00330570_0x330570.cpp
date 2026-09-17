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

// Function: sub_00330570
// Address: 0x330570 - 0x330598
void sub_00330570_0x330570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330570_0x330570");
#endif

    switch (ctx->pc) {
        case 0x330584u: goto label_330584;
        case 0x33058cu: goto label_33058c;
        default: break;
    }

    ctx->pc = 0x330570u;

    // 0x330570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330574: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x330574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33057c: 0xc0c94ca  jal         func_325328
    ctx->pc = 0x33057Cu;
    SET_GPR_U32(ctx, 31, 0x330584u);
    ctx->pc = 0x330580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33057Cu;
    // 0x330580: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325328u, 0x33057Cu, 0x330584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330584u;
label_330584:
    // 0x330584: 0xc0c8dee  jal         func_3237B8
    ctx->pc = 0x330584u;
    SET_GPR_U32(ctx, 31, 0x33058Cu);
    ctx->pc = 0x3237B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3237B8u, 0x330584u, 0x33058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33058Cu;
label_33058c:
    // 0x33058c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33058cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330590: 0x3e00008  jr          $ra
    ctx->pc = 0x330590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330590u;
        // 0x330594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330598u;
}
