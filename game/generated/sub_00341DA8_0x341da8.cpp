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

// Function: sub_00341DA8
// Address: 0x341da8 - 0x341de0
void sub_00341DA8_0x341da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341DA8_0x341da8");
#endif

    ctx->pc = 0x341da8u;

    // 0x341da8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x341dac: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x341db0: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x341db0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x341db4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x341db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x341db8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x341db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x341dbc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x341dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x341dc0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x341dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x341dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x341dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x341dc8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x341dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x341dcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x341dd0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x341dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x341dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x341DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DD4u;
        // 0x341dd8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341DDCu;
    // 0x341ddc: 0x0  nop
    ctx->pc = 0x341ddcu;
    // NOP
    ctx->pc = 0x341de0u;
}
