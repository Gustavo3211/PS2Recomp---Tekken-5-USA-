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

// Function: sub_00126D70
// Address: 0x126d70 - 0x126f10
void sub_00126D70_0x126d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126D70_0x126d70");
#endif

    switch (ctx->pc) {
        case 0x126da0u: goto label_126da0;
        case 0x126db0u: goto label_126db0;
        case 0x126dc4u: goto label_126dc4;
        case 0x126dd4u: goto label_126dd4;
        case 0x126ddcu: goto label_126ddc;
        case 0x126df0u: goto label_126df0;
        case 0x126e08u: goto label_126e08;
        case 0x126e10u: goto label_126e10;
        case 0x126e1cu: goto label_126e1c;
        case 0x126e28u: goto label_126e28;
        case 0x126e30u: goto label_126e30;
        case 0x126e50u: goto label_126e50;
        case 0x126e64u: goto label_126e64;
        case 0x126e74u: goto label_126e74;
        case 0x126e7cu: goto label_126e7c;
        case 0x126e90u: goto label_126e90;
        case 0x126eb0u: goto label_126eb0;
        case 0x126ec4u: goto label_126ec4;
        case 0x126edcu: goto label_126edc;
        case 0x126ee8u: goto label_126ee8;
        case 0x126ef8u: goto label_126ef8;
        case 0x126f00u: goto label_126f00;
        default: break;
    }

    ctx->pc = 0x126d70u;

    // 0x126d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x126d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x126d74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x126d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x126d78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x126d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x126d7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x126d7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d80: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x126d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x126d84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x126d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x126d88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x126d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x126d8c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x126d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x126d90: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x126d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x126d94: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x126d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x126d98: 0xc048762  jal         func_121D88
    ctx->pc = 0x126D98u;
    SET_GPR_U32(ctx, 31, 0x126DA0u);
    ctx->pc = 0x126D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D98u;
    // 0x126d9c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x126D98u, 0x126DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DA0u;
label_126da0:
    // 0x126da0: 0x1a800011  blez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x126DA0u;
    {
        const bool branch_taken_0x126da0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x126DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DA0u;
        // 0x126da4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126da0) {
            ctx->pc = 0x126DE8u;
            goto label_126de8;
        }
    }
    ctx->pc = 0x126DA8u;
    // 0x126da8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x126da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dac: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126db0:
    // 0x126db0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x126db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126db4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x126db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126db8: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x126db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x126dbc: 0xc04972c  jal         func_125CB0
    ctx->pc = 0x126DBCu;
    SET_GPR_U32(ctx, 31, 0x126DC4u);
    ctx->pc = 0x126DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126DBCu;
    // 0x126dc0: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CB0u, 0x126DBCu, 0x126DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DC4u;
label_126dc4:
    // 0x126dc4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x126DC4u;
    {
        const bool branch_taken_0x126dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126dc4) {
            ctx->pc = 0x126DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126DC4u;
            // 0x126dc8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DE0u;
            goto label_126de0;
        }
    }
    ctx->pc = 0x126DCCu;
    // 0x126dcc: 0xc049b44  jal         func_126D10
    ctx->pc = 0x126DCCu;
    SET_GPR_U32(ctx, 31, 0x126DD4u);
    ctx->pc = 0x126D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D10u, 0x126DCCu, 0x126DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DD4u;
label_126dd4:
    // 0x126dd4: 0xc048b3c  jal         func_122CF0
    ctx->pc = 0x126DD4u;
    SET_GPR_U32(ctx, 31, 0x126DDCu);
    ctx->pc = 0x122CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CF0u, 0x126DD4u, 0x126DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DDCu;
label_126ddc:
    // 0x126ddc: 0x0  nop
    ctx->pc = 0x126ddcu;
    // NOP
label_126de0:
    // 0x126de0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x126DE0u;
    {
        const bool branch_taken_0x126de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x126DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DE0u;
        // 0x126de4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126de0) {
            ctx->pc = 0x126DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126db0;
        }
    }
    ctx->pc = 0x126DE8u;
label_126de8:
    // 0x126de8: 0xc049a98  jal         func_126A60
    ctx->pc = 0x126DE8u;
    SET_GPR_U32(ctx, 31, 0x126DF0u);
    ctx->pc = 0x126A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A60u, 0x126DE8u, 0x126DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126DF0u;
