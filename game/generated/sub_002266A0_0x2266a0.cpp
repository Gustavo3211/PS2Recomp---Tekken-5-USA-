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

// Function: sub_002266A0
// Address: 0x2266a0 - 0x2266e8
void sub_002266A0_0x2266a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266A0_0x2266a0");
#endif

    switch (ctx->pc) {
        case 0x2266bcu: goto label_2266bc;
        case 0x2266d0u: goto label_2266d0;
        case 0x2266d8u: goto label_2266d8;
        default: break;
    }

    ctx->pc = 0x2266a0u;

    // 0x2266a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2266a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2266a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2266a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2266a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2266a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266ac: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2266ACu;
    {
        const bool branch_taken_0x2266ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2266B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266ACu;
        // 0x2266b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266ac) {
            ctx->pc = 0x2266D0u;
            goto label_2266d0;
        }
    }
    ctx->pc = 0x2266B4u;
    // 0x2266b4: 0xc0404ee  jal         func_1013B8
    ctx->pc = 0x2266B4u;
    SET_GPR_U32(ctx, 31, 0x2266BCu);
    ctx->pc = 0x1013B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013B8u, 0x2266B4u, 0x2266BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266BCu;
label_2266bc:
    // 0x2266bc: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2266c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2266c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2266c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2266c8: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2266C8u;
    SET_GPR_U32(ctx, 31, 0x2266D0u);
    ctx->pc = 0x2266CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266C8u;
    // 0x2266cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2266C8u, 0x2266D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266D0u;
label_2266d0:
    // 0x2266d0: 0xc08999c  jal         func_226670
    ctx->pc = 0x2266D0u;
    SET_GPR_U32(ctx, 31, 0x2266D8u);
    ctx->pc = 0x2266D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2266D0u;
    // 0x2266d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226670u, 0x2266D0u, 0x2266D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2266D8u;
label_2266d8:
    // 0x2266d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2266d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2266dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2266e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2266E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266E0u;
        // 0x2266e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266E8u;
}
