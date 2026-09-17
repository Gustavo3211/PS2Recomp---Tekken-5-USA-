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

// Function: sub_00213D68
// Address: 0x213d68 - 0x213e88
void sub_00213D68_0x213d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213D68_0x213d68");
#endif

    switch (ctx->pc) {
        case 0x213d80u: goto label_213d80;
        case 0x213d94u: goto label_213d94;
        case 0x213dc8u: goto label_213dc8;
        case 0x213dd8u: goto label_213dd8;
        case 0x213de0u: goto label_213de0;
        case 0x213de8u: goto label_213de8;
        case 0x213df0u: goto label_213df0;
        case 0x213df8u: goto label_213df8;
        case 0x213e00u: goto label_213e00;
        case 0x213e08u: goto label_213e08;
        case 0x213e10u: goto label_213e10;
        case 0x213e18u: goto label_213e18;
        case 0x213e20u: goto label_213e20;
        case 0x213e30u: goto label_213e30;
        default: break;
    }

    ctx->pc = 0x213d68u;

    // 0x213d68: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213d6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213d74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213d78: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x213D78u;
    SET_GPR_U32(ctx, 31, 0x213D80u);
    ctx->pc = 0x213D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D78u;
    // 0x213d7c: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x213D78u, 0x213D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D80u;
label_213d80:
    // 0x213d80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x213d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213d84: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213D84u;
    {
        const bool branch_taken_0x213d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x213D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D84u;
        // 0x213d88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d84) {
            ctx->pc = 0x213D9Cu;
            goto label_213d9c;
        }
    }
    ctx->pc = 0x213D8Cu;
    // 0x213d8c: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x213D8Cu;
    SET_GPR_U32(ctx, 31, 0x213D94u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x213D8Cu, 0x213D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D94u;
label_213d94:
    // 0x213d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213D94u;
    {
        const bool branch_taken_0x213d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d94) {
            ctx->pc = 0x213DA8u;
            goto label_213da8;
        }
    }
    ctx->pc = 0x213D9Cu;
label_213d9c:
    // 0x213d9c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x213D9Cu;
    {
        const bool branch_taken_0x213d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D9Cu;
        // 0x213da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d9c) {
            ctx->pc = 0x213E78u;
            goto label_213e78;
        }
    }
    ctx->pc = 0x213DA4u;
    // 0x213da4: 0x0  nop
    ctx->pc = 0x213da4u;
    // NOP
label_213da8:
    // 0x213da8: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x213da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x213dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213db0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x213DB0u;
    {
        const bool branch_taken_0x213db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DB0u;
        // 0x213db4: 0x8f82c8f8  lw          $v0, -0x3708($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213db0) {
            ctx->pc = 0x213E74u;
            goto label_213e74;
        }
    }
    ctx->pc = 0x213DB8u;
    // 0x213db8: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x213DB8u;
    {
        const bool branch_taken_0x213db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213db8) {
            ctx->pc = 0x213DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213DB8u;
            // 0x213dbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E78u;
            goto label_213e78;
        }
    }
    ctx->pc = 0x213DC0u;
    // 0x213dc0: 0xc089662  jal         func_225988
    ctx->pc = 0x213DC0u;
    SET_GPR_U32(ctx, 31, 0x213DC8u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x213DC0u, 0x213DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DC8u;
label_213dc8:
    // 0x213dc8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x213DC8u;
    {
        const bool branch_taken_0x213dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DC8u;
        // 0x213dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dc8) {
            ctx->pc = 0x213E74u;
            goto label_213e74;
        }
    }
    ctx->pc = 0x213DD0u;
    // 0x213dd0: 0xc08f022  jal         func_23C088
    ctx->pc = 0x213DD0u;
    SET_GPR_U32(ctx, 31, 0x213DD8u);
    ctx->pc = 0x213DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DD0u;
    // 0x213dd4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C088u, 0x213DD0u, 0x213DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DD8u;
label_213dd8:
    // 0x213dd8: 0xc084f26  jal         func_213C98
    ctx->pc = 0x213DD8u;
    SET_GPR_U32(ctx, 31, 0x213DE0u);
    ctx->pc = 0x213C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C98u, 0x213DD8u, 0x213DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DE0u;
