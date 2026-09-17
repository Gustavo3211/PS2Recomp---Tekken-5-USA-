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

// Function: sub_00505D58
// Address: 0x505d58 - 0x505e30
void sub_00505D58_0x505d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505D58_0x505d58");
#endif

    switch (ctx->pc) {
        case 0x505db8u: goto label_505db8;
        case 0x505dc8u: goto label_505dc8;
        case 0x505dd8u: goto label_505dd8;
        case 0x505de8u: goto label_505de8;
        case 0x505df8u: goto label_505df8;
        case 0x505e08u: goto label_505e08;
        case 0x505e18u: goto label_505e18;
        case 0x505e28u: goto label_505e28;
        default: break;
    }

    ctx->pc = 0x505d58u;

    // 0x505d58: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x505d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x505d5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505d60: 0x9444c534  lhu         $a0, -0x3ACC($v0)
    ctx->pc = 0x505d60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8EC534u));
    // 0x505d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x505d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505d68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x505d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x505d6c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x505d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x505d70: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x505d70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x505d74: 0x10650033  beq         $v1, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x505D74u;
    {
        const bool branch_taken_0x505d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x505D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505D74u;
        // 0x505d78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505d74) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505D7Cu;
    // 0x505d7c: 0x415c2  srl         $v0, $a0, 23
    ctx->pc = 0x505d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x505d80: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x505d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x505d84: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x505d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x505d88: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x505d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x505d8c: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x505D8Cu;
    {
        const bool branch_taken_0x505d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x505d8c) {
            ctx->pc = 0x505D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x505D8Cu;
            // 0x505d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505D94u;
    // 0x505d94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x505d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x505d98: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x505d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x505d9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x505d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x505da0: 0x8c63d1f0  lw          $v1, -0x2E10($v1)
    ctx->pc = 0x505da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955504)));
    // 0x505da4: 0x600008  jr          $v1
    ctx->pc = 0x505DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x505DB0u: goto label_505db0;
            case 0x505DC0u: goto label_505dc0;
            case 0x505DD0u: goto label_505dd0;
            case 0x505DE0u: goto label_505de0;
            case 0x505DF0u: goto label_505df0;
            case 0x505E00u: goto label_505e00;
            case 0x505E10u: goto label_505e10;
            case 0x505E20u: goto label_505e20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505DA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x505DACu;
    // 0x505dac: 0x0  nop
    ctx->pc = 0x505dacu;
    // NOP
label_505db0:
    // 0x505db0: 0xc14155e  jal         func_505578
    ctx->pc = 0x505DB0u;
    SET_GPR_U32(ctx, 31, 0x505DB8u);
    ctx->pc = 0x505578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505578u, 0x505DB0u, 0x505DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505DB8u;
label_505db8:
    // 0x505db8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x505DB8u;
    {
        const bool branch_taken_0x505db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505DB8u;
        // 0x505dbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505db8) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505DC0u;
label_505dc0:
    // 0x505dc0: 0xc141578  jal         func_5055E0
    ctx->pc = 0x505DC0u;
    SET_GPR_U32(ctx, 31, 0x505DC8u);
    ctx->pc = 0x5055E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5055E0u, 0x505DC0u, 0x505DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505DC8u;
label_505dc8:
    // 0x505dc8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x505DC8u;
    {
        const bool branch_taken_0x505dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505DC8u;
        // 0x505dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505dc8) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505DD0u;
label_505dd0:
    // 0x505dd0: 0xc14158a  jal         func_505628
    ctx->pc = 0x505DD0u;
    SET_GPR_U32(ctx, 31, 0x505DD8u);
    ctx->pc = 0x505628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505628u, 0x505DD0u, 0x505DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505DD8u;
label_505dd8:
    // 0x505dd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x505DD8u;
    {
        const bool branch_taken_0x505dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505DD8u;
        // 0x505ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505dd8) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505DE0u;
label_505de0:
    // 0x505de0: 0xc1415ae  jal         func_5056B8
    ctx->pc = 0x505DE0u;
    SET_GPR_U32(ctx, 31, 0x505DE8u);
    ctx->pc = 0x5056B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5056B8u, 0x505DE0u, 0x505DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505DE8u;
label_505de8:
    // 0x505de8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x505DE8u;
    {
        const bool branch_taken_0x505de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505DE8u;
        // 0x505dec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505de8) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505DF0u;
label_505df0:
    // 0x505df0: 0xc14161e  jal         func_505878
    ctx->pc = 0x505DF0u;
    SET_GPR_U32(ctx, 31, 0x505DF8u);
    ctx->pc = 0x505878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505878u, 0x505DF0u, 0x505DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505DF8u;
label_505df8:
    // 0x505df8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x505DF8u;
    {
        const bool branch_taken_0x505df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505DF8u;
        // 0x505dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505df8) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505E00u;
label_505e00:
    // 0x505e00: 0xc1416c0  jal         func_505B00
    ctx->pc = 0x505E00u;
    SET_GPR_U32(ctx, 31, 0x505E08u);
    ctx->pc = 0x505B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505B00u, 0x505E00u, 0x505E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505E08u;
label_505e08:
    // 0x505e08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x505E08u;
    {
        const bool branch_taken_0x505e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505E08u;
        // 0x505e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505e08) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505E10u;
label_505e10:
    // 0x505e10: 0xc1416da  jal         func_505B68
    ctx->pc = 0x505E10u;
    SET_GPR_U32(ctx, 31, 0x505E18u);
    ctx->pc = 0x505B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505B68u, 0x505E10u, 0x505E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505E18u;
label_505e18:
    // 0x505e18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x505E18u;
    {
        const bool branch_taken_0x505e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505E18u;
        // 0x505e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505e18) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505E20u;
label_505e20:
    // 0x505e20: 0xc1416ea  jal         func_505BA8
    ctx->pc = 0x505E20u;
    SET_GPR_U32(ctx, 31, 0x505E28u);
    ctx->pc = 0x505BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505BA8u, 0x505E20u, 0x505E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505E28u;
label_505e28:
    // 0x505e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x505E28u;
    {
        const bool branch_taken_0x505e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x505E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505E28u;
        // 0x505e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505e28) {
            ctx->pc = 0x505E44u;
            return;
        }
    }
    ctx->pc = 0x505E30u;
}
