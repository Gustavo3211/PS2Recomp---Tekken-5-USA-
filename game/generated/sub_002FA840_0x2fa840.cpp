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

// Function: sub_002FA840
// Address: 0x2fa840 - 0x2fa870
void sub_002FA840_0x2fa840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA840_0x2fa840");
#endif

    switch (ctx->pc) {
        case 0x2fa854u: goto label_2fa854;
        case 0x2fa85cu: goto label_2fa85c;
        default: break;
    }

    ctx->pc = 0x2fa840u;

    // 0x2fa840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fa848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fa84c: 0xc0caf20  jal         func_32BC80
    ctx->pc = 0x2FA84Cu;
    SET_GPR_U32(ctx, 31, 0x2FA854u);
    ctx->pc = 0x2FA850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA84Cu;
    // 0x2fa850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BC80u, 0x2FA84Cu, 0x2FA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA854u;
label_2fa854:
    // 0x2fa854: 0xc0cc1b6  jal         func_3306D8
    ctx->pc = 0x2FA854u;
    SET_GPR_U32(ctx, 31, 0x2FA85Cu);
    ctx->pc = 0x2FA858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA854u;
    // 0x2fa858: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3306D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3306D8u, 0x2FA854u, 0x2FA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA85Cu;
label_2fa85c:
    // 0x2fa85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa860: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fa860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa864: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA864u;
        // 0x2fa868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA86Cu;
    // 0x2fa86c: 0x0  nop
    ctx->pc = 0x2fa86cu;
    // NOP
    ctx->pc = 0x2fa870u;
}
