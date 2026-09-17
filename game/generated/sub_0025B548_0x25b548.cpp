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

// Function: sub_0025B548
// Address: 0x25b548 - 0x25b588
void sub_0025B548_0x25b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B548_0x25b548");
#endif

    switch (ctx->pc) {
        case 0x25b564u: goto label_25b564;
        case 0x25b574u: goto label_25b574;
        default: break;
    }

    ctx->pc = 0x25b548u;

    // 0x25b548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b550: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25b550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25b554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25b558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b55c: 0xc096c04  jal         func_25B010
    ctx->pc = 0x25B55Cu;
    SET_GPR_U32(ctx, 31, 0x25B564u);
    ctx->pc = 0x25B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B55Cu;
    // 0x25b560: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B010u, 0x25B55Cu, 0x25B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B564u;
label_25b564:
    // 0x25b564: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B564u;
    {
        const bool branch_taken_0x25b564 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B564u;
        // 0x25b568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b564) {
            ctx->pc = 0x25B574u;
            goto label_25b574;
        }
    }
    ctx->pc = 0x25B56Cu;
    // 0x25b56c: 0xc096cc4  jal         func_25B310
    ctx->pc = 0x25B56Cu;
    SET_GPR_U32(ctx, 31, 0x25B574u);
    ctx->pc = 0x25B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B310u, 0x25B56Cu, 0x25B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B574u;
label_25b574:
    // 0x25b574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25b574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25b57c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b580: 0x3e00008  jr          $ra
    ctx->pc = 0x25B580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B580u;
        // 0x25b584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B588u;
}
