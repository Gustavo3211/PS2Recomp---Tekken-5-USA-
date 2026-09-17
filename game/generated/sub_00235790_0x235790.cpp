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

// Function: sub_00235790
// Address: 0x235790 - 0x2357c0
void sub_00235790_0x235790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235790_0x235790");
#endif

    switch (ctx->pc) {
        case 0x2357a4u: goto label_2357a4;
        case 0x2357b0u: goto label_2357b0;
        default: break;
    }

    ctx->pc = 0x235790u;

    // 0x235790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235798: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x235798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23579c: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x23579Cu;
    SET_GPR_U32(ctx, 31, 0x2357A4u);
    ctx->pc = 0x2357A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23579Cu;
    // 0x2357a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x23579Cu, 0x2357A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357A4u;
label_2357a4:
    // 0x2357a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2357a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2357a8: 0xc08c686  jal         func_231A18
    ctx->pc = 0x2357A8u;
    SET_GPR_U32(ctx, 31, 0x2357B0u);
    ctx->pc = 0x2357ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2357A8u;
    // 0x2357ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x2357A8u, 0x2357B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2357B0u;
label_2357b0:
    // 0x2357b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2357b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2357b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2357b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2357b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2357B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2357BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357B8u;
        // 0x2357bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2357B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2357C0u;
}
