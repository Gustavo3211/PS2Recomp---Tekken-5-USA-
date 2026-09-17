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

// Function: sub_00512E78
// Address: 0x512e78 - 0x512ea8
void sub_00512E78_0x512e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512E78_0x512e78");
#endif

    ctx->pc = 0x512e78u;

    // 0x512e78: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x512e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x512e7c: 0x84433ec6  lh          $v1, 0x3EC6($v0)
    ctx->pc = 0x512e7cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903EC6u));
    // 0x512e80: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x512E80u;
    {
        const bool branch_taken_0x512e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x512E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512E80u;
        // 0x512e84: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512e80) {
            ctx->pc = 0x512E9Cu;
            goto label_512e9c;
        }
    }
    ctx->pc = 0x512E88u;
    // 0x512e88: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x512e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x512e8c: 0x2442f650  addiu       $v0, $v0, -0x9B0
    ctx->pc = 0x512e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964816));
    // 0x512e90: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x512e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x512e94: 0xa443080a  sh          $v1, 0x80A($v0)
    ctx->pc = 0x512e94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2058), (uint16_t)GPR_U32(ctx, 3));
    // 0x512e98: 0xa4440808  sh          $a0, 0x808($v0)
    ctx->pc = 0x512e98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2056), (uint16_t)GPR_U32(ctx, 4));
label_512e9c:
    // 0x512e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x512E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512EA4u;
    // 0x512ea4: 0x0  nop
    ctx->pc = 0x512ea4u;
    // NOP
    ctx->pc = 0x512ea8u;
}
