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

// Function: sub_002D8DD0
// Address: 0x2d8dd0 - 0x2d9038
void sub_002D8DD0_0x2d8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8DD0_0x2d8dd0");
#endif

    switch (ctx->pc) {
        case 0x2d8e04u: goto label_2d8e04;
        case 0x2d8e24u: goto label_2d8e24;
        case 0x2d8e2cu: goto label_2d8e2c;
        case 0x2d8e60u: goto label_2d8e60;
        case 0x2d8ee0u: goto label_2d8ee0;
        case 0x2d8f70u: goto label_2d8f70;
        default: break;
    }

    ctx->pc = 0x2d8dd0u;

    // 0x2d8dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d8dd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d8dd8: 0x58402  srl         $s0, $a1, 16
    ctx->pc = 0x2d8dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2d8ddc: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2d8ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d8de0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d8de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d8de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d8de8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8DE8u;
    {
        const bool branch_taken_0x2d8de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DE8u;
        // 0x2d8dec: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8de8) {
            ctx->pc = 0x2D8E10u;
            goto label_2d8e10;
        }
    }
    ctx->pc = 0x2D8DF0u;
    // 0x2d8df0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2d8df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2d8df4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d8df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8df8: 0x24a54430  addiu       $a1, $a1, 0x4430
    ctx->pc = 0x2d8df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17456));
    // 0x2d8dfc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2D8DFCu;
    SET_GPR_U32(ctx, 31, 0x2D8E04u);
    ctx->pc = 0x2D8E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8DFCu;
    // 0x2d8e00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2D8DFCu, 0x2D8E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E04u;
label_2d8e04:
    // 0x2d8e04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8E04u;
    {
        const bool branch_taken_0x2d8e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e04) {
            ctx->pc = 0x2D8E24u;
            goto label_2d8e24;
        }
    }
    ctx->pc = 0x2D8E0Cu;
    // 0x2d8e0c: 0x0  nop
    ctx->pc = 0x2d8e0cu;
    // NOP
label_2d8e10:
    // 0x2d8e10: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2d8e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2d8e14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d8e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e18: 0x24a54438  addiu       $a1, $a1, 0x4438
    ctx->pc = 0x2d8e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
    // 0x2d8e1c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2D8E1Cu;
    SET_GPR_U32(ctx, 31, 0x2D8E24u);
    ctx->pc = 0x2D8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E1Cu;
    // 0x2d8e20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2D8E1Cu, 0x2D8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E24u;
label_2d8e24:
    // 0x2d8e24: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2D8E24u;
    SET_GPR_U32(ctx, 31, 0x2D8E2Cu);
    ctx->pc = 0x2D8E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8E24u;
    // 0x2d8e28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2D8E24u, 0x2D8E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E2Cu;
label_2d8e2c:
    // 0x2d8e2c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8E2Cu;
    {
        const bool branch_taken_0x2d8e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E2Cu;
        // 0x2d8e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e2c) {
            ctx->pc = 0x2D8E40u;
            goto label_2d8e40;
        }
    }
    ctx->pc = 0x2D8E34u;
    // 0x2d8e34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d8e38: 0x1602001d  bne         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D8E38u;
    {
        const bool branch_taken_0x2d8e38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E38u;
        // 0x2d8e3c: 0xd1102a  slt         $v0, $a2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e38) {
            ctx->pc = 0x2D8EB0u;
            goto label_2d8eb0;
        }
    }
    ctx->pc = 0x2D8E40u;
label_2d8e40:
    // 0x2d8e40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x2d8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x2d8e44: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d8e48: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d8e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d8e4c: 0x244878b0  addiu       $t0, $v0, 0x78B0
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 30896));
    // 0x2d8e50: 0x2469e7e8  addiu       $t1, $v1, -0x1818
    ctx->pc = 0x2d8e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961128));
    // 0x2d8e54: 0x2484e7e0  addiu       $a0, $a0, -0x1820
    ctx->pc = 0x2d8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d8e58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d8e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8e5c: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x2d8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_2d8e60:
    // 0x2d8e60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d8e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d8e64: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2d8e64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8e68: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2D8E68u;
    {
        const bool branch_taken_0x2d8e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E68u;
        // 0x2d8e6c: 0x28e60008  slti        $a2, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e68) {
            ctx->pc = 0x2D9018u;
            goto label_2d9018;
        }
    }
    ctx->pc = 0x2D8E70u;
    // 0x2d8e70: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8e74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d8e78: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8e7c: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8e80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8E80u;
    {
        const bool branch_taken_0x2d8e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8E80u;
        // 0x2d8e84: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8e80) {
            ctx->pc = 0x2D8EA0u;
            goto label_2d8ea0;
        }
    }
    ctx->pc = 0x2D8E88u;
    // 0x2d8e88: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d8e8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8e90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8e94: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d8e98: 0xa44500a0  sh          $a1, 0xA0($v0)
    ctx->pc = 0x2d8e98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d8e9c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2d8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2d8ea0:
    // 0x2d8ea0: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D8EA0u;
    {
        const bool branch_taken_0x2d8ea0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EA0u;
        // 0x2d8ea4: 0x3a71021  addu        $v0, $sp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ea0) {
            ctx->pc = 0x2D8E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8e60;
        }
    }
    ctx->pc = 0x2D8EA8u;
    // 0x2d8ea8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2D8EA8u;
    {
        const bool branch_taken_0x2d8ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EA8u;
        // 0x2d8eac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8ea8) {
            ctx->pc = 0x2D901Cu;
            goto label_2d901c;
        }
    }
    ctx->pc = 0x2D8EB0u;
