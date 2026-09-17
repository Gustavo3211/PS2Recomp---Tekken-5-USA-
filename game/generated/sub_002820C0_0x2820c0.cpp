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

// Function: sub_002820C0
// Address: 0x2820c0 - 0x282148
void sub_002820C0_0x2820c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002820C0_0x2820c0");
#endif

    ctx->pc = 0x2820c0u;

    // 0x2820c0: 0x28a20016  slti        $v0, $a1, 0x16
    ctx->pc = 0x2820c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2820c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2820C4u;
    {
        const bool branch_taken_0x2820c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2820c4) {
            ctx->pc = 0x28213Cu;
            goto label_28213c;
        }
    }
    ctx->pc = 0x2820CCu;
    // 0x2820cc: 0x4800012  bltz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2820CCu;
    {
        const bool branch_taken_0x2820cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2820D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820CCu;
        // 0x2820d0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820cc) {
            ctx->pc = 0x282118u;
            goto label_282118;
        }
    }
    ctx->pc = 0x2820D4u;
    // 0x2820d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2820d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2820d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2820d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2820dc: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x2820dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x2820e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2820e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2820e4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x2820e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x2820e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2820e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2820ec: 0x24a53a80  addiu       $a1, $a1, 0x3A80
    ctx->pc = 0x2820ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14976));
    // 0x2820f0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2820f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2820f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2820f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2820f8: 0x248446e0  addiu       $a0, $a0, 0x46E0
    ctx->pc = 0x2820f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18144));
    // 0x2820fc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x2820fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x282100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282104: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x282104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x282108: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x282108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28210c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28210cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x282110: 0x3e00008  jr          $ra
    ctx->pc = 0x282110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282110u;
        // 0x282114: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282118u;
label_282118:
    // 0x282118: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28211c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x282120: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x282124: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x282124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x282128: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x282128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x28212c: 0xac2046e0  sw          $zero, 0x46E0($at)
    ctx->pc = 0x28212cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18144), GPR_U32(ctx, 0));
    // 0x282130: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x282130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x282134: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x282134u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x282138: 0xac203a80  sw          $zero, 0x3A80($at)
    ctx->pc = 0x282138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14976), GPR_U32(ctx, 0));
label_28213c:
    // 0x28213c: 0x3e00008  jr          $ra
    ctx->pc = 0x28213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282144u;
    // 0x282144: 0x0  nop
    ctx->pc = 0x282144u;
    // NOP
    ctx->pc = 0x282148u;
}
