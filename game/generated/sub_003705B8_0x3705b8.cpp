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

// Function: sub_003705B8
// Address: 0x3705b8 - 0x3705f0
void sub_003705B8_0x3705b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003705B8_0x3705b8");
#endif

    ctx->pc = 0x3705b8u;

    // 0x3705b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3705b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3705bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3705bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3705c0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x3705c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x3705c4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3705c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3705c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3705c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3705cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3705CCu;
    {
        const bool branch_taken_0x3705cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3705D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705CCu;
        // 0x3705d0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3705cc) {
            ctx->pc = 0x3705E0u;
            goto label_3705e0;
        }
    }
    ctx->pc = 0x3705D4u;
    // 0x3705d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3705d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3705d8: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3705D8u;
    ctx->pc = 0x3705DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3705D8u;
    // 0x3705dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3705E0u;
label_3705e0:
    // 0x3705e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3705e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3705e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3705E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3705E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3705E4u;
        // 0x3705e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3705E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3705ECu;
    // 0x3705ec: 0x0  nop
    ctx->pc = 0x3705ecu;
    // NOP
    ctx->pc = 0x3705f0u;
}
