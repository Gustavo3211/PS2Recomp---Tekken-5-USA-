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

// Function: sub_002FCEF8
// Address: 0x2fcef8 - 0x2fcf80
void sub_002FCEF8_0x2fcef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCEF8_0x2fcef8");
#endif

    switch (ctx->pc) {
        case 0x2fcf20u: goto label_2fcf20;
        case 0x2fcf38u: goto label_2fcf38;
        default: break;
    }

    ctx->pc = 0x2fcef8u;

    // 0x2fcef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fcefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fcf00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fcf00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fcf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fcf08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcf0c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fcf10: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FCF10u;
    {
        const bool branch_taken_0x2fcf10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF10u;
        // 0x2fcf14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf10) {
            ctx->pc = 0x2FCF48u;
            goto label_2fcf48;
        }
    }
    ctx->pc = 0x2FCF18u;
    // 0x2fcf18: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2fcf18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2fcf1c: 0x0  nop
    ctx->pc = 0x2fcf1cu;
    // NOP
label_2fcf20:
    // 0x2fcf20: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fcf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fcf24: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2fcf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2fcf28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fcf28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fcf2c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2fcf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2fcf30: 0xc0bf30c  jal         func_2FCC30
    ctx->pc = 0x2FCF30u;
    SET_GPR_U32(ctx, 31, 0x2FCF38u);
    ctx->pc = 0x2FCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCF30u;
    // 0x2fcf34: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCC30u, 0x2FCF30u, 0x2FCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF38u;
label_2fcf38:
    // 0x2fcf38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fcf3c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2fcf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fcf40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2FCF40u;
    {
        const bool branch_taken_0x2fcf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF40u;
        // 0x2fcf44: 0x112040  sll         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf40) {
            ctx->pc = 0x2FCF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcf20;
        }
    }
    ctx->pc = 0x2FCF48u;
label_2fcf48:
    // 0x2fcf48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fcf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fcf4c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2fcf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fcf50: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2fcf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2fcf54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2fcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2fcf58: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2fcf58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fcf5c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2fcf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2fcf60: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2fcf60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2fcf64: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2fcf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2fcf68: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x2fcf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x2fcf6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fcf6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fcf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcf74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcf78: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF78u;
        // 0x2fcf7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCF80u;
}
