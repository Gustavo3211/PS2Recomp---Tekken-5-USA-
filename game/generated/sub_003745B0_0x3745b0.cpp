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

// Function: sub_003745B0
// Address: 0x3745b0 - 0x3745e8
void sub_003745B0_0x3745b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003745B0_0x3745b0");
#endif

    ctx->pc = 0x3745b0u;

    // 0x3745b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3745b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3745b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3745b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3745b8: 0x244215b0  addiu       $v0, $v0, 0x15B0
    ctx->pc = 0x3745b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5552));
    // 0x3745bc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3745bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3745c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3745c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3745c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3745C4u;
    {
        const bool branch_taken_0x3745c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3745C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745C4u;
        // 0x3745c8: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745c4) {
            ctx->pc = 0x3745D8u;
            goto label_3745d8;
        }
    }
    ctx->pc = 0x3745CCu;
    // 0x3745cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3745ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3745d0: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3745D0u;
    ctx->pc = 0x3745D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3745D0u;
    // 0x3745d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3745D8u;
label_3745d8:
    // 0x3745d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3745d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3745dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3745DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3745E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745DCu;
        // 0x3745e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3745DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3745E4u;
    // 0x3745e4: 0x0  nop
    ctx->pc = 0x3745e4u;
    // NOP
    ctx->pc = 0x3745e8u;
}
