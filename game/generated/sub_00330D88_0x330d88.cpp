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

// Function: sub_00330D88
// Address: 0x330d88 - 0x330f20
void sub_00330D88_0x330d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330D88_0x330d88");
#endif

    switch (ctx->pc) {
        case 0x330e20u: goto label_330e20;
        case 0x330eacu: goto label_330eac;
        default: break;
    }

    ctx->pc = 0x330d88u;

    // 0x330d88: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x330d88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x330d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330d90: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x330d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x330d94: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x330D94u;
    {
        const bool branch_taken_0x330d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D94u;
        // 0x330d98: 0x30a600e0  andi        $a2, $a1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)224);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330d94) {
            ctx->pc = 0x330DFCu;
            goto label_330dfc;
        }
    }
    ctx->pc = 0x330D9Cu;
    // 0x330d9c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x330d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x330da0: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330DA0u;
    {
        const bool branch_taken_0x330da0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x330DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DA0u;
        // 0x330da4: 0x30a300f0  andi        $v1, $a1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330da0) {
            ctx->pc = 0x330DC8u;
            goto label_330dc8;
        }
    }
    ctx->pc = 0x330DA8u;
    // 0x330da8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x330da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x330dac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x330dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x330db0: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x330db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x330db4: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x330DB4u;
    {
        const bool branch_taken_0x330db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x330db4) {
            ctx->pc = 0x330DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330DB4u;
            // 0x330db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330DFCu;
            goto label_330dfc;
        }
    }
    ctx->pc = 0x330DBCu;
    // 0x330dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x330DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DBCu;
        // 0x330dc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330DC4u;
    // 0x330dc4: 0x0  nop
    ctx->pc = 0x330dc4u;
    // NOP
label_330dc8:
    // 0x330dc8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x330dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x330dcc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x330DCCu;
    {
        const bool branch_taken_0x330dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x330DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DCCu;
        // 0x330dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330dcc) {
            ctx->pc = 0x330DFCu;
            goto label_330dfc;
        }
    }
    ctx->pc = 0x330DD4u;
    // 0x330dd4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x330dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x330dd8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x330dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x330ddc: 0x304500c0  andi        $a1, $v0, 0xC0
    ctx->pc = 0x330ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x330de0: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x330DE0u;
    {
        const bool branch_taken_0x330de0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x330DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DE0u;
        // 0x330de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330de0) {
            ctx->pc = 0x330DFCu;
            goto label_330dfc;
        }
    }
    ctx->pc = 0x330DE8u;
    // 0x330de8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x330de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x330dec: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x330decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x330df0: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x330DF0u;
    {
        const bool branch_taken_0x330df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x330DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330DF0u;
        // 0x330df4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330df0) {
            ctx->pc = 0x330DFCu;
            goto label_330dfc;
        }
    }
    ctx->pc = 0x330DF8u;
    // 0x330df8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330dfc:
    // 0x330dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x330DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330E04u;
    // 0x330e04: 0x0  nop
    ctx->pc = 0x330e04u;
    // NOP
    // 0x330e08: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x330e08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e0c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x330e0cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e10: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x330e10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x330E14u;
    {
        const bool branch_taken_0x330e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E14u;
        // 0x330e18: 0x340eff80  ori         $t6, $zero, 0xFF80 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e14) {
            ctx->pc = 0x330EACu;
            goto label_330eac;
        }
    }
    ctx->pc = 0x330E1Cu;
    // 0x330e1c: 0x0  nop
    ctx->pc = 0x330e1cu;
    // NOP
label_330e20:
    // 0x330e20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x330E20u;
    {
        const bool branch_taken_0x330e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E20u;
        // 0x330e24: 0x25820002  addiu       $v0, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e20) {
            ctx->pc = 0x330E60u;
            goto label_330e60;
        }
    }
    ctx->pc = 0x330E28u;
    // 0x330e28: 0x41182  srl         $v0, $a0, 6
    ctx->pc = 0x330e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x330e2c: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x330e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x330e30: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x330e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x330e34: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x330e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x330e38: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x330e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x330e3c: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x330e3cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e40: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x330e40u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x330e44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x330e44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x330e48: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x330e48u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x330e4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x330e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x330e50: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x330e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x330e54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x330E54u;
    {
        const bool branch_taken_0x330e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E54u;
        // 0x330e58: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e54) {
            ctx->pc = 0x330EACu;
            goto label_330eac;
        }
    }
    ctx->pc = 0x330E5Cu;
    // 0x330e5c: 0x0  nop
    ctx->pc = 0x330e5cu;
    // NOP
