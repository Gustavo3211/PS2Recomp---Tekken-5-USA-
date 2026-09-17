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

// Function: sub_002D0F18
// Address: 0x2d0f18 - 0x2d10d8
void sub_002D0F18_0x2d0f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0F18_0x2d0f18");
#endif

    switch (ctx->pc) {
        case 0x2d0f2cu: goto label_2d0f2c;
        case 0x2d0f3cu: goto label_2d0f3c;
        case 0x2d0f70u: goto label_2d0f70;
        case 0x2d106cu: goto label_2d106c;
        default: break;
    }

    ctx->pc = 0x2d0f18u;

    // 0x2d0f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0f1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d0f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d0f20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d0f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d0f24: 0xc0a793e  jal         func_29E4F8
    ctx->pc = 0x2D0F24u;
    SET_GPR_U32(ctx, 31, 0x2D0F2Cu);
    ctx->pc = 0x2D0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F24u;
    // 0x2d0f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4F8u, 0x2D0F24u, 0x2D0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F2Cu;
label_2d0f2c:
    // 0x2d0f2c: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D0F2Cu;
    {
        const bool branch_taken_0x2d0f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f2c) {
            ctx->pc = 0x2D0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F2Cu;
            // 0x2d0f30: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1070u;
            goto label_2d1070;
        }
    }
    ctx->pc = 0x2D0F34u;
    // 0x2d0f34: 0xc0a796a  jal         func_29E5A8
    ctx->pc = 0x2D0F34u;
    SET_GPR_U32(ctx, 31, 0x2D0F3Cu);
    ctx->pc = 0x29E5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E5A8u, 0x2D0F34u, 0x2D0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F3Cu;
label_2d0f3c:
    // 0x2d0f3c: 0x260a00fd  addiu       $t2, $s0, 0xFD
    ctx->pc = 0x2d0f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 253));
    // 0x2d0f40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d0f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f44: 0x920200fc  lbu         $v0, 0xFC($s0)
    ctx->pc = 0x2d0f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x2d0f48: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x2d0f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d0f4c: 0x2609010a  addiu       $t1, $s0, 0x10A
    ctx->pc = 0x2d0f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 266));
    // 0x2d0f50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d0f50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d0f58: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D0F58u;
    {
        const bool branch_taken_0x2d0f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F58u;
        // 0x2d0f5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f58) {
            ctx->pc = 0x2D1014u;
            goto label_2d1014;
        }
    }
    ctx->pc = 0x2D0F60u;
    // 0x2d0f60: 0x260b000c  addiu       $t3, $s0, 0xC
    ctx->pc = 0x2d0f60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2d0f64: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x2d0f64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0f68: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x2d0f68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0f6c: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x2d0f6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d0f70:
    // 0x2d0f70: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2d0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d0f74: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x2d0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2d0f78: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2d0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2d0f7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2d0f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2d0f80: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d0f84: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2d0f88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d0f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0f8c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d0f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d0f90: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d0f94: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d0f98: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2d0f9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2d0f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0fa0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2d0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2d0fa4: 0x948300d0  lhu         $v1, 0xD0($a0)
    ctx->pc = 0x2d0fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x2d0fa8: 0x106e000f  beq         $v1, $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0FA8u;
    {
        const bool branch_taken_0x2d0fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 14));
        ctx->pc = 0x2D0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FA8u;
        // 0x2d0fac: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fa8) {
            ctx->pc = 0x2D0FE8u;
            goto label_2d0fe8;
        }
    }
    ctx->pc = 0x2D0FB0u;
    // 0x2d0fb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0FB0u;
    {
        const bool branch_taken_0x2d0fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0fb0) {
            ctx->pc = 0x2D0FC8u;
            goto label_2d0fc8;
        }
    }
    ctx->pc = 0x2D0FB8u;
    // 0x2d0fb8: 0x506d0007  beql        $v1, $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0FB8u;
    {
        const bool branch_taken_0x2d0fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        if (branch_taken_0x2d0fb8) {
            ctx->pc = 0x2D0FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0FB8u;
            // 0x2d0fbc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FD8u;
            goto label_2d0fd8;
        }
    }
    ctx->pc = 0x2D0FC0u;
    // 0x2d0fc0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0FC0u;
    {
        const bool branch_taken_0x2d0fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FC0u;
        // 0x2d0fc4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fc0) {
            ctx->pc = 0x2D1008u;
            goto label_2d1008;
        }
    }
    ctx->pc = 0x2D0FC8u;
label_2d0fc8:
    // 0x2d0fc8: 0x506c000d  beql        $v1, $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0FC8u;
    {
        const bool branch_taken_0x2d0fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x2d0fc8) {
            ctx->pc = 0x2D0FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0FC8u;
            // 0x2d0fcc: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1000u;
            goto label_2d1000;
        }
    }
    ctx->pc = 0x2D0FD0u;
    // 0x2d0fd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D0FD0u;
    {
        const bool branch_taken_0x2d0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FD0u;
        // 0x2d0fd4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fd0) {
            ctx->pc = 0x2D1008u;
            goto label_2d1008;
        }
    }
    ctx->pc = 0x2D0FD8u;
label_2d0fd8:
    // 0x2d0fd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0fdc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2d0fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2d0fe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0FE0u;
    {
        const bool branch_taken_0x2d0fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FE0u;
        // 0x2d0fe4: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fe0) {
            ctx->pc = 0x2D1004u;
            goto label_2d1004;
        }
    }
    ctx->pc = 0x2D0FE8u;
