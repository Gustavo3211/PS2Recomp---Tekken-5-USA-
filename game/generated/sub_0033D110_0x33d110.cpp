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

// Function: sub_0033D110
// Address: 0x33d110 - 0x33d160
void sub_0033D110_0x33d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D110_0x33d110");
#endif

    ctx->pc = 0x33d110u;

    // 0x33d110: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33d114: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33d114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33d118: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x33d118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x33d11c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33d11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d120: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x33d120u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33d124: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x33d124u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x33d128: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x33d128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x33d12c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x33d12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33d130: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x33d130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x33d134: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x33d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x33d138: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x33d138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x33d13c: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x33d13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x33d140: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x33d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x33d144: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x33d144u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x33d148: 0xfc620038  sd          $v0, 0x38($v1)
    ctx->pc = 0x33d148u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
    // 0x33d14c: 0xfc650020  sd          $a1, 0x20($v1)
    ctx->pc = 0x33d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 5));
    // 0x33d150: 0xfc660028  sd          $a2, 0x28($v1)
    ctx->pc = 0x33d150u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 6));
    // 0x33d154: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x33d154u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x33d158: 0x3e00008  jr          $ra
    ctx->pc = 0x33D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D158u;
        // 0x33d15c: 0xfc600030  sd          $zero, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D160u;
}
