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

// Function: sub_002478B0
// Address: 0x2478b0 - 0x2478e8
void sub_002478B0_0x2478b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002478B0_0x2478b0");
#endif

    switch (ctx->pc) {
        case 0x2478c0u: goto label_2478c0;
        default: break;
    }

    ctx->pc = 0x2478b0u;

    // 0x2478b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2478b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2478b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2478b8: 0xc091e20  jal         func_247880
    ctx->pc = 0x2478B8u;
    SET_GPR_U32(ctx, 31, 0x2478C0u);
    ctx->pc = 0x247880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247880u, 0x2478B8u, 0x2478C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2478C0u;
label_2478c0:
    // 0x2478c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2478C0u;
    {
        const bool branch_taken_0x2478c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2478C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478C0u;
        // 0x2478c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478c0) {
            ctx->pc = 0x2478CCu;
            goto label_2478cc;
        }
    }
    ctx->pc = 0x2478C8u;
    // 0x2478c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2478c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2478cc:
    // 0x2478cc: 0x2c830011  sltiu       $v1, $a0, 0x11
    ctx->pc = 0x2478ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x2478d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2478d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2478d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2478d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2478d8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2478d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2478dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2478DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2478E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478DCu;
        // 0x2478e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2478DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2478E4u;
    // 0x2478e4: 0x0  nop
    ctx->pc = 0x2478e4u;
    // NOP
    ctx->pc = 0x2478e8u;
}
