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

// Function: sub_0021FC28
// Address: 0x21fc28 - 0x21fc80
void sub_0021FC28_0x21fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FC28_0x21fc28");
#endif

    switch (ctx->pc) {
        case 0x21fc48u: goto label_21fc48;
        case 0x21fc58u: goto label_21fc58;
        case 0x21fc6cu: goto label_21fc6c;
        default: break;
    }

    ctx->pc = 0x21fc28u;

    // 0x21fc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fc2c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21fc30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21fc34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fc38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21fc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fc40: 0x24515e90  addiu       $s1, $v0, 0x5E90
    ctx->pc = 0x21fc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
    // 0x21fc44: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x21fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_21fc48:
    // 0x21fc48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21fc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21fc4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21fc50: 0xc0c3110  jal         func_30C440
    ctx->pc = 0x21FC50u;
    SET_GPR_U32(ctx, 31, 0x21FC58u);
    ctx->pc = 0x21FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC50u;
    // 0x21fc54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C440u, 0x21FC50u, 0x21FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC58u;
label_21fc58:
    // 0x21fc58: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x21fc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x21fc5c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21FC5Cu;
    {
        const bool branch_taken_0x21fc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fc5c) {
            ctx->pc = 0x21FC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FC5Cu;
            // 0x21fc60: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fc48;
        }
    }
    ctx->pc = 0x21FC64u;
    // 0x21fc64: 0xc0c30ce  jal         func_30C338
    ctx->pc = 0x21FC64u;
    SET_GPR_U32(ctx, 31, 0x21FC6Cu);
    ctx->pc = 0x30C338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C338u, 0x21FC64u, 0x21FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC6Cu;
label_21fc6c:
    // 0x21fc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fc74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21fc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x21FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC78u;
        // 0x21fc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FC80u;
}
