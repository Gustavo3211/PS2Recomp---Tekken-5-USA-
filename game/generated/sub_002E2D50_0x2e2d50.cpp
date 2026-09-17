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

// Function: sub_002E2D50
// Address: 0x2e2d50 - 0x2e2f08
void sub_002E2D50_0x2e2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2D50_0x2e2d50");
#endif

    ctx->pc = 0x2e2d50u;

    // 0x2e2d50: 0x24850074  addiu       $a1, $a0, 0x74
    ctx->pc = 0x2e2d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2e2d54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2d58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2D58u;
    {
        const bool branch_taken_0x2e2d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D58u;
        // 0x2e2d5c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d58) {
            ctx->pc = 0x2E2D70u;
            goto label_2e2d70;
        }
    }
    ctx->pc = 0x2E2D60u;
    // 0x2e2d60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2d64: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2d68: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2D68u;
    {
        const bool branch_taken_0x2e2d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2d68) {
            ctx->pc = 0x2E2D7Cu;
            goto label_2e2d7c;
        }
    }
    ctx->pc = 0x2E2D70u;
label_2e2d70:
    // 0x2e2d70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2d74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2d78: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e2d7c:
    // 0x2e2d7c: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2D7Cu;
    {
        const bool branch_taken_0x2e2d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d7c) {
            ctx->pc = 0x2E2D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2D7Cu;
            // 0x2e2d80: 0x2485007c  addiu       $a1, $a0, 0x7C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2DC0u;
            goto label_2e2dc0;
        }
    }
    ctx->pc = 0x2E2D84u;
    // 0x2e2d84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2d88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2D88u;
    {
        const bool branch_taken_0x2e2d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D88u;
        // 0x2e2d8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d88) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D90u;
    // 0x2e2d90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2d94: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2d98: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2D98u;
    {
        const bool branch_taken_0x2e2d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2d98) {
            ctx->pc = 0x2E2D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2D98u;
            // 0x2e2d9c: 0x8cc20040  lw          $v0, 0x40($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2DB0u;
            goto label_2e2db0;
        }
    }
    ctx->pc = 0x2E2DA0u;
label_2e2da0:
    // 0x2e2da0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e2da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2da8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2dac: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x2e2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2db0:
    // 0x2e2db0: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2db4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e2db8: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x2e2db8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x2e2dbc: 0x2485007c  addiu       $a1, $a0, 0x7C
    ctx->pc = 0x2e2dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_2e2dc0:
    // 0x2e2dc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2dc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2DC4u;
    {
        const bool branch_taken_0x2e2dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DC4u;
        // 0x2e2dc8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2dc4) {
            ctx->pc = 0x2E2DDCu;
            goto label_2e2ddc;
        }
    }
    ctx->pc = 0x2E2DCCu;
    // 0x2e2dcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2dd0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2dd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2DD4u;
    {
        const bool branch_taken_0x2e2dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2dd4) {
            ctx->pc = 0x2E2DE8u;
            goto label_2e2de8;
        }
    }
    ctx->pc = 0x2E2DDCu;
label_2e2ddc:
    // 0x2e2ddc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2de4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e2de8:
    // 0x2e2de8: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2DE8u;
    {
        const bool branch_taken_0x2e2de8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2de8) {
            ctx->pc = 0x2E2DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2DE8u;
            // 0x2e2dec: 0x24850084  addiu       $a1, $a0, 0x84 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E2Cu;
            goto label_2e2e2c;
        }
    }
    ctx->pc = 0x2E2DF0u;
    // 0x2e2df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2df4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2DF4u;
    {
        const bool branch_taken_0x2e2df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DF4u;
        // 0x2e2df8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2df4) {
            ctx->pc = 0x2E2E0Cu;
            goto label_2e2e0c;
        }
    }
    ctx->pc = 0x2E2DFCu;
    // 0x2e2dfc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2e00: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2e04: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2E04u;
    {
        const bool branch_taken_0x2e2e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2e04) {
            ctx->pc = 0x2E2E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E04u;
            // 0x2e2e08: 0x8cc20040  lw          $v0, 0x40($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E1Cu;
            goto label_2e2e1c;
        }
    }
    ctx->pc = 0x2E2E0Cu;