label_126df0:
    // 0x126df0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126df4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x126df8: 0x24424d68  addiu       $v0, $v0, 0x4D68
    ctx->pc = 0x126df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19816));
    // 0x126dfc: 0x248407f0  addiu       $a0, $a0, 0x7F0
    ctx->pc = 0x126dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2032));
    // 0x126e00: 0xc048b90  jal         func_122E40
    ctx->pc = 0x126E00u;
    SET_GPR_U32(ctx, 31, 0x126E08u);
    ctx->pc = 0x126E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E00u;
    // 0x126e04: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126E00u, 0x126E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E08u;
label_126e08:
    // 0x126e08: 0xc049afa  jal         func_126BE8
    ctx->pc = 0x126E08u;
    SET_GPR_U32(ctx, 31, 0x126E10u);
    ctx->pc = 0x126E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E08u;
    // 0x126e0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126BE8u, 0x126E08u, 0x126E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E10u;
label_126e10:
    // 0x126e10: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x126e14: 0xc048b90  jal         func_122E40
    ctx->pc = 0x126E14u;
    SET_GPR_U32(ctx, 31, 0x126E1Cu);
    ctx->pc = 0x126E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E14u;
    // 0x126e18: 0x24840800  addiu       $a0, $a0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126E14u, 0x126E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E1Cu;
label_126e1c:
    // 0x126e1c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x126e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x126e20: 0xc048b90  jal         func_122E40
    ctx->pc = 0x126E20u;
    SET_GPR_U32(ctx, 31, 0x126E28u);
    ctx->pc = 0x126E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E20u;
    // 0x126e24: 0x248407e0  addiu       $a0, $a0, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x126E20u, 0x126E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E28u;
label_126e28:
    // 0x126e28: 0xc049ab0  jal         func_126AC0
    ctx->pc = 0x126E28u;
    SET_GPR_U32(ctx, 31, 0x126E30u);
    ctx->pc = 0x126AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AC0u, 0x126E28u, 0x126E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E30u;
label_126e30:
    // 0x126e30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x126e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e34: 0x12530014  beq         $s2, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x126E34u;
    {
        const bool branch_taken_0x126e34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x126e34) {
            ctx->pc = 0x126E88u;
            goto label_126e88;
        }
    }
    ctx->pc = 0x126E3Cu;
    // 0x126e3c: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x126E3Cu;
    {
        const bool branch_taken_0x126e3c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x126E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E3Cu;
        // 0x126e40: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e3c) {
            ctx->pc = 0x126E88u;
            goto label_126e88;
        }
    }
    ctx->pc = 0x126E44u;
    // 0x126e44: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x126e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e48: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e4c: 0x0  nop
    ctx->pc = 0x126e4cu;
    // NOP
label_126e50:
    // 0x126e50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x126e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126e54: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x126e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126e58: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x126e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x126e5c: 0xc04972c  jal         func_125CB0
    ctx->pc = 0x126E5Cu;
    SET_GPR_U32(ctx, 31, 0x126E64u);
    ctx->pc = 0x126E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126E5Cu;
    // 0x126e60: 0x8e660008  lw          $a2, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CB0u, 0x126E5Cu, 0x126E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E64u;
label_126e64:
    // 0x126e64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x126E64u;
    {
        const bool branch_taken_0x126e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126e64) {
            ctx->pc = 0x126E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126E64u;
            // 0x126e68: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126E80u;
            goto label_126e80;
        }
    }
    ctx->pc = 0x126E6Cu;
    // 0x126e6c: 0xc049b44  jal         func_126D10
    ctx->pc = 0x126E6Cu;
    SET_GPR_U32(ctx, 31, 0x126E74u);
    ctx->pc = 0x126D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D10u, 0x126E6Cu, 0x126E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E74u;
label_126e74:
    // 0x126e74: 0xc048b3c  jal         func_122CF0
    ctx->pc = 0x126E74u;
    SET_GPR_U32(ctx, 31, 0x126E7Cu);
    ctx->pc = 0x122CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CF0u, 0x126E74u, 0x126E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E7Cu;
