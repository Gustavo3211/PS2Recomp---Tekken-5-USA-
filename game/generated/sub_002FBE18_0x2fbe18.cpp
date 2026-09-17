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

// Function: sub_002FBE18
// Address: 0x2fbe18 - 0x2fbe78
void sub_002FBE18_0x2fbe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBE18_0x2fbe18");
#endif

    switch (ctx->pc) {
        case 0x2fbe40u: goto label_2fbe40;
        case 0x2fbe50u: goto label_2fbe50;
        default: break;
    }

    ctx->pc = 0x2fbe18u;

    // 0x2fbe18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbe1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fbe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fbe20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fbe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fbe24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fbe24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbe28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fbe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fbe2c: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbe2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbe30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FBE30u;
    {
        const bool branch_taken_0x2fbe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE30u;
        // 0x2fbe34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbe30) {
            ctx->pc = 0x2FBE60u;
            goto label_2fbe60;
        }
    }
    ctx->pc = 0x2FBE38u;
    // 0x2fbe38: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2fbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2fbe3c: 0x0  nop
    ctx->pc = 0x2fbe3cu;
    // NOP
label_2fbe40:
    // 0x2fbe40: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2fbe40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2fbe44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fbe44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fbe48: 0xc0bebee  jal         func_2FAFB8
    ctx->pc = 0x2FBE48u;
    SET_GPR_U32(ctx, 31, 0x2FBE50u);
    ctx->pc = 0x2FBE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBE48u;
    // 0x2fbe4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAFB8u, 0x2FBE48u, 0x2FBE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBE50u;
label_2fbe50:
    // 0x2fbe50: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fbe50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fbe54: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2fbe54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fbe58: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FBE58u;
    {
        const bool branch_taken_0x2fbe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe58) {
            ctx->pc = 0x2FBE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBE58u;
            // 0x2fbe5c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fbe40;
        }
    }
    ctx->pc = 0x2FBE60u;
label_2fbe60:
    // 0x2fbe60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fbe60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbe64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbe68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fbe68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbe6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fbe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbe70: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE70u;
        // 0x2fbe74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBE78u;
}
