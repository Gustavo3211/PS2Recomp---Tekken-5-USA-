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

// Function: sub_00103D38
// Address: 0x103d38 - 0x103ff0
void sub_00103D38_0x103d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103D38_0x103d38");
#endif

    ctx->pc = 0x103d38u;

    // 0x103d38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x103d38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d3c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x103d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x103d40: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x103d40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x103d44: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x103d44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103d48: 0x8cea0160  lw          $t2, 0x160($a3)
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x103d4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x103d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d50: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x103d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x103d54: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x103d54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d58: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x103d58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103d5c: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x103D5Cu;
    {
        const bool branch_taken_0x103d5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x103D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D5Cu;
        // 0x103d60: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d5c) {
            ctx->pc = 0x103E70u;
            goto label_103e70;
        }
    }
    ctx->pc = 0x103D64u;
    // 0x103d64: 0x8ce200b4  lw          $v0, 0xB4($a3)
    ctx->pc = 0x103d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x103d68: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x103d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x103d6c: 0x8ce501d4  lw          $a1, 0x1D4($a3)
    ctx->pc = 0x103d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x103d70: 0x8ce601e4  lw          $a2, 0x1E4($a3)
    ctx->pc = 0x103d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x103d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x103d78: 0x8ce401f4  lw          $a0, 0x1F4($a3)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
    // 0x103d7c: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x103d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x103d80: 0xace501d0  sw          $a1, 0x1D0($a3)
    ctx->pc = 0x103d80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 5));
    // 0x103d84: 0xace601e0  sw          $a2, 0x1E0($a3)
    ctx->pc = 0x103d84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 6));
    // 0x103d88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103D88u;
    {
        const bool branch_taken_0x103d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D88u;
        // 0x103d8c: 0xace401f0  sw          $a0, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d88) {
            ctx->pc = 0x103D9Cu;
            goto label_103d9c;
        }
    }
    ctx->pc = 0x103D90u;
    // 0x103d90: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x103d90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
    // 0x103d94: 0xace001b8  sw          $zero, 0x1B8($a3)
    ctx->pc = 0x103d94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
    // 0x103d98: 0xace001b4  sw          $zero, 0x1B4($a3)
    ctx->pc = 0x103d98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 0));
label_103d9c:
    // 0x103d9c: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x103d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x103da0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x103DA0u;
    {
        const bool branch_taken_0x103da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103da0) {
            ctx->pc = 0x103DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103DA0u;
            // 0x103da4: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DB8u;
            goto label_103db8;
        }
    }
    ctx->pc = 0x103DA8u;
    // 0x103da8: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x103da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x103dac: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x103DACu;
    {
        const bool branch_taken_0x103dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103dac) {
            ctx->pc = 0x103DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103DACu;
            // 0x103db0: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DE0u;
            goto label_103de0;
        }
    }
    ctx->pc = 0x103DB4u;
    // 0x103db4: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x103db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_103db8:
    // 0x103db8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x103DB8u;
    {
        const bool branch_taken_0x103db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103db8) {
            ctx->pc = 0x103DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103DB8u;
            // 0x103dbc: 0xace000fc  sw          $zero, 0xFC($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103DE0u;
            goto label_103de0;
        }
    }
    ctx->pc = 0x103DC0u;
    // 0x103dc0: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x103dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x103dc4: 0x8ce401d8  lw          $a0, 0x1D8($a3)
    ctx->pc = 0x103dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x103dc8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x103dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x103dcc: 0x8ce301e8  lw          $v1, 0x1E8($a3)
    ctx->pc = 0x103dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x103dd0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x103dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x103dd4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x103dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x103dd8: 0x8ce90184  lw          $t1, 0x184($a3)
    ctx->pc = 0x103dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x103ddc: 0xace000fc  sw          $zero, 0xFC($a3)
    ctx->pc = 0x103ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 0));
