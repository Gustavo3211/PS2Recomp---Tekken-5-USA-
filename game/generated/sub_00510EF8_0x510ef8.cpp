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

// Function: sub_00510EF8
// Address: 0x510ef8 - 0x510f28
void sub_00510EF8_0x510ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510EF8_0x510ef8");
#endif

    ctx->pc = 0x510ef8u;

    // 0x510ef8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x510ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x510efc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x510efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x510f00: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x510f00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510f04: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510f08: 0xa4a3002a  sh          $v1, 0x2A($a1)
    ctx->pc = 0x510f08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x510f0c: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x510f0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x510f10: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x510f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x510f14: 0xa4a70038  sh          $a3, 0x38($a1)
    ctx->pc = 0x510f14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 7));
    // 0x510f18: 0xa4a6002c  sh          $a2, 0x2C($a1)
    ctx->pc = 0x510f18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 6));
    // 0x510f1c: 0xa4a70028  sh          $a3, 0x28($a1)
    ctx->pc = 0x510f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 7));
    // 0x510f20: 0x3e00008  jr          $ra
    ctx->pc = 0x510F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x510F20u;
        // 0x510f24: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x510F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x510F28u;
}
