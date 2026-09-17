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

// Function: sub_002468F0
// Address: 0x2468f0 - 0x246930
void sub_002468F0_0x2468f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002468F0_0x2468f0");
#endif

    switch (ctx->pc) {
        case 0x246908u: goto label_246908;
        case 0x246918u: goto label_246918;
        default: break;
    }

    ctx->pc = 0x2468f0u;

    // 0x2468f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2468f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2468f4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2468f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2468f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2468f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2468fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2468fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x246900: 0xc089622  jal         func_225888
    ctx->pc = 0x246900u;
    SET_GPR_U32(ctx, 31, 0x246908u);
    ctx->pc = 0x246904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246900u;
    // 0x246904: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x246900u, 0x246908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246908u;
label_246908:
    // 0x246908: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246908u;
    {
        const bool branch_taken_0x246908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246908) {
            ctx->pc = 0x24690Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246908u;
            // 0x24690c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x246910u;
    // 0x246910: 0xc092360  jal         func_248D80
    ctx->pc = 0x246910u;
    SET_GPR_U32(ctx, 31, 0x246918u);
    ctx->pc = 0x248D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D80u, 0x246910u, 0x246918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246918u;
label_246918:
    // 0x246918: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x246918u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24691c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246920:
    // 0x246920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246928: 0x3e00008  jr          $ra
    ctx->pc = 0x246928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246928u;
        // 0x24692c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246930u;
}
