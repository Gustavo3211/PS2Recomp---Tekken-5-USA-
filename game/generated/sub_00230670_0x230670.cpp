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

// Function: sub_00230670
// Address: 0x230670 - 0x2306c0
void sub_00230670_0x230670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230670_0x230670");
#endif

    ctx->pc = 0x230670u;

    // 0x230670: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x230670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x230674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23067c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230680: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x230680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x230684: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x230684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x230688: 0x2421cf90  addiu       $at, $at, -0x3070
    ctx->pc = 0x230688u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294954896));
    // 0x23068c: 0x3e00008  jr          $ra
    ctx->pc = 0x23068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23068Cu;
        // 0x230690: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230694u;
    // 0x230694: 0x0  nop
    ctx->pc = 0x230694u;
    // NOP
    // 0x230698: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x230698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23069c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2306a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2306a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2306a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2306a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2306ac: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x2306b0: 0x2421cfd0  addiu       $at, $at, -0x3030
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294954960));
    // 0x2306b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2306B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306B4u;
        // 0x2306b8: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2306B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2306BCu;
    // 0x2306bc: 0x0  nop
    ctx->pc = 0x2306bcu;
    // NOP
    ctx->pc = 0x2306c0u;
}
