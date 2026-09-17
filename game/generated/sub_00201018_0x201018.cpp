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

// Function: sub_00201018
// Address: 0x201018 - 0x201088
void sub_00201018_0x201018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201018_0x201018");
#endif

    ctx->pc = 0x201018u;

    // 0x201018: 0xaf80c8a0  sw          $zero, -0x3760($gp)
    ctx->pc = 0x201018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953120), GPR_U32(ctx, 0));
    // 0x20101c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x20101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x201020: 0x84820040  lh          $v0, 0x40($a0)
    ctx->pc = 0x201020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x201024: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x201024u;
    {
        const bool branch_taken_0x201024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201024u;
        // 0x201028: 0x24860870  addiu       $a2, $a0, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201024) {
            ctx->pc = 0x201070u;
            goto label_201070;
        }
    }
    ctx->pc = 0x20102Cu;
    // 0x20102c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20102Cu;
    {
        const bool branch_taken_0x20102c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20102Cu;
        // 0x201030: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20102c) {
            ctx->pc = 0x201048u;
            goto label_201048;
        }
    }
    ctx->pc = 0x201034u;
    // 0x201034: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x201034u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x201038: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x201038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20103c: 0x3e00008  jr          $ra
    ctx->pc = 0x20103Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20103Cu;
        // 0x201040: 0xa4400004  sh          $zero, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20103Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201044u;
    // 0x201044: 0x0  nop
    ctx->pc = 0x201044u;
    // NOP
label_201048:
    // 0x201048: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x201048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x20104c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201050: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x201050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201054: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x201054u;
    {
        const bool branch_taken_0x201054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201054u;
        // 0x201058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201054) {
            ctx->pc = 0x20107Cu;
            goto label_20107c;
        }
    }
    ctx->pc = 0x20105Cu;
    // 0x20105c: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x20105cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x201060: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x201060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x201064: 0x3e00008  jr          $ra
    ctx->pc = 0x201064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201064u;
        // 0x201068: 0xa4820004  sh          $v0, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20106Cu;
    // 0x20106c: 0x0  nop
    ctx->pc = 0x20106cu;
    // NOP
label_201070:
    // 0x201070: 0xa4c00006  sh          $zero, 0x6($a2)
    ctx->pc = 0x201070u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x201074: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x201074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x201078: 0xa4c00004  sh          $zero, 0x4($a2)
    ctx->pc = 0x201078u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 0));
label_20107c:
    // 0x20107c: 0x3e00008  jr          $ra
    ctx->pc = 0x20107Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20107Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201084u;
    // 0x201084: 0x0  nop
    ctx->pc = 0x201084u;
    // NOP
    ctx->pc = 0x201088u;
}