label_103de0:
    // 0x103de0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x103de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103de4: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x103DE4u;
    {
        const bool branch_taken_0x103de4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x103DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DE4u;
        // 0x103de8: 0xace001b8  sw          $zero, 0x1B8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103de4) {
            ctx->pc = 0x103E14u;
            goto label_103e14;
        }
    }
    ctx->pc = 0x103DECu;
    // 0x103dec: 0x8ce301c8  lw          $v1, 0x1C8($a3)
    ctx->pc = 0x103decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x103df0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x103df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103df4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x103df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x103df8: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x103DF8u;
    {
        const bool branch_taken_0x103df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x103df8) {
            ctx->pc = 0x103DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103DF8u;
            // 0x103dfc: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E5Cu;
            goto label_103e5c;
        }
    }
    ctx->pc = 0x103E00u;
    // 0x103e00: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x103e04: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x103E04u;
    {
        const bool branch_taken_0x103e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E04u;
        // 0x103e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e04) {
            ctx->pc = 0x103F28u;
            goto label_103f28;
        }
    }
    ctx->pc = 0x103E0Cu;
    // 0x103e0c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x103E0Cu;
    {
        const bool branch_taken_0x103e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E0Cu;
        // 0x103e10: 0x8ce301cc  lw          $v1, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e0c) {
            ctx->pc = 0x103E5Cu;
            goto label_103e5c;
        }
    }
    ctx->pc = 0x103E14u;
label_103e14:
    // 0x103e14: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x103e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x103e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103e1c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x103e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x103e20: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x103E20u;
    {
        const bool branch_taken_0x103e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x103e20) {
            ctx->pc = 0x103E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E20u;
            // 0x103e24: 0x8ce201b4  lw          $v0, 0x1B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E3Cu;
            goto label_103e3c;
        }
    }
    ctx->pc = 0x103E28u;
    // 0x103e28: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x103e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x103e2c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x103e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x103e30: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103E30u;
    {
        const bool branch_taken_0x103e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x103e30) {
            ctx->pc = 0x103E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E30u;
            // 0x103e34: 0x8ce201dc  lw          $v0, 0x1DC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103E48u;
            goto label_103e48;
        }
    }
    ctx->pc = 0x103E38u;
    // 0x103e38: 0x8ce201b4  lw          $v0, 0x1B4($a3)
    ctx->pc = 0x103e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
label_103e3c:
    // 0x103e3c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x103E3Cu;
    {
        const bool branch_taken_0x103e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E3Cu;
        // 0x103e40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e3c) {
            ctx->pc = 0x103F28u;
            goto label_103f28;
        }
    }
    ctx->pc = 0x103E44u;
    // 0x103e44: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x103e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_103e48:
    // 0x103e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x103e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103e4c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x103e50: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x103E50u;
    {
        const bool branch_taken_0x103e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x103E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E50u;
        // 0x103e54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e50) {
            ctx->pc = 0x103F28u;
            goto label_103f28;
        }
    }
    ctx->pc = 0x103E58u;
    // 0x103e58: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x103e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
label_103e5c:
    // 0x103e5c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x103e5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e60: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x103e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x103e64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x103e68: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x103E68u;
    {
        const bool branch_taken_0x103e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103E68u;
        // 0x103e6c: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103e68) {
            ctx->pc = 0x103F24u;
            goto label_103f24;
        }
    }
    ctx->pc = 0x103E70u;
