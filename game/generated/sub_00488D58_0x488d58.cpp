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

// Function: sub_00488D58
// Address: 0x488d58 - 0x488e30
void sub_00488D58_0x488d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488D58_0x488d58");
#endif

    ctx->pc = 0x488d58u;

    // 0x488d58: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x488d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x488d5c: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x488d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x488d60: 0x24635b18  addiu       $v1, $v1, 0x5B18
    ctx->pc = 0x488d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x488d64: 0x24845b0c  addiu       $a0, $a0, 0x5B0C
    ctx->pc = 0x488d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23308));
    // 0x488d68: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488d68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d6c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d70: 0xa4a20200  sh          $v0, 0x200($a1)
    ctx->pc = 0x488d70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 512), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d74: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488d74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d78: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d7c: 0xa4c20600  sh          $v0, 0x600($a2)
    ctx->pc = 0x488d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d80: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488d80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d84: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d88: 0xa4a20a00  sh          $v0, 0xA00($a1)
    ctx->pc = 0x488d88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2560), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d8c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d90: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d94: 0xa4c20e00  sh          $v0, 0xE00($a2)
    ctx->pc = 0x488d94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 3584), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d98: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488d98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d9c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488da0: 0xa4a21200  sh          $v0, 0x1200($a1)
    ctx->pc = 0x488da0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4608), (uint16_t)GPR_U32(ctx, 2));
    // 0x488da4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488da4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488da8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488da8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488dac: 0xa4c21600  sh          $v0, 0x1600($a2)
    ctx->pc = 0x488dacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5632), (uint16_t)GPR_U32(ctx, 2));
    // 0x488db0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488db0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488db4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488db8: 0xa4a21a00  sh          $v0, 0x1A00($a1)
    ctx->pc = 0x488db8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6656), (uint16_t)GPR_U32(ctx, 2));
    // 0x488dbc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488dc0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488dc4: 0xa4c21e00  sh          $v0, 0x1E00($a2)
    ctx->pc = 0x488dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 7680), (uint16_t)GPR_U32(ctx, 2));
    // 0x488dc8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488dcc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488dd0: 0xa4a22200  sh          $v0, 0x2200($a1)
    ctx->pc = 0x488dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8704), (uint16_t)GPR_U32(ctx, 2));
    // 0x488dd4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488dd8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488ddc: 0xa4c22600  sh          $v0, 0x2600($a2)
    ctx->pc = 0x488ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9728), (uint16_t)GPR_U32(ctx, 2));
    // 0x488de0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488de0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488de4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488de8: 0xa4a22a00  sh          $v0, 0x2A00($a1)
    ctx->pc = 0x488de8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10752), (uint16_t)GPR_U32(ctx, 2));
    // 0x488dec: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488decu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488df0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488df4: 0xa4c22e00  sh          $v0, 0x2E00($a2)
    ctx->pc = 0x488df4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11776), (uint16_t)GPR_U32(ctx, 2));
    // 0x488df8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488df8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488dfc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488dfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488e00: 0xa4a23200  sh          $v0, 0x3200($a1)
    ctx->pc = 0x488e00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12800), (uint16_t)GPR_U32(ctx, 2));
    // 0x488e04: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488e04u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488e08: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488e0c: 0xa4c23600  sh          $v0, 0x3600($a2)
    ctx->pc = 0x488e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 13824), (uint16_t)GPR_U32(ctx, 2));
    // 0x488e10: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488e14: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488e14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488e18: 0xa4a23a00  sh          $v0, 0x3A00($a1)
    ctx->pc = 0x488e18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14848), (uint16_t)GPR_U32(ctx, 2));
    // 0x488e1c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488e20: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488e20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488e24: 0x3e00008  jr          $ra
    ctx->pc = 0x488E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488E24u;
        // 0x488e28: 0xa4c23e00  sh          $v0, 0x3E00($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 15872), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488E2Cu;
    // 0x488e2c: 0x0  nop
    ctx->pc = 0x488e2cu;
    // NOP
    ctx->pc = 0x488e30u;
}
