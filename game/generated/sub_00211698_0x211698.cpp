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

// Function: sub_00211698
// Address: 0x211698 - 0x211700
void sub_00211698_0x211698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211698_0x211698");
#endif

    switch (ctx->pc) {
        case 0x2116b8u: goto label_2116b8;
        default: break;
    }

    ctx->pc = 0x211698u;

    // 0x211698: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x211698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21169c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21169cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116a0: 0x24494c18  addiu       $t1, $v0, 0x4C18
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x2116a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2116a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116a8: 0x252c0008  addiu       $t4, $t1, 0x8
    ctx->pc = 0x2116a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2116ac: 0x252b0004  addiu       $t3, $t1, 0x4
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2116b0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2116b4: 0x0  nop
    ctx->pc = 0x2116b4u;
    // NOP
label_2116b8:
    // 0x2116b8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2116b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2116bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2116c0: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2116c4: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x2116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2116c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2116c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2116cc: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2116CCu;
    {
        const bool branch_taken_0x2116cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2116D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116CCu;
        // 0x2116d0: 0x2906001f  slti        $a2, $t0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116cc) {
            ctx->pc = 0x2116F0u;
            goto label_2116f0;
        }
    }
    ctx->pc = 0x2116D4u;
    // 0x2116d4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2116D4u;
    {
        const bool branch_taken_0x2116d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2116d4) {
            ctx->pc = 0x2116D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2116D4u;
            // 0x2116d8: 0xeb1021  addu        $v0, $a3, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2116E8u;
            goto label_2116e8;
        }
    }
    ctx->pc = 0x2116DCu;
    // 0x2116dc: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x2116dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x2116e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2116E0u;
    {
        const bool branch_taken_0x2116e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116E0u;
        // 0x2116e4: 0x8c4a0000  lw          $t2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116e0) {
            ctx->pc = 0x2116F8u;
            goto label_2116f8;
        }
    }
    ctx->pc = 0x2116E8u;
label_2116e8:
    // 0x2116e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2116E8u;
    {
        const bool branch_taken_0x2116e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2116ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116E8u;
        // 0x2116ec: 0x8c4a0000  lw          $t2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116e8) {
            ctx->pc = 0x2116F8u;
            goto label_2116f8;
        }
    }
    ctx->pc = 0x2116F0u;
label_2116f0:
    // 0x2116f0: 0x54c0fff1  bnel        $a2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2116F0u;
    {
        const bool branch_taken_0x2116f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2116f0) {
            ctx->pc = 0x2116F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2116F0u;
            // 0x2116f4: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2116B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2116b8;
        }
    }
    ctx->pc = 0x2116F8u;
label_2116f8:
    // 0x2116f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2116F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2116FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2116F8u;
        // 0x2116fc: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2116F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211700u;
}
