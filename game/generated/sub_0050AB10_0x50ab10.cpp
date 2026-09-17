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

// Function: sub_0050AB10
// Address: 0x50ab10 - 0x50ab48
void sub_0050AB10_0x50ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AB10_0x50ab10");
#endif

    switch (ctx->pc) {
        case 0x50ab20u: goto label_50ab20;
        case 0x50ab28u: goto label_50ab28;
        default: break;
    }

    ctx->pc = 0x50ab10u;

    // 0x50ab10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ab14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50ab18: 0xc14450e  jal         func_511438
    ctx->pc = 0x50AB18u;
    SET_GPR_U32(ctx, 31, 0x50AB20u);
    ctx->pc = 0x511438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511438u, 0x50AB18u, 0x50AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AB20u;
label_50ab20:
    // 0x50ab20: 0xc124620  jal         func_491880
    ctx->pc = 0x50AB20u;
    SET_GPR_U32(ctx, 31, 0x50AB28u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50AB20u, 0x50AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AB28u;
label_50ab28:
    // 0x50ab28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50ab2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50ab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ab30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50ab34: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x50ab34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50ab38: 0xa423e818  sh          $v1, -0x17E8($at)
    ctx->pc = 0x50ab38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961176), (uint16_t)GPR_U32(ctx, 3));
    // 0x50ab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x50AB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AB3Cu;
        // 0x50ab40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AB44u;
    // 0x50ab44: 0x0  nop
    ctx->pc = 0x50ab44u;
    // NOP
    ctx->pc = 0x50ab48u;
}
