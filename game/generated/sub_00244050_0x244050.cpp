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

// Function: sub_00244050
// Address: 0x244050 - 0x2440d0
void sub_00244050_0x244050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244050_0x244050");
#endif

    switch (ctx->pc) {
        case 0x244070u: goto label_244070;
        case 0x2440a8u: goto label_2440a8;
        default: break;
    }

    ctx->pc = 0x244050u;

    // 0x244050: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x244050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x244054: 0x24e36690  addiu       $v1, $a3, 0x6690
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 26256));
    // 0x244058: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x244058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1667ACu));
    // 0x24405c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24405Cu;
    {
        const bool branch_taken_0x24405c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x244060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24405Cu;
        // 0x244060: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24405c) {
            ctx->pc = 0x244090u;
            goto label_244090;
        }
    }
    ctx->pc = 0x244064u;
    // 0x244064: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x244064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244068: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x244068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24406c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x24406cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_244070:
    // 0x244070: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x244074: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x244078: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24407c: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x24407cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x244080: 0x8ca2011c  lw          $v0, 0x11C($a1)
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
    // 0x244084: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x244084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x244088: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x244088u;
    {
        const bool branch_taken_0x244088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244088u;
        // 0x24408c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244088) {
            ctx->pc = 0x244070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244070;
        }
    }
    ctx->pc = 0x244090u;
label_244090:
    // 0x244090: 0x24e46690  addiu       $a0, $a3, 0x6690
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 26256));
    // 0x244094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244098: 0x8c82019c  lw          $v0, 0x19C($a0)
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x24409c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24409Cu;
    {
        const bool branch_taken_0x24409c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2440A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24409Cu;
        // 0x2440a0: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24409c) {
            ctx->pc = 0x2440C4u;
            goto label_2440c4;
        }
    }
    ctx->pc = 0x2440A4u;
    // 0x2440a4: 0x0  nop
    ctx->pc = 0x2440a4u;
    // NOP
label_2440a8:
    // 0x2440a8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2440a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2440ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2440acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2440b0: 0x8c82019c  lw          $v0, 0x19C($a0)
    ctx->pc = 0x2440b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x2440b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2440b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2440b8: 0x0  nop
    ctx->pc = 0x2440b8u;
    // NOP
    // 0x2440bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2440BCu;
    {
        const bool branch_taken_0x2440bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2440C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2440BCu;
        // 0x2440c0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440bc) {
            ctx->pc = 0x2440A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2440a8;
        }
    }
    ctx->pc = 0x2440C4u;
label_2440c4:
    // 0x2440c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2440C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2440C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2440CCu;
    // 0x2440cc: 0x0  nop
    ctx->pc = 0x2440ccu;
    // NOP
    ctx->pc = 0x2440d0u;
}
