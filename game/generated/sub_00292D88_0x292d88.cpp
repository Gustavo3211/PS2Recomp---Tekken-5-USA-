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

// Function: sub_00292D88
// Address: 0x292d88 - 0x292e18
void sub_00292D88_0x292d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292D88_0x292d88");
#endif

    ctx->pc = 0x292d88u;

    // 0x292d88: 0x24840164  addiu       $a0, $a0, 0x164
    ctx->pc = 0x292d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x292d8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292d90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292D90u;
    {
        const bool branch_taken_0x292d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D90u;
        // 0x292d94: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d90) {
            ctx->pc = 0x292DACu;
            goto label_292dac;
        }
    }
    ctx->pc = 0x292D98u;
    // 0x292d98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x292d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x292d9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x292d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292da0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x292da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292da4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292DA4u;
    {
        const bool branch_taken_0x292da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DA4u;
        // 0x292da8: 0x2d020008  sltiu       $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292da4) {
            ctx->pc = 0x292DBCu;
            goto label_292dbc;
        }
    }
    ctx->pc = 0x292DACu;
label_292dac:
    // 0x292dac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x292dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x292db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292db4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x292db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x292db8: 0x2d020008  sltiu       $v0, $t0, 0x8
    ctx->pc = 0x292db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_292dbc:
    // 0x292dbc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x292DBCu;
    {
        const bool branch_taken_0x292dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DBCu;
        // 0x292dc0: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dbc) {
            ctx->pc = 0x292E0Cu;
            goto label_292e0c;
        }
    }
    ctx->pc = 0x292DC4u;
    // 0x292dc4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x292DC4u;
    {
        const bool branch_taken_0x292dc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x292DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DC4u;
        // 0x292dc8: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dc4) {
            ctx->pc = 0x292DD8u;
            goto label_292dd8;
        }
    }
    ctx->pc = 0x292DCCu;
    // 0x292dcc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x292dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x292dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292DD0u;
    {
        const bool branch_taken_0x292dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DD0u;
        // 0x292dd4: 0x8c460100  lw          $a2, 0x100($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dd0) {
            ctx->pc = 0x292DE0u;
            goto label_292de0;
        }
    }
    ctx->pc = 0x292DD8u;
label_292dd8:
    // 0x292dd8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x292dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x292ddc: 0x8c460120  lw          $a2, 0x120($v0)
    ctx->pc = 0x292ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_292de0:
    // 0x292de0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x292DE0u;
    {
        const bool branch_taken_0x292de0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x292de0) {
            ctx->pc = 0x292E0Cu;
            goto label_292e0c;
        }
    }
    ctx->pc = 0x292DE8u;
    // 0x292de8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x292DE8u;
    {
        const bool branch_taken_0x292de8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x292DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DE8u;
        // 0x292dec: 0x8cc20080  lw          $v0, 0x80($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292de8) {
            ctx->pc = 0x292E00u;
            goto label_292e00;
        }
    }
    ctx->pc = 0x292DF0u;
    // 0x292df0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x292df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x292df4: 0x3e00008  jr          $ra
    ctx->pc = 0x292DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DF4u;
        // 0x292df8: 0xacc20080  sw          $v0, 0x80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292DFCu;
    // 0x292dfc: 0x0  nop
    ctx->pc = 0x292dfcu;
    // NOP
label_292e00:
    // 0x292e00: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x292e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x292e04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x292e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x292e08: 0xacc20080  sw          $v0, 0x80($a2)
    ctx->pc = 0x292e08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 2));
label_292e0c:
    // 0x292e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x292E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292E14u;
    // 0x292e14: 0x0  nop
    ctx->pc = 0x292e14u;
    // NOP
    ctx->pc = 0x292e18u;
}
