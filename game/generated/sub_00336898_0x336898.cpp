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

// Function: sub_00336898
// Address: 0x336898 - 0x336918
void sub_00336898_0x336898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336898_0x336898");
#endif

    switch (ctx->pc) {
        case 0x3368b0u: goto label_3368b0;
        default: break;
    }

    ctx->pc = 0x336898u;

    // 0x336898: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x336898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33689c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x33689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3368a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3368a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3368a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3368a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368a8: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x3368a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x3368ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3368acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3368b0:
    // 0x3368b0: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x3368b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x3368b4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3368b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3368b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3368b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3368bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3368bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3368c0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3368c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3368c4: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x3368c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3368c8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x3368c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3368cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3368CCu;
    {
        const bool branch_taken_0x3368cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3368D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368CCu;
        // 0x3368d0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368cc) {
            ctx->pc = 0x3368B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3368b0;
        }
    }
    ctx->pc = 0x3368D4u;
    // 0x3368d4: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x3368d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x3368d8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x3368d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x3368dc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3368dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3368e0: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x3368e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x3368e4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3368e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3368e8: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x3368e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3368ec: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x3368ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x3368f0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3368f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3368f4: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3368f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3368f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3368f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3368fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3368fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x336900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x336900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336904: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x336904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x336908: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x336908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x33690c: 0x3e00008  jr          $ra
    ctx->pc = 0x33690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33690Cu;
        // 0x336910: 0xac460004  sw          $a2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33690Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336914u;
    // 0x336914: 0x0  nop
    ctx->pc = 0x336914u;
    // NOP
    ctx->pc = 0x336918u;
}