label_330e60:
    // 0x330e60: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x330e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x330e64: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x330E64u;
    {
        const bool branch_taken_0x330e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E64u;
        // 0x330e68: 0x185102a  slt         $v0, $t4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e64) {
            ctx->pc = 0x330F0Cu;
            goto label_330f0c;
        }
    }
    ctx->pc = 0x330E6Cu;
    // 0x330e6c: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x330e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x330e70: 0x41982  srl         $v1, $a0, 6
    ctx->pc = 0x330e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x330e74: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x330e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x330e78: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x330e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x330e7c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x330e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x330e80: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x330e80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x330e84: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x330e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x330e88: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x330e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x330e8c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x330e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x330e90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x330e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x330e94: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x330e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x330e98: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x330e98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e9c: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x330e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x330ea0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x330ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x330ea4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x330ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x330ea8: 0x258c0003  addiu       $t4, $t4, 0x3
    ctx->pc = 0x330ea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
label_330eac:
    // 0x330eac: 0x25ab0002  addiu       $t3, $t5, 0x2
    ctx->pc = 0x330eacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x330eb0: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x330eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x330eb4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x330EB4u;
    {
        const bool branch_taken_0x330eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EB4u;
        // 0x330eb8: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330eb4) {
            ctx->pc = 0x330F08u;
            goto label_330f08;
        }
    }
    ctx->pc = 0x330EBCu;
    // 0x330ebc: 0x25880001  addiu       $t0, $t4, 0x1
    ctx->pc = 0x330ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x330ec0: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x330ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x330ec4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x330EC4u;
    {
        const bool branch_taken_0x330ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EC4u;
        // 0x330ec8: 0x185102a  slt         $v0, $t4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ec4) {
            ctx->pc = 0x330F0Cu;
            goto label_330f0c;
        }
    }
    ctx->pc = 0x330ECCu;
    // 0x330ecc: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x330eccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x330ed0: 0x8e1021  addu        $v0, $a0, $t6
    ctx->pc = 0x330ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x330ed4: 0x2c830080  sltiu       $v1, $a0, 0x80
    ctx->pc = 0x330ed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x330ed8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x330ED8u;
    {
        const bool branch_taken_0x330ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ED8u;
        // 0x330edc: 0x304affff  andi        $t2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ed8) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330EE0u;
    // 0x330ee0: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x330ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x330ee4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x330ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x330ee8: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x330ee8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330eec: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x330EECu;
    {
        const bool branch_taken_0x330eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EECu;
        // 0x330ef0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330eec) {
            ctx->pc = 0x330EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330eac;
        }
    }
    ctx->pc = 0x330EF4u;
    // 0x330ef4: 0x0  nop
    ctx->pc = 0x330ef4u;
    // NOP
label_330ef8:
    // 0x330ef8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x330ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x330efc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x330efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x330f00: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x330F00u;
    {
        const bool branch_taken_0x330f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F00u;
        // 0x330f04: 0x2d420780  sltiu       $v0, $t2, 0x780 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)1920) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f00) {
            ctx->pc = 0x330E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330e20;
        }
    }
    ctx->pc = 0x330F08u;
label_330f08:
    // 0x330f08: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x330f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_330f0c:
    // 0x330f0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x330F0Cu;
    {
        const bool branch_taken_0x330f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330f0c) {
            ctx->pc = 0x330F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330F0Cu;
            // 0x330f10: 0xa1200000  sb          $zero, 0x0($t1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330F14u;
            goto label_330f14;
        }
    }
    ctx->pc = 0x330F14u;
label_330f14:
    // 0x330f14: 0x3e00008  jr          $ra
    ctx->pc = 0x330F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F14u;
        // 0x330f18: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330F1Cu;
    // 0x330f1c: 0x0  nop
    ctx->pc = 0x330f1cu;
    // NOP
    ctx->pc = 0x330f20u;
}
