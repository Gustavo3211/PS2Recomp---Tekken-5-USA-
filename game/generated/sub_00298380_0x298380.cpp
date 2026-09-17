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

// Function: sub_00298380
// Address: 0x298380 - 0x2983b0
void sub_00298380_0x298380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298380_0x298380");
#endif

    switch (ctx->pc) {
        case 0x298398u: goto label_298398;
        case 0x2983a0u: goto label_2983a0;
        default: break;
    }

    ctx->pc = 0x298380u;

    // 0x298380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29838c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x298390: 0xc0db028  jal         func_36C0A0
    ctx->pc = 0x298390u;
    SET_GPR_U32(ctx, 31, 0x298398u);
    ctx->pc = 0x298394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298390u;
    // 0x298394: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C0A0u, 0x298390u, 0x298398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298398u;
label_298398:
    // 0x298398: 0xc0a9e86  jal         func_2A7A18
    ctx->pc = 0x298398u;
    SET_GPR_U32(ctx, 31, 0x2983A0u);
    ctx->pc = 0x29839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298398u;
    // 0x29839c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7A18u, 0x298398u, 0x2983A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983A0u;
label_2983a0:
    // 0x2983a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2983a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2983a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2983a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2983a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2983A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2983ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983A8u;
        // 0x2983ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2983A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2983B0u;
}
