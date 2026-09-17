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

// Function: sub_0021EA20
// Address: 0x21ea20 - 0x21eaa0
void sub_0021EA20_0x21ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA20_0x21ea20");
#endif

    switch (ctx->pc) {
        case 0x21ea48u: goto label_21ea48;
        case 0x21ea54u: goto label_21ea54;
        case 0x21ea70u: goto label_21ea70;
        default: break;
    }

    ctx->pc = 0x21ea20u;

    // 0x21ea20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ea24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21ea28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ea2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21ea2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21ea34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21ea34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ea3c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ea40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21ea44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21ea44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ea48:
    // 0x21ea48: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x21ea48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21ea4c: 0xc087a58  jal         func_21E960
    ctx->pc = 0x21EA4Cu;
    SET_GPR_U32(ctx, 31, 0x21EA54u);
    ctx->pc = 0x21EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA4Cu;
    // 0x21ea50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E960u, 0x21EA4Cu, 0x21EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA54u;
label_21ea54:
    // 0x21ea54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21ea54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea58: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x21ea5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21ea60: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x21ea60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21ea64: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x21ea64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ea68: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x21EA68u;
    SET_GPR_U32(ctx, 31, 0x21EA70u);
    ctx->pc = 0x21EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA68u;
    // 0x21ea6c: 0x129138  dsll        $s2, $s2, 4 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x21EA68u, 0x21EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA70u;
label_21ea70:
    // 0x21ea70: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x21ea70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21ea74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x21EA74u;
    {
        const bool branch_taken_0x21ea74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA74u;
        // 0x21ea78: 0x262982d  daddu       $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea74) {
            ctx->pc = 0x21EA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ea48;
        }
    }
    ctx->pc = 0x21EA7Cu;
    // 0x21ea7c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21ea7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ea80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ea84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21ea84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ea88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21ea88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ea8c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21ea8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ea90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21ea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ea94: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA94u;
        // 0x21ea98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA9Cu;
    // 0x21ea9c: 0x0  nop
    ctx->pc = 0x21ea9cu;
    // NOP
    ctx->pc = 0x21eaa0u;
}
