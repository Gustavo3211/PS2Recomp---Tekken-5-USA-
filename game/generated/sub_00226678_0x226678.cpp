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

// Function: sub_00226678
// Address: 0x226678 - 0x2266a0
void sub_00226678_0x226678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226678_0x226678");
#endif

    switch (ctx->pc) {
        case 0x226688u: goto label_226688;
        case 0x226690u: goto label_226690;
        default: break;
    }

    ctx->pc = 0x226678u;

    // 0x226678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22667c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226680: 0xc08b882  jal         func_22E208
    ctx->pc = 0x226680u;
    SET_GPR_U32(ctx, 31, 0x226688u);
    ctx->pc = 0x226684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226680u;
    // 0x226684: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x226680u, 0x226688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226688u;
label_226688:
    // 0x226688: 0xc08999c  jal         func_226670
    ctx->pc = 0x226688u;
    SET_GPR_U32(ctx, 31, 0x226690u);
    ctx->pc = 0x22668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226688u;
    // 0x22668c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226670u, 0x226688u, 0x226690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226690u;
label_226690:
    // 0x226690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226694: 0x3e00008  jr          $ra
    ctx->pc = 0x226694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226694u;
        // 0x226698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22669Cu;
    // 0x22669c: 0x0  nop
    ctx->pc = 0x22669cu;
    // NOP
    ctx->pc = 0x2266a0u;
}
