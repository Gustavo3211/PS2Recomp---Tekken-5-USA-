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

// Function: sub_00341E78
// Address: 0x341e78 - 0x341ea8
void sub_00341E78_0x341e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341E78_0x341e78");
#endif

    ctx->pc = 0x341e78u;

    // 0x341e78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x341e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x341e7c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x341e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x341e80: 0x90620006  lbu         $v0, 0x6($v1)
    ctx->pc = 0x341e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x341e84: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x341e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x341e88: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x341e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x341e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x341e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x341e90: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x341e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x341e94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x341e98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x341e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x341e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x341E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E9Cu;
        // 0x341ea0: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341EA4u;
    // 0x341ea4: 0x0  nop
    ctx->pc = 0x341ea4u;
    // NOP
    ctx->pc = 0x341ea8u;
}