label_126e7c:
    // 0x126e7c: 0x0  nop
    ctx->pc = 0x126e7cu;
    // NOP
label_126e80:
    // 0x126e80: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x126E80u;
    {
        const bool branch_taken_0x126e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x126E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E80u;
        // 0x126e84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e80) {
            ctx->pc = 0x126E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126e50;
        }
    }
    ctx->pc = 0x126E88u;
label_126e88:
    // 0x126e88: 0xc04c31a  jal         func_130C68
    ctx->pc = 0x126E88u;
    SET_GPR_U32(ctx, 31, 0x126E90u);
    ctx->pc = 0x130C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C68u, 0x126E88u, 0x126E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126E90u;
label_126e90:
    // 0x126e90: 0x1a80001d  blez        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x126E90u;
    {
        const bool branch_taken_0x126e90 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x126E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E90u;
        // 0x126e94: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e90) {
            ctx->pc = 0x126F08u;
            goto label_126f08;
        }
    }
    ctx->pc = 0x126E98u;
    // 0x126e98: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x126e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x126e9c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x126e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ea0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x126ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ea4: 0x3c140013  lui         $s4, 0x13
    ctx->pc = 0x126ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)19 << 16));
    // 0x126ea8: 0x24554d48  addiu       $s5, $v0, 0x4D48
    ctx->pc = 0x126ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19784));
    // 0x126eac: 0x0  nop
    ctx->pc = 0x126eacu;
    // NOP
label_126eb0:
    // 0x126eb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x126eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126eb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x126eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126eb8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x126eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x126ebc: 0xc04972c  jal         func_125CB0
    ctx->pc = 0x126EBCu;
    SET_GPR_U32(ctx, 31, 0x126EC4u);
    ctx->pc = 0x126EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EBCu;
    // 0x126ec0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125CB0u, 0x126EBCu, 0x126EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EC4u;
label_126ec4:
    // 0x126ec4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x126EC4u;
    {
        const bool branch_taken_0x126ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ec4) {
            ctx->pc = 0x126EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126EC4u;
            // 0x126ec8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126F00u;
            goto label_126f00;
        }
    }
    ctx->pc = 0x126ECCu;
    // 0x126ecc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x126eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x126ed0: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x126ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
    // 0x126ed4: 0xc04884a  jal         func_122128
    ctx->pc = 0x126ED4u;
    SET_GPR_U32(ctx, 31, 0x126EDCu);
    ctx->pc = 0x126ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126ED4u;
    // 0x126ed8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x126ED4u, 0x126EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EDCu;
label_126edc:
    // 0x126edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ee0: 0xc04c31a  jal         func_130C68
    ctx->pc = 0x126EE0u;
    SET_GPR_U32(ctx, 31, 0x126EE8u);
    ctx->pc = 0x126EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EE0u;
    // 0x126ee4: 0xae150000  sw          $s5, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C68u, 0x126EE0u, 0x126EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EE8u;
label_126ee8:
    // 0x126ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ef0: 0xc049ad6  jal         func_126B58
    ctx->pc = 0x126EF0u;
    SET_GPR_U32(ctx, 31, 0x126EF8u);
    ctx->pc = 0x126EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126EF0u;
    // 0x126ef4: 0x26860cc8  addiu       $a2, $s4, 0xCC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 3272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126B58u, 0x126EF0u, 0x126EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EF8u;
label_126ef8:
    // 0x126ef8: 0xc048b3c  jal         func_122CF0
    ctx->pc = 0x126EF8u;
    SET_GPR_U32(ctx, 31, 0x126F00u);
    ctx->pc = 0x122CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CF0u, 0x126EF8u, 0x126F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F00u;
label_126f00:
    // 0x126f00: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x126F00u;
    {
        const bool branch_taken_0x126f00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x126F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F00u;
        // 0x126f04: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f00) {
            ctx->pc = 0x126EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126eb0;
        }
    }
    ctx->pc = 0x126F08u;
label_126f08:
    // 0x126f08: 0xc049a82  jal         func_126A08
    ctx->pc = 0x126F08u;
    SET_GPR_U32(ctx, 31, 0x126F10u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x126F08u, 0x126F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F10u;
}
