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

// Function: sub_001F5D18
// Address: 0x1f5d18 - 0x1f5f30
void sub_001F5D18_0x1f5d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5D18_0x1f5d18");
#endif

    switch (ctx->pc) {
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5de8u: goto label_1f5de8;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e4cu: goto label_1f5e4c;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ef8u: goto label_1f5ef8;
        default: break;
    }

    ctx->pc = 0x1f5d18u;

    // 0x1f5d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5d28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f5d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f5d2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f5d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f5d30: 0x92020202  lbu         $v0, 0x202($s0)
    ctx->pc = 0x1f5d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 514)));
    // 0x1f5d34: 0x920301ec  lbu         $v1, 0x1EC($s0)
    ctx->pc = 0x1f5d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1f5d38: 0xa2020203  sb          $v0, 0x203($s0)
    ctx->pc = 0x1f5d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 515), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5d3c: 0xa2000202  sb          $zero, 0x202($s0)
    ctx->pc = 0x1f5d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 514), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5d40: 0x8e11005c  lw          $s1, 0x5C($s0)
    ctx->pc = 0x1f5d40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1f5d44: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F5D44u;
    {
        const bool branch_taken_0x1f5d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D44u;
        // 0x1f5d48: 0x8e1200bc  lw          $s2, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d44) {
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5D4Cu;
    // 0x1f5d4c: 0x8e0205c0  lw          $v0, 0x5C0($s0)
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1472)));
    // 0x1f5d50: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f5d50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5d54: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1F5D54u;
    SET_GPR_U32(ctx, 31, 0x1F5D5Cu);
    ctx->pc = 0x1F5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D54u;
    // 0x1f5d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1F5D54u, 0x1F5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D5Cu;
label_1f5d5c:
    // 0x1f5d5c: 0x920201ed  lbu         $v0, 0x1ED($s0)
    ctx->pc = 0x1f5d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 493)));
    // 0x1f5d60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5D60u;
    {
        const bool branch_taken_0x1f5d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D60u;
        // 0x1f5d64: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d60) {
            ctx->pc = 0x1F5D88u;
            goto label_1f5d88;
        }
    }
    ctx->pc = 0x1F5D68u;
    // 0x1f5d68: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x1f5d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f5d6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5d70: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x1f5d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x1f5d74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5D74u;
    {
        const bool branch_taken_0x1f5d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d74) {
            ctx->pc = 0x1F5D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5D74u;
            // 0x1f5d78: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5D7Cu;
            goto label_1f5d7c;
        }
    }
    ctx->pc = 0x1F5D7Cu;
label_1f5d7c:
    // 0x1f5d7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5D7Cu;
    {
        const bool branch_taken_0x1f5d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D7Cu;
        // 0x1f5d80: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d7c) {
            ctx->pc = 0x1F5D8Cu;
            goto label_1f5d8c;
        }
    }
    ctx->pc = 0x1F5D84u;
    // 0x1f5d84: 0x0  nop
    ctx->pc = 0x1f5d84u;
    // NOP
