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

// Function: entry_10dd20
// Address: 0x10dd20 - 0x10dd90
void entry_10dd20_0x10dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_10dd20_0x10dd90");
#endif

    switch (ctx->pc) {
        case 0x10dd64u: goto label_10dd64;
        case 0x10dd74u: goto label_10dd74;
        default: break;
    }

    ctx->pc = 0x10dd20u;

    // 0x10dd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10dd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10dd24: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x10dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x10dd28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10dd2c: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x10dd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x10dd30: 0x3c10001e  lui         $s0, 0x1E
    ctx->pc = 0x10dd30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)30 << 16));
    // 0x10dd34: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x10dd34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x10dd38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10dd3c: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x10dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x10dd40: 0x24e765c0  addiu       $a3, $a3, 0x65C0
    ctx->pc = 0x10dd40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26048));
    // 0x10dd44: 0x256bd2b0  addiu       $t3, $t3, -0x2D50
    ctx->pc = 0x10dd44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955696));
    // 0x10dd48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10dd4c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x10dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10dd50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10dd50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd54: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x10dd54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10dd58: 0x26097b00  addiu       $t1, $s0, 0x7B00
    ctx->pc = 0x10dd58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 31488));
    // 0x10dd5c: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x10DD5Cu;
    SET_GPR_U32(ctx, 31, 0x10DD64u);
    ctx->pc = 0x10DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD5Cu;
    // 0x10dd60: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x10DD5Cu, 0x10DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD64u;
label_10dd64:
    // 0x10dd64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DD64u;
    {
        const bool branch_taken_0x10dd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD64u;
        // 0x10dd68: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd64) {
            ctx->pc = 0x10DD7Cu;
            goto label_10dd7c;
        }
    }
    ctx->pc = 0x10DD6Cu;
    // 0x10dd6c: 0xc044794  jal         func_111E50
    ctx->pc = 0x10DD6Cu;
    SET_GPR_U32(ctx, 31, 0x10DD74u);
    ctx->pc = 0x10DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD6Cu;
    // 0x10dd70: 0x2484dea8  addiu       $a0, $a0, -0x2158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x10DD6Cu, 0x10DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD74u;
label_10dd74:
    // 0x10dd74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10DD74u;
    {
        const bool branch_taken_0x10dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD74u;
        // 0x10dd78: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd74) {
            ctx->pc = 0x10DD80u;
            goto label_10dd80;
        }
    }
    ctx->pc = 0x10DD7Cu;
label_10dd7c:
    // 0x10dd7c: 0x8e027b00  lw          $v0, 0x7B00($s0)
    ctx->pc = 0x10dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31488)));
label_10dd80:
    // 0x10dd80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10dd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10dd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dd88: 0x3e00008  jr          $ra
    ctx->pc = 0x10DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD88u;
        // 0x10dd8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD90u;
}
