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

// Function: sub_00266CF8
// Address: 0x266cf8 - 0x266f48
void sub_00266CF8_0x266cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266CF8_0x266cf8");
#endif

    ctx->pc = 0x266cf8u;

    // 0x266cf8: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x266cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266cfc: 0x2404781b  addiu       $a0, $zero, 0x781B
    ctx->pc = 0x266cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30747));
    // 0x266d00: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x266d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x266d04: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x266d04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x266d08: 0x1064008b  beq         $v1, $a0, . + 4 + (0x8B << 2)
    ctx->pc = 0x266D08u;
    {
        const bool branch_taken_0x266d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x266d08) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D10u;
    // 0x266d10: 0x2862781c  slti        $v0, $v1, 0x781C
    ctx->pc = 0x266d10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30748) ? 1 : 0);
    // 0x266d14: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x266D14u;
    {
        const bool branch_taken_0x266d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D14u;
        // 0x266d18: 0x3402abe1  ori         $v0, $zero, 0xABE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44001);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d14) {
            ctx->pc = 0x266E30u;
            goto label_266e30;
        }
    }
    ctx->pc = 0x266D1Cu;
    // 0x266d1c: 0x24023249  addiu       $v0, $zero, 0x3249
    ctx->pc = 0x266d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12873));
    // 0x266d20: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x266D20u;
    {
        const bool branch_taken_0x266d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d20) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D28u;
    // 0x266d28: 0x2862324a  slti        $v0, $v1, 0x324A
    ctx->pc = 0x266d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12874) ? 1 : 0);
    // 0x266d2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x266D2Cu;
    {
        const bool branch_taken_0x266d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D2Cu;
        // 0x266d30: 0x24024e21  addiu       $v0, $zero, 0x4E21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d2c) {
            ctx->pc = 0x266DA8u;
            goto label_266da8;
        }
    }
    ctx->pc = 0x266D34u;
    // 0x266d34: 0x24021348  addiu       $v0, $zero, 0x1348
    ctx->pc = 0x266d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4936));
    // 0x266d38: 0x1062007f  beq         $v1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x266D38u;
    {
        const bool branch_taken_0x266d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d38) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D40u;
    // 0x266d40: 0x28621349  slti        $v0, $v1, 0x1349
    ctx->pc = 0x266d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4937) ? 1 : 0);
    // 0x266d44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266D44u;
    {
        const bool branch_taken_0x266d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D44u;
        // 0x266d48: 0x24021f41  addiu       $v0, $zero, 0x1F41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d44) {
            ctx->pc = 0x266D70u;
            goto label_266d70;
        }
    }
    ctx->pc = 0x266D4Cu;
    // 0x266d4c: 0x240202a0  addiu       $v0, $zero, 0x2A0
    ctx->pc = 0x266d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x266d50: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x266D50u;
    {
        const bool branch_taken_0x266d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d50) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D58u;
    // 0x266d58: 0x24020b3b  addiu       $v0, $zero, 0xB3B
    ctx->pc = 0x266d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2875));
    // 0x266d5c: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x266D5Cu;
    {
        const bool branch_taken_0x266d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d5c) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D64u;
    // 0x266d64: 0x3e00008  jr          $ra
    ctx->pc = 0x266D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D64u;
        // 0x266d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D6Cu;
    // 0x266d6c: 0x0  nop
    ctx->pc = 0x266d6cu;
    // NOP
label_266d70:
    // 0x266d70: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x266D70u;
    {
        const bool branch_taken_0x266d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d70) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D78u;
    // 0x266d78: 0x28621f42  slti        $v0, $v1, 0x1F42
    ctx->pc = 0x266d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8002) ? 1 : 0);
    // 0x266d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266D7Cu;
    {
        const bool branch_taken_0x266d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D7Cu;
        // 0x266d80: 0x24022711  addiu       $v0, $zero, 0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d7c) {
            ctx->pc = 0x266D98u;
            goto label_266d98;
        }
    }
    ctx->pc = 0x266D84u;
    // 0x266d84: 0x24021771  addiu       $v0, $zero, 0x1771
    ctx->pc = 0x266d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6001));
    // 0x266d88: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x266D88u;
    {
        const bool branch_taken_0x266d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d88) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266D90u;
    // 0x266d90: 0x3e00008  jr          $ra
    ctx->pc = 0x266D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D90u;
        // 0x266d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D98u;
label_266d98:
    // 0x266d98: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x266D98u;
    {
        const bool branch_taken_0x266d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d98) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266DA0u;
    // 0x266da0: 0x3e00008  jr          $ra
    ctx->pc = 0x266DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DA0u;
        // 0x266da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266DA8u;
