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

// Function: sub_0022A9B8
// Address: 0x22a9b8 - 0x22aa10
void sub_0022A9B8_0x22a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A9B8_0x22a9b8");
#endif

    switch (ctx->pc) {
        case 0x22a9d0u: goto label_22a9d0;
        case 0x22a9d8u: goto label_22a9d8;
        case 0x22a9e0u: goto label_22a9e0;
        case 0x22a9fcu: goto label_22a9fc;
        default: break;
    }

    ctx->pc = 0x22a9b8u;

    // 0x22a9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22a9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22a9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a9c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22a9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22a9c8: 0xc0404de  jal         func_101378
    ctx->pc = 0x22A9C8u;
    SET_GPR_U32(ctx, 31, 0x22A9D0u);
    ctx->pc = 0x101378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101378u, 0x22A9C8u, 0x22A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9D0u;
label_22a9d0:
    // 0x22a9d0: 0xc0404e2  jal         func_101388
    ctx->pc = 0x22A9D0u;
    SET_GPR_U32(ctx, 31, 0x22A9D8u);
    ctx->pc = 0x22A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9D0u;
    // 0x22a9d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101388u, 0x22A9D0u, 0x22A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9D8u;
label_22a9d8:
    // 0x22a9d8: 0xc0404da  jal         func_101368
    ctx->pc = 0x22A9D8u;
    SET_GPR_U32(ctx, 31, 0x22A9E0u);
    ctx->pc = 0x22A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9D8u;
    // 0x22a9dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101368u, 0x22A9D8u, 0x22A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9E0u;
label_22a9e0:
    // 0x22a9e0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x22a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x22a9e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22a9e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9e8: 0x8c6488d0  lw          $a0, -0x7730($v1)
    ctx->pc = 0x22a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x22a9ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22a9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9f4: 0xc098d78  jal         func_2635E0
    ctx->pc = 0x22A9F4u;
    SET_GPR_U32(ctx, 31, 0x22A9FCu);
    ctx->pc = 0x22A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9F4u;
    // 0x22a9f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2635E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2635E0u, 0x22A9F4u, 0x22A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9FCu;
label_22a9fc:
    // 0x22a9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aa00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22aa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22aa04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22aa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aa08: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA08u;
        // 0x22aa0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA10u;
}