label_1f5d88:
    // 0x1f5d88: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1f5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1f5d8c:
    // 0x1f5d8c: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x1f5d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x1f5d90: 0x92230199  lbu         $v1, 0x199($s1)
    ctx->pc = 0x1f5d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 409)));
    // 0x1f5d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d98: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F5D98u;
    {
        const bool branch_taken_0x1f5d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D98u;
        // 0x1f5d9c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d98) {
            ctx->pc = 0x1F5E08u;
            goto label_1f5e08;
        }
    }
    ctx->pc = 0x1F5DA0u;
    // 0x1f5da0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5DA0u;
    {
        const bool branch_taken_0x1f5da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5da0) {
            ctx->pc = 0x1F5DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5DA0u;
            // 0x1f5da4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5DB8u;
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5DA8u;
    // 0x1f5da8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5DA8u;
    {
        const bool branch_taken_0x1f5da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DA8u;
        // 0x1f5dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5da8) {
            ctx->pc = 0x1F5DE0u;
            goto label_1f5de0;
        }
    }
    ctx->pc = 0x1F5DB0u;
    // 0x1f5db0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F5DB0u;
    {
        const bool branch_taken_0x1f5db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DB0u;
        // 0x1f5db4: 0x8e11005c  lw          $s1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5db0) {
            ctx->pc = 0x1F5E14u;
            goto label_1f5e14;
        }
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F5DB8u;
    {
        const bool branch_taken_0x1f5db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f5db8) {
            ctx->pc = 0x1F5DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5DB8u;
            // 0x1f5dbc: 0x8e11005c  lw          $s1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5DC0u;
    // 0x1f5dc0: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x1f5dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1f5dc4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5DC4u;
    {
        const bool branch_taken_0x1f5dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5dc4) {
            ctx->pc = 0x1F5DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5DC4u;
            // 0x1f5dc8: 0x8e11005c  lw          $s1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5DCCu;
    // 0x1f5dcc: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f5dd0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f5dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f5dd4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5DD4u;
    {
        const bool branch_taken_0x1f5dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5dd4) {
            ctx->pc = 0x1F5DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5DD4u;
            // 0x1f5dd8: 0x8e11005c  lw          $s1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5DDCu;
    // 0x1f5ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5de0:
    // 0x1f5de0: 0xc09eff0  jal         func_27BFC0
    ctx->pc = 0x1F5DE0u;
    SET_GPR_U32(ctx, 31, 0x1F5DE8u);
    ctx->pc = 0x1F5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DE0u;
    // 0x1f5de4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BFC0u, 0x1F5DE0u, 0x1F5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DE8u;
label_1f5de8:
    // 0x1f5de8: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x1f5dec: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1f5df0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5df4: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x1f5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x1f5df8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5DF8u;
    {
        const bool branch_taken_0x1f5df8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DF8u;
        // 0x1f5dfc: 0xa2040190  sb          $a0, 0x190($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5df8) {
            ctx->pc = 0x1F5E0Cu;
            goto label_1f5e0c;
        }
    }
    ctx->pc = 0x1F5E00u;
    // 0x1f5e00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5E00u;
    {
        const bool branch_taken_0x1f5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E00u;
        // 0x1f5e04: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e00) {
            ctx->pc = 0x1F5E0Cu;
            goto label_1f5e0c;
        }
    }
    ctx->pc = 0x1F5E08u;
label_1f5e08:
    // 0x1f5e08: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1f5e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
label_1f5e0c:
    // 0x1f5e0c: 0x8e11005c  lw          $s1, 0x5C($s0)
    ctx->pc = 0x1f5e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1f5e10:
    // 0x1f5e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e14:
    // 0x1f5e14: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1F5E14u;
    SET_GPR_U32(ctx, 31, 0x1F5E1Cu);
    ctx->pc = 0x1F5E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E14u;
    // 0x1f5e18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1F5E14u, 0x1F5E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E1Cu;
label_1f5e1c:
    // 0x1f5e1c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1f5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f5e20: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5E20u;
    {
        const bool branch_taken_0x1f5e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e20) {
            ctx->pc = 0x1F5E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E20u;
            // 0x1f5e24: 0x8e020310  lw          $v0, 0x310($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E58u;
            goto label_1f5e58;
        }
    }
    ctx->pc = 0x1F5E28u;
    // 0x1f5e28: 0xc0a0b7a  jal         func_282DE8
    ctx->pc = 0x1F5E28u;
    SET_GPR_U32(ctx, 31, 0x1F5E30u);
    ctx->pc = 0x1F5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E28u;
    // 0x1f5e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282DE8u, 0x1F5E28u, 0x1F5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E30u;
label_1f5e30:
    // 0x1f5e30: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1f5e34: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5E34u;
    {
        const bool branch_taken_0x1f5e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e34) {
            ctx->pc = 0x1F5E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E34u;
            // 0x1f5e38: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E74u;
            goto label_1f5e74;
        }
    }
    ctx->pc = 0x1F5E3Cu;
    // 0x1f5e3c: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1f5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x1f5e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e44: 0xc09ee3a  jal         func_27B8E8
    ctx->pc = 0x1F5E44u;
    SET_GPR_U32(ctx, 31, 0x1F5E4Cu);
    ctx->pc = 0x1F5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E44u;
    // 0x1f5e48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B8E8u, 0x1F5E44u, 0x1F5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E4Cu;
label_1f5e4c:
    // 0x1f5e4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5E4Cu;
    {
        const bool branch_taken_0x1f5e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E4Cu;
        // 0x1f5e50: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e4c) {
            ctx->pc = 0x1F5E74u;
            goto label_1f5e74;
        }
    }
    ctx->pc = 0x1F5E54u;
    // 0x1f5e54: 0x0  nop
    ctx->pc = 0x1f5e54u;
    // NOP
label_1f5e58:
    // 0x1f5e58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5E58u;
    {
        const bool branch_taken_0x1f5e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e58) {
            ctx->pc = 0x1F5E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E58u;
            // 0x1f5e5c: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E74u;
            goto label_1f5e74;
        }
    }
    ctx->pc = 0x1F5E60u;
    // 0x1f5e60: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1f5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x1f5e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e68: 0xc0a0cdc  jal         func_283370
    ctx->pc = 0x1F5E68u;
    SET_GPR_U32(ctx, 31, 0x1F5E70u);
    ctx->pc = 0x1F5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E68u;
    // 0x1f5e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283370u, 0x1F5E68u, 0x1F5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E70u;
label_1f5e70:
    // 0x1f5e70: 0x8e02069c  lw          $v0, 0x69C($s0)
    ctx->pc = 0x1f5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
