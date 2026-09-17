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

// Function: sub_00276840
// Address: 0x276840 - 0x2768d8
void sub_00276840_0x276840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276840_0x276840");
#endif

    switch (ctx->pc) {
        case 0x276888u: goto label_276888;
        default: break;
    }

    ctx->pc = 0x276840u;

    // 0x276840: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x276840u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x276844: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x276844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x276848: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x276848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27684c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27684cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276850: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276854: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276858: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x276858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x27685c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x27685cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x276860: 0xac25acc8  sw          $a1, -0x5338($at)
    ctx->pc = 0x276860u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945992), GPR_U32(ctx, 5));
    // 0x276864: 0x3e00008  jr          $ra
    ctx->pc = 0x276864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27686Cu;
    // 0x27686c: 0x0  nop
    ctx->pc = 0x27686cu;
    // NOP
    // 0x276870: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x276870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x276874: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x276874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x276878: 0x244888d0  addiu       $t0, $v0, -0x7730
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x27687c: 0x2467a620  addiu       $a3, $v1, -0x59E0
    ctx->pc = 0x27687cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x276880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276884: 0x0  nop
    ctx->pc = 0x276884u;
    // NOP
label_276888:
    // 0x276888: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x276888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27688c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27688cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x276890: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x276890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x276894: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x276894u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x276898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x276898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27689c: 0x9464003c  lhu         $a0, 0x3C($v1)
    ctx->pc = 0x27689cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2768a0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2768a4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2768a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2768a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2768ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2768acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2768b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2768b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2768b4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2768B4u;
    {
        const bool branch_taken_0x2768b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2768B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768B4u;
        // 0x2768b8: 0x472021  addu        $a0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2768b4) {
            ctx->pc = 0x276888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276888;
        }
    }
    ctx->pc = 0x2768BCu;
    // 0x2768bc: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x2768bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2768c0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2768c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2768c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2768c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2768c8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2768cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2768CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2768D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2768CCu;
        // 0x2768d0: 0xac8206a8  sw          $v0, 0x6A8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2768CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2768D4u;
    // 0x2768d4: 0x0  nop
    ctx->pc = 0x2768d4u;
    // NOP
    ctx->pc = 0x2768d8u;
}
