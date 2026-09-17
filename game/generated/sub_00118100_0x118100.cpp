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

// Function: sub_00118100
// Address: 0x118100 - 0x118140
void sub_00118100_0x118100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118100_0x118100");
#endif

    switch (ctx->pc) {
        case 0x118110u: goto label_118110;
        case 0x118130u: goto label_118130;
        default: break;
    }

    ctx->pc = 0x118100u;

    // 0x118100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118108: 0xc045ecc  jal         func_117B30
    ctx->pc = 0x118108u;
    SET_GPR_U32(ctx, 31, 0x118110u);
    ctx->pc = 0x11810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118108u;
    // 0x11810c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B30u, 0x118108u, 0x118110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118110u;
label_118110:
    // 0x118110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118114: 0x3e00008  jr          $ra
    ctx->pc = 0x118114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118114u;
        // 0x118118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11811Cu;
    // 0x11811c: 0x0  nop
    ctx->pc = 0x11811cu;
    // NOP
    // 0x118120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118128: 0xc045ecc  jal         func_117B30
    ctx->pc = 0x118128u;
    SET_GPR_U32(ctx, 31, 0x118130u);
    ctx->pc = 0x117B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B30u, 0x118128u, 0x118130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118130u;
label_118130:
    // 0x118130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118134: 0x3e00008  jr          $ra
    ctx->pc = 0x118134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118134u;
        // 0x118138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11813Cu;
    // 0x11813c: 0x0  nop
    ctx->pc = 0x11813cu;
    // NOP
    ctx->pc = 0x118140u;
}
