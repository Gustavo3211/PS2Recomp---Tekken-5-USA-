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

// Function: sub_0048DA10
// Address: 0x48da10 - 0x48da70
void sub_0048DA10_0x48da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DA10_0x48da10");
#endif

    ctx->pc = 0x48da10u;

    // 0x48da10: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x48da10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x48da14: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x48da14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x48da18: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x48da18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x48da1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x48da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x48da20: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x48da20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48da24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48da24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48da28: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x48da28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x48da2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48da30: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x48da30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x48da34: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48da38: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x48da38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x48da3c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x48da3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48da40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48da44: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x48da44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x48da48: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x48da48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48da4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48da50: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x48da50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x48da54: 0x84a4002a  lh          $a0, 0x2A($a1)
    ctx->pc = 0x48da54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x48da58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48da5c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x48da5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48da60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x48da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48da64: 0x3e00008  jr          $ra
    ctx->pc = 0x48DA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DA64u;
        // 0x48da68: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DA6Cu;
    // 0x48da6c: 0x0  nop
    ctx->pc = 0x48da6cu;
    // NOP
    ctx->pc = 0x48da70u;
}
