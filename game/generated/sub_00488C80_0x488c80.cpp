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

// Function: sub_00488C80
// Address: 0x488c80 - 0x488d58
void sub_00488C80_0x488c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488C80_0x488c80");
#endif

    ctx->pc = 0x488c80u;

    // 0x488c80: 0x3c03007c  lui         $v1, 0x7C
    ctx->pc = 0x488c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)124 << 16));
    // 0x488c84: 0x3c04007c  lui         $a0, 0x7C
    ctx->pc = 0x488c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)124 << 16));
    // 0x488c88: 0x24635b18  addiu       $v1, $v1, 0x5B18
    ctx->pc = 0x488c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23320));
    // 0x488c8c: 0x24845b0c  addiu       $a0, $a0, 0x5B0C
    ctx->pc = 0x488c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23308));
    // 0x488c90: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488c90u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488c94: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488c98: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x488c98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x488c9c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488ca0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488ca4: 0xa4c20400  sh          $v0, 0x400($a2)
    ctx->pc = 0x488ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1024), (uint16_t)GPR_U32(ctx, 2));
    // 0x488ca8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488cac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488cb0: 0xa4a20800  sh          $v0, 0x800($a1)
    ctx->pc = 0x488cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2048), (uint16_t)GPR_U32(ctx, 2));
    // 0x488cb4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488cb8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488cbc: 0xa4c20c00  sh          $v0, 0xC00($a2)
    ctx->pc = 0x488cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 3072), (uint16_t)GPR_U32(ctx, 2));
    // 0x488cc0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488cc4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488cc8: 0xa4a21000  sh          $v0, 0x1000($a1)
    ctx->pc = 0x488cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4096), (uint16_t)GPR_U32(ctx, 2));
    // 0x488ccc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488cccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488cd0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488cd4: 0xa4c21400  sh          $v0, 0x1400($a2)
    ctx->pc = 0x488cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5120), (uint16_t)GPR_U32(ctx, 2));
    // 0x488cd8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488cdc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488ce0: 0xa4a21800  sh          $v0, 0x1800($a1)
    ctx->pc = 0x488ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6144), (uint16_t)GPR_U32(ctx, 2));
    // 0x488ce4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488ce8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488cec: 0xa4c21c00  sh          $v0, 0x1C00($a2)
    ctx->pc = 0x488cecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 7168), (uint16_t)GPR_U32(ctx, 2));
    // 0x488cf0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488cf4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488cf8: 0xa4a22000  sh          $v0, 0x2000($a1)
    ctx->pc = 0x488cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8192), (uint16_t)GPR_U32(ctx, 2));
    // 0x488cfc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d00: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d04: 0xa4c22400  sh          $v0, 0x2400($a2)
    ctx->pc = 0x488d04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9216), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d08: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488d08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d0c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d10: 0xa4a22800  sh          $v0, 0x2800($a1)
    ctx->pc = 0x488d10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10240), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d14: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488d14u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d18: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d1c: 0xa4c22c00  sh          $v0, 0x2C00($a2)
    ctx->pc = 0x488d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 11264), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488d20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d24: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d28: 0xa4a23000  sh          $v0, 0x3000($a1)
    ctx->pc = 0x488d28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12288), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d2c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d30: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d34: 0xa4c23400  sh          $v0, 0x3400($a2)
    ctx->pc = 0x488d34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 13312), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d38: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d3c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x488d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d40: 0xa4a23800  sh          $v0, 0x3800($a1)
    ctx->pc = 0x488d40u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14336), (uint16_t)GPR_U32(ctx, 2));
    // 0x488d44: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488d44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7C5B18u));
    // 0x488d48: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x488d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7C5B0Cu));
    // 0x488d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x488D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488D4Cu;
        // 0x488d50: 0xa4c23c00  sh          $v0, 0x3C00($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 15360), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488D54u;
    // 0x488d54: 0x0  nop
    ctx->pc = 0x488d54u;
    // NOP
    ctx->pc = 0x488d58u;
}