label_103e70:
    // 0x103e70: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x103E70u;
    {
        const bool branch_taken_0x103e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x103e70) {
            ctx->pc = 0x103E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103E70u;
            // 0x103e74: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103EACu;
            goto label_103eac;
        }
    }
    ctx->pc = 0x103E78u;
    // 0x103e78: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x103e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x103e7c: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x103e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x103e80: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x103e80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x103e84: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x103e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x103e88: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x103e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x103e8c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x103e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x103e90: 0x8ce601e8  lw          $a2, 0x1E8($a3)
    ctx->pc = 0x103e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x103e94: 0x8ce201ec  lw          $v0, 0x1EC($a3)
    ctx->pc = 0x103e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x103e98: 0xace401c8  sw          $a0, 0x1C8($a3)
    ctx->pc = 0x103e98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 4));
    // 0x103e9c: 0xace301d8  sw          $v1, 0x1D8($a3)
    ctx->pc = 0x103e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 3));
    // 0x103ea0: 0xace201e8  sw          $v0, 0x1E8($a3)
    ctx->pc = 0x103ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 488), GPR_U32(ctx, 2));
    // 0x103ea4: 0xace601ec  sw          $a2, 0x1EC($a3)
    ctx->pc = 0x103ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 492), GPR_U32(ctx, 6));
    // 0x103ea8: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x103ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_103eac:
    // 0x103eac: 0x8ce401dc  lw          $a0, 0x1DC($a3)
    ctx->pc = 0x103eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x103eb0: 0x8ce301ec  lw          $v1, 0x1EC($a3)
    ctx->pc = 0x103eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x103eb4: 0xace201d0  sw          $v0, 0x1D0($a3)
    ctx->pc = 0x103eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 2));
    // 0x103eb8: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x103eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    // 0x103ebc: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x103EBCu;
    {
        const bool branch_taken_0x103ebc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x103EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EBCu;
        // 0x103ec0: 0xace301f0  sw          $v1, 0x1F0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ebc) {
            ctx->pc = 0x103ED8u;
            goto label_103ed8;
        }
    }
    ctx->pc = 0x103EC4u;
    // 0x103ec4: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x103EC4u;
    {
        const bool branch_taken_0x103ec4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x103ec4) {
            ctx->pc = 0x103EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EC4u;
            // 0x103ec8: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F24u;
            goto label_103f24;
        }
    }
    ctx->pc = 0x103ECCu;
    // 0x103ecc: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x103eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x103ed0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x103ED0u;
    {
        const bool branch_taken_0x103ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103ED0u;
        // 0x103ed4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ed0) {
            ctx->pc = 0x103F14u;
            goto label_103f14;
        }
    }
    ctx->pc = 0x103ED8u;
label_103ed8:
    // 0x103ed8: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x103ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x103edc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x103edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103ee0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x103ee0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x103ee4: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x103EE4u;
    {
        const bool branch_taken_0x103ee4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x103EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103EE4u;
        // 0x103ee8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ee4) {
            ctx->pc = 0x103F20u;
            goto label_103f20;
        }
    }
    ctx->pc = 0x103EECu;
    // 0x103eec: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x103EECu;
    {
        const bool branch_taken_0x103eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x103eec) {
            ctx->pc = 0x103EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EECu;
            // 0x103ef0: 0x8ce201d8  lw          $v0, 0x1D8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F04u;
            goto label_103f04;
        }
    }
    ctx->pc = 0x103EF4u;
    // 0x103ef4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x103ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x103ef8: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x103EF8u;
    {
        const bool branch_taken_0x103ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x103ef8) {
            ctx->pc = 0x103EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103EF8u;
            // 0x103efc: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F24u;
            goto label_103f24;
        }
    }
    ctx->pc = 0x103F00u;
    // 0x103f00: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x103f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_103f04:
    // 0x103f04: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x103f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x103f08: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x103F08u;
    {
        const bool branch_taken_0x103f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x103F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F08u;
        // 0x103f0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f08) {
            ctx->pc = 0x103F28u;
            goto label_103f28;
        }
    }
    ctx->pc = 0x103F10u;
    // 0x103f10: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_103f14:
    // 0x103f14: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x103f18: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103F18u;
    {
        const bool branch_taken_0x103f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x103F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F18u;
        // 0x103f1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f18) {
            ctx->pc = 0x103F28u;
            goto label_103f28;
        }
    }
    ctx->pc = 0x103F20u;
