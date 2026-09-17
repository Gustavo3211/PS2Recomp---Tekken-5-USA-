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

// Function: sub_0050A9E0
// Address: 0x50a9e0 - 0x50aa20
void sub_0050A9E0_0x50a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A9E0_0x50a9e0");
#endif

    switch (ctx->pc) {
        case 0x50a9f0u: goto label_50a9f0;
        case 0x50aa00u: goto label_50aa00;
        default: break;
    }

    ctx->pc = 0x50a9e0u;

    // 0x50a9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a9e8: 0xc14450e  jal         func_511438
    ctx->pc = 0x50A9E8u;
    SET_GPR_U32(ctx, 31, 0x50A9F0u);
    ctx->pc = 0x511438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511438u, 0x50A9E8u, 0x50A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A9F0u;
label_50a9f0:
    // 0x50a9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50a9f4: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50a9f8: 0xc124620  jal         func_491880
    ctx->pc = 0x50A9F8u;
    SET_GPR_U32(ctx, 31, 0x50AA00u);
    ctx->pc = 0x50A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A9F8u;
    // 0x50a9fc: 0xa4433e7c  sh          $v1, 0x3E7C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 15996), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50A9F8u, 0x50AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AA00u;
label_50aa00:
    // 0x50aa00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aa04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50aa08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50aa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50aa0c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x50aa0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50aa10: 0xa423e818  sh          $v1, -0x17E8($at)
    ctx->pc = 0x50aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961176), (uint16_t)GPR_U32(ctx, 3));
    // 0x50aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x50AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AA14u;
        // 0x50aa18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AA1Cu;
    // 0x50aa1c: 0x0  nop
    ctx->pc = 0x50aa1cu;
    // NOP
    ctx->pc = 0x50aa20u;
}
