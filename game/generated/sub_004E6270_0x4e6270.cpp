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

// Function: sub_004E6270
// Address: 0x4e6270 - 0x4e62a8
void sub_004E6270_0x4e6270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6270_0x4e6270");
#endif

    switch (ctx->pc) {
        case 0x4e6288u: goto label_4e6288;
        case 0x4e62a0u: goto label_4e62a0;
        default: break;
    }

    ctx->pc = 0x4e6270u;

    // 0x4e6270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e627c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E627Cu;
    ctx->pc = 0x4E6280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E627Cu;
    // 0x4e6280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E6284u;
    // 0x4e6284: 0x0  nop
    ctx->pc = 0x4e6284u;
    // NOP
label_4e6288:
    // 0x4e6288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e628c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6294: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E6294u;
    ctx->pc = 0x4E6298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6294u;
    // 0x4e6298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E629Cu;
    // 0x4e629c: 0x0  nop
    ctx->pc = 0x4e629cu;
    // NOP
label_4e62a0:
    // 0x4e62a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E62A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E62A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E62A8u;
}
