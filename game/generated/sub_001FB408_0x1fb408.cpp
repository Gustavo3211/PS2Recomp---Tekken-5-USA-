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

// Function: sub_001FB408
// Address: 0x1fb408 - 0x1fb460
void sub_001FB408_0x1fb408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB408_0x1fb408");
#endif

    switch (ctx->pc) {
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb44cu: goto label_1fb44c;
        default: break;
    }

    ctx->pc = 0x1fb408u;

    // 0x1fb408: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fb408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fb40c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb410: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1fb410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1fb414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb418: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fb418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1fb41c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FB41Cu;
    {
        const bool branch_taken_0x1fb41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB41Cu;
        // 0x1fb420: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb41c) {
            ctx->pc = 0x1FB44Cu;
            goto label_1fb44c;
        }
    }
    ctx->pc = 0x1FB424u;
    // 0x1fb424: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb428: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1fb428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1fb42c: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1fb42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1fb430: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1fb430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1fb434: 0xc07eb8c  jal         func_1FAE30
    ctx->pc = 0x1FB434u;
    SET_GPR_U32(ctx, 31, 0x1FB43Cu);
    ctx->pc = 0x1FB438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB434u;
    // 0x1fb438: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE30u, 0x1FB434u, 0x1FB43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB43Cu;
label_1fb43c:
    // 0x1fb43c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb440: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fb440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fb444: 0xc07eb8c  jal         func_1FAE30
    ctx->pc = 0x1FB444u;
    SET_GPR_U32(ctx, 31, 0x1FB44Cu);
    ctx->pc = 0x1FB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB444u;
    // 0x1fb448: 0x8c450060  lw          $a1, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE30u, 0x1FB444u, 0x1FB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB44Cu;
label_1fb44c:
    // 0x1fb44c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb450: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fb450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb454: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB454u;
        // 0x1fb458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB45Cu;
    // 0x1fb45c: 0x0  nop
    ctx->pc = 0x1fb45cu;
    // NOP
    ctx->pc = 0x1fb460u;
}
