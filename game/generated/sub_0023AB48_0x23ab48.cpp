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

// Function: sub_0023AB48
// Address: 0x23ab48 - 0x23ab68
void sub_0023AB48_0x23ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AB48_0x23ab48");
#endif

    ctx->pc = 0x23ab48u;

    // 0x23ab48: 0x8f82a918  lw          $v0, -0x56E8($gp)
    ctx->pc = 0x23ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945048)));
    // 0x23ab4c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x23ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x23ab50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23ab54: 0x8483001a  lh          $v1, 0x1A($a0)
    ctx->pc = 0x23ab54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x23ab58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ab58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ab5c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB5Cu;
        // 0x23ab60: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB64u;
    // 0x23ab64: 0x0  nop
    ctx->pc = 0x23ab64u;
    // NOP
    ctx->pc = 0x23ab68u;
}