label_266da8:
    // 0x266da8: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x266DA8u;
    {
        const bool branch_taken_0x266da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266da8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266DB0u;
    // 0x266db0: 0x28624e22  slti        $v0, $v1, 0x4E22
    ctx->pc = 0x266db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20002) ? 1 : 0);
    // 0x266db4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x266DB4u;
    {
        const bool branch_taken_0x266db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DB4u;
        // 0x266db8: 0x24025dc1  addiu       $v0, $zero, 0x5DC1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266db4) {
            ctx->pc = 0x266DF8u;
            goto label_266df8;
        }
    }
    ctx->pc = 0x266DBCu;
    // 0x266dbc: 0x24023e81  addiu       $v0, $zero, 0x3E81
    ctx->pc = 0x266dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16001));
    // 0x266dc0: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x266DC0u;
    {
        const bool branch_taken_0x266dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266dc0) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266DC8u;
    // 0x266dc8: 0x28623e82  slti        $v0, $v1, 0x3E82
    ctx->pc = 0x266dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16002) ? 1 : 0);
    // 0x266dcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266DCCu;
    {
        const bool branch_taken_0x266dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DCCu;
        // 0x266dd0: 0x2402499b  addiu       $v0, $zero, 0x499B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18843));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dcc) {
            ctx->pc = 0x266DE8u;
            goto label_266de8;
        }
    }
    ctx->pc = 0x266DD4u;
    // 0x266dd4: 0x240236b1  addiu       $v0, $zero, 0x36B1
    ctx->pc = 0x266dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14001));
    // 0x266dd8: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x266DD8u;
    {
        const bool branch_taken_0x266dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266dd8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266DE0u;
    // 0x266de0: 0x3e00008  jr          $ra
    ctx->pc = 0x266DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DE0u;
        // 0x266de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266DE8u;
label_266de8:
    // 0x266de8: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x266DE8u;
    {
        const bool branch_taken_0x266de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266de8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266DF0u;
    // 0x266df0: 0x3e00008  jr          $ra
    ctx->pc = 0x266DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266DF0u;
        // 0x266df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266DF8u;
label_266df8:
    // 0x266df8: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x266DF8u;
    {
        const bool branch_taken_0x266df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266df8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E00u;
    // 0x266e00: 0x28625dc2  slti        $v0, $v1, 0x5DC2
    ctx->pc = 0x266e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24002) ? 1 : 0);
    // 0x266e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266E04u;
    {
        const bool branch_taken_0x266e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E04u;
        // 0x266e08: 0x24026d61  addiu       $v0, $zero, 0x6D61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e04) {
            ctx->pc = 0x266E20u;
            goto label_266e20;
        }
    }
    ctx->pc = 0x266E0Cu;
    // 0x266e0c: 0x240255f1  addiu       $v0, $zero, 0x55F1
    ctx->pc = 0x266e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22001));
    // 0x266e10: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E18u;
    // 0x266e18: 0x3e00008  jr          $ra
    ctx->pc = 0x266E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E18u;
        // 0x266e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E20u;
label_266e20:
    // 0x266e20: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x266E20u;
    {
        const bool branch_taken_0x266e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e20) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E28u;
    // 0x266e28: 0x3e00008  jr          $ra
    ctx->pc = 0x266E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E28u;
        // 0x266e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E30u;
label_266e30:
    // 0x266e30: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x266E30u;
    {
        const bool branch_taken_0x266e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e30) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E38u;
    // 0x266e38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266e3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x266E3Cu;
    {
        const bool branch_taken_0x266e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E3Cu;
        // 0x266e40: 0x3402cb21  ori         $v0, $zero, 0xCB21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52001);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e3c) {
            ctx->pc = 0x266EB8u;
            goto label_266eb8;
        }
    }
    ctx->pc = 0x266E44u;
    // 0x266e44: 0x34028f66  ori         $v0, $zero, 0x8F66
    ctx->pc = 0x266e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36710);
    // 0x266e48: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x266E48u;
    {
        const bool branch_taken_0x266e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e48) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E50u;
    // 0x266e50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266e54: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266E54u;
    {
        const bool branch_taken_0x266e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E54u;
        // 0x266e58: 0x34029f36  ori         $v0, $zero, 0x9F36 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40758);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e54) {
            ctx->pc = 0x266E80u;
            goto label_266e80;
        }
    }
    ctx->pc = 0x266E5Cu;
    // 0x266e5c: 0x34028038  ori         $v0, $zero, 0x8038
    ctx->pc = 0x266e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x266e60: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x266E60u;
    {
        const bool branch_taken_0x266e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e60) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E68u;
    // 0x266e68: 0x340284d1  ori         $v0, $zero, 0x84D1
    ctx->pc = 0x266e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34001);
    // 0x266e6c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x266E6Cu;
    {
        const bool branch_taken_0x266e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e6c) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E74u;
    // 0x266e74: 0x3e00008  jr          $ra
    ctx->pc = 0x266E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E74u;
        // 0x266e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266E7Cu;
    // 0x266e7c: 0x0  nop
    ctx->pc = 0x266e7cu;
    // NOP
