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

// Function: sub_002F7888
// Address: 0x2f7888 - 0x2f78e8
void sub_002F7888_0x2f7888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7888_0x2f7888");
#endif

    ctx->pc = 0x2f7888u;

    // 0x2f7888: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x2f7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x2f788c: 0x30a52060  andi        $a1, $a1, 0x2060
    ctx->pc = 0x2f788cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8288);
    // 0x2f7890: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F7890u;
    {
        const bool branch_taken_0x2f7890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7890u;
        // 0x2f7894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7890) {
            ctx->pc = 0x2F78DCu;
            goto label_2f78dc;
        }
    }
    ctx->pc = 0x2F7898u;
    // 0x2f7898: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F7898u;
    {
        const bool branch_taken_0x2f7898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7898) {
            ctx->pc = 0x2F78DCu;
            goto label_2f78dc;
        }
    }
    ctx->pc = 0x2F78A0u;
    // 0x2f78a0: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2f78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x2f78a4: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x2f78a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x2f78a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f78ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F78ACu;
    {
        const bool branch_taken_0x2f78ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78ACu;
        // 0x2f78b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78ac) {
            ctx->pc = 0x2F78C4u;
            goto label_2f78c4;
        }
    }
    ctx->pc = 0x2F78B4u;
    // 0x2f78b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f78b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f78bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F78BCu;
    {
        const bool branch_taken_0x2f78bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78BCu;
        // 0x2f78c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78bc) {
            ctx->pc = 0x2F78D4u;
            goto label_2f78d4;
        }
    }
    ctx->pc = 0x2F78C4u;
label_2f78c4:
    // 0x2f78c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2f78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2f78c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f78c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2f78d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f78d4:
    // 0x2f78d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f78d8: 0xaca30114  sw          $v1, 0x114($a1)
    ctx->pc = 0x2f78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 3));
label_2f78dc:
    // 0x2f78dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F78DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F78DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F78E4u;
    // 0x2f78e4: 0x0  nop
    ctx->pc = 0x2f78e4u;
    // NOP
    ctx->pc = 0x2f78e8u;
}
