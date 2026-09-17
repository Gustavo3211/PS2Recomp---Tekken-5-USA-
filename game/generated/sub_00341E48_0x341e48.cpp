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

// Function: sub_00341E48
// Address: 0x341e48 - 0x341e78
void sub_00341E48_0x341e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341E48_0x341e48");
#endif

    ctx->pc = 0x341e48u;

    // 0x341e48: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x341e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x341e4c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x341e50: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x341e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x341e54: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x341e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x341e58: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x341e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x341e5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x341e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x341e60: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x341e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x341e64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x341e68: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x341e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x341e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x341E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E6Cu;
        // 0x341e70: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341E74u;
    // 0x341e74: 0x0  nop
    ctx->pc = 0x341e74u;
    // NOP
    ctx->pc = 0x341e78u;
}
