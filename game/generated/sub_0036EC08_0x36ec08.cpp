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

// Function: sub_0036EC08
// Address: 0x36ec08 - 0x36ec30
void sub_0036EC08_0x36ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EC08_0x36ec08");
#endif

    switch (ctx->pc) {
        case 0x36ec20u: goto label_36ec20;
        default: break;
    }

    ctx->pc = 0x36ec08u;

    // 0x36ec08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ec0c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36ec10: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36ec14: 0x24840478  addiu       $a0, $a0, 0x478
    ctx->pc = 0x36ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1144));
    // 0x36ec18: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36EC18u;
    SET_GPR_U32(ctx, 31, 0x36EC20u);
    ctx->pc = 0x36EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC18u;
    // 0x36ec1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36EC18u, 0x36EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC20u;
label_36ec20:
    // 0x36ec20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ec20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ec24: 0x3e00008  jr          $ra
    ctx->pc = 0x36EC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC24u;
        // 0x36ec28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EC2Cu;
    // 0x36ec2c: 0x0  nop
    ctx->pc = 0x36ec2cu;
    // NOP
    ctx->pc = 0x36ec30u;
}
