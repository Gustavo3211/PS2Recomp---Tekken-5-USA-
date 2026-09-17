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

// Function: sub_0050F6F0
// Address: 0x50f6f0 - 0x50f730
void sub_0050F6F0_0x50f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F6F0_0x50f6f0");
#endif

    switch (ctx->pc) {
        case 0x50f700u: goto label_50f700;
        default: break;
    }

    ctx->pc = 0x50f6f0u;

    // 0x50f6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50f6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50f6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50f6f8: 0xc124620  jal         func_491880
    ctx->pc = 0x50F6F8u;
    SET_GPR_U32(ctx, 31, 0x50F700u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50F6F8u, 0x50F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F700u;
label_50f700:
    // 0x50f700: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x50f700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50f704: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x50f704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x50f708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50f70c: 0x8442e802  lh          $v0, -0x17FE($v0)
    ctx->pc = 0x50f70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961154)));
    // 0x50f710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50F710u;
    {
        const bool branch_taken_0x50f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F710u;
        // 0x50f714: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f710) {
            ctx->pc = 0x50F724u;
            goto label_50f724;
        }
    }
    ctx->pc = 0x50F718u;
    // 0x50f718: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50f71c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x50f71cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x50f720: 0xa422e806  sh          $v0, -0x17FA($at)
    ctx->pc = 0x50f720u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 2));
label_50f724:
    // 0x50f724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f728: 0x3e00008  jr          $ra
    ctx->pc = 0x50F728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F728u;
        // 0x50f72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F730u;
}
