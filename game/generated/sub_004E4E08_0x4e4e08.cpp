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

// Function: sub_004E4E08
// Address: 0x4e4e08 - 0x4e4e28
void sub_004E4E08_0x4e4e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E08_0x4e4e08");
#endif

    switch (ctx->pc) {
        case 0x4e4e10u: goto label_4e4e10;
        case 0x4e4e14u: goto label_4e4e14;
        default: break;
    }

    ctx->pc = 0x4e4e08u;

    // 0x4e4e08: 0xc1393d0  jal         func_4E4F40
    ctx->pc = 0x4E4E08u;
    SET_GPR_U32(ctx, 31, 0x4E4E10u);
    ctx->pc = 0x4E4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4E08u;
    // 0x4e4e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4F40u, 0x4E4E08u, 0x4E4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4E10u;
label_4e4e10:
    // 0x4e4e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4e14:
    // 0x4e4e14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4e14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4e18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4e1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e4e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4e20: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E20u;
        // 0x4e4e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4E28u;
}
