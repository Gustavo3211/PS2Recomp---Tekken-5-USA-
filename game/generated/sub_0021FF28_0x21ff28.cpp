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

// Function: sub_0021FF28
// Address: 0x21ff28 - 0x21ff88
void sub_0021FF28_0x21ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FF28_0x21ff28");
#endif

    switch (ctx->pc) {
        case 0x21ff54u: goto label_21ff54;
        default: break;
    }

    ctx->pc = 0x21ff28u;

    // 0x21ff28: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x21ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x21ff2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x21ff2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ff30: 0x24c34520  addiu       $v1, $a2, 0x4520
    ctx->pc = 0x21ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 17696));
    // 0x21ff34: 0x8c6250c4  lw          $v0, 0x50C4($v1)
    ctx->pc = 0x21ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E95E4u));
    // 0x21ff38: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x21ff38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21ff3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FF3Cu;
    {
        const bool branch_taken_0x21ff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF3Cu;
        // 0x21ff40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff3c) {
            ctx->pc = 0x21FF50u;
            goto label_21ff50;
        }
    }
    ctx->pc = 0x21FF44u;
    // 0x21ff44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21FF44u;
    {
        const bool branch_taken_0x21ff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF44u;
        // 0x21ff48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff44) {
            ctx->pc = 0x21FF7Cu;
            goto label_21ff7c;
        }
    }
    ctx->pc = 0x21FF4Cu;
    // 0x21ff4c: 0x0  nop
    ctx->pc = 0x21ff4cu;
    // NOP
label_21ff50:
    // 0x21ff50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21ff54:
    // 0x21ff54: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x21ff54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21ff58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FF58u;
    {
        const bool branch_taken_0x21ff58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF58u;
        // 0x21ff5c: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff58) {
            ctx->pc = 0x21FF7Cu;
            goto label_21ff7c;
        }
    }
    ctx->pc = 0x21FF60u;
    // 0x21ff60: 0x24c24520  addiu       $v0, $a2, 0x4520
    ctx->pc = 0x21ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 17696));
    // 0x21ff64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ff68: 0x8c4350c4  lw          $v1, 0x50C4($v0)
    ctx->pc = 0x21ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20676)));
    // 0x21ff6c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x21ff6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21ff70: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21FF70u;
    {
        const bool branch_taken_0x21ff70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ff70) {
            ctx->pc = 0x21FF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FF70u;
            // 0x21ff74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ff54;
        }
    }
    ctx->pc = 0x21FF78u;
    // 0x21ff78: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21ff78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21ff7c:
    // 0x21ff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF7Cu;
        // 0x21ff80: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FF84u;
    // 0x21ff84: 0x0  nop
    ctx->pc = 0x21ff84u;
    // NOP
    ctx->pc = 0x21ff88u;
}