label_2d8eb0:
    // 0x2d8eb0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D8EB0u;
    {
        const bool branch_taken_0x2d8eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8eb0) {
            ctx->pc = 0x2D8F38u;
            goto label_2d8f38;
        }
    }
    ctx->pc = 0x2D8EB8u;
    // 0x2d8eb8: 0x18c00057  blez        $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2D8EB8u;
    {
        const bool branch_taken_0x2d8eb8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8EB8u;
        // 0x2d8ebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8eb8) {
            ctx->pc = 0x2D9018u;
            goto label_2d9018;
        }
    }
    ctx->pc = 0x2D8EC0u;
    // 0x2d8ec0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d8ec4: 0x2449e7e0  addiu       $t1, $v0, -0x1820
    ctx->pc = 0x2d8ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
    // 0x2d8ec8: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2d8ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x2d8ecc: 0x350890d0  ori         $t0, $t0, 0x90D0
    ctx->pc = 0x2d8eccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)37072);
    // 0x2d8ed0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2d8ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2d8ed4: 0x252a0008  addiu       $t2, $t1, 0x8
    ctx->pc = 0x2d8ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2d8ed8: 0x3a71021  addu        $v0, $sp, $a3
    ctx->pc = 0x2d8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
    // 0x2d8edc: 0x0  nop
    ctx->pc = 0x2d8edcu;
    // NOP
label_2d8ee0:
    // 0x2d8ee0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d8ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d8ee4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d8ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8ee8: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x2d8ee8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d8eec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8ef0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d8ef4: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8ef8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2d8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2d8efc: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2d8efcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2d8f00: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8f04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8F04u;
    {
        const bool branch_taken_0x2d8f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F04u;
        // 0x2d8f08: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f04) {
            ctx->pc = 0x2D8F24u;
            goto label_2d8f24;
        }
    }
    ctx->pc = 0x2D8F0Cu;
    // 0x2d8f0c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2d8f10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8f18: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2d8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d8f1c: 0xa44400a0  sh          $a0, 0xA0($v0)
    ctx->pc = 0x2d8f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d8f20: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x2d8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_2d8f24:
    // 0x2d8f24: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D8F24u;
    {
        const bool branch_taken_0x2d8f24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F24u;
        // 0x2d8f28: 0x3a71021  addu        $v0, $sp, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f24) {
            ctx->pc = 0x2D8EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8ee0;
        }
    }
    ctx->pc = 0x2D8F2Cu;
    // 0x2d8f2c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2D8F2Cu;
    {
        const bool branch_taken_0x2d8f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F2Cu;
        // 0x2d8f30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f2c) {
            ctx->pc = 0x2D901Cu;
            goto label_2d901c;
        }
    }
    ctx->pc = 0x2D8F34u;
    // 0x2d8f34: 0x0  nop
    ctx->pc = 0x2d8f34u;
    // NOP
label_2d8f38:
    // 0x2d8f38: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D8F38u;
    {
        const bool branch_taken_0x2d8f38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F38u;
        // 0x2d8f3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f38) {
            ctx->pc = 0x2D9018u;
            goto label_2d9018;
        }
    }
    ctx->pc = 0x2D8F40u;
    // 0x2d8f40: 0x2264023  subu        $t0, $s1, $a2
    ctx->pc = 0x2d8f40u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2d8f44: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x2d8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x2d8f48: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d8f4c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d8f50: 0x244678b0  addiu       $a2, $v0, 0x78B0
    ctx->pc = 0x2d8f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30896));
    // 0x2d8f54: 0x246ae7e8  addiu       $t2, $v1, -0x1818
    ctx->pc = 0x2d8f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961128));
    // 0x2d8f58: 0x2489e7e0  addiu       $t1, $a0, -0x1820
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x2d8f5c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x2d8f5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8f60: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2d8f60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8f64: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x2d8f64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d8f68: 0xeb102a  slt         $v0, $a3, $t3
    ctx->pc = 0x2d8f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2d8f6c: 0x0  nop
    ctx->pc = 0x2d8f6cu;
    // NOP