label_266e80:
    // 0x266e80: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x266E80u;
    {
        const bool branch_taken_0x266e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e80) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266E88u;
    // 0x266e88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266e8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266E8Cu;
    {
        const bool branch_taken_0x266e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266E8Cu;
        // 0x266e90: 0x3402a411  ori         $v0, $zero, 0xA411 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42001);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e8c) {
            ctx->pc = 0x266EA8u;
            goto label_266ea8;
        }
    }
    ctx->pc = 0x266E94u;
    // 0x266e94: 0x3402972a  ori         $v0, $zero, 0x972A
    ctx->pc = 0x266e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38698);
    // 0x266e98: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x266E98u;
    {
        const bool branch_taken_0x266e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266e98) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266EA0u;
    // 0x266ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x266EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EA0u;
        // 0x266ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266EA8u;
label_266ea8:
    // 0x266ea8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x266EA8u;
    {
        const bool branch_taken_0x266ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ea8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266EB0u;
    // 0x266eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x266EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EB0u;
        // 0x266eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266EB8u;
label_266eb8:
    // 0x266eb8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x266EB8u;
    {
        const bool branch_taken_0x266eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266eb8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266EC0u;
    // 0x266ec0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266ec4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x266EC4u;
    {
        const bool branch_taken_0x266ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EC4u;
        // 0x266ec8: 0x3402dac1  ori         $v0, $zero, 0xDAC1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56001);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ec4) {
            ctx->pc = 0x266F08u;
            goto label_266f08;
        }
    }
    ctx->pc = 0x266ECCu;
    // 0x266ecc: 0x3402bf36  ori         $v0, $zero, 0xBF36
    ctx->pc = 0x266eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48950);
    // 0x266ed0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x266ED0u;
    {
        const bool branch_taken_0x266ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ed0) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266ED8u;
    // 0x266ed8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266edc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266EDCu;
    {
        const bool branch_taken_0x266edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EDCu;
        // 0x266ee0: 0x3402c601  ori         $v0, $zero, 0xC601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50689);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266edc) {
            ctx->pc = 0x266EF8u;
            goto label_266ef8;
        }
    }
    ctx->pc = 0x266EE4u;
    // 0x266ee4: 0x3402b647  ori         $v0, $zero, 0xB647
    ctx->pc = 0x266ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46663);
    // 0x266ee8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x266EE8u;
    {
        const bool branch_taken_0x266ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ee8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266EF0u;
    // 0x266ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x266EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EF0u;
        // 0x266ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266EF8u;
label_266ef8:
    // 0x266ef8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x266EF8u;
    {
        const bool branch_taken_0x266ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266ef8) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266F00u;
    // 0x266f00: 0x3e00008  jr          $ra
    ctx->pc = 0x266F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F00u;
        // 0x266f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F08u;
label_266f08:
    // 0x266f08: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x266F08u;
    {
        const bool branch_taken_0x266f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f08) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266F10u;
    // 0x266f10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266f14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266F14u;
    {
        const bool branch_taken_0x266f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F14u;
        // 0x266f18: 0x3402e291  ori         $v0, $zero, 0xE291 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58001);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f14) {
            ctx->pc = 0x266F30u;
            goto label_266f30;
        }
    }
    ctx->pc = 0x266F1Cu;
    // 0x266f1c: 0x3402d603  ori         $v0, $zero, 0xD603
    ctx->pc = 0x266f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54787);
    // 0x266f20: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x266F20u;
    {
        const bool branch_taken_0x266f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266f20) {
            ctx->pc = 0x266F38u;
            goto label_266f38;
        }
    }
    ctx->pc = 0x266F28u;
    // 0x266f28: 0x3e00008  jr          $ra
    ctx->pc = 0x266F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F28u;
        // 0x266f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F30u;
label_266f30:
    // 0x266f30: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266F30u;
    {
        const bool branch_taken_0x266f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266f30) {
            ctx->pc = 0x266F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F30u;
            // 0x266f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266F40u;
            goto label_266f40;
        }
    }
    ctx->pc = 0x266F38u;
label_266f38:
    // 0x266f38: 0x3e00008  jr          $ra
    ctx->pc = 0x266F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F38u;
        // 0x266f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F40u;
label_266f40:
    // 0x266f40: 0x3e00008  jr          $ra
    ctx->pc = 0x266F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266F48u;
}
