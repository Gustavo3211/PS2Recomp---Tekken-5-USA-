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

// Function: sub_00320898
// Address: 0x320898 - 0x3208d0
void sub_00320898_0x320898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320898_0x320898");
#endif

    ctx->pc = 0x320898u;

    // 0x320898: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32089c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x32089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3208a0: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x3208a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3208a4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3208A4u;
    {
        const bool branch_taken_0x3208a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3208A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3208A4u;
        // 0x3208a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3208a4) {
            ctx->pc = 0x3208C4u;
            goto label_3208c4;
        }
    }
    ctx->pc = 0x3208ACu;
    // 0x3208ac: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x3208acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x3208b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3208b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3208b4: 0x8c848084  lw          $a0, -0x7F7C($a0)
    ctx->pc = 0x3208b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294934660)));
    // 0x3208b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3208b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3208bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3208bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3208c0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x3208c0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3208c4:
    // 0x3208c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3208C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3208C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3208CCu;
    // 0x3208cc: 0x0  nop
    ctx->pc = 0x3208ccu;
    // NOP
    ctx->pc = 0x3208d0u;
}
