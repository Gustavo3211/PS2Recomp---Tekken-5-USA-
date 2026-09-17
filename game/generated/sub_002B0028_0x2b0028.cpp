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

// Function: sub_002B0028
// Address: 0x2b0028 - 0x2b00b0
void sub_002B0028_0x2b0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0028_0x2b0028");
#endif

    switch (ctx->pc) {
        case 0x2b0040u: goto label_2b0040;
        case 0x2b0058u: goto label_2b0058;
        case 0x2b0080u: goto label_2b0080;
        default: break;
    }

    ctx->pc = 0x2b0028u;

    // 0x2b0028: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b002c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2b002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2b0030: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b0030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b0034: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b0034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b0038: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0038u;
        // 0x2b003c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0040u;
label_2b0040:
    // 0x2b0040: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2b0040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0044: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b0048: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b004c: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x2b004cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2b0050: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0050u;
    {
        const bool branch_taken_0x2b0050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0050u;
        // 0x2b0054: 0x24830064  addiu       $v1, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0050) {
            ctx->pc = 0x2B0094u;
            goto label_2b0094;
        }
    }
    ctx->pc = 0x2B0058u;
label_2b0058:
    // 0x2b0058: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2b0058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b005c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2b005cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2b0060: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b0060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0064: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b0064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b0068: 0x48282a  slt         $a1, $v0, $t0
    ctx->pc = 0x2b0068u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2b006c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B006Cu;
    {
        const bool branch_taken_0x2b006c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B006Cu;
        // 0x2b0070: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b006c) {
            ctx->pc = 0x2B0080u;
            goto label_2b0080;
        }
    }
    ctx->pc = 0x2B0074u;
    // 0x2b0074: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0074u;
    {
        const bool branch_taken_0x2b0074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0074) {
            ctx->pc = 0x2B0078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0074u;
            // 0x2b0078: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0088u;
            goto label_2b0088;
        }
    }
    ctx->pc = 0x2B007Cu;
    // 0x2b007c: 0x0  nop
    ctx->pc = 0x2b007cu;
    // NOP
label_2b0080:
    // 0x2b0080: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0080u;
        // 0x2b0084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0088u;
label_2b0088:
    // 0x2b0088: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b0088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b008c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B008Cu;
    {
        const bool branch_taken_0x2b008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B008Cu;
        // 0x2b0090: 0x24830064  addiu       $v1, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b008c) {
            ctx->pc = 0x2B0058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0058;
        }
    }
    ctx->pc = 0x2B0094u;
label_2b0094:
    // 0x2b0094: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0098: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x2b0098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2b009c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b00a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2b00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2b00a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B00A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00A4u;
        // 0x2b00a8: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B00A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B00ACu;
    // 0x2b00ac: 0x0  nop
    ctx->pc = 0x2b00acu;
    // NOP
    ctx->pc = 0x2b00b0u;
}
