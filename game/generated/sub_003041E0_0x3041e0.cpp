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

// Function: sub_003041E0
// Address: 0x3041e0 - 0x304218
void sub_003041E0_0x3041e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003041E0_0x3041e0");
#endif

    switch (ctx->pc) {
        case 0x3041f4u: goto label_3041f4;
        case 0x3041fcu: goto label_3041fc;
        case 0x304204u: goto label_304204;
        default: break;
    }

    ctx->pc = 0x3041e0u;

    // 0x3041e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3041e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3041e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3041e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3041e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3041e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3041ec: 0xc0c1086  jal         func_304218
    ctx->pc = 0x3041ECu;
    SET_GPR_U32(ctx, 31, 0x3041F4u);
    ctx->pc = 0x3041F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041ECu;
    // 0x3041f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304218u, 0x3041ECu, 0x3041F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041F4u;
label_3041f4:
    // 0x3041f4: 0xc0c1094  jal         func_304250
    ctx->pc = 0x3041F4u;
    SET_GPR_U32(ctx, 31, 0x3041FCu);
    ctx->pc = 0x3041F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041F4u;
    // 0x3041f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304250u, 0x3041F4u, 0x3041FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3041FCu;
label_3041fc:
    // 0x3041fc: 0xc0c10b0  jal         func_3042C0
    ctx->pc = 0x3041FCu;
    SET_GPR_U32(ctx, 31, 0x304204u);
    ctx->pc = 0x304200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3041FCu;
    // 0x304200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3042C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3042C0u, 0x3041FCu, 0x304204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304204u;
label_304204:
    // 0x304204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304208: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30420c: 0x3e00008  jr          $ra
    ctx->pc = 0x30420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30420Cu;
        // 0x304210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304214u;
    // 0x304214: 0x0  nop
    ctx->pc = 0x304214u;
    // NOP
    ctx->pc = 0x304218u;
}
