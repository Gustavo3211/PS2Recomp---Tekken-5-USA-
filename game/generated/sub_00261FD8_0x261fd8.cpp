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

// Function: sub_00261FD8
// Address: 0x261fd8 - 0x262010
void sub_00261FD8_0x261fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261FD8_0x261fd8");
#endif

    switch (ctx->pc) {
        case 0x261fe8u: goto label_261fe8;
        default: break;
    }

    ctx->pc = 0x261fd8u;

    // 0x261fd8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x261fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x261fdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x261fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fe0: 0x2445ebec  addiu       $a1, $v0, -0x1414
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962156));
    // 0x261fe4: 0x0  nop
    ctx->pc = 0x261fe4u;
    // NOP
label_261fe8:
    // 0x261fe8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x261fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x261fec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x261fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x261ff0: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x261ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x261ff4: 0x0  nop
    ctx->pc = 0x261ff4u;
    // NOP
    // 0x261ff8: 0x0  nop
    ctx->pc = 0x261ff8u;
    // NOP
    // 0x261ffc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x261FFCu;
    {
        const bool branch_taken_0x261ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261FFCu;
        // 0x262000: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ffc) {
            ctx->pc = 0x261FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261fe8;
        }
    }
    ctx->pc = 0x262004u;
    // 0x262004: 0x3e00008  jr          $ra
    ctx->pc = 0x262004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26200Cu;
    // 0x26200c: 0x0  nop
    ctx->pc = 0x26200cu;
    // NOP
    ctx->pc = 0x262010u;
}
