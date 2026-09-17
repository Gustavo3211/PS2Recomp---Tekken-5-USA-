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

// Function: sub_00237438
// Address: 0x237438 - 0x237480
void sub_00237438_0x237438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237438_0x237438");
#endif

    switch (ctx->pc) {
        case 0x237450u: goto label_237450;
        case 0x237458u: goto label_237458;
        case 0x237460u: goto label_237460;
        default: break;
    }

    ctx->pc = 0x237438u;

    // 0x237438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23743c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237444: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237448: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x237448u;
    SET_GPR_U32(ctx, 31, 0x237450u);
    ctx->pc = 0x23744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237448u;
    // 0x23744c: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x237448u, 0x237450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237450u;
label_237450:
    // 0x237450: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x237450u;
    SET_GPR_U32(ctx, 31, 0x237458u);
    ctx->pc = 0x237454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237450u;
    // 0x237454: 0x260401a0  addiu       $a0, $s0, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x237450u, 0x237458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237458u;
label_237458:
    // 0x237458: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x237458u;
    SET_GPR_U32(ctx, 31, 0x237460u);
    ctx->pc = 0x23745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237458u;
    // 0x23745c: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x237458u, 0x237460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237460u;
label_237460:
    // 0x237460: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x237460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x237464: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x237464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x237468: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23746c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x23746cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x237470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237474: 0x3e00008  jr          $ra
    ctx->pc = 0x237474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237474u;
        // 0x237478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23747Cu;
    // 0x23747c: 0x0  nop
    ctx->pc = 0x23747cu;
    // NOP
    ctx->pc = 0x237480u;
}
