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

// Function: sub_004A29E0
// Address: 0x4a29e0 - 0x4a2a28
void sub_004A29E0_0x4a29e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A29E0_0x4a29e0");
#endif

    ctx->pc = 0x4a29e0u;

    // 0x4a29e0: 0x84c20012  lh          $v0, 0x12($a2)
    ctx->pc = 0x4a29e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4a29e4: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x4a29e4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4a29e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a29ec: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a29f0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a29f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a29f4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a29f8: 0x84c20016  lh          $v0, 0x16($a2)
    ctx->pc = 0x4a29f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x4a29fc: 0x94a70006  lhu         $a3, 0x6($a1)
    ctx->pc = 0x4a29fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4a2a00: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4a2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a2a04: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a2a04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2a08: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a2a0c: 0x84c2001a  lh          $v0, 0x1A($a2)
    ctx->pc = 0x4a2a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x4a2a10: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x4a2a10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x4a2a14: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4a2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a2a18: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4a2a18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2a1c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4a2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4a2a20: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A20u;
        // 0x4a2a24: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2A28u;
}
