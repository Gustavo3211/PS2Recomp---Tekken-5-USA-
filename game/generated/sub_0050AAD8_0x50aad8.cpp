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

// Function: sub_0050AAD8
// Address: 0x50aad8 - 0x50ab10
void sub_0050AAD8_0x50aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AAD8_0x50aad8");
#endif

    switch (ctx->pc) {
        case 0x50aae8u: goto label_50aae8;
        case 0x50aaf0u: goto label_50aaf0;
        default: break;
    }

    ctx->pc = 0x50aad8u;

    // 0x50aad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50aadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50aae0: 0xc14450e  jal         func_511438
    ctx->pc = 0x50AAE0u;
    SET_GPR_U32(ctx, 31, 0x50AAE8u);
    ctx->pc = 0x511438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511438u, 0x50AAE0u, 0x50AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AAE8u;
label_50aae8:
    // 0x50aae8: 0xc124620  jal         func_491880
    ctx->pc = 0x50AAE8u;
    SET_GPR_U32(ctx, 31, 0x50AAF0u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50AAE8u, 0x50AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AAF0u;
label_50aaf0:
    // 0x50aaf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x50aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50aaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aaf8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50aaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50aafc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x50aafcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50ab00: 0xa423e818  sh          $v1, -0x17E8($at)
    ctx->pc = 0x50ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961176), (uint16_t)GPR_U32(ctx, 3));
    // 0x50ab04: 0x3e00008  jr          $ra
    ctx->pc = 0x50AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AB04u;
        // 0x50ab08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AB0Cu;
    // 0x50ab0c: 0x0  nop
    ctx->pc = 0x50ab0cu;
    // NOP
    ctx->pc = 0x50ab10u;
}
