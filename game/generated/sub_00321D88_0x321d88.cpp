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

// Function: sub_00321D88
// Address: 0x321d88 - 0x321e68
void sub_00321D88_0x321d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321D88_0x321d88");
#endif

    switch (ctx->pc) {
        case 0x321d88u: goto label_321d88;
        case 0x321d8cu: goto label_321d8c;
        case 0x321d90u: goto label_321d90;
        case 0x321d94u: goto label_321d94;
        case 0x321d98u: goto label_321d98;
        case 0x321d9cu: goto label_321d9c;
        case 0x321da0u: goto label_321da0;
        case 0x321da4u: goto label_321da4;
        case 0x321da8u: goto label_321da8;
        case 0x321dacu: goto label_321dac;
        case 0x321db0u: goto label_321db0;
        case 0x321db4u: goto label_321db4;
        case 0x321db8u: goto label_321db8;
        case 0x321dbcu: goto label_321dbc;
        case 0x321dc0u: goto label_321dc0;
        case 0x321dc4u: goto label_321dc4;
        case 0x321dc8u: goto label_321dc8;
        case 0x321dccu: goto label_321dcc;
        case 0x321dd0u: goto label_321dd0;
        case 0x321dd4u: goto label_321dd4;
        case 0x321dd8u: goto label_321dd8;
        case 0x321ddcu: goto label_321ddc;
        case 0x321de0u: goto label_321de0;
        case 0x321de4u: goto label_321de4;
        case 0x321de8u: goto label_321de8;
        case 0x321decu: goto label_321dec;
        case 0x321df0u: goto label_321df0;
        case 0x321df4u: goto label_321df4;
        case 0x321df8u: goto label_321df8;
        case 0x321dfcu: goto label_321dfc;
        case 0x321e00u: goto label_321e00;
        case 0x321e04u: goto label_321e04;
        case 0x321e08u: goto label_321e08;
        case 0x321e0cu: goto label_321e0c;
        case 0x321e10u: goto label_321e10;
        case 0x321e14u: goto label_321e14;
        case 0x321e18u: goto label_321e18;
        case 0x321e1cu: goto label_321e1c;
        case 0x321e20u: goto label_321e20;
        case 0x321e24u: goto label_321e24;
        case 0x321e28u: goto label_321e28;
        case 0x321e2cu: goto label_321e2c;
        case 0x321e30u: goto label_321e30;
        case 0x321e34u: goto label_321e34;
        case 0x321e38u: goto label_321e38;
        case 0x321e3cu: goto label_321e3c;
        case 0x321e40u: goto label_321e40;
        case 0x321e44u: goto label_321e44;
        case 0x321e48u: goto label_321e48;
        case 0x321e4cu: goto label_321e4c;
        case 0x321e50u: goto label_321e50;
        case 0x321e54u: goto label_321e54;
        case 0x321e58u: goto label_321e58;
        case 0x321e5cu: goto label_321e5c;
        case 0x321e60u: goto label_321e60;
        case 0x321e64u: goto label_321e64;
        default: break;
    }

    ctx->pc = 0x321d88u;

label_321d88:
    // 0x321d88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_321d8c:
    // 0x321d8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_321d90:
    // 0x321d90: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x321d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_321d94:
    // 0x321d94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_321d98:
    // 0x321d98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x321d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_321d9c:
    // 0x321d9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_321da0:
    // 0x321da0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x321da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321da4:
    // 0x321da4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x321da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_321da8:
    // 0x321da8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x321da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_321dac:
    // 0x321dac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x321dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_321db0:
    // 0x321db0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x321db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_321db4:
    // 0x321db4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x321db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321db8:
    // 0x321db8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x321db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_321dbc:
    // 0x321dbc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x321dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_321dc0:
    // 0x321dc0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_321dc4:
    // 0x321dc4: 0x846b0000  lh          $t3, 0x0($v1)
    ctx->pc = 0x321dc4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_321dc8:
    // 0x321dc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321dcc:
    // 0x321dcc: 0x40f809  jalr        $v0
label_321dd0:
    if (ctx->pc == 0x321DD0u) {
        ctx->pc = 0x321DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DCCu;
        // 0x321dd0: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DD4u;
        goto label_321dd4;
    }
    ctx->pc = 0x321DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321DD4u);
        ctx->pc = 0x321DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DCCu;
        // 0x321dd0: 0x8b2021  addu        $a0, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321DCCu, 0x321DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321DD4u;
