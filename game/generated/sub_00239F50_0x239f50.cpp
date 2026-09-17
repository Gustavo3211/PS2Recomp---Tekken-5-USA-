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

// Function: sub_00239F50
// Address: 0x239f50 - 0x239fa0
void sub_00239F50_0x239f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239F50_0x239f50");
#endif

    switch (ctx->pc) {
        case 0x239f60u: goto label_239f60;
        case 0x239f68u: goto label_239f68;
        default: break;
    }

    ctx->pc = 0x239f50u;

    // 0x239f50: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x239f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f58: 0x2446d710  addiu       $a2, $v0, -0x28F0
    ctx->pc = 0x239f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956816));
    // 0x239f5c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x239f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_239f60:
    // 0x239f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f64: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x239f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_239f68:
    // 0x239f68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x239f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x239f6c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x239f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x239f70: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x239f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x239f74: 0x0  nop
    ctx->pc = 0x239f74u;
    // NOP
    // 0x239f78: 0x0  nop
    ctx->pc = 0x239f78u;
    // NOP
    // 0x239f7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x239F7Cu;
    {
        const bool branch_taken_0x239f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F7Cu;
        // 0x239f80: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f7c) {
            ctx->pc = 0x239F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239f68;
        }
    }
    ctx->pc = 0x239F84u;
    // 0x239f84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x239f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x239f88: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x239f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x239f8c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x239F8Cu;
    {
        const bool branch_taken_0x239f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f8c) {
            ctx->pc = 0x239F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F8Cu;
            // 0x239f90: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239f60;
        }
    }
    ctx->pc = 0x239F94u;
    // 0x239f94: 0x3e00008  jr          $ra
    ctx->pc = 0x239F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F94u;
        // 0x239f98: 0xaf80c988  sw          $zero, -0x3678($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239F9Cu;
    // 0x239f9c: 0x0  nop
    ctx->pc = 0x239f9cu;
    // NOP
    ctx->pc = 0x239fa0u;
}
