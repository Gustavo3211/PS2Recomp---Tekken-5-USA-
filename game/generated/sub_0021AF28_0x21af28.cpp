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

// Function: sub_0021AF28
// Address: 0x21af28 - 0x21af88
void sub_0021AF28_0x21af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AF28_0x21af28");
#endif

    switch (ctx->pc) {
        case 0x21af38u: goto label_21af38;
        case 0x21af60u: goto label_21af60;
        default: break;
    }

    ctx->pc = 0x21af28u;

    // 0x21af28: 0x24870050  addiu       $a3, $a0, 0x50
    ctx->pc = 0x21af28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x21af2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21af2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af30: 0x2488004c  addiu       $t0, $a0, 0x4C
    ctx->pc = 0x21af30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x21af34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21af34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21af38:
    // 0x21af38: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21af38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21af3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21af40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21af44: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x21af44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21af48: 0x0  nop
    ctx->pc = 0x21af48u;
    // NOP
    // 0x21af4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21AF4Cu;
    {
        const bool branch_taken_0x21af4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF4Cu;
        // 0x21af50: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af4c) {
            ctx->pc = 0x21AF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af38;
        }
    }
    ctx->pc = 0x21AF54u;
    // 0x21af54: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x21af54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21af5c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x21af5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_21af60:
    // 0x21af60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21af60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21af64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21af64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21af68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21af6c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21af70: 0x0  nop
    ctx->pc = 0x21af70u;
    // NOP
    // 0x21af74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21AF74u;
    {
        const bool branch_taken_0x21af74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF74u;
        // 0x21af78: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af74) {
            ctx->pc = 0x21AF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21af60;
        }
    }
    ctx->pc = 0x21AF7Cu;
    // 0x21af7c: 0x3e00008  jr          $ra
    ctx->pc = 0x21AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF7Cu;
        // 0x21af80: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AF84u;
    // 0x21af84: 0x0  nop
    ctx->pc = 0x21af84u;
    // NOP
    ctx->pc = 0x21af88u;
}
