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

// Function: sub_002ECE48
// Address: 0x2ece48 - 0x2ece88
void sub_002ECE48_0x2ece48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECE48_0x2ece48");
#endif

    switch (ctx->pc) {
        case 0x2ece70u: goto label_2ece70;
        case 0x2ece7cu: goto label_2ece7c;
        default: break;
    }

    ctx->pc = 0x2ece48u;

    // 0x2ece48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ece48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ece4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ece4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ece50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ece54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ece54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ece58: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x2ece58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x2ece5c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2ece5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2ece60: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x2ece60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x2ece64: 0x2484f454  addiu       $a0, $a0, -0xBAC
    ctx->pc = 0x2ece64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964308));
    // 0x2ece68: 0xc0da5fc  jal         func_3697F0
    ctx->pc = 0x2ECE68u;
    SET_GPR_U32(ctx, 31, 0x2ECE70u);
    ctx->pc = 0x2ECE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE68u;
    // 0x2ece6c: 0x80450104  lb          $a1, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2ECE68u, 0x2ECE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE70u;
label_2ece70:
    // 0x2ece70: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ece70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ece74: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x2ECE74u;
    SET_GPR_U32(ctx, 31, 0x2ECE7Cu);
    ctx->pc = 0x2ECE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE74u;
    // 0x2ece78: 0x24844520  addiu       $a0, $a0, 0x4520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x2ECE74u, 0x2ECE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE7Cu;
label_2ece7c:
    // 0x2ece7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ece7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ece80: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE80u;
        // 0x2ece84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECE88u;
}
