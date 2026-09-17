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

// Function: sub_002726C8
// Address: 0x2726c8 - 0x2726f0
void sub_002726C8_0x2726c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002726C8_0x2726c8");
#endif

    switch (ctx->pc) {
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d8u: goto label_2726d8;
        case 0x2726e0u: goto label_2726e0;
        default: break;
    }

    ctx->pc = 0x2726c8u;

    // 0x2726c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2726C8u;
    {
        const bool branch_taken_0x2726c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726C8u;
        // 0x2726cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726c8) {
            ctx->pc = 0x2726E0u;
            goto label_2726e0;
        }
    }
    ctx->pc = 0x2726D0u;
label_2726d0:
    // 0x2726d0: 0xc09b492  jal         func_26D248
    ctx->pc = 0x2726D0u;
    SET_GPR_U32(ctx, 31, 0x2726D8u);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x2726D0u, 0x2726D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2726D8u;
label_2726d8:
    // 0x2726d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2726d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2726dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x2726dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_2726e0:
    // 0x2726e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2726e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2726e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2726E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726E4u;
        // 0x2726e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2726ECu;
    // 0x2726ec: 0x0  nop
    ctx->pc = 0x2726ecu;
    // NOP
    ctx->pc = 0x2726f0u;
}
