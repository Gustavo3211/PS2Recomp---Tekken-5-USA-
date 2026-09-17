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

// Function: sub_00278770
// Address: 0x278770 - 0x2787d0
void sub_00278770_0x278770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278770_0x278770");
#endif

    switch (ctx->pc) {
        case 0x27878cu: goto label_27878c;
        case 0x278798u: goto label_278798;
        case 0x2787a0u: goto label_2787a0;
        default: break;
    }

    ctx->pc = 0x278770u;

    // 0x278770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x278774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27877c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x27877cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x278780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x278780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x278784: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x278784u;
    SET_GPR_U32(ctx, 31, 0x27878Cu);
    ctx->pc = 0x278788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278784u;
    // 0x278788: 0x261083c0  addiu       $s0, $s0, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x278784u, 0x27878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27878Cu;
label_27878c:
    // 0x27878c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27878cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278790: 0xc084cfe  jal         func_2133F8
    ctx->pc = 0x278790u;
    SET_GPR_U32(ctx, 31, 0x278798u);
    ctx->pc = 0x278794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278790u;
    // 0x278794: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2133F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2133F8u, 0x278790u, 0x278798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278798u;
label_278798:
    // 0x278798: 0xc0821ce  jal         func_208738
    ctx->pc = 0x278798u;
    SET_GPR_U32(ctx, 31, 0x2787A0u);
    ctx->pc = 0x27879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278798u;
    // 0x27879c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x278798u, 0x2787A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787A0u;
label_2787a0:
    // 0x2787a0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2787a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2787a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2787a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2787a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2787ac: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x2787acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x2787b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2787b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2787b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2787B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787B4u;
        // 0x2787b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2787BCu;
    // 0x2787bc: 0x0  nop
    ctx->pc = 0x2787bcu;
    // NOP
    // 0x2787c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2787C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2787C8u;
    // 0x2787c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2787C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2787D0u;
}