label_103f20:
    // 0x103f20: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x103f20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103f24:
    // 0x103f24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x103f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_103f28:
    // 0x103f28: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103F28u;
    {
        const bool branch_taken_0x103f28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x103F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F28u;
        // 0x103f2c: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f28) {
            ctx->pc = 0x103F5Cu;
            goto label_103f5c;
        }
    }
    ctx->pc = 0x103F30u;
    // 0x103f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103F30u;
    {
        const bool branch_taken_0x103f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F30u;
        // 0x103f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f30) {
            ctx->pc = 0x103F48u;
            goto label_103f48;
        }
    }
    ctx->pc = 0x103F38u;
    // 0x103f38: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103F38u;
    {
        const bool branch_taken_0x103f38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x103f38) {
            ctx->pc = 0x103F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F38u;
            // 0x103f3c: 0x8ce801e0  lw          $t0, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F60u;
            goto label_103f60;
        }
    }
    ctx->pc = 0x103F40u;
    // 0x103f40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x103F40u;
    {
        const bool branch_taken_0x103f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F40u;
        // 0x103f44: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f40) {
            ctx->pc = 0x103F64u;
            goto label_103f64;
        }
    }
    ctx->pc = 0x103F48u;
label_103f48:
    // 0x103f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x103f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x103f4c: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103F4Cu;
    {
        const bool branch_taken_0x103f4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x103f4c) {
            ctx->pc = 0x103F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103F4Cu;
            // 0x103f50: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103F60u;
            goto label_103f60;
        }
    }
    ctx->pc = 0x103F54u;
    // 0x103f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x103F54u;
    {
        const bool branch_taken_0x103f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103F54u;
        // 0x103f58: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103f54) {
            ctx->pc = 0x103F64u;
            goto label_103f64;
        }
    }
    ctx->pc = 0x103F5Cu;
label_103f5c:
    // 0x103f5c: 0x8ce801f0  lw          $t0, 0x1F0($a3)
    ctx->pc = 0x103f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
label_103f60:
    // 0x103f60: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x103f60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_103f64:
    // 0x103f64: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x103f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103f68: 0xdce30838  ld          $v1, 0x838($a3)
    ctx->pc = 0x103f68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x103f6c: 0x8ce40160  lw          $a0, 0x160($a3)
    ctx->pc = 0x103f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x103f70: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x103f70u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x103f74: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x103f74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x103f78: 0xdce30840  ld          $v1, 0x840($a3)
    ctx->pc = 0x103f78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x103f7c: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x103f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x103f80: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x103f80u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x103f84: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x103f84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x103f88: 0x8ce3014c  lw          $v1, 0x14C($a3)
    ctx->pc = 0x103f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x103f8c: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x103f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x103f90: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x103f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x103f94: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x103f94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x103f98: 0x8ce30188  lw          $v1, 0x188($a3)
    ctx->pc = 0x103f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x103f9c: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x103f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x103fa0: 0x8ce40194  lw          $a0, 0x194($a3)
    ctx->pc = 0x103fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x103fa4: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x103fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x103fa8: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x103fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x103fac: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x103facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x103fb0: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x103fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x103fb4: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x103fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x103fb8: 0x8ce301a4  lw          $v1, 0x1A4($a3)
    ctx->pc = 0x103fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x103fbc: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x103fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x103fc0: 0x8ce401a8  lw          $a0, 0x1A8($a3)
    ctx->pc = 0x103fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x103fc4: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x103fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x103fc8: 0x8ce301ac  lw          $v1, 0x1AC($a3)
    ctx->pc = 0x103fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 428)));
    // 0x103fcc: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x103fccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x103fd0: 0x8ce401b0  lw          $a0, 0x1B0($a3)
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x103fd4: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x103fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x103fd8: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x103fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x103fdc: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x103fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x103fe0: 0x8ce4015c  lw          $a0, 0x15C($a3)
    ctx->pc = 0x103fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 348)));
    // 0x103fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x103FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE4u;
        // 0x103fe8: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103FECu;
    // 0x103fec: 0x0  nop
    ctx->pc = 0x103fecu;
    // NOP
    ctx->pc = 0x103ff0u;
}
