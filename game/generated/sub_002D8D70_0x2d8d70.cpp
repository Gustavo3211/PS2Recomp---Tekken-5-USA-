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

// Function: sub_002D8D70
// Address: 0x2d8d70 - 0x2d8da8
void sub_002D8D70_0x2d8d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8D70_0x2d8d70");
#endif

    switch (ctx->pc) {
        case 0x2d8d80u: goto label_2d8d80;
        default: break;
    }

    ctx->pc = 0x2d8d70u;

    // 0x2d8d70: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d8d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8d74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8D74u;
    {
        const bool branch_taken_0x2d8d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8d74) {
            ctx->pc = 0x2D8D9Cu;
            goto label_2d8d9c;
        }
    }
    ctx->pc = 0x2D8D7Cu;
    // 0x2d8d7c: 0x0  nop
    ctx->pc = 0x2d8d7cu;
    // NOP
label_2d8d80:
    // 0x2d8d80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d8d84: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2d8d84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d8d88: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2d8d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8d8c: 0x0  nop
    ctx->pc = 0x2d8d8cu;
    // NOP
    // 0x2d8d90: 0x0  nop
    ctx->pc = 0x2d8d90u;
    // NOP
    // 0x2d8d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8D94u;
    {
        const bool branch_taken_0x2d8d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D94u;
        // 0x2d8d98: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d94) {
            ctx->pc = 0x2D8D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8d80;
        }
    }
    ctx->pc = 0x2D8D9Cu;
label_2d8d9c:
    // 0x2d8d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D9Cu;
        // 0x2d8da0: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8DA4u;
    // 0x2d8da4: 0x0  nop
    ctx->pc = 0x2d8da4u;
    // NOP
    ctx->pc = 0x2d8da8u;
}
