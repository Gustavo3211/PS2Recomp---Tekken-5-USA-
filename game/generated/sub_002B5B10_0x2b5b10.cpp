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

// Function: sub_002B5B10
// Address: 0x2b5b10 - 0x2b5b68
void sub_002B5B10_0x2b5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B10_0x2b5b10");
#endif

    switch (ctx->pc) {
        case 0x2b5b30u: goto label_2b5b30;
        default: break;
    }

    ctx->pc = 0x2b5b10u;

    // 0x2b5b10: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b5b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b18: 0x8d070084  lw          $a3, 0x84($t0)
    ctx->pc = 0x2b5b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x2b5b1c: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5B1Cu;
    {
        const bool branch_taken_0x2b5b1c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2B5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B1Cu;
        // 0x2b5b20: 0xad0500b4  sw          $a1, 0xB4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 180), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b1c) {
            ctx->pc = 0x2B5B60u;
            goto label_2b5b60;
        }
    }
    ctx->pc = 0x2B5B24u;
    // 0x2b5b24: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2b5b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b5b28: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2b5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2b5b2c: 0x0  nop
    ctx->pc = 0x2b5b2cu;
    // NOP
label_2b5b30:
    // 0x2b5b30: 0x8d0400ac  lw          $a0, 0xAC($t0)
    ctx->pc = 0x2b5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x2b5b34: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2b5b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b5b38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b5b3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5b40: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x2b5b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2b5b44: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5B44u;
    {
        const bool branch_taken_0x2b5b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2B5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B44u;
        // 0x2b5b48: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b44) {
            ctx->pc = 0x2B5B54u;
            goto label_2b5b54;
        }
    }
    ctx->pc = 0x2B5B4Cu;
    // 0x2b5b4c: 0xac8500c0  sw          $a1, 0xC0($a0)
    ctx->pc = 0x2b5b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
    // 0x2b5b50: 0x8d070084  lw          $a3, 0x84($t0)
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
label_2b5b54:
    // 0x2b5b54: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2b5b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2b5b58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B5B58u;
    {
        const bool branch_taken_0x2b5b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B58u;
        // 0x2b5b5c: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b58) {
            ctx->pc = 0x2B5B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5b30;
        }
    }
    ctx->pc = 0x2B5B60u;
label_2b5b60:
    // 0x2b5b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B68u;
}
