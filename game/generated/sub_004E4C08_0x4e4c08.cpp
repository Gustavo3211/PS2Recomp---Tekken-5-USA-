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

// Function: sub_004E4C08
// Address: 0x4e4c08 - 0x4e4c40
void sub_004E4C08_0x4e4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C08_0x4e4c08");
#endif

    switch (ctx->pc) {
        case 0x4e4c20u: goto label_4e4c20;
        case 0x4e4c38u: goto label_4e4c38;
        default: break;
    }

    ctx->pc = 0x4e4c08u;

    // 0x4e4c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4c14: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E4C14u;
    ctx->pc = 0x4E4C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C14u;
    // 0x4e4c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4C1Cu;
    // 0x4e4c1c: 0x0  nop
    ctx->pc = 0x4e4c1cu;
    // NOP
label_4e4c20:
    // 0x4e4c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e4c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4c2c: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E4C2Cu;
    ctx->pc = 0x4E4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C2Cu;
    // 0x4e4c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4C34u;
    // 0x4e4c34: 0x0  nop
    ctx->pc = 0x4e4c34u;
    // NOP
label_4e4c38:
    // 0x4e4c38: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4C40u;
}
