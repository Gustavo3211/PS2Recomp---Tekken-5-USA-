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

// Function: sub_001002E8
// Address: 0x1002e8 - 0x100350
void sub_001002E8_0x1002e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002E8_0x1002e8");
#endif

    ctx->pc = 0x1002e8u;

    // 0x1002e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1002e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1002ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1002ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1002f0: 0x8c46885c  lw          $a2, -0x77A4($v0)
    ctx->pc = 0x1002f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x1002f4: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1002F4u;
    {
        const bool branch_taken_0x1002f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1002F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002F4u;
        // 0x1002f8: 0x28c20004  slti        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002f4) {
            ctx->pc = 0x10031Cu;
            goto label_10031c;
        }
    }
    ctx->pc = 0x1002FCu;
    // 0x1002fc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1002FCu;
    {
        const bool branch_taken_0x1002fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002fc) {
            ctx->pc = 0x100300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1002FCu;
            // 0x100300: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10032Cu;
            goto label_10032c;
        }
    }
    ctx->pc = 0x100304u;
    // 0x100304: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x100304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x100308: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x100308u;
    {
        const bool branch_taken_0x100308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100308) {
            ctx->pc = 0x10030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100308u;
            // 0x10030c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10032Cu;
            goto label_10032c;
        }
    }
    ctx->pc = 0x100310u;
    // 0x100310: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x100310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x100314: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x100314u;
    {
        const bool branch_taken_0x100314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100314) {
            ctx->pc = 0x100318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100314u;
            // 0x100318: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10032Cu;
            goto label_10032c;
        }
    }
    ctx->pc = 0x10031Cu;
label_10031c:
    // 0x10031c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x10031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x100320: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100320u;
    {
        const bool branch_taken_0x100320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x100320) {
            ctx->pc = 0x100324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100320u;
            // 0x100324: 0x3c02013d  lui         $v0, 0x13D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)317 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100338u;
            goto label_100338;
        }
    }
    ctx->pc = 0x100328u;
    // 0x100328: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x100328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_10032c:
    // 0x10032c: 0x3e00008  jr          $ra
    ctx->pc = 0x10032Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10032Cu;
        // 0x100330: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10032Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100334u;
    // 0x100334: 0x0  nop
    ctx->pc = 0x100334u;
    // NOP
label_100338:
    // 0x100338: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x100338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x10033c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x10033cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x100340: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x100340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x100344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x100344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100348: 0x3e00008  jr          $ra
    ctx->pc = 0x100348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100348u;
        // 0x10034c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100350u;
}
