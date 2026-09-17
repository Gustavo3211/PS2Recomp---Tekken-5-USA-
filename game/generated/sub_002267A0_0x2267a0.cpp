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

// Function: sub_002267A0
// Address: 0x2267a0 - 0x2267e0
void sub_002267A0_0x2267a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267A0_0x2267a0");
#endif

    switch (ctx->pc) {
        case 0x2267b4u: goto label_2267b4;
        case 0x2267c4u: goto label_2267c4;
        default: break;
    }

    ctx->pc = 0x2267a0u;

    // 0x2267a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2267a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2267a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2267a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2267a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2267a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2267ac: 0xc0899dc  jal         func_226770
    ctx->pc = 0x2267ACu;
    SET_GPR_U32(ctx, 31, 0x2267B4u);
    ctx->pc = 0x2267B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267ACu;
    // 0x2267b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226770u, 0x2267ACu, 0x2267B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267B4u;
label_2267b4:
    // 0x2267b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2267B4u;
    {
        const bool branch_taken_0x2267b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2267b4) {
            ctx->pc = 0x2267B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2267B4u;
            // 0x2267b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2267CCu;
            goto label_2267cc;
        }
    }
    ctx->pc = 0x2267BCu;
    // 0x2267bc: 0xc0899e2  jal         func_226788
    ctx->pc = 0x2267BCu;
    SET_GPR_U32(ctx, 31, 0x2267C4u);
    ctx->pc = 0x226788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226788u, 0x2267BCu, 0x2267C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2267C4u;
label_2267c4:
    // 0x2267c4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2267c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2267c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2267c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2267cc:
    // 0x2267cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2267ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2267d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2267d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2267D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2267D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267D4u;
        // 0x2267d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2267D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267DCu;
    // 0x2267dc: 0x0  nop
    ctx->pc = 0x2267dcu;
    // NOP
    ctx->pc = 0x2267e0u;
}
