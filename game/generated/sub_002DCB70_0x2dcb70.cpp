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

// Function: sub_002DCB70
// Address: 0x2dcb70 - 0x2dcbf0
void sub_002DCB70_0x2dcb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCB70_0x2dcb70");
#endif

    switch (ctx->pc) {
        case 0x2dcb88u: goto label_2dcb88;
        case 0x2dcbc8u: goto label_2dcbc8;
        default: break;
    }

    ctx->pc = 0x2dcb70u;

    // 0x2dcb70: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2dcb70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb74: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2dcb74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dcb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dcb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dcb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb84: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2dcb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_2dcb88:
    // 0x2dcb88: 0x1472021  addu        $a0, $t2, $a3
    ctx->pc = 0x2dcb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2dcb8c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x2dcb8cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcb90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2dcb90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dcb94: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCB94u;
    {
        const bool branch_taken_0x2dcb94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dcb94) {
            ctx->pc = 0x2DCB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCB94u;
            // 0x2dcb98: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCBB0u;
            goto label_2dcbb0;
        }
    }
    ctx->pc = 0x2DCB9Cu;
    // 0x2dcb9c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x2dcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2dcba0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dcba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dcba4: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x2dcba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2dcba8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2dcba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2dcbac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dcbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2dcbb0:
    // 0x2dcbb0: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x2dcbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2dcbb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DCBB4u;
    {
        const bool branch_taken_0x2dcbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBB4u;
        // 0x2dcbb8: 0x1691821  addu        $v1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbb4) {
            ctx->pc = 0x2DCB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcb88;
        }
    }
    ctx->pc = 0x2DCBBCu;
    // 0x2dcbbc: 0x19000009  blez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DCBBCu;
    {
        const bool branch_taken_0x2dcbbc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBBCu;
        // 0x2dcbc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbbc) {
            ctx->pc = 0x2DCBE4u;
            goto label_2dcbe4;
        }
    }
    ctx->pc = 0x2DCBC4u;
    // 0x2dcbc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dcbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dcbc8:
    // 0x2dcbc8: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x2dcbc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2dcbcc: 0x0  nop
    ctx->pc = 0x2dcbccu;
    // NOP
    // 0x2dcbd0: 0x0  nop
    ctx->pc = 0x2dcbd0u;
    // NOP
    // 0x2dcbd4: 0x0  nop
    ctx->pc = 0x2dcbd4u;
    // NOP
    // 0x2dcbd8: 0x0  nop
    ctx->pc = 0x2dcbd8u;
    // NOP
    // 0x2dcbdc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DCBDCu;
    {
        const bool branch_taken_0x2dcbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcbdc) {
            ctx->pc = 0x2DCBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCBDCu;
            // 0x2dcbe0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcbc8;
        }
    }
    ctx->pc = 0x2DCBE4u;
label_2dcbe4:
    // 0x2dcbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCBECu;
    // 0x2dcbec: 0x0  nop
    ctx->pc = 0x2dcbecu;
    // NOP
    ctx->pc = 0x2dcbf0u;
}
