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

// Function: sub_003296B0
// Address: 0x3296b0 - 0x3296f8
void sub_003296B0_0x3296b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003296B0_0x3296b0");
#endif

    switch (ctx->pc) {
        case 0x3296d4u: goto label_3296d4;
        case 0x3296e8u: goto label_3296e8;
        default: break;
    }

    ctx->pc = 0x3296b0u;

    // 0x3296b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3296b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3296b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3296b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296b8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3296b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3296bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3296bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3296c0: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x3296c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x3296c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3296c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3296c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3296cc: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x3296CCu;
    SET_GPR_U32(ctx, 31, 0x3296D4u);
    ctx->pc = 0x3296D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296CCu;
    // 0x3296d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x3296CCu, 0x3296D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296D4u;
label_3296d4:
    // 0x3296d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3296d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3296d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3296D8u;
    {
        const bool branch_taken_0x3296d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3296DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296D8u;
        // 0x3296dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296d8) {
            ctx->pc = 0x3296E8u;
            goto label_3296e8;
        }
    }
    ctx->pc = 0x3296E0u;
    // 0x3296e0: 0xc0ca5fa  jal         func_3297E8
    ctx->pc = 0x3296E0u;
    SET_GPR_U32(ctx, 31, 0x3296E8u);
    ctx->pc = 0x3297E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297E8u, 0x3296E0u, 0x3296E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296E8u;
label_3296e8:
    // 0x3296e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3296e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3296ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3296ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3296f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3296F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3296F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296F0u;
        // 0x3296f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3296F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3296F8u;
}