label_213de0:
    // 0x213de0: 0xc09d9c0  jal         func_276700
    ctx->pc = 0x213DE0u;
    SET_GPR_U32(ctx, 31, 0x213DE8u);
    ctx->pc = 0x276700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276700u, 0x213DE0u, 0x213DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DE8u;
label_213de8:
    // 0x213de8: 0xc07e220  jal         func_1F8880
    ctx->pc = 0x213DE8u;
    SET_GPR_U32(ctx, 31, 0x213DF0u);
    ctx->pc = 0x1F8880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8880u, 0x213DE8u, 0x213DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DF0u;
label_213df0:
    // 0x213df0: 0xc084ec0  jal         func_213B00
    ctx->pc = 0x213DF0u;
    SET_GPR_U32(ctx, 31, 0x213DF8u);
    ctx->pc = 0x213B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B00u, 0x213DF0u, 0x213DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DF8u;
label_213df8:
    // 0x213df8: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x213DF8u;
    SET_GPR_U32(ctx, 31, 0x213E00u);
    ctx->pc = 0x213DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DF8u;
    // 0x213dfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x213DF8u, 0x213E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E00u;
label_213e00:
    // 0x213e00: 0xc0a0f6a  jal         func_283DA8
    ctx->pc = 0x213E00u;
    SET_GPR_U32(ctx, 31, 0x213E08u);
    ctx->pc = 0x283DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283DA8u, 0x213E00u, 0x213E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E08u;
label_213e08:
    // 0x213e08: 0xc07c24c  jal         func_1F0930
    ctx->pc = 0x213E08u;
    SET_GPR_U32(ctx, 31, 0x213E10u);
    ctx->pc = 0x213E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E08u;
    // 0x213e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0930u, 0x213E08u, 0x213E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E10u;
label_213e10:
    // 0x213e10: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x213E10u;
    SET_GPR_U32(ctx, 31, 0x213E18u);
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x213E10u, 0x213E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E18u;
label_213e18:
    // 0x213e18: 0xc0b4746  jal         func_2D1D18
    ctx->pc = 0x213E18u;
    SET_GPR_U32(ctx, 31, 0x213E20u);
    ctx->pc = 0x2D1D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D18u, 0x213E18u, 0x213E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E20u;
label_213e20:
    // 0x213e20: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x213e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x213e24: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x213e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x213e28: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x213E28u;
    SET_GPR_U32(ctx, 31, 0x213E30u);
    ctx->pc = 0x213E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E28u;
    // 0x213e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x213E28u, 0x213E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E30u;
label_213e30:
    // 0x213e30: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x213e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x213e34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x213e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213e38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E38u;
    {
        const bool branch_taken_0x213e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E38u;
        // 0x213e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e38) {
            ctx->pc = 0x213E50u;
            goto label_213e50;
        }
    }
    ctx->pc = 0x213E40u;
    // 0x213e40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x213e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x213e44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x213e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x213e48: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213E48u;
    {
        const bool branch_taken_0x213e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E48u;
        // 0x213e4c: 0x24a30051  addiu       $v1, $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e48) {
            ctx->pc = 0x213E60u;
            goto label_213e60;
        }
    }
    ctx->pc = 0x213E50u;
label_213e50:
    // 0x213e50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x213e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x213e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e58: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x213e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x213e5c: 0x24a30051  addiu       $v1, $a1, 0x51
    ctx->pc = 0x213e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 81));
label_213e60:
    // 0x213e60: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x213e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213e64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213E64u;
    {
        const bool branch_taken_0x213e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E64u;
        // 0x213e68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e64) {
            ctx->pc = 0x213E78u;
            goto label_213e78;
        }
    }
    ctx->pc = 0x213E6Cu;
    // 0x213e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213e70: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x213e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_213e74:
    // 0x213e74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x213e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213e78:
    // 0x213e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213e80: 0x3e00008  jr          $ra
    ctx->pc = 0x213E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E80u;
        // 0x213e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E88u;
}
