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

// Function: sub_00348CA8
// Address: 0x348ca8 - 0x348d90
void sub_00348CA8_0x348ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348CA8_0x348ca8");
#endif

    ctx->pc = 0x348ca8u;

    // 0x348ca8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x348ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348cac: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x348CACu;
    {
        const bool branch_taken_0x348cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x348CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CACu;
        // 0x348cb0: 0x28830003  slti        $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cac) {
            ctx->pc = 0x348D10u;
            goto label_348d10;
        }
    }
    ctx->pc = 0x348CB4u;
    // 0x348cb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x348CB4u;
    {
        const bool branch_taken_0x348cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CB4u;
        // 0x348cb8: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cb4) {
            ctx->pc = 0x348CC8u;
            goto label_348cc8;
        }
    }
    ctx->pc = 0x348CBCu;
    // 0x348cbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x348cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348cc0: 0x10820025  beq         $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x348CC0u;
    {
        const bool branch_taken_0x348cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x348CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CC0u;
        // 0x348cc4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348cc0) {
            ctx->pc = 0x348D58u;
            goto label_348d58;
        }
    }
    ctx->pc = 0x348CC8u;
label_348cc8:
    // 0x348cc8: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x348cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x348ccc: 0x24494f60  addiu       $t1, $v0, 0x4F60
    ctx->pc = 0x348cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x348cd0: 0x81240000  lb          $a0, 0x0($t1)
    ctx->pc = 0x348cd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x348cd4: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x348cd4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x348cd8: 0x81280002  lb          $t0, 0x2($t1)
    ctx->pc = 0x348cd8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x348cdc: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x348cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x348ce0: 0xa0a70001  sb          $a3, 0x1($a1)
    ctx->pc = 0x348ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x348ce4: 0xa0a80002  sb          $t0, 0x2($a1)
    ctx->pc = 0x348ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x348ce8: 0x24674f68  addiu       $a3, $v1, 0x4F68
    ctx->pc = 0x348ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 20328));
    // 0x348cec: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x348cecu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x154F68u));
    // 0x348cf0: 0x80e40001  lb          $a0, 0x1($a3)
    ctx->pc = 0x348cf0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x154F69u));
    // 0x348cf4: 0x80e50002  lb          $a1, 0x2($a3)
    ctx->pc = 0x348cf4u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x154F6Au));
    // 0x348cf8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x348cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x348cfc: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x348cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x348d00: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x348d00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x348d04: 0x3e00008  jr          $ra
    ctx->pc = 0x348D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D0Cu;
    // 0x348d0c: 0x0  nop
    ctx->pc = 0x348d0cu;
    // NOP
label_348d10:
    // 0x348d10: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x348d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x348d14: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x348d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x348d18: 0x24474f70  addiu       $a3, $v0, 0x4F70
    ctx->pc = 0x348d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20336));
    // 0x348d1c: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x348d1cu;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x154F70u));
    // 0x348d20: 0x80e90001  lb          $t1, 0x1($a3)
    ctx->pc = 0x348d20u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x154F71u));
    // 0x348d24: 0x80e40002  lb          $a0, 0x2($a3)
    ctx->pc = 0x348d24u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x154F72u));
    // 0x348d28: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x348d28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x348d2c: 0xa0a90001  sb          $t1, 0x1($a1)
    ctx->pc = 0x348d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x348d30: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x348d30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348d34: 0x24644f68  addiu       $a0, $v1, 0x4F68
    ctx->pc = 0x348d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20328));
    // 0x348d38: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x348d38u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x154F68u));
    // 0x348d3c: 0x80890001  lb          $t1, 0x1($a0)
    ctx->pc = 0x348d3cu;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x154F69u));
    // 0x348d40: 0x80820002  lb          $v0, 0x2($a0)
    ctx->pc = 0x348d40u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x154F6Au));
    // 0x348d44: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x348d44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x348d48: 0xa0c90001  sb          $t1, 0x1($a2)
    ctx->pc = 0x348d48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x348d4c: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x348d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x348d50: 0x3e00008  jr          $ra
    ctx->pc = 0x348D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D58u;
label_348d58:
    // 0x348d58: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x348d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x348d5c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x348d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x348d60: 0x24444f78  addiu       $a0, $v0, 0x4F78
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20344));
    // 0x348d64: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x348d64u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x154F78u));
    // 0x348d68: 0x80880001  lb          $t0, 0x1($a0)
    ctx->pc = 0x348d68u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x154F79u));
    // 0x348d6c: 0xa0a70000  sb          $a3, 0x0($a1)
    ctx->pc = 0x348d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x348d70: 0xa0a80001  sb          $t0, 0x1($a1)
    ctx->pc = 0x348d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x348d74: 0x24694f80  addiu       $t1, $v1, 0x4F80
    ctx->pc = 0x348d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 20352));
    // 0x348d78: 0x81250000  lb          $a1, 0x0($t1)
    ctx->pc = 0x348d78u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x154F80u));
    // 0x348d7c: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x348d7cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x154F81u));
    // 0x348d80: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x348d80u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x348d84: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x348d84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x348d88: 0x3e00008  jr          $ra
    ctx->pc = 0x348D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348D90u;
}