label_2e2e0c:
    // 0x2e2e0c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e2e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e14: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2e18: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x2e2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2e1c:
    // 0x2e2e1c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e2e24: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x2e2e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x2e2e28: 0x24850084  addiu       $a1, $a0, 0x84
    ctx->pc = 0x2e2e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_2e2e2c:
    // 0x2e2e2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2e30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2E30u;
    {
        const bool branch_taken_0x2e2e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E30u;
        // 0x2e2e34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e30) {
            ctx->pc = 0x2E2E48u;
            goto label_2e2e48;
        }
    }
    ctx->pc = 0x2E2E38u;
    // 0x2e2e38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2e3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2e40: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2E40u;
    {
        const bool branch_taken_0x2e2e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2e40) {
            ctx->pc = 0x2E2E54u;
            goto label_2e2e54;
        }
    }
    ctx->pc = 0x2E2E48u;
label_2e2e48:
    // 0x2e2e48: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e50: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2e2e54:
    // 0x2e2e54: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2E54u;
    {
        const bool branch_taken_0x2e2e54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e54) {
            ctx->pc = 0x2E2E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E54u;
            // 0x2e2e58: 0x2484008c  addiu       $a0, $a0, 0x8C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E98u;
            goto label_2e2e98;
        }
    }
    ctx->pc = 0x2E2E5Cu;
    // 0x2e2e5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e2e60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2E60u;
    {
        const bool branch_taken_0x2e2e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E60u;
        // 0x2e2e64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e60) {
            ctx->pc = 0x2E2E78u;
            goto label_2e2e78;
        }
    }
    ctx->pc = 0x2E2E68u;
    // 0x2e2e68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2e6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e2e70: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2E70u;
    {
        const bool branch_taken_0x2e2e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2e70) {
            ctx->pc = 0x2E2E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2E70u;
            // 0x2e2e74: 0x8cc20040  lw          $v0, 0x40($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E88u;
            goto label_2e2e88;
        }
    }
    ctx->pc = 0x2E2E78u;
label_2e2e78:
    // 0x2e2e78: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e2e7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2e2e84: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x2e2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2e88:
    // 0x2e2e88: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2e8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e2e90: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x2e2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
    // 0x2e2e94: 0x2484008c  addiu       $a0, $a0, 0x8C
    ctx->pc = 0x2e2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
label_2e2e98:
    // 0x2e2e98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2e9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2E9Cu;
    {
        const bool branch_taken_0x2e2e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E9Cu;
        // 0x2e2ea0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e9c) {
            ctx->pc = 0x2E2EB4u;
            goto label_2e2eb4;
        }
    }
    ctx->pc = 0x2E2EA4u;
    // 0x2e2ea4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2ea8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2eac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2EACu;
    {
        const bool branch_taken_0x2e2eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2eac) {
            ctx->pc = 0x2E2EC0u;
            goto label_2e2ec0;
        }
    }
    ctx->pc = 0x2E2EB4u;
label_2e2eb4:
    // 0x2e2eb4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ebc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2e2ec0:
    // 0x2e2ec0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2EC0u;
    {
        const bool branch_taken_0x2e2ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ec0) {
            ctx->pc = 0x2E2F00u;
            goto label_2e2f00;
        }
    }
    ctx->pc = 0x2E2EC8u;
    // 0x2e2ec8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2ecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2ECCu;
    {
        const bool branch_taken_0x2e2ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ECCu;
        // 0x2e2ed0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ecc) {
            ctx->pc = 0x2E2EE4u;
            goto label_2e2ee4;
        }
    }
    ctx->pc = 0x2E2ED4u;
    // 0x2e2ed4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e2ed8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e2edc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2EDCu;
    {
        const bool branch_taken_0x2e2edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2edc) {
            ctx->pc = 0x2E2EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2EDCu;
            // 0x2e2ee0: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2EF4u;
            goto label_2e2ef4;
        }
    }
    ctx->pc = 0x2E2EE4u;
label_2e2ee4:
    // 0x2e2ee4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e2ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e2ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2eec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e2ef0: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2e2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2e2ef4:
    // 0x2e2ef4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e2ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e2ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e2efc: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2e2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_2e2f00:
    // 0x2e2f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2F08u;
}
