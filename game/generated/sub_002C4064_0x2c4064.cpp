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

// Function: sub_002C4064
// Address: 0x2c4064 - 0x2c4088
void sub_002C4064_0x2c4064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4064_0x2c4064");
#endif

    switch (ctx->pc) {
        case 0x2c4068u: goto label_2c4068;
        case 0x2c4070u: goto label_2c4070;
        case 0x2c4074u: goto label_2c4074;
        default: break;
    }

    ctx->pc = 0x2c4064u;

    // 0x2c4064: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c4064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2c4068:
    // 0x2c4068: 0x1e20ffa7  bgtz        $s1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2C4068u;
    {
        const bool branch_taken_0x2c4068 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2C406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4068u;
        // 0x2c406c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4068) {
            ctx->pc = 0x2C3F08u;
            return;
        }
    }
    ctx->pc = 0x2C4070u;
label_2c4070:
    // 0x2c4070: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2c4070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4074:
    // 0x2c4074: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2c4074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c4078: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c4078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c407c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C407Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C407Cu;
        // 0x2c4080: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C407Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4084u;
    // 0x2c4084: 0x0  nop
    ctx->pc = 0x2c4084u;
    // NOP
    ctx->pc = 0x2c4088u;
}
