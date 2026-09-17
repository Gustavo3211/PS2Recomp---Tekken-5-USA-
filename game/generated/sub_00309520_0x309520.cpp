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

// Function: sub_00309520
// Address: 0x309520 - 0x309558
void sub_00309520_0x309520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309520_0x309520");
#endif

    ctx->pc = 0x309520u;

    // 0x309520: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x309520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x309524: 0x3e00008  jr          $ra
    ctx->pc = 0x309524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309524u;
        // 0x309528: 0xa044f0bd  sb          $a0, -0xF43($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294963389), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30952Cu;
    // 0x30952c: 0x0  nop
    ctx->pc = 0x30952cu;
    // NOP
    // 0x309530: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x309530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x309534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309538: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x309538u;
    {
        const bool branch_taken_0x309538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309538u;
        // 0x30953c: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309538) {
            ctx->pc = 0x309550u;
            goto label_309550;
        }
    }
    ctx->pc = 0x309540u;
    // 0x309540: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x309540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x309544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x309544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309548: 0x3e00008  jr          $ra
    ctx->pc = 0x309548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309548u;
        // 0x30954c: 0xa062f0be  sb          $v0, -0xF42($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294963390), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309550u;
label_309550:
    // 0x309550: 0x3e00008  jr          $ra
    ctx->pc = 0x309550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309550u;
        // 0x309554: 0xa043f0be  sb          $v1, -0xF42($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294963390), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309558u;
}