label_2d0fe8:
    // 0x2d0fe8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2d0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d0fec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d0ff0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2d0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2d0ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0FF4u;
    {
        const bool branch_taken_0x2d0ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FF4u;
        // 0x2d0ff8: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ff4) {
            ctx->pc = 0x2D1004u;
            goto label_2d1004;
        }
    }
    ctx->pc = 0x2D0FFCu;
    // 0x2d0ffc: 0x0  nop
    ctx->pc = 0x2d0ffcu;
    // NOP
label_2d1000:
    // 0x2d1000: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d1000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2d1004:
    // 0x2d1004: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d1004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d1008:
    // 0x2d1008: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2d1008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d100c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2D100Cu;
    {
        const bool branch_taken_0x2d100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D100Cu;
        // 0x2d1010: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d100c) {
            ctx->pc = 0x2D0F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0f70;
        }
    }
    ctx->pc = 0x2D1014u;
label_2d1014:
    // 0x2d1014: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2d1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d1018: 0x9144000c  lbu         $a0, 0xC($t2)
    ctx->pc = 0x2d1018u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x2d101c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d1020: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d1020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d1024: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d1028: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2d1028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d102c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D102Cu;
    {
        const bool branch_taken_0x2d102c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D102Cu;
        // 0x2d1030: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d102c) {
            ctx->pc = 0x2D1048u;
            goto label_2d1048;
        }
    }
    ctx->pc = 0x2D1034u;
    // 0x2d1034: 0x9122000c  lbu         $v0, 0xC($t1)
    ctx->pc = 0x2d1034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2d1038: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1038u;
    {
        const bool branch_taken_0x2d1038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1038u;
        // 0x2d103c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1038) {
            ctx->pc = 0x2D1060u;
            goto label_2d1060;
        }
    }
    ctx->pc = 0x2D1040u;
    // 0x2d1040: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1040u;
    {
        const bool branch_taken_0x2d1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1040u;
        // 0x2d1044: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1040) {
            ctx->pc = 0x2D1064u;
            goto label_2d1064;
        }
    }
    ctx->pc = 0x2D1048u;
label_2d1048:
    // 0x2d1048: 0x9122000c  lbu         $v0, 0xC($t1)
    ctx->pc = 0x2d1048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2d104c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D104Cu;
    {
        const bool branch_taken_0x2d104c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d104c) {
            ctx->pc = 0x2D1050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D104Cu;
            // 0x2d1050: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1064u;
            goto label_2d1064;
        }
    }
    ctx->pc = 0x2D1054u;
    // 0x2d1054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1058u;
    {
        const bool branch_taken_0x2d1058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1058u;
        // 0x2d105c: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1058) {
            ctx->pc = 0x2D1064u;
            goto label_2d1064;
        }
    }
    ctx->pc = 0x2D1060u;
label_2d1060:
    // 0x2d1060: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2d1060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2d1064:
    // 0x2d1064: 0xc0a7956  jal         func_29E558
    ctx->pc = 0x2D1064u;
    SET_GPR_U32(ctx, 31, 0x2D106Cu);
    ctx->pc = 0x29E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E558u, 0x2D1064u, 0x2D106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D106Cu;
label_2d106c:
    // 0x2d106c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d106cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2d1070:
    // 0x2d1070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d1070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1074: 0x244483c0  addiu       $a0, $v0, -0x7C40
    ctx->pc = 0x2d1074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x2d1078: 0x9082002b  lbu         $v0, 0x2B($a0)
    ctx->pc = 0x2d1078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x2d107c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D107Cu;
    {
        const bool branch_taken_0x2d107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D107Cu;
        // 0x2d1080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d107c) {
            ctx->pc = 0x2D1098u;
            goto label_2d1098;
        }
    }
    ctx->pc = 0x2D1084u;
    // 0x2d1084: 0x2782a850  addiu       $v0, $gp, -0x57B0
    ctx->pc = 0x2d1084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x2d1088: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d1088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d108c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1090: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D1090u;
    {
        const bool branch_taken_0x2d1090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1090u;
        // 0x2d1094: 0x642825  or          $a1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1090) {
            ctx->pc = 0x2D10BCu;
            goto label_2d10bc;
        }
    }
    ctx->pc = 0x2D1098u;
label_2d1098:
    // 0x2d1098: 0x9084002d  lbu         $a0, 0x2D($a0)
    ctx->pc = 0x2d1098u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x2d109c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D109Cu;
    {
        const bool branch_taken_0x2d109c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D109Cu;
        // 0x2d10a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d109c) {
            ctx->pc = 0x2D10B0u;
            goto label_2d10b0;
        }
    }
    ctx->pc = 0x2D10A4u;
    // 0x2d10a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D10A4u;
    {
        const bool branch_taken_0x2d10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10A4u;
        // 0x2d10a8: 0x8f85a850  lw          $a1, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d10a4) {
            ctx->pc = 0x2D10BCu;
            goto label_2d10bc;
        }
    }
    ctx->pc = 0x2D10ACu;
    // 0x2d10ac: 0x0  nop
    ctx->pc = 0x2d10acu;
    // NOP
label_2d10b0:
    // 0x2d10b0: 0x8f83a854  lw          $v1, -0x57AC($gp)
    ctx->pc = 0x2d10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2d10b4: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2d10b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2d10b8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2d10b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2d10bc:
    // 0x2d10bc: 0x512c3  sra         $v0, $a1, 11
    ctx->pc = 0x2d10bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 11));
    // 0x2d10c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d10c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d10c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d10c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d10c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d10c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d10cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D10CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D10CCu;
        // 0x2d10d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D10CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D10D4u;
    // 0x2d10d4: 0x0  nop
    ctx->pc = 0x2d10d4u;
    // NOP
    ctx->pc = 0x2d10d8u;
}
