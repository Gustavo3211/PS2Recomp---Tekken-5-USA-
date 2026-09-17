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

// Function: sub_002FB9B0
// Address: 0x2fb9b0 - 0x2fbad8
void sub_002FB9B0_0x2fb9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB9B0_0x2fb9b0");
#endif

    switch (ctx->pc) {
        case 0x2fb9f0u: goto label_2fb9f0;
        case 0x2fba28u: goto label_2fba28;
        case 0x2fba30u: goto label_2fba30;
        case 0x2fba4cu: goto label_2fba4c;
        case 0x2fba70u: goto label_2fba70;
        case 0x2fba8cu: goto label_2fba8c;
        default: break;
    }

    ctx->pc = 0x2fb9b0u;

    // 0x2fb9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb9b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fb9bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fb9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fb9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fb9c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fb9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fb9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fb9cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2fb9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fb9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fb9d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fb9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fb9d8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2FB9D8u;
    {
        const bool branch_taken_0x2fb9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9D8u;
        // 0x2fb9dc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9d8) {
            ctx->pc = 0x2FBAB8u;
            goto label_2fbab8;
        }
    }
    ctx->pc = 0x2FB9E0u;
    // 0x2fb9e0: 0x52600036  beql        $s3, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2FB9E0u;
    {
        const bool branch_taken_0x2fb9e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9e0) {
            ctx->pc = 0x2FB9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB9E0u;
            // 0x2fb9e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBABCu;
            goto label_2fbabc;
        }
    }
    ctx->pc = 0x2FB9E8u;
    // 0x2fb9e8: 0xc0befa6  jal         func_2FBE98
    ctx->pc = 0x2FB9E8u;
    SET_GPR_U32(ctx, 31, 0x2FB9F0u);
    ctx->pc = 0x2FB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB9E8u;
    // 0x2fb9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE98u, 0x2FB9E8u, 0x2FB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB9F0u;
label_2fb9f0:
    // 0x2fb9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb9f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fb9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9f8: 0x1643002f  bne         $s2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2FB9F8u;
    {
        const bool branch_taken_0x2fb9f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9F8u;
        // 0x2fb9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb9f8) {
            ctx->pc = 0x2FBAB8u;
            goto label_2fbab8;
        }
    }
    ctx->pc = 0x2FBA00u;
    // 0x2fba00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fba04: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2fba04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2fba08: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2fba08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2fba0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fba10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2fba14: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x2fba14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2fba18: 0xa223000c  sb          $v1, 0xC($s1)
    ctx->pc = 0x2fba18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fba1c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x2fba1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2fba20: 0xc0bef9e  jal         func_2FBE78
    ctx->pc = 0x2FBA20u;
    SET_GPR_U32(ctx, 31, 0x2FBA28u);
    ctx->pc = 0x2FBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA20u;
    // 0x2fba24: 0xa222000d  sb          $v0, 0xD($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE78u, 0x2FBA20u, 0x2FBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA28u;
label_2fba28:
    // 0x2fba28: 0x50520003  beql        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBA28u;
    {
        const bool branch_taken_0x2fba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2fba28) {
            ctx->pc = 0x2FBA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBA28u;
            // 0x2fba2c: 0x9602000a  lhu         $v0, 0xA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBA38u;
            goto label_2fba38;
        }
    }
    ctx->pc = 0x2FBA30u;
label_2fba30:
    // 0x2fba30: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FBA30u;
    {
        const bool branch_taken_0x2fba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA30u;
        // 0x2fba34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba30) {
            ctx->pc = 0x2FBAB8u;
            goto label_2fbab8;
        }
    }
    ctx->pc = 0x2FBA38u;
label_2fba38:
    // 0x2fba38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba3c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2fba3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fba40: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x2fba40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2fba44: 0xc0be9be  jal         func_2FA6F8
    ctx->pc = 0x2FBA44u;
    SET_GPR_U32(ctx, 31, 0x2FBA4Cu);
    ctx->pc = 0x2FBA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA44u;
    // 0x2fba48: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FBA44u, 0x2FBA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA4Cu;
label_2fba4c:
    // 0x2fba4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fba4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba50: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FBA50u;
    {
        const bool branch_taken_0x2fba50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA50u;
        // 0x2fba54: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba50) {
            ctx->pc = 0x2FBAB8u;
            goto label_2fbab8;
        }
    }
    ctx->pc = 0x2FBA58u;
    // 0x2fba58: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x2fba58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fba5c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2fba5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fba60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FBA60u;
    {
        const bool branch_taken_0x2fba60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA60u;
        // 0x2fba64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba60) {
            ctx->pc = 0x2FBAB4u;
            goto label_2fbab4;
        }
    }
    ctx->pc = 0x2FBA68u;
    // 0x2fba68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2fba68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fba6c: 0x0  nop
    ctx->pc = 0x2fba6cu;
    // NOP
label_2fba70:
    // 0x2fba70: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2fba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2fba74: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2fba74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2fba78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fba78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fba7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba80: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2fba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fba84: 0xc0beab8  jal         func_2FAAE0
    ctx->pc = 0x2FBA84u;
    SET_GPR_U32(ctx, 31, 0x2FBA8Cu);
    ctx->pc = 0x2FBA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA84u;
    // 0x2fba88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAAE0u, 0x2FBA84u, 0x2FBA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA8Cu;
label_2fba8c:
    // 0x2fba8c: 0x1454ffe8  bne         $v0, $s4, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2FBA8Cu;
    {
        const bool branch_taken_0x2fba8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2FBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA8Cu;
        // 0x2fba90: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba8c) {
            ctx->pc = 0x2FBA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fba30;
        }
    }
    ctx->pc = 0x2FBA94u;
    // 0x2fba94: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x2fba94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2fba98: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x2fba98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fba9c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2fba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2fbaa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fbaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fbaa4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2fbaa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fbaa8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fbaac: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2FBAACu;
    {
        const bool branch_taken_0x2fbaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAACu;
        // 0x2fbab0: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbaac) {
            ctx->pc = 0x2FBA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fba70;
        }
    }
    ctx->pc = 0x2FBAB4u;
label_2fbab4:
    // 0x2fbab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbab8:
    // 0x2fbab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fbab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbabc:
    // 0x2fbabc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fbabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fbac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fbac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fbac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fbac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fbac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbacc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fbaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fbad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAD0u;
        // 0x2fbad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBAD8u;
}