label_1f5e74:
    // 0x1f5e74: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F5E74u;
    {
        const bool branch_taken_0x1f5e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e74) {
            ctx->pc = 0x1F5E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E74u;
            // 0x1f5e78: 0x96020300  lhu         $v0, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EFCu;
            goto label_1f5efc;
        }
    }
    ctx->pc = 0x1F5E7Cu;
    // 0x1f5e7c: 0x920201ef  lbu         $v0, 0x1EF($s0)
    ctx->pc = 0x1f5e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
    // 0x1f5e80: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F5E80u;
    {
        const bool branch_taken_0x1f5e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E80u;
        // 0x1f5e84: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e80) {
            ctx->pc = 0x1F5EF8u;
            goto label_1f5ef8;
        }
    }
    ctx->pc = 0x1F5E88u;
    // 0x1f5e88: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f5e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x1f5e8c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f5e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f5e90: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F5E90u;
    {
        const bool branch_taken_0x1f5e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e90) {
            ctx->pc = 0x1F5E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E90u;
            // 0x1f5e94: 0x96020300  lhu         $v0, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EFCu;
            goto label_1f5efc;
        }
    }
    ctx->pc = 0x1F5E98u;
    // 0x1f5e98: 0x96050304  lhu         $a1, 0x304($s0)
    ctx->pc = 0x1f5e98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1f5e9c: 0xc09905e  jal         func_264178
    ctx->pc = 0x1F5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5EA4u);
    ctx->pc = 0x1F5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E9Cu;
    // 0x1f5ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1F5E9Cu, 0x1F5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EA4u;
label_1f5ea4:
    // 0x1f5ea4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f5ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ea8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1f5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f5eac: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1f5eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1f5eb0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5EB0u;
    {
        const bool branch_taken_0x1f5eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5eb0) {
            ctx->pc = 0x1F5EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5EB0u;
            // 0x1f5eb4: 0x96020300  lhu         $v0, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EFCu;
            goto label_1f5efc;
        }
    }
    ctx->pc = 0x1F5EB8u;
    // 0x1f5eb8: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x1f5eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f5ebc: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x1f5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1f5ec0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f5ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f5ec4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f5ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f5ec8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5EC8u;
    {
        const bool branch_taken_0x1f5ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ec8) {
            ctx->pc = 0x1F5ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5EC8u;
            // 0x1f5ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EF0u;
            goto label_1f5ef0;
        }
    }
    ctx->pc = 0x1F5ED0u;
    // 0x1f5ed0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f5ed4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f5ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f5ed8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5ED8u;
    {
        const bool branch_taken_0x1f5ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ed8) {
            ctx->pc = 0x1F5EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5ED8u;
            // 0x1f5edc: 0x96020300  lhu         $v0, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EFCu;
            goto label_1f5efc;
        }
    }
    ctx->pc = 0x1F5EE0u;
    // 0x1f5ee0: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x1f5ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1f5ee4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5EE4u;
    {
        const bool branch_taken_0x1f5ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ee4) {
            ctx->pc = 0x1F5EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5EE4u;
            // 0x1f5ee8: 0x96020300  lhu         $v0, 0x300($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EFCu;
            goto label_1f5efc;
        }
    }
    ctx->pc = 0x1F5EECu;
    // 0x1f5eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ef0:
    // 0x1f5ef0: 0xc09ed64  jal         func_27B590
    ctx->pc = 0x1F5EF0u;
    SET_GPR_U32(ctx, 31, 0x1F5EF8u);
    ctx->pc = 0x1F5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5EF0u;
    // 0x1f5ef4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B590u, 0x1F5EF0u, 0x1F5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EF8u;
label_1f5ef8:
    // 0x1f5ef8: 0x96020300  lhu         $v0, 0x300($s0)
    ctx->pc = 0x1f5ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
label_1f5efc:
    // 0x1f5efc: 0x24031800  addiu       $v1, $zero, 0x1800
    ctx->pc = 0x1f5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1f5f00: 0x30423c00  andi        $v0, $v0, 0x3C00
    ctx->pc = 0x1f5f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15360);
    // 0x1f5f04: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5F04u;
    {
        const bool branch_taken_0x1f5f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5f04) {
            ctx->pc = 0x1F5F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5F04u;
            // 0x1f5f08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5F18u;
            goto label_1f5f18;
        }
    }
    ctx->pc = 0x1F5F0Cu;
    // 0x1f5f0c: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x1f5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x1f5f10: 0xae300060  sw          $s0, 0x60($s1)
    ctx->pc = 0x1f5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
    // 0x1f5f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5f18:
    // 0x1f5f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5f20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f5f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F24u;
        // 0x1f5f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5F2Cu;
    // 0x1f5f2c: 0x0  nop
    ctx->pc = 0x1f5f2cu;
    // NOP
    ctx->pc = 0x1f5f30u;
}