label_2d8f70:
    // 0x2d8f70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D8F70u;
    {
        const bool branch_taken_0x2d8f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F70u;
        // 0x2d8f74: 0xe82023  subu        $a0, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f70) {
            ctx->pc = 0x2D8FC8u;
            goto label_2d8fc8;
        }
    }
    ctx->pc = 0x2D8F78u;
    // 0x2d8f78: 0x120d0003  beq         $s0, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8F78u;
    {
        const bool branch_taken_0x2d8f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 13));
        if (branch_taken_0x2d8f78) {
            ctx->pc = 0x2D8F88u;
            goto label_2d8f88;
        }
    }
    ctx->pc = 0x2D8F80u;
    // 0x2d8f80: 0x160c0009  bne         $s0, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D8F80u;
    {
        const bool branch_taken_0x2d8f80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 12));
        if (branch_taken_0x2d8f80) {
            ctx->pc = 0x2D8FA8u;
            goto label_2d8fa8;
        }
    }
    ctx->pc = 0x2D8F88u;
label_2d8f88:
    // 0x2d8f88: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8f8c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d8f90: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8f94: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8f98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D8F98u;
    {
        const bool branch_taken_0x2d8f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F98u;
        // 0x2d8f9c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f98) {
            ctx->pc = 0x2D9008u;
            goto label_2d9008;
        }
    }
    ctx->pc = 0x2D8FA0u;
    // 0x2d8fa0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2D8FA0u;
    {
        const bool branch_taken_0x2d8fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FA0u;
        // 0x2d8fa4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fa0) {
            ctx->pc = 0x2D8FF4u;
            goto label_2d8ff4;
        }
    }
    ctx->pc = 0x2D8FA8u;
label_2d8fa8:
    // 0x2d8fa8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2d8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2d8fac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2d8facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d8fb0: 0x8c4290d0  lw          $v0, -0x6F30($v0)
    ctx->pc = 0x2d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938832)));
    // 0x2d8fb4: 0x284207ff  slti        $v0, $v0, 0x7FF
    ctx->pc = 0x2d8fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8fb8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8FB8u;
    {
        const bool branch_taken_0x2d8fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FB8u;
        // 0x2d8fbc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fb8) {
            ctx->pc = 0x2D9008u;
            goto label_2d9008;
        }
    }
    ctx->pc = 0x2D8FC0u;
    // 0x2d8fc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D8FC0u;
    {
        const bool branch_taken_0x2d8fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FC0u;
        // 0x2d8fc4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fc0) {
            ctx->pc = 0x2D8FF4u;
            goto label_2d8ff4;
        }
    }
    ctx->pc = 0x2D8FC8u;
label_2d8fc8:
    // 0x2d8fc8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2d8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2d8fcc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2d8fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2d8fd0: 0x8ca590d0  lw          $a1, -0x6F30($a1)
    ctx->pc = 0x2d8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294938832)));
    // 0x2d8fd4: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2d8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2d8fd8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2d8fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8fdc: 0x28a507ff  slti        $a1, $a1, 0x7FF
    ctx->pc = 0x2d8fdcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x2d8fe0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2d8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d8fe4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2d8fe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2d8fe8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8FE8u;
    {
        const bool branch_taken_0x2d8fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FE8u;
        // 0x2d8fec: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fe8) {
            ctx->pc = 0x2D9008u;
            goto label_2d9008;
        }
    }
    ctx->pc = 0x2D8FF0u;
    // 0x2d8ff0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d8ff4:
    // 0x2d8ff4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d8ff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d8ffc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2d8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d9000: 0xa44400a0  sh          $a0, 0xA0($v0)
    ctx->pc = 0x2d9000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9004: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d9004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2d9008:
    // 0x2d9008: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d9008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d900c: 0xf1102a  slt         $v0, $a3, $s1
    ctx->pc = 0x2d900cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d9010: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D9010u;
    {
        const bool branch_taken_0x2d9010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9010u;
        // 0x2d9014: 0xeb102a  slt         $v0, $a3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9010) {
            ctx->pc = 0x2D8F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8f70;
        }
    }
    ctx->pc = 0x2D9018u;
label_2d9018:
    // 0x2d9018: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d9018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d901c:
    // 0x2d901c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d901cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d9020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d9020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9024: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9024u;
        // 0x2d9028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D902Cu;
    // 0x2d902c: 0x0  nop
    ctx->pc = 0x2d902cu;
    // NOP
    // 0x2d9030: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9038u;
}
