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

// Function: sub_002B7D20
// Address: 0x2b7d20 - 0x2b7da0
void sub_002B7D20_0x2b7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D20_0x2b7d20");
#endif

    switch (ctx->pc) {
        case 0x2b7d40u: goto label_2b7d40;
        case 0x2b7d58u: goto label_2b7d58;
        case 0x2b7d60u: goto label_2b7d60;
        case 0x2b7d70u: goto label_2b7d70;
        default: break;
    }

    ctx->pc = 0x2b7d20u;

    // 0x2b7d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7d28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b7d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b7d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7d38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b7d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b7d40:
    // 0x2b7d40: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b7d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7d48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7d4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2B7D4Cu;
    {
        const bool branch_taken_0x2b7d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d4c) {
            ctx->pc = 0x2B7D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7D4Cu;
            // 0x2b7d50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7D7Cu;
            goto label_2b7d7c;
        }
    }
    ctx->pc = 0x2B7D54u;
    // 0x2b7d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d58:
    // 0x2b7d58: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x2B7D58u;
    SET_GPR_U32(ctx, 31, 0x2B7D60u);
    ctx->pc = 0x2B7D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D58u;
    // 0x2b7d5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x2B7D58u, 0x2B7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D60u;
label_2b7d60:
    // 0x2b7d60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b7d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d68: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x2B7D68u;
    SET_GPR_U32(ctx, 31, 0x2B7D70u);
    ctx->pc = 0x2B7D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D68u;
    // 0x2b7d6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x2B7D68u, 0x2B7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D70u;
label_2b7d70:
    // 0x2b7d70: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B7D70u;
    {
        const bool branch_taken_0x2b7d70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d70) {
            ctx->pc = 0x2B7D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7d58;
        }
    }
    ctx->pc = 0x2B7D78u;
    // 0x2b7d78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b7d7c:
    // 0x2b7d7c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x2b7d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2b7d80: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B7D80u;
    {
        const bool branch_taken_0x2b7d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7d80) {
            ctx->pc = 0x2B7D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7D80u;
            // 0x2b7d84: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7d40;
        }
    }
    ctx->pc = 0x2B7D88u;
    // 0x2b7d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7d94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b7d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D98u;
        // 0x2b7d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DA0u;
}
