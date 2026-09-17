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

// Function: sub_00371D38
// Address: 0x371d38 - 0x371d60
void sub_00371D38_0x371d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371D38_0x371d38");
#endif

    switch (ctx->pc) {
        case 0x371d50u: goto label_371d50;
        default: break;
    }

    ctx->pc = 0x371d38u;

    // 0x371d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371d40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x371d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x371d44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x371d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d48: 0xc0921e0  jal         func_248780
    ctx->pc = 0x371D48u;
    SET_GPR_U32(ctx, 31, 0x371D50u);
    ctx->pc = 0x371D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D48u;
    // 0x371d4c: 0x80450000  lb          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248780u, 0x371D48u, 0x371D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D50u;
label_371d50:
    // 0x371d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371d54: 0x3e00008  jr          $ra
    ctx->pc = 0x371D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D54u;
        // 0x371d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371D5Cu;
    // 0x371d5c: 0x0  nop
    ctx->pc = 0x371d5cu;
    // NOP
    ctx->pc = 0x371d60u;
}
