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

// Function: sub_00340D20
// Address: 0x340d20 - 0x340d40
void sub_00340D20_0x340d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340D20_0x340d20");
#endif

    ctx->pc = 0x340d20u;

    // 0x340d20: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x340d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x340d24: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x340d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x340d28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x340d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x340d2c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x340D2Cu;
    {
        const bool branch_taken_0x340d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340d2c) {
            ctx->pc = 0x340D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340D2Cu;
            // 0x340d30: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340D34u;
            goto label_340d34;
        }
    }
    ctx->pc = 0x340D34u;
label_340d34:
    // 0x340d34: 0x3e00008  jr          $ra
    ctx->pc = 0x340D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340D3Cu;
    // 0x340d3c: 0x0  nop
    ctx->pc = 0x340d3cu;
    // NOP
    ctx->pc = 0x340d40u;
}
