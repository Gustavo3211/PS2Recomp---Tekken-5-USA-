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

// Function: sub_0030A4B0
// Address: 0x30a4b0 - 0x30a500
void sub_0030A4B0_0x30a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A4B0_0x30a4b0");
#endif

    ctx->pc = 0x30a4b0u;

    // 0x30a4b0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x30a4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x30a4b4: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x30a4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x30a4b8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x30a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30a4bc: 0x8c820368  lw          $v0, 0x368($a0)
    ctx->pc = 0x30a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x30a4c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a4c4: 0x9c850010  lwu         $a1, 0x10($a0)
    ctx->pc = 0x30a4c4u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a4c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a4cc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30a4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30a4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a4d4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x30a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x30a4d8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x30a4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x30a4dc: 0x3401bb00  ori         $at, $zero, 0xBB00
    ctx->pc = 0x30a4dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47872);
    // 0x30a4e0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x30a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x30a4e4: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x30a4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30a4e8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30a4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30a4ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30a4f0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x30a4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30a4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x30A4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4F4u;
        // 0x30a4f8: 0xfc450040  sd          $a1, 0x40($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A4FCu;
    // 0x30a4fc: 0x0  nop
    ctx->pc = 0x30a4fcu;
    // NOP
    ctx->pc = 0x30a500u;
}
