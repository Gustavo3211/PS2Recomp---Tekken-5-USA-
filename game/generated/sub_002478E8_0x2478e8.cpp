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

// Function: sub_002478E8
// Address: 0x2478e8 - 0x247930
void sub_002478E8_0x2478e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002478E8_0x2478e8");
#endif

    switch (ctx->pc) {
        case 0x2478fcu: goto label_2478fc;
        default: break;
    }

    ctx->pc = 0x2478e8u;

    // 0x2478e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2478e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2478ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2478ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2478f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2478f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2478f4: 0xc091e20  jal         func_247880
    ctx->pc = 0x2478F4u;
    SET_GPR_U32(ctx, 31, 0x2478FCu);
    ctx->pc = 0x2478F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2478F4u;
    // 0x2478f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247880u, 0x2478F4u, 0x2478FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478FCu;
label_2478fc:
    // 0x2478fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2478fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247900: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x247900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x247904: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247908: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247908u;
    {
        const bool branch_taken_0x247908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247908u;
        // 0x24790c: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247908) {
            ctx->pc = 0x24791Cu;
            goto label_24791c;
        }
    }
    ctx->pc = 0x247910u;
    // 0x247910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247914: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x247914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x247918: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x247918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24791c:
    // 0x24791c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24791cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247920: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247928: 0x3e00008  jr          $ra
    ctx->pc = 0x247928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247928u;
        // 0x24792c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247930u;
}
