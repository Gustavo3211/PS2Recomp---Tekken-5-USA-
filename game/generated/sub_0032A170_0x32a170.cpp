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

// Function: sub_0032A170
// Address: 0x32a170 - 0x32a1a0
void sub_0032A170_0x32a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A170_0x32a170");
#endif

    switch (ctx->pc) {
        case 0x32a178u: goto label_32a178;
        default: break;
    }

    ctx->pc = 0x32a170u;

    // 0x32a170: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x32a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x32a174: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x32a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_32a178:
    // 0x32a178: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32a17c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a180: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a184: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32a184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32a188: 0x0  nop
    ctx->pc = 0x32a188u;
    // NOP
    // 0x32a18c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32A18Cu;
    {
        const bool branch_taken_0x32a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A18Cu;
        // 0x32a190: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a18c) {
            ctx->pc = 0x32A178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a178;
        }
    }
    ctx->pc = 0x32A194u;
    // 0x32a194: 0x3e00008  jr          $ra
    ctx->pc = 0x32A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A19Cu;
    // 0x32a19c: 0x0  nop
    ctx->pc = 0x32a19cu;
    // NOP
    ctx->pc = 0x32a1a0u;
}