label_321dd4:
    // 0x321dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x321dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_321dd8:
    // 0x321dd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321ddc:
    // 0x321ddc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_321de0:
    if (ctx->pc == 0x321DE0u) {
        ctx->pc = 0x321DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DDCu;
        // 0x321de0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DE4u;
        goto label_321de4;
    }
    ctx->pc = 0x321DDCu;
    {
        const bool branch_taken_0x321ddc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x321DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DDCu;
        // 0x321de0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ddc) {
            ctx->pc = 0x321DF0u;
            goto label_321df0;
        }
    }
    ctx->pc = 0x321DE4u;
label_321de4:
    // 0x321de4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_321de8:
    // 0x321de8: 0x10000018  b           . + 4 + (0x18 << 2)
label_321dec:
    if (ctx->pc == 0x321DECu) {
        ctx->pc = 0x321DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DE8u;
        // 0x321dec: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DF0u;
        goto label_321df0;
    }
    ctx->pc = 0x321DE8u;
    {
        const bool branch_taken_0x321de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DE8u;
        // 0x321dec: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321de8) {
            ctx->pc = 0x321E4Cu;
            goto label_321e4c;
        }
    }
    ctx->pc = 0x321DF0u;
label_321df0:
    // 0x321df0: 0xc0ce6f8  jal         func_339BE0
label_321df4:
    if (ctx->pc == 0x321DF4u) {
        ctx->pc = 0x321DF8u;
        goto label_321df8;
    }
    ctx->pc = 0x321DF0u;
    SET_GPR_U32(ctx, 31, 0x321DF8u);
    ctx->pc = 0x339BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339BE0u, 0x321DF0u, 0x321DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321DF8u;
label_321df8:
    // 0x321df8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x321df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321dfc:
    // 0x321dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321e00:
    // 0x321e00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x321e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_321e04:
    // 0x321e04: 0x6000011  bltz        $s0, . + 4 + (0x11 << 2)
label_321e08:
    if (ctx->pc == 0x321E08u) {
        ctx->pc = 0x321E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E04u;
        // 0x321e08: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E0Cu;
        goto label_321e0c;
    }
    ctx->pc = 0x321E04u;
    {
        const bool branch_taken_0x321e04 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x321E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E04u;
        // 0x321e08: 0x34424005  ori         $v0, $v0, 0x4005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321e04) {
            ctx->pc = 0x321E4Cu;
            goto label_321e4c;
        }
    }
    ctx->pc = 0x321E0Cu;
label_321e0c:
    // 0x321e0c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x321e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_321e10:
    // 0x321e10: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x321e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_321e14:
    // 0x321e14: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x321e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_321e18:
    // 0x321e18: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x321e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_321e1c:
    // 0x321e1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x321e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_321e20:
    // 0x321e20: 0x60f809  jalr        $v1
label_321e24:
    if (ctx->pc == 0x321E24u) {
        ctx->pc = 0x321E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E20u;
        // 0x321e24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E28u;
        goto label_321e28;
    }
    ctx->pc = 0x321E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x321E28u);
        ctx->pc = 0x321E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E20u;
        // 0x321e24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E20u, 0x321E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321E28u;
label_321e28:
    // 0x321e28: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x321e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_321e2c:
    // 0x321e2c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x321e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_321e30:
    // 0x321e30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x321e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321e34:
    // 0x321e34: 0xc0cf25c  jal         func_33C970
label_321e38:
    if (ctx->pc == 0x321E38u) {
        ctx->pc = 0x321E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E34u;
        // 0x321e38: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E3Cu;
        goto label_321e3c;
    }
    ctx->pc = 0x321E34u;
    SET_GPR_U32(ctx, 31, 0x321E3Cu);
    ctx->pc = 0x321E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321E34u;
    // 0x321e38: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C970u, 0x321E34u, 0x321E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321E3Cu;
label_321e3c:
    // 0x321e3c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x321e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_321e40:
    // 0x321e40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x321e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321e44:
    // 0x321e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321e48:
    // 0x321e48: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x321e48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
label_321e4c:
    // 0x321e4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321e50:
    // 0x321e50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_321e54:
    // 0x321e54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_321e58:
    // 0x321e58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x321e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_321e5c:
    // 0x321e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_321e60:
    // 0x321e60: 0x3e00008  jr          $ra
label_321e64:
    if (ctx->pc == 0x321E64u) {
        ctx->pc = 0x321E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E60u;
        // 0x321e64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E68u;
        goto label_fallthrough_0x321e60;
    }
    ctx->pc = 0x321E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E60u;
        // 0x321e64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x321e60:
    ctx->pc = 0x321E68u;
}
