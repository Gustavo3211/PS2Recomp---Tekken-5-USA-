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

// Function: sub_0026A9B8
// Address: 0x26a9b8 - 0x26b988
void sub_0026A9B8_0x26a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A9B8_0x26a9b8");
#endif

    switch (ctx->pc) {
        case 0x26aa20u: goto label_26aa20;
        case 0x26aa60u: goto label_26aa60;
        case 0x26b088u: goto label_26b088;
        case 0x26b0a0u: goto label_26b0a0;
        case 0x26b0d0u: goto label_26b0d0;
        case 0x26b0e8u: goto label_26b0e8;
        case 0x26b100u: goto label_26b100;
        case 0x26b11cu: goto label_26b11c;
        case 0x26b13cu: goto label_26b13c;
        case 0x26b210u: goto label_26b210;
        case 0x26b250u: goto label_26b250;
        case 0x26b878u: goto label_26b878;
        case 0x26b890u: goto label_26b890;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b920u: goto label_26b920;
        default: break;
    }

    ctx->pc = 0x26a9b8u;

    // 0x26a9b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26a9bc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x26a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x26a9c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26a9c4: 0x2452f718  addiu       $s2, $v0, -0x8E8
    ctx->pc = 0x26a9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x26a9c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26a9cc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26a9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a9d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26a9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26a9d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26a9dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26a9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26a9e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26a9e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x26a9e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26a9ec: 0x8f94aa7c  lw          $s4, -0x5584($gp)
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26a9f0: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x26a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x26a9f4: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x26a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
    // 0x26a9f8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26a9fc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x26aa00: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x26aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26aa04: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26aa08: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x26aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x26aa0c: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x26aa0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26aa10: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26aa10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26aa14: 0x106501dc  beq         $v1, $a1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x26AA14u;
    {
        const bool branch_taken_0x26aa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA14u;
        // 0x26aa18: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa14) {
            ctx->pc = 0x26B188u;
            goto label_26b188;
        }
    }
    ctx->pc = 0x26AA1Cu;
    // 0x26aa1c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x26aa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_26aa20:
    // 0x26aa20: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26AA20u;
    {
        const bool branch_taken_0x26aa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26aa20) {
            ctx->pc = 0x26AA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AA20u;
            // 0x26aa24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AA50u;
            goto label_26aa50;
        }
    }
    ctx->pc = 0x26AA28u;
    // 0x26aa28: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26aa2c: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26aa2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26aa30: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26aa34: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26aa38: 0x96330014  lhu         $s3, 0x14($s1)
    ctx->pc = 0x26aa38u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26aa3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26aa40: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26aa44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26aa48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26AA48u;
    {
        const bool branch_taken_0x26aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA48u;
        // 0x26aa4c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa48) {
            ctx->pc = 0x26AA54u;
            goto label_26aa54;
        }
    }
    ctx->pc = 0x26AA50u;
label_26aa50:
    // 0x26aa50: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26aa50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26aa54:
    // 0x26aa54: 0x126001c7  beqz        $s3, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x26AA54u;
    {
        const bool branch_taken_0x26aa54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA54u;
        // 0x26aa58: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa54) {
            ctx->pc = 0x26B174u;
            goto label_26b174;
        }
    }
    ctx->pc = 0x26AA5Cu;
    // 0x26aa5c: 0x0  nop
    ctx->pc = 0x26aa5cu;
    // NOP
label_26aa60:
    // 0x26aa60: 0x86830096  lh          $v1, 0x96($s4)
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x26aa64: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26aa64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26aa68: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26aa68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26aa6c: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x26AA6Cu;
    {
        const bool branch_taken_0x26aa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA6Cu;
        // 0x26aa70: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa6c) {
            ctx->pc = 0x26B120u;
            goto label_26b120;
        }
    }
    ctx->pc = 0x26AA74u;
    // 0x26aa74: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x26aa74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26aa78: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26aa78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26aa7c: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26AA7Cu;
    {
        const bool branch_taken_0x26aa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA7Cu;
        // 0x26aa80: 0x24063ff8  addiu       $a2, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa7c) {
            ctx->pc = 0x26B120u;
            goto label_26b120;
        }
    }
    ctx->pc = 0x26AA84u;
    // 0x26aa84: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26aa88: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x26aa88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26aa8c: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x26aa8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x26aa90: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26aa94: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26aa98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26aa9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26aaa0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26aaa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26aaa8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26aaac: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x26AAACu;
    {
        const bool branch_taken_0x26aaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAACu;
        // 0x26aab0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaac) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AAB4u;
    // 0x26aab4: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x26aab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x26aab8: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26AAB8u;
    {
        const bool branch_taken_0x26aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAB8u;
        // 0x26aabc: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aab8) {
            ctx->pc = 0x26ADB0u;
            goto label_26adb0;
        }
    }
    ctx->pc = 0x26AAC0u;
    // 0x26aac0: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x26aac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x26aac4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x26AAC4u;
    {
        const bool branch_taken_0x26aac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAC4u;
        // 0x26aac8: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aac4) {
            ctx->pc = 0x26AC48u;
            goto label_26ac48;
        }
    }
    ctx->pc = 0x26AACCu;
    // 0x26aacc: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x26aaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x26aad0: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x26AAD0u;
    {
        const bool branch_taken_0x26aad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAD0u;
        // 0x26aad4: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aad0) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AAD8u;
    // 0x26aad8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26AAD8u;
    {
        const bool branch_taken_0x26aad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAD8u;
        // 0x26aadc: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aad8) {
            ctx->pc = 0x26AB88u;
            goto label_26ab88;
        }
    }
    ctx->pc = 0x26AAE0u;
    // 0x26aae0: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x26aae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x26aae4: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x26AAE4u;
    {
        const bool branch_taken_0x26aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAE4u;
        // 0x26aae8: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aae4) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AAECu;
    // 0x26aaec: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x26AAECu;
    {
        const bool branch_taken_0x26aaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAECu;
        // 0x26aaf0: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaec) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AAF4u;
    // 0x26aaf4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26AAF4u;
    {
        const bool branch_taken_0x26aaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAF4u;
        // 0x26aaf8: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aaf4) {
            ctx->pc = 0x26AB40u;
            goto label_26ab40;
        }
    }
    ctx->pc = 0x26AAFCu;
    // 0x26aafc: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x26aafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26ab00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AB00u;
    {
        const bool branch_taken_0x26ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB00u;
        // 0x26ab04: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab00) {
            ctx->pc = 0x26AB28u;
            goto label_26ab28;
        }
    }
    ctx->pc = 0x26AB08u;
    // 0x26ab08: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x26ab08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x26ab0c: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x26AB0Cu;
    {
        const bool branch_taken_0x26ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB0Cu;
        // 0x26ab10: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab0c) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AB14u;
    // 0x26ab14: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x26AB14u;
    {
        const bool branch_taken_0x26ab14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ab14) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AB1Cu;
    // 0x26ab1c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x26AB1Cu;
    {
        const bool branch_taken_0x26ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab1c) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AB24u;
    // 0x26ab24: 0x0  nop
    ctx->pc = 0x26ab24u;
    // NOP
label_26ab28:
    // 0x26ab28: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x26AB28u;
    {
        const bool branch_taken_0x26ab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB28u;
        // 0x26ab2c: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab28) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AB30u;
    // 0x26ab30: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x26AB30u;
    {
        const bool branch_taken_0x26ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ab30) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AB38u;
    // 0x26ab38: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x26AB38u;
    {
        const bool branch_taken_0x26ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab38) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AB40u;
label_26ab40:
    // 0x26ab40: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x26AB40u;
    {
        const bool branch_taken_0x26ab40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB40u;
        // 0x26ab44: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab40) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AB48u;
    // 0x26ab48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AB48u;
    {
        const bool branch_taken_0x26ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB48u;
        // 0x26ab4c: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab48) {
            ctx->pc = 0x26AB70u;
            goto label_26ab70;
        }
    }
    ctx->pc = 0x26AB50u;
    // 0x26ab50: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x26ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x26ab54: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26AB54u;
    {
        const bool branch_taken_0x26ab54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB54u;
        // 0x26ab58: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab54) {
            ctx->pc = 0x26B0B0u;
            goto label_26b0b0;
        }
    }
    ctx->pc = 0x26AB5Cu;
    // 0x26ab5c: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x26AB5Cu;
    {
        const bool branch_taken_0x26ab5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB5Cu;
        // 0x26ab60: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab5c) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AB64u;
    // 0x26ab64: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x26AB64u;
    {
        const bool branch_taken_0x26ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab64) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AB6Cu;
    // 0x26ab6c: 0x0  nop
    ctx->pc = 0x26ab6cu;
    // NOP
label_26ab70:
    // 0x26ab70: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x26AB70u;
    {
        const bool branch_taken_0x26ab70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB70u;
        // 0x26ab74: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab70) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AB78u;
    // 0x26ab78: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x26AB78u;
    {
        const bool branch_taken_0x26ab78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ab78) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AB80u;
    // 0x26ab80: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x26AB80u;
    {
        const bool branch_taken_0x26ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab80) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AB88u;
label_26ab88:
    // 0x26ab88: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x26AB88u;
    {
        const bool branch_taken_0x26ab88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB88u;
        // 0x26ab8c: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab88) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AB90u;
    // 0x26ab90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26AB90u;
    {
        const bool branch_taken_0x26ab90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB90u;
        // 0x26ab94: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab90) {
            ctx->pc = 0x26ABE8u;
            goto label_26abe8;
        }
    }
    ctx->pc = 0x26AB98u;
    // 0x26ab98: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x26ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x26ab9c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26AB9Cu;
    {
        const bool branch_taken_0x26ab9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB9Cu;
        // 0x26aba0: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab9c) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26ABA4u;
    // 0x26aba4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26ABA4u;
    {
        const bool branch_taken_0x26aba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABA4u;
        // 0x26aba8: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aba4) {
            ctx->pc = 0x26ABC8u;
            goto label_26abc8;
        }
    }
    ctx->pc = 0x26ABACu;
    // 0x26abac: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x26abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x26abb0: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x26ABB0u;
    {
        const bool branch_taken_0x26abb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABB0u;
        // 0x26abb4: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abb0) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26ABB8u;
    // 0x26abb8: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x26ABB8u;
    {
        const bool branch_taken_0x26abb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABB8u;
        // 0x26abbc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abb8) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26ABC0u;
    // 0x26abc0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x26ABC0u;
    {
        const bool branch_taken_0x26abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abc0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ABC8u;
label_26abc8:
    // 0x26abc8: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x26ABC8u;
    {
        const bool branch_taken_0x26abc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABC8u;
        // 0x26abcc: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abc8) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ABD0u;
    // 0x26abd0: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x26ABD0u;
    {
        const bool branch_taken_0x26abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABD0u;
        // 0x26abd4: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abd0) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26ABD8u;
    // 0x26abd8: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x26ABD8u;
    {
        const bool branch_taken_0x26abd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABD8u;
        // 0x26abdc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abd8) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26ABE0u;
    // 0x26abe0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x26ABE0u;
    {
        const bool branch_taken_0x26abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26abe0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ABE8u;
label_26abe8:
    // 0x26abe8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26ABE8u;
    {
        const bool branch_taken_0x26abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABE8u;
        // 0x26abec: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abe8) {
            ctx->pc = 0x26AC10u;
            goto label_26ac10;
        }
    }
    ctx->pc = 0x26ABF0u;
    // 0x26abf0: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x26abf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26abf4: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26ABF4u;
    {
        const bool branch_taken_0x26abf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABF4u;
        // 0x26abf8: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abf4) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26ABFCu;
    // 0x26abfc: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x26ABFCu;
    {
        const bool branch_taken_0x26abfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26abfc) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AC04u;
    // 0x26ac04: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26AC04u;
    {
        const bool branch_taken_0x26ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac04) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AC0Cu;
    // 0x26ac0c: 0x0  nop
    ctx->pc = 0x26ac0cu;
    // NOP
label_26ac10:
    // 0x26ac10: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26AC10u;
    {
        const bool branch_taken_0x26ac10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC10u;
        // 0x26ac14: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac10) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AC18u;
    // 0x26ac18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AC18u;
    {
        const bool branch_taken_0x26ac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC18u;
        // 0x26ac1c: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac18) {
            ctx->pc = 0x26AC38u;
            goto label_26ac38;
        }
    }
    ctx->pc = 0x26AC20u;
    // 0x26ac20: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x26ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26ac24: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26AC24u;
    {
        const bool branch_taken_0x26ac24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC24u;
        // 0x26ac28: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac24) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AC2Cu;
    // 0x26ac2c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x26AC2Cu;
    {
        const bool branch_taken_0x26ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac2c) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AC34u;
    // 0x26ac34: 0x0  nop
    ctx->pc = 0x26ac34u;
    // NOP
label_26ac38:
    // 0x26ac38: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26AC38u;
    {
        const bool branch_taken_0x26ac38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ac38) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AC40u;
    // 0x26ac40: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x26AC40u;
    {
        const bool branch_taken_0x26ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac40) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AC48u;
label_26ac48:
    // 0x26ac48: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x26AC48u;
    {
        const bool branch_taken_0x26ac48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC48u;
        // 0x26ac4c: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac48) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AC50u;
    // 0x26ac50: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26AC50u;
    {
        const bool branch_taken_0x26ac50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC50u;
        // 0x26ac54: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac50) {
            ctx->pc = 0x26AD10u;
            goto label_26ad10;
        }
    }
    ctx->pc = 0x26AC58u;
    // 0x26ac58: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x26ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x26ac5c: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x26AC5Cu;
    {
        const bool branch_taken_0x26ac5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC5Cu;
        // 0x26ac60: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac5c) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AC64u;
    // 0x26ac64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26AC64u;
    {
        const bool branch_taken_0x26ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC64u;
        // 0x26ac68: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac64) {
            ctx->pc = 0x26ACB0u;
            goto label_26acb0;
        }
    }
    ctx->pc = 0x26AC6Cu;
    // 0x26ac6c: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x26ac6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x26ac70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AC70u;
    {
        const bool branch_taken_0x26ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC70u;
        // 0x26ac74: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac70) {
            ctx->pc = 0x26AC98u;
            goto label_26ac98;
        }
    }
    ctx->pc = 0x26AC78u;
    // 0x26ac78: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x26ac78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x26ac7c: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x26AC7Cu;
    {
        const bool branch_taken_0x26ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC7Cu;
        // 0x26ac80: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac7c) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AC84u;
    // 0x26ac84: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26AC84u;
    {
        const bool branch_taken_0x26ac84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ac84) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AC8Cu;
    // 0x26ac8c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x26AC8Cu;
    {
        const bool branch_taken_0x26ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ac8c) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AC94u;
    // 0x26ac94: 0x0  nop
    ctx->pc = 0x26ac94u;
    // NOP
label_26ac98:
    // 0x26ac98: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x26AC98u;
    {
        const bool branch_taken_0x26ac98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC98u;
        // 0x26ac9c: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac98) {
            ctx->pc = 0x26B080u;
            goto label_26b080;
        }
    }
    ctx->pc = 0x26ACA0u;
    // 0x26aca0: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x26ACA0u;
    {
        const bool branch_taken_0x26aca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACA0u;
        // 0x26aca4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aca0) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26ACA8u;
    // 0x26aca8: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x26ACA8u;
    {
        const bool branch_taken_0x26aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aca8) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ACB0u;
label_26acb0:
    // 0x26acb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26ACB0u;
    {
        const bool branch_taken_0x26acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACB0u;
        // 0x26acb4: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acb0) {
            ctx->pc = 0x26ACD8u;
            goto label_26acd8;
        }
    }
    ctx->pc = 0x26ACB8u;
    // 0x26acb8: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x26acb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x26acbc: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x26ACBCu;
    {
        const bool branch_taken_0x26acbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACBCu;
        // 0x26acc0: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acbc) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26ACC4u;
    // 0x26acc4: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x26ACC4u;
    {
        const bool branch_taken_0x26acc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26acc4) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26ACCCu;
    // 0x26accc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x26ACCCu;
    {
        const bool branch_taken_0x26accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26accc) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ACD4u;
    // 0x26acd4: 0x0  nop
    ctx->pc = 0x26acd4u;
    // NOP
label_26acd8:
    // 0x26acd8: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x26ACD8u;
    {
        const bool branch_taken_0x26acd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACD8u;
        // 0x26acdc: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acd8) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26ACE0u;
    // 0x26ace0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26ACE0u;
    {
        const bool branch_taken_0x26ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACE0u;
        // 0x26ace4: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ace0) {
            ctx->pc = 0x26AD00u;
            goto label_26ad00;
        }
    }
    ctx->pc = 0x26ACE8u;
    // 0x26ace8: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x26ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x26acec: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26ACECu;
    {
        const bool branch_taken_0x26acec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACECu;
        // 0x26acf0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acec) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26ACF4u;
    // 0x26acf4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26ACF4u;
    {
        const bool branch_taken_0x26acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26acf4) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ACFCu;
    // 0x26acfc: 0x0  nop
    ctx->pc = 0x26acfcu;
    // NOP
label_26ad00:
    // 0x26ad00: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x26AD00u;
    {
        const bool branch_taken_0x26ad00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ad00) {
            ctx->pc = 0x26AD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26AD00u;
            // 0x26ad04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AD08u;
    // 0x26ad08: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x26AD08u;
    {
        const bool branch_taken_0x26ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad08) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AD10u;
label_26ad10:
    // 0x26ad10: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26AD10u;
    {
        const bool branch_taken_0x26ad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD10u;
        // 0x26ad14: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad10) {
            ctx->pc = 0x26AD68u;
            goto label_26ad68;
        }
    }
    ctx->pc = 0x26AD18u;
    // 0x26ad18: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x26ad18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x26ad1c: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x26AD1Cu;
    {
        const bool branch_taken_0x26ad1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD1Cu;
        // 0x26ad20: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad1c) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AD24u;
    // 0x26ad24: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26AD24u;
    {
        const bool branch_taken_0x26ad24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD24u;
        // 0x26ad28: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad24) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AD2Cu;
    // 0x26ad2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AD2Cu;
    {
        const bool branch_taken_0x26ad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD2Cu;
        // 0x26ad30: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad2c) {
            ctx->pc = 0x26AD50u;
            goto label_26ad50;
        }
    }
    ctx->pc = 0x26AD34u;
    // 0x26ad34: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x26ad34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x26ad38: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26AD38u;
    {
        const bool branch_taken_0x26ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD38u;
        // 0x26ad3c: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad38) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AD40u;
    // 0x26ad40: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x26AD40u;
    {
        const bool branch_taken_0x26ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ad40) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AD48u;
    // 0x26ad48: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x26AD48u;
    {
        const bool branch_taken_0x26ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad48) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AD50u;
label_26ad50:
    // 0x26ad50: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26AD50u;
    {
        const bool branch_taken_0x26ad50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD50u;
        // 0x26ad54: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad50) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AD58u;
    // 0x26ad58: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x26AD58u;
    {
        const bool branch_taken_0x26ad58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ad58) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AD60u;
    // 0x26ad60: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x26AD60u;
    {
        const bool branch_taken_0x26ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad60) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AD68u;
label_26ad68:
    // 0x26ad68: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x26AD68u;
    {
        const bool branch_taken_0x26ad68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD68u;
        // 0x26ad6c: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad68) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AD70u;
    // 0x26ad70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AD70u;
    {
        const bool branch_taken_0x26ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD70u;
        // 0x26ad74: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad70) {
            ctx->pc = 0x26AD98u;
            goto label_26ad98;
        }
    }
    ctx->pc = 0x26AD78u;
    // 0x26ad78: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x26ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x26ad7c: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x26AD7Cu;
    {
        const bool branch_taken_0x26ad7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD7Cu;
        // 0x26ad80: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad7c) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AD84u;
    // 0x26ad84: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x26AD84u;
    {
        const bool branch_taken_0x26ad84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD84u;
        // 0x26ad88: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad84) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AD8Cu;
    // 0x26ad8c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x26AD8Cu;
    {
        const bool branch_taken_0x26ad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad8c) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AD94u;
    // 0x26ad94: 0x0  nop
    ctx->pc = 0x26ad94u;
    // NOP
label_26ad98:
    // 0x26ad98: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x26AD98u;
    {
        const bool branch_taken_0x26ad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD98u;
        // 0x26ad9c: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad98) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ADA0u;
    // 0x26ada0: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26ADA0u;
    {
        const bool branch_taken_0x26ada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ada0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26ADA8u;
    // 0x26ada8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26ADA8u;
    {
        const bool branch_taken_0x26ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ada8) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26ADB0u;
label_26adb0:
    // 0x26adb0: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x26ADB0u;
    {
        const bool branch_taken_0x26adb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADB0u;
        // 0x26adb4: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adb0) {
            ctx->pc = 0x26B0B0u;
            goto label_26b0b0;
        }
    }
    ctx->pc = 0x26ADB8u;
    // 0x26adb8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26ADB8u;
    {
        const bool branch_taken_0x26adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADB8u;
        // 0x26adbc: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adb8) {
            ctx->pc = 0x26AF10u;
            goto label_26af10;
        }
    }
    ctx->pc = 0x26ADC0u;
    // 0x26adc0: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x26adc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x26adc4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26ADC4u;
    {
        const bool branch_taken_0x26adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADC4u;
        // 0x26adc8: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adc4) {
            ctx->pc = 0x26AE68u;
            goto label_26ae68;
        }
    }
    ctx->pc = 0x26ADCCu;
    // 0x26adcc: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x26adccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x26add0: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x26ADD0u;
    {
        const bool branch_taken_0x26add0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADD0u;
        // 0x26add4: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26add0) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26ADD8u;
    // 0x26add8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26ADD8u;
    {
        const bool branch_taken_0x26add8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADD8u;
        // 0x26addc: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26add8) {
            ctx->pc = 0x26AE20u;
            goto label_26ae20;
        }
    }
    ctx->pc = 0x26ADE0u;
    // 0x26ade0: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x26ade0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x26ade4: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x26ADE4u;
    {
        const bool branch_taken_0x26ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADE4u;
        // 0x26ade8: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ade4) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26ADECu;
    // 0x26adec: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x26ADECu;
    {
        const bool branch_taken_0x26adec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADECu;
        // 0x26adf0: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adec) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26ADF4u;
    // 0x26adf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26ADF4u;
    {
        const bool branch_taken_0x26adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADF4u;
        // 0x26adf8: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adf4) {
            ctx->pc = 0x26AE10u;
            goto label_26ae10;
        }
    }
    ctx->pc = 0x26ADFCu;
    // 0x26adfc: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x26adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x26ae00: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x26AE00u;
    {
        const bool branch_taken_0x26ae00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE00u;
        // 0x26ae04: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae00) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AE08u;
    // 0x26ae08: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x26AE08u;
    {
        const bool branch_taken_0x26ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae08) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AE10u;
label_26ae10:
    // 0x26ae10: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26AE10u;
    {
        const bool branch_taken_0x26ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ae10) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AE18u;
    // 0x26ae18: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x26AE18u;
    {
        const bool branch_taken_0x26ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae18) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AE20u;
label_26ae20:
    // 0x26ae20: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26AE20u;
    {
        const bool branch_taken_0x26ae20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE20u;
        // 0x26ae24: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae20) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AE28u;
    // 0x26ae28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AE28u;
    {
        const bool branch_taken_0x26ae28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE28u;
        // 0x26ae2c: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae28) {
            ctx->pc = 0x26AE50u;
            goto label_26ae50;
        }
    }
    ctx->pc = 0x26AE30u;
    // 0x26ae30: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x26ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x26ae34: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26AE34u;
    {
        const bool branch_taken_0x26ae34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE34u;
        // 0x26ae38: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae34) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AE3Cu;
    // 0x26ae3c: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x26AE3Cu;
    {
        const bool branch_taken_0x26ae3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE3Cu;
        // 0x26ae40: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae3c) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AE44u;
    // 0x26ae44: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26AE44u;
    {
        const bool branch_taken_0x26ae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae44) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AE4Cu;
    // 0x26ae4c: 0x0  nop
    ctx->pc = 0x26ae4cu;
    // NOP
label_26ae50:
    // 0x26ae50: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x26AE50u;
    {
        const bool branch_taken_0x26ae50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE50u;
        // 0x26ae54: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae50) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AE58u;
    // 0x26ae58: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26AE58u;
    {
        const bool branch_taken_0x26ae58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ae58) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AE60u;
    // 0x26ae60: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26AE60u;
    {
        const bool branch_taken_0x26ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ae60) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AE68u;
label_26ae68:
    // 0x26ae68: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x26AE68u;
    {
        const bool branch_taken_0x26ae68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE68u;
        // 0x26ae6c: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae68) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AE70u;
    // 0x26ae70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26AE70u;
    {
        const bool branch_taken_0x26ae70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE70u;
        // 0x26ae74: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae70) {
            ctx->pc = 0x26AEC8u;
            goto label_26aec8;
        }
    }
    ctx->pc = 0x26AE78u;
    // 0x26ae78: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x26ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x26ae7c: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x26AE7Cu;
    {
        const bool branch_taken_0x26ae7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE7Cu;
        // 0x26ae80: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae7c) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AE84u;
    // 0x26ae84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26AE84u;
    {
        const bool branch_taken_0x26ae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE84u;
        // 0x26ae88: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae84) {
            ctx->pc = 0x26AEA8u;
            goto label_26aea8;
        }
    }
    ctx->pc = 0x26AE8Cu;
    // 0x26ae8c: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x26ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x26ae90: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26AE90u;
    {
        const bool branch_taken_0x26ae90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE90u;
        // 0x26ae94: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae90) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AE98u;
    // 0x26ae98: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x26AE98u;
    {
        const bool branch_taken_0x26ae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE98u;
        // 0x26ae9c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae98) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AEA0u;
    // 0x26aea0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x26AEA0u;
    {
        const bool branch_taken_0x26aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aea0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AEA8u;
label_26aea8:
    // 0x26aea8: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x26AEA8u;
    {
        const bool branch_taken_0x26aea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEA8u;
        // 0x26aeac: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aea8) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AEB0u;
    // 0x26aeb0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x26AEB0u;
    {
        const bool branch_taken_0x26aeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEB0u;
        // 0x26aeb4: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aeb0) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AEB8u;
    // 0x26aeb8: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26AEB8u;
    {
        const bool branch_taken_0x26aeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEB8u;
        // 0x26aebc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aeb8) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AEC0u;
    // 0x26aec0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26AEC0u;
    {
        const bool branch_taken_0x26aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aec0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AEC8u;
label_26aec8:
    // 0x26aec8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AEC8u;
    {
        const bool branch_taken_0x26aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEC8u;
        // 0x26aecc: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aec8) {
            ctx->pc = 0x26AEF0u;
            goto label_26aef0;
        }
    }
    ctx->pc = 0x26AED0u;
    // 0x26aed0: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x26aed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x26aed4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x26AED4u;
    {
        const bool branch_taken_0x26aed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AED4u;
        // 0x26aed8: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aed4) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AEDCu;
    // 0x26aedc: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26AEDCu;
    {
        const bool branch_taken_0x26aedc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26aedc) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AEE4u;
    // 0x26aee4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26AEE4u;
    {
        const bool branch_taken_0x26aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aee4) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AEECu;
    // 0x26aeec: 0x0  nop
    ctx->pc = 0x26aeecu;
    // NOP
label_26aef0:
    // 0x26aef0: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26AEF0u;
    {
        const bool branch_taken_0x26aef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEF0u;
        // 0x26aef4: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aef0) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AEF8u;
    // 0x26aef8: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x26AEF8u;
    {
        const bool branch_taken_0x26aef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AEF8u;
        // 0x26aefc: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aef8) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AF00u;
    // 0x26af00: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26AF00u;
    {
        const bool branch_taken_0x26af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26af00) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AF08u;
    // 0x26af08: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26AF08u;
    {
        const bool branch_taken_0x26af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af08) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AF10u;
label_26af10:
    // 0x26af10: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26AF10u;
    {
        const bool branch_taken_0x26af10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF10u;
        // 0x26af14: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af10) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AF18u;
    // 0x26af18: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26AF18u;
    {
        const bool branch_taken_0x26af18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF18u;
        // 0x26af1c: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af18) {
            ctx->pc = 0x26AFD0u;
            goto label_26afd0;
        }
    }
    ctx->pc = 0x26AF20u;
    // 0x26af20: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x26af20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26af24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26AF24u;
    {
        const bool branch_taken_0x26af24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF24u;
        // 0x26af28: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af24) {
            ctx->pc = 0x26AF78u;
            goto label_26af78;
        }
    }
    ctx->pc = 0x26AF2Cu;
    // 0x26af2c: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x26af2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x26af30: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x26AF30u;
    {
        const bool branch_taken_0x26af30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF30u;
        // 0x26af34: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af30) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AF38u;
    // 0x26af38: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26AF38u;
    {
        const bool branch_taken_0x26af38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF38u;
        // 0x26af3c: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af38) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AF40u;
    // 0x26af40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AF40u;
    {
        const bool branch_taken_0x26af40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF40u;
        // 0x26af44: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af40) {
            ctx->pc = 0x26AF60u;
            goto label_26af60;
        }
    }
    ctx->pc = 0x26AF48u;
    // 0x26af48: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x26af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x26af4c: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x26AF4Cu;
    {
        const bool branch_taken_0x26af4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26af4c) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AF54u;
    // 0x26af54: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26AF54u;
    {
        const bool branch_taken_0x26af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af54) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AF5Cu;
    // 0x26af5c: 0x0  nop
    ctx->pc = 0x26af5cu;
    // NOP
label_26af60:
    // 0x26af60: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26AF60u;
    {
        const bool branch_taken_0x26af60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF60u;
        // 0x26af64: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af60) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AF68u;
    // 0x26af68: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26AF68u;
    {
        const bool branch_taken_0x26af68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26af68) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AF70u;
    // 0x26af70: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26AF70u;
    {
        const bool branch_taken_0x26af70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af70) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AF78u;
label_26af78:
    // 0x26af78: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26AF78u;
    {
        const bool branch_taken_0x26af78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF78u;
        // 0x26af7c: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af78) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26AF80u;
    // 0x26af80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AF80u;
    {
        const bool branch_taken_0x26af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF80u;
        // 0x26af84: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af80) {
            ctx->pc = 0x26AFA8u;
            goto label_26afa8;
        }
    }
    ctx->pc = 0x26AF88u;
    // 0x26af88: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x26af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x26af8c: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26AF8Cu;
    {
        const bool branch_taken_0x26af8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF8Cu;
        // 0x26af90: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af8c) {
            ctx->pc = 0x26B098u;
            goto label_26b098;
        }
    }
    ctx->pc = 0x26AF94u;
    // 0x26af94: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26AF94u;
    {
        const bool branch_taken_0x26af94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF94u;
        // 0x26af98: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af94) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26AF9Cu;
    // 0x26af9c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26AF9Cu;
    {
        const bool branch_taken_0x26af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26af9c) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AFA4u;
    // 0x26afa4: 0x0  nop
    ctx->pc = 0x26afa4u;
    // NOP
label_26afa8:
    // 0x26afa8: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26AFA8u;
    {
        const bool branch_taken_0x26afa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFA8u;
        // 0x26afac: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afa8) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AFB0u;
    // 0x26afb0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26AFB0u;
    {
        const bool branch_taken_0x26afb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFB0u;
        // 0x26afb4: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afb0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AFB8u;
    // 0x26afb8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26AFB8u;
    {
        const bool branch_taken_0x26afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFB8u;
        // 0x26afbc: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afb8) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AFC0u;
    // 0x26afc0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26AFC0u;
    {
        const bool branch_taken_0x26afc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26afc0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26AFC8u;
    // 0x26afc8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26AFC8u;
    {
        const bool branch_taken_0x26afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26afc8) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AFD0u;
label_26afd0:
    // 0x26afd0: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26AFD0u;
    {
        const bool branch_taken_0x26afd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFD0u;
        // 0x26afd4: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afd0) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26AFD8u;
    // 0x26afd8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26AFD8u;
    {
        const bool branch_taken_0x26afd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFD8u;
        // 0x26afdc: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afd8) {
            ctx->pc = 0x26B028u;
            goto label_26b028;
        }
    }
    ctx->pc = 0x26AFE0u;
    // 0x26afe0: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x26afe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26afe4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26AFE4u;
    {
        const bool branch_taken_0x26afe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFE4u;
        // 0x26afe8: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26afe4) {
            ctx->pc = 0x26B010u;
            goto label_26b010;
        }
    }
    ctx->pc = 0x26AFECu;
    // 0x26afec: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26afecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x26aff0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26AFF0u;
    {
        const bool branch_taken_0x26aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFF0u;
        // 0x26aff4: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aff0) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26AFF8u;
    // 0x26aff8: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26AFF8u;
    {
        const bool branch_taken_0x26aff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFF8u;
        // 0x26affc: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aff8) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26B000u;
    // 0x26b000: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26B000u;
    {
        const bool branch_taken_0x26b000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b000) {
            ctx->pc = 0x26B0F8u;
            goto label_26b0f8;
        }
    }
    ctx->pc = 0x26B008u;
    // 0x26b008: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26B008u;
    {
        const bool branch_taken_0x26b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b008) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B010u;
label_26b010:
    // 0x26b010: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26B010u;
    {
        const bool branch_taken_0x26b010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B010u;
        // 0x26b014: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b010) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26B018u;
    // 0x26b018: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B018u;
    {
        const bool branch_taken_0x26b018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B018u;
        // 0x26b01c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b018) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26B020u;
    // 0x26b020: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26B020u;
    {
        const bool branch_taken_0x26b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b020) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B028u;
label_26b028:
    // 0x26b028: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26b028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26b02c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B02Cu;
    {
        const bool branch_taken_0x26b02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B02Cu;
        // 0x26b030: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b02c) {
            ctx->pc = 0x26B068u;
            goto label_26b068;
        }
    }
    ctx->pc = 0x26B034u;
    // 0x26b034: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x26b038: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26b038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26b03c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B03Cu;
    {
        const bool branch_taken_0x26b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B03Cu;
        // 0x26b040: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b03c) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26B044u;
    // 0x26b044: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26b044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26b048: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26B048u;
    {
        const bool branch_taken_0x26b048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B048u;
        // 0x26b04c: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b048) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B050u;
    // 0x26b050: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26b050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26b054: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26B054u;
    {
        const bool branch_taken_0x26b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b054) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B05Cu;
    // 0x26b05c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26B05Cu;
    {
        const bool branch_taken_0x26b05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b05c) {
            ctx->pc = 0x26B0E0u;
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26B064u;
    // 0x26b064: 0x0  nop
    ctx->pc = 0x26b064u;
    // NOP
label_26b068:
    // 0x26b068: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26B068u;
    {
        const bool branch_taken_0x26b068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B068u;
        // 0x26b06c: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b068) {
            ctx->pc = 0x26B0B8u;
            goto label_26b0b8;
        }
    }
    ctx->pc = 0x26B070u;
    // 0x26b070: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26B070u;
    {
        const bool branch_taken_0x26b070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B070u;
        // 0x26b074: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b070) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26B078u;
    // 0x26b078: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26B078u;
    {
        const bool branch_taken_0x26b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b078) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B080u;
label_26b080:
    // 0x26b080: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B080u;
    SET_GPR_U32(ctx, 31, 0x26B088u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B080u, 0x26B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B088u;
label_26b088:
    // 0x26b088: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x26b088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x26b08c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26B08Cu;
    {
        const bool branch_taken_0x26b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B08Cu;
        // 0x26b090: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b08c) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B094u;
    // 0x26b094: 0x0  nop
    ctx->pc = 0x26b094u;
    // NOP
label_26b098:
    // 0x26b098: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B098u;
    SET_GPR_U32(ctx, 31, 0x26B0A0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B098u, 0x26B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0A0u;
label_26b0a0:
    // 0x26b0a0: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x26b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26b0a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26B0A4u;
    {
        const bool branch_taken_0x26b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0A4u;
        // 0x26b0a8: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0a4) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B0ACu;
    // 0x26b0ac: 0x0  nop
    ctx->pc = 0x26b0acu;
    // NOP
label_26b0b0:
    // 0x26b0b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26B0B0u;
    {
        const bool branch_taken_0x26b0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0B0u;
        // 0x26b0b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0b0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B0B8u;
label_26b0b8:
    // 0x26b0b8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26b0bc:
    // 0x26b0bc: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26b0c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26B0C0u;
    {
        const bool branch_taken_0x26b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0C0u;
        // 0x26b0c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0c0) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B0C8u;
    // 0x26b0c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B0C8u;
    SET_GPR_U32(ctx, 31, 0x26B0D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B0C8u, 0x26B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0D0u;
label_26b0d0:
    // 0x26b0d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26b0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26b0d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26B0D4u;
    {
        const bool branch_taken_0x26b0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0D4u;
        // 0x26b0d8: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0d4) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B0DCu;
    // 0x26b0dc: 0x0  nop
    ctx->pc = 0x26b0dcu;
    // NOP
label_26b0e0:
    // 0x26b0e0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B0E0u;
    SET_GPR_U32(ctx, 31, 0x26B0E8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B0E0u, 0x26B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0E8u;
label_26b0e8:
    // 0x26b0e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26b0ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B0ECu;
    {
        const bool branch_taken_0x26b0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B0ECu;
        // 0x26b0f0: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0ec) {
            ctx->pc = 0x26B108u;
            goto label_26b108;
        }
    }
    ctx->pc = 0x26B0F4u;
    // 0x26b0f4: 0x0  nop
    ctx->pc = 0x26b0f4u;
    // NOP
label_26b0f8:
    // 0x26b0f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B0F8u;
    SET_GPR_U32(ctx, 31, 0x26B100u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B0F8u, 0x26B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B100u;
label_26b100:
    // 0x26b100: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26b100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26b104: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26b104u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_26b108:
    // 0x26b108: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B108u;
    {
        const bool branch_taken_0x26b108 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B108u;
        // 0x26b10c: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b108) {
            ctx->pc = 0x26B120u;
            goto label_26b120;
        }
    }
    ctx->pc = 0x26B110u;
    // 0x26b110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b114: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26B114u;
    SET_GPR_U32(ctx, 31, 0x26B11Cu);
    ctx->pc = 0x26B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B114u;
    // 0x26b118: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26B114u, 0x26B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B11Cu;
label_26b11c:
    // 0x26b11c: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x26b11cu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26b120:
    // 0x26b120: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B120u;
    {
        const bool branch_taken_0x26b120 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B120u;
        // 0x26b124: 0x2ac200b4  slti        $v0, $s6, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b120) {
            ctx->pc = 0x26B164u;
            goto label_26b164;
        }
    }
    ctx->pc = 0x26B128u;
    // 0x26b128: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x26B128u;
    {
        const bool branch_taken_0x26b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b128) {
            ctx->pc = 0x26B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B128u;
            // 0x26b12c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B18Cu;
            goto label_26b18c;
        }
    }
    ctx->pc = 0x26B130u;
    // 0x26b130: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26b130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26b134: 0xc09905e  jal         func_264178
    ctx->pc = 0x26B134u;
    SET_GPR_U32(ctx, 31, 0x26B13Cu);
    ctx->pc = 0x26B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B134u;
    // 0x26b138: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26B134u, 0x26B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B13Cu;
label_26b13c:
    // 0x26b13c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x26b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x26b140: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x26b140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x26b144: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x26b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26b148: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26b148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26b14c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B14Cu;
    {
        const bool branch_taken_0x26b14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b14c) {
            ctx->pc = 0x26B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B14Cu;
            // 0x26b150: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B168u;
            goto label_26b168;
        }
    }
    ctx->pc = 0x26B154u;
    // 0x26b154: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x26b154u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x26b158: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x26b15c: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x26b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x26b160: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_26b164:
    // 0x26b164: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_26b168:
    // 0x26b168: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x26b168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26b16c: 0x1440fe3c  bnez        $v0, . + 4 + (-0x1C4 << 2)
    ctx->pc = 0x26B16Cu;
    {
        const bool branch_taken_0x26b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B16Cu;
        // 0x26b170: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b16c) {
            ctx->pc = 0x26AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26aa60;
        }
    }
    ctx->pc = 0x26B174u;
label_26b174:
    // 0x26b174: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x26b178: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26b178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b17c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26b17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b180: 0x1462fe27  bne         $v1, $v0, . + 4 + (-0x1D9 << 2)
    ctx->pc = 0x26B180u;
    {
        const bool branch_taken_0x26b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B180u;
        // 0x26b184: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b180) {
            ctx->pc = 0x26AA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26aa20;
        }
    }
    ctx->pc = 0x26B188u;
label_26b188:
    // 0x26b188: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x26b188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26b18c:
    // 0x26b18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26b190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26b194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26b194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26b198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26b19c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26b19cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b1a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26b1a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26b1a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26b1a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b1a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x26b1a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b1ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26b1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26B1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1B0u;
        // 0x26b1b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B1B8u;
    // 0x26b1b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26b1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26b1bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26b1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b1c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26b1c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26b1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26b1cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26b1d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26b1d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26b1d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26b1dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x26b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x26b1e0: 0x8f92aa7c  lw          $s2, -0x5584($gp)
    ctx->pc = 0x26b1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26b1e4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x26b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x26b1e8: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x26b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x26b1ec: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26b1f0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x26b1f4: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x26b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26b1f8: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x26b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x26b1fc: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x26b1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x26b200: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26b200u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b204: 0x106501d4  beq         $v1, $a1, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x26B204u;
    {
        const bool branch_taken_0x26b204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B204u;
        // 0x26b208: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b204) {
            ctx->pc = 0x26B958u;
            goto label_26b958;
        }
    }
    ctx->pc = 0x26B20Cu;
    // 0x26b20c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x26b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_26b210:
    // 0x26b210: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26B210u;
    {
        const bool branch_taken_0x26b210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b210) {
            ctx->pc = 0x26B214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B210u;
            // 0x26b214: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B240u;
            goto label_26b240;
        }
    }
    ctx->pc = 0x26B218u;
    // 0x26b218: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26b21c: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26b21cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26b220: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26b220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26b224: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26b224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26b228: 0x96330014  lhu         $s3, 0x14($s1)
    ctx->pc = 0x26b228u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26b22c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26b230: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26b234: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26b234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26b238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B238u;
    {
        const bool branch_taken_0x26b238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B238u;
        // 0x26b23c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b238) {
            ctx->pc = 0x26B244u;
            goto label_26b244;
        }
    }
    ctx->pc = 0x26B240u;
label_26b240:
    // 0x26b240: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26b240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b244:
    // 0x26b244: 0x126001bf  beqz        $s3, . + 4 + (0x1BF << 2)
    ctx->pc = 0x26B244u;
    {
        const bool branch_taken_0x26b244 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B244u;
        // 0x26b248: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b244) {
            ctx->pc = 0x26B944u;
            goto label_26b944;
        }
    }
    ctx->pc = 0x26B24Cu;
    // 0x26b24c: 0x0  nop
    ctx->pc = 0x26b24cu;
    // NOP
label_26b250:
    // 0x26b250: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x26b250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x26b254: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26b254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26b258: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26b258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26b25c: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x26B25Cu;
    {
        const bool branch_taken_0x26b25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B25Cu;
        // 0x26b260: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b25c) {
            ctx->pc = 0x26B910u;
            goto label_26b910;
        }
    }
    ctx->pc = 0x26B264u;
    // 0x26b264: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x26b264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x26b268: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26b268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b26c: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26B26Cu;
    {
        const bool branch_taken_0x26b26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B26Cu;
        // 0x26b270: 0x24063ff8  addiu       $a2, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b26c) {
            ctx->pc = 0x26B910u;
            goto label_26b910;
        }
    }
    ctx->pc = 0x26B274u;
    // 0x26b274: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26b278: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x26b278u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26b27c: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x26b27cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x26b280: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26b280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26b284: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26b28c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b290: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26b294: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26b298: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26b298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26b29c: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x26B29Cu;
    {
        const bool branch_taken_0x26b29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B29Cu;
        // 0x26b2a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b29c) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B2A4u;
    // 0x26b2a4: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x26b2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x26b2a8: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26B2A8u;
    {
        const bool branch_taken_0x26b2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2A8u;
        // 0x26b2ac: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2a8) {
            ctx->pc = 0x26B5A0u;
            goto label_26b5a0;
        }
    }
    ctx->pc = 0x26B2B0u;
    // 0x26b2b0: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x26b2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x26b2b4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x26B2B4u;
    {
        const bool branch_taken_0x26b2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2B4u;
        // 0x26b2b8: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2b4) {
            ctx->pc = 0x26B438u;
            goto label_26b438;
        }
    }
    ctx->pc = 0x26B2BCu;
    // 0x26b2bc: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x26b2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x26b2c0: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x26B2C0u;
    {
        const bool branch_taken_0x26b2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2C0u;
        // 0x26b2c4: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2c0) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B2C8u;
    // 0x26b2c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26B2C8u;
    {
        const bool branch_taken_0x26b2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2C8u;
        // 0x26b2cc: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2c8) {
            ctx->pc = 0x26B378u;
            goto label_26b378;
        }
    }
    ctx->pc = 0x26B2D0u;
    // 0x26b2d0: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x26b2d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x26b2d4: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x26B2D4u;
    {
        const bool branch_taken_0x26b2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2D4u;
        // 0x26b2d8: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2d4) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B2DCu;
    // 0x26b2dc: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x26B2DCu;
    {
        const bool branch_taken_0x26b2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2DCu;
        // 0x26b2e0: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2dc) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B2E4u;
    // 0x26b2e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26B2E4u;
    {
        const bool branch_taken_0x26b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2E4u;
        // 0x26b2e8: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2e4) {
            ctx->pc = 0x26B330u;
            goto label_26b330;
        }
    }
    ctx->pc = 0x26B2ECu;
    // 0x26b2ec: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x26b2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26b2f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B2F0u;
    {
        const bool branch_taken_0x26b2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2F0u;
        // 0x26b2f4: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2f0) {
            ctx->pc = 0x26B318u;
            goto label_26b318;
        }
    }
    ctx->pc = 0x26B2F8u;
    // 0x26b2f8: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x26b2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x26b2fc: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x26B2FCu;
    {
        const bool branch_taken_0x26b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2FCu;
        // 0x26b300: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2fc) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B304u;
    // 0x26b304: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x26B304u;
    {
        const bool branch_taken_0x26b304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b304) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B30Cu;
    // 0x26b30c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x26B30Cu;
    {
        const bool branch_taken_0x26b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b30c) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B314u;
    // 0x26b314: 0x0  nop
    ctx->pc = 0x26b314u;
    // NOP
label_26b318:
    // 0x26b318: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x26B318u;
    {
        const bool branch_taken_0x26b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B318u;
        // 0x26b31c: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b318) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B320u;
    // 0x26b320: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x26B320u;
    {
        const bool branch_taken_0x26b320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b320) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B328u;
    // 0x26b328: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x26B328u;
    {
        const bool branch_taken_0x26b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b328) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B330u;
label_26b330:
    // 0x26b330: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x26B330u;
    {
        const bool branch_taken_0x26b330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B330u;
        // 0x26b334: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b330) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B338u;
    // 0x26b338: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B338u;
    {
        const bool branch_taken_0x26b338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B338u;
        // 0x26b33c: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b338) {
            ctx->pc = 0x26B360u;
            goto label_26b360;
        }
    }
    ctx->pc = 0x26B340u;
    // 0x26b340: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x26b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x26b344: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26B344u;
    {
        const bool branch_taken_0x26b344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B344u;
        // 0x26b348: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b344) {
            ctx->pc = 0x26B8A0u;
            goto label_26b8a0;
        }
    }
    ctx->pc = 0x26B34Cu;
    // 0x26b34c: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x26B34Cu;
    {
        const bool branch_taken_0x26b34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B34Cu;
        // 0x26b350: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b34c) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B354u;
    // 0x26b354: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x26B354u;
    {
        const bool branch_taken_0x26b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b354) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B35Cu;
    // 0x26b35c: 0x0  nop
    ctx->pc = 0x26b35cu;
    // NOP
label_26b360:
    // 0x26b360: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x26B360u;
    {
        const bool branch_taken_0x26b360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B360u;
        // 0x26b364: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b360) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B368u;
    // 0x26b368: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x26B368u;
    {
        const bool branch_taken_0x26b368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b368) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B370u;
    // 0x26b370: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x26B370u;
    {
        const bool branch_taken_0x26b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b370) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B378u;
label_26b378:
    // 0x26b378: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x26B378u;
    {
        const bool branch_taken_0x26b378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B378u;
        // 0x26b37c: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b378) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B380u;
    // 0x26b380: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26B380u;
    {
        const bool branch_taken_0x26b380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B380u;
        // 0x26b384: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b380) {
            ctx->pc = 0x26B3D8u;
            goto label_26b3d8;
        }
    }
    ctx->pc = 0x26B388u;
    // 0x26b388: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x26b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x26b38c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26B38Cu;
    {
        const bool branch_taken_0x26b38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B38Cu;
        // 0x26b390: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b38c) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B394u;
    // 0x26b394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B394u;
    {
        const bool branch_taken_0x26b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B394u;
        // 0x26b398: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b394) {
            ctx->pc = 0x26B3B8u;
            goto label_26b3b8;
        }
    }
    ctx->pc = 0x26B39Cu;
    // 0x26b39c: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x26b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x26b3a0: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x26B3A0u;
    {
        const bool branch_taken_0x26b3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3A0u;
        // 0x26b3a4: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3a0) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B3A8u;
    // 0x26b3a8: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x26B3A8u;
    {
        const bool branch_taken_0x26b3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3A8u;
        // 0x26b3ac: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3a8) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B3B0u;
    // 0x26b3b0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x26B3B0u;
    {
        const bool branch_taken_0x26b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b3b0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B3B8u;
label_26b3b8:
    // 0x26b3b8: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x26B3B8u;
    {
        const bool branch_taken_0x26b3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3B8u;
        // 0x26b3bc: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3b8) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B3C0u;
    // 0x26b3c0: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x26B3C0u;
    {
        const bool branch_taken_0x26b3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3C0u;
        // 0x26b3c4: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3c0) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B3C8u;
    // 0x26b3c8: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x26B3C8u;
    {
        const bool branch_taken_0x26b3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3C8u;
        // 0x26b3cc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3c8) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B3D0u;
    // 0x26b3d0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x26B3D0u;
    {
        const bool branch_taken_0x26b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b3d0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B3D8u;
label_26b3d8:
    // 0x26b3d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B3D8u;
    {
        const bool branch_taken_0x26b3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3D8u;
        // 0x26b3dc: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3d8) {
            ctx->pc = 0x26B400u;
            goto label_26b400;
        }
    }
    ctx->pc = 0x26B3E0u;
    // 0x26b3e0: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x26b3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26b3e4: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26B3E4u;
    {
        const bool branch_taken_0x26b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B3E4u;
        // 0x26b3e8: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3e4) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B3ECu;
    // 0x26b3ec: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x26B3ECu;
    {
        const bool branch_taken_0x26b3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b3ec) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B3F4u;
    // 0x26b3f4: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26B3F4u;
    {
        const bool branch_taken_0x26b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b3f4) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B3FCu;
    // 0x26b3fc: 0x0  nop
    ctx->pc = 0x26b3fcu;
    // NOP
label_26b400:
    // 0x26b400: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26B400u;
    {
        const bool branch_taken_0x26b400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B400u;
        // 0x26b404: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b400) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B408u;
    // 0x26b408: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B408u;
    {
        const bool branch_taken_0x26b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B408u;
        // 0x26b40c: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b408) {
            ctx->pc = 0x26B428u;
            goto label_26b428;
        }
    }
    ctx->pc = 0x26B410u;
    // 0x26b410: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x26b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26b414: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26B414u;
    {
        const bool branch_taken_0x26b414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B414u;
        // 0x26b418: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b414) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B41Cu;
    // 0x26b41c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x26B41Cu;
    {
        const bool branch_taken_0x26b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b41c) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B424u;
    // 0x26b424: 0x0  nop
    ctx->pc = 0x26b424u;
    // NOP
label_26b428:
    // 0x26b428: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26B428u;
    {
        const bool branch_taken_0x26b428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b428) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B430u;
    // 0x26b430: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x26B430u;
    {
        const bool branch_taken_0x26b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b430) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B438u;
label_26b438:
    // 0x26b438: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x26B438u;
    {
        const bool branch_taken_0x26b438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B438u;
        // 0x26b43c: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b438) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B440u;
    // 0x26b440: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26B440u;
    {
        const bool branch_taken_0x26b440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B440u;
        // 0x26b444: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b440) {
            ctx->pc = 0x26B500u;
            goto label_26b500;
        }
    }
    ctx->pc = 0x26B448u;
    // 0x26b448: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x26b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x26b44c: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x26B44Cu;
    {
        const bool branch_taken_0x26b44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B44Cu;
        // 0x26b450: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b44c) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B454u;
    // 0x26b454: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26B454u;
    {
        const bool branch_taken_0x26b454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B454u;
        // 0x26b458: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b454) {
            ctx->pc = 0x26B4A0u;
            goto label_26b4a0;
        }
    }
    ctx->pc = 0x26B45Cu;
    // 0x26b45c: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x26b45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x26b460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B460u;
    {
        const bool branch_taken_0x26b460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B460u;
        // 0x26b464: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b460) {
            ctx->pc = 0x26B488u;
            goto label_26b488;
        }
    }
    ctx->pc = 0x26B468u;
    // 0x26b468: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x26b468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x26b46c: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x26B46Cu;
    {
        const bool branch_taken_0x26b46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B46Cu;
        // 0x26b470: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b46c) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B474u;
    // 0x26b474: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26B474u;
    {
        const bool branch_taken_0x26b474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b474) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B47Cu;
    // 0x26b47c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x26B47Cu;
    {
        const bool branch_taken_0x26b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b47c) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B484u;
    // 0x26b484: 0x0  nop
    ctx->pc = 0x26b484u;
    // NOP
label_26b488:
    // 0x26b488: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x26B488u;
    {
        const bool branch_taken_0x26b488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B488u;
        // 0x26b48c: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b488) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B490u;
    // 0x26b490: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x26B490u;
    {
        const bool branch_taken_0x26b490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B490u;
        // 0x26b494: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b490) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B498u;
    // 0x26b498: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x26B498u;
    {
        const bool branch_taken_0x26b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b498) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B4A0u;
label_26b4a0:
    // 0x26b4a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B4A0u;
    {
        const bool branch_taken_0x26b4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4A0u;
        // 0x26b4a4: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4a0) {
            ctx->pc = 0x26B4C8u;
            goto label_26b4c8;
        }
    }
    ctx->pc = 0x26B4A8u;
    // 0x26b4a8: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x26b4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x26b4ac: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x26B4ACu;
    {
        const bool branch_taken_0x26b4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4ACu;
        // 0x26b4b0: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4ac) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B4B4u;
    // 0x26b4b4: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x26B4B4u;
    {
        const bool branch_taken_0x26b4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b4b4) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B4BCu;
    // 0x26b4bc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x26B4BCu;
    {
        const bool branch_taken_0x26b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4bc) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B4C4u;
    // 0x26b4c4: 0x0  nop
    ctx->pc = 0x26b4c4u;
    // NOP
label_26b4c8:
    // 0x26b4c8: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x26B4C8u;
    {
        const bool branch_taken_0x26b4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4C8u;
        // 0x26b4cc: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4c8) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B4D0u;
    // 0x26b4d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B4D0u;
    {
        const bool branch_taken_0x26b4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4D0u;
        // 0x26b4d4: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4d0) {
            ctx->pc = 0x26B4F0u;
            goto label_26b4f0;
        }
    }
    ctx->pc = 0x26B4D8u;
    // 0x26b4d8: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x26b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x26b4dc: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26B4DCu;
    {
        const bool branch_taken_0x26b4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4DCu;
        // 0x26b4e0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4dc) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B4E4u;
    // 0x26b4e4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26B4E4u;
    {
        const bool branch_taken_0x26b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4e4) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B4ECu;
    // 0x26b4ec: 0x0  nop
    ctx->pc = 0x26b4ecu;
    // NOP
label_26b4f0:
    // 0x26b4f0: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x26B4F0u;
    {
        const bool branch_taken_0x26b4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b4f0) {
            ctx->pc = 0x26B4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B4F0u;
            // 0x26b4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B4F8u;
    // 0x26b4f8: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x26B4F8u;
    {
        const bool branch_taken_0x26b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4f8) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B500u;
label_26b500:
    // 0x26b500: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26B500u;
    {
        const bool branch_taken_0x26b500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B500u;
        // 0x26b504: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b500) {
            ctx->pc = 0x26B558u;
            goto label_26b558;
        }
    }
    ctx->pc = 0x26B508u;
    // 0x26b508: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x26b508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x26b50c: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x26B50Cu;
    {
        const bool branch_taken_0x26b50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B50Cu;
        // 0x26b510: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b50c) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B514u;
    // 0x26b514: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26B514u;
    {
        const bool branch_taken_0x26b514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B514u;
        // 0x26b518: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b514) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B51Cu;
    // 0x26b51c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B51Cu;
    {
        const bool branch_taken_0x26b51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B51Cu;
        // 0x26b520: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b51c) {
            ctx->pc = 0x26B540u;
            goto label_26b540;
        }
    }
    ctx->pc = 0x26B524u;
    // 0x26b524: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x26b524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x26b528: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26B528u;
    {
        const bool branch_taken_0x26b528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B528u;
        // 0x26b52c: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b528) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B530u;
    // 0x26b530: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x26B530u;
    {
        const bool branch_taken_0x26b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b530) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B538u;
    // 0x26b538: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x26B538u;
    {
        const bool branch_taken_0x26b538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b538) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B540u;
label_26b540:
    // 0x26b540: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26B540u;
    {
        const bool branch_taken_0x26b540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B540u;
        // 0x26b544: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b540) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B548u;
    // 0x26b548: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x26B548u;
    {
        const bool branch_taken_0x26b548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b548) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B550u;
    // 0x26b550: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x26B550u;
    {
        const bool branch_taken_0x26b550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b550) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B558u;
label_26b558:
    // 0x26b558: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x26B558u;
    {
        const bool branch_taken_0x26b558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B558u;
        // 0x26b55c: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b558) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B560u;
    // 0x26b560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B560u;
    {
        const bool branch_taken_0x26b560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B560u;
        // 0x26b564: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b560) {
            ctx->pc = 0x26B588u;
            goto label_26b588;
        }
    }
    ctx->pc = 0x26B568u;
    // 0x26b568: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x26b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x26b56c: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x26B56Cu;
    {
        const bool branch_taken_0x26b56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B56Cu;
        // 0x26b570: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b56c) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B574u;
    // 0x26b574: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x26B574u;
    {
        const bool branch_taken_0x26b574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B574u;
        // 0x26b578: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b574) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B57Cu;
    // 0x26b57c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x26B57Cu;
    {
        const bool branch_taken_0x26b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b57c) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B584u;
    // 0x26b584: 0x0  nop
    ctx->pc = 0x26b584u;
    // NOP
label_26b588:
    // 0x26b588: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x26B588u;
    {
        const bool branch_taken_0x26b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B588u;
        // 0x26b58c: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b588) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B590u;
    // 0x26b590: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26B590u;
    {
        const bool branch_taken_0x26b590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b590) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B598u;
    // 0x26b598: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26B598u;
    {
        const bool branch_taken_0x26b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b598) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B5A0u;
label_26b5a0:
    // 0x26b5a0: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x26B5A0u;
    {
        const bool branch_taken_0x26b5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5A0u;
        // 0x26b5a4: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5a0) {
            ctx->pc = 0x26B8A0u;
            goto label_26b8a0;
        }
    }
    ctx->pc = 0x26B5A8u;
    // 0x26b5a8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26B5A8u;
    {
        const bool branch_taken_0x26b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5A8u;
        // 0x26b5ac: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5a8) {
            ctx->pc = 0x26B700u;
            goto label_26b700;
        }
    }
    ctx->pc = 0x26B5B0u;
    // 0x26b5b0: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x26b5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x26b5b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B5B4u;
    {
        const bool branch_taken_0x26b5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5B4u;
        // 0x26b5b8: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5b4) {
            ctx->pc = 0x26B658u;
            goto label_26b658;
        }
    }
    ctx->pc = 0x26B5BCu;
    // 0x26b5bc: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x26b5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x26b5c0: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x26B5C0u;
    {
        const bool branch_taken_0x26b5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5C0u;
        // 0x26b5c4: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5c0) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B5C8u;
    // 0x26b5c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26B5C8u;
    {
        const bool branch_taken_0x26b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5C8u;
        // 0x26b5cc: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5c8) {
            ctx->pc = 0x26B610u;
            goto label_26b610;
        }
    }
    ctx->pc = 0x26B5D0u;
    // 0x26b5d0: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x26b5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x26b5d4: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x26B5D4u;
    {
        const bool branch_taken_0x26b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5D4u;
        // 0x26b5d8: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5d4) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B5DCu;
    // 0x26b5dc: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x26B5DCu;
    {
        const bool branch_taken_0x26b5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5DCu;
        // 0x26b5e0: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5dc) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B5E4u;
    // 0x26b5e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B5E4u;
    {
        const bool branch_taken_0x26b5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5E4u;
        // 0x26b5e8: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5e4) {
            ctx->pc = 0x26B600u;
            goto label_26b600;
        }
    }
    ctx->pc = 0x26B5ECu;
    // 0x26b5ec: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x26b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x26b5f0: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x26B5F0u;
    {
        const bool branch_taken_0x26b5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5F0u;
        // 0x26b5f4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5f0) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B5F8u;
    // 0x26b5f8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x26B5F8u;
    {
        const bool branch_taken_0x26b5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5f8) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B600u;
label_26b600:
    // 0x26b600: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26B600u;
    {
        const bool branch_taken_0x26b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b600) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B608u;
    // 0x26b608: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x26B608u;
    {
        const bool branch_taken_0x26b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b608) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B610u;
label_26b610:
    // 0x26b610: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26B610u;
    {
        const bool branch_taken_0x26b610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B610u;
        // 0x26b614: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b610) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B618u;
    // 0x26b618: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B618u;
    {
        const bool branch_taken_0x26b618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B618u;
        // 0x26b61c: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b618) {
            ctx->pc = 0x26B640u;
            goto label_26b640;
        }
    }
    ctx->pc = 0x26B620u;
    // 0x26b620: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x26b624: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26B624u;
    {
        const bool branch_taken_0x26b624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B624u;
        // 0x26b628: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b624) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B62Cu;
    // 0x26b62c: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x26B62Cu;
    {
        const bool branch_taken_0x26b62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B62Cu;
        // 0x26b630: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b62c) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B634u;
    // 0x26b634: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26B634u;
    {
        const bool branch_taken_0x26b634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b634) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B63Cu;
    // 0x26b63c: 0x0  nop
    ctx->pc = 0x26b63cu;
    // NOP
label_26b640:
    // 0x26b640: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x26B640u;
    {
        const bool branch_taken_0x26b640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B640u;
        // 0x26b644: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b640) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B648u;
    // 0x26b648: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26B648u;
    {
        const bool branch_taken_0x26b648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b648) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B650u;
    // 0x26b650: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26B650u;
    {
        const bool branch_taken_0x26b650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b650) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B658u;
label_26b658:
    // 0x26b658: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x26B658u;
    {
        const bool branch_taken_0x26b658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B658u;
        // 0x26b65c: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b658) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B660u;
    // 0x26b660: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26B660u;
    {
        const bool branch_taken_0x26b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B660u;
        // 0x26b664: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b660) {
            ctx->pc = 0x26B6B8u;
            goto label_26b6b8;
        }
    }
    ctx->pc = 0x26B668u;
    // 0x26b668: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x26b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x26b66c: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x26B66Cu;
    {
        const bool branch_taken_0x26b66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B66Cu;
        // 0x26b670: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b66c) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B674u;
    // 0x26b674: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B674u;
    {
        const bool branch_taken_0x26b674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B674u;
        // 0x26b678: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b674) {
            ctx->pc = 0x26B698u;
            goto label_26b698;
        }
    }
    ctx->pc = 0x26B67Cu;
    // 0x26b67c: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x26b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x26b680: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26B680u;
    {
        const bool branch_taken_0x26b680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B680u;
        // 0x26b684: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b680) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B688u;
    // 0x26b688: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x26B688u;
    {
        const bool branch_taken_0x26b688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B688u;
        // 0x26b68c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b688) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B690u;
    // 0x26b690: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x26B690u;
    {
        const bool branch_taken_0x26b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b690) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B698u;
label_26b698:
    // 0x26b698: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x26B698u;
    {
        const bool branch_taken_0x26b698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B698u;
        // 0x26b69c: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b698) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B6A0u;
    // 0x26b6a0: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x26B6A0u;
    {
        const bool branch_taken_0x26b6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6A0u;
        // 0x26b6a4: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6a0) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B6A8u;
    // 0x26b6a8: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26B6A8u;
    {
        const bool branch_taken_0x26b6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6A8u;
        // 0x26b6ac: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6a8) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B6B0u;
    // 0x26b6b0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26B6B0u;
    {
        const bool branch_taken_0x26b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6b0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B6B8u;
label_26b6b8:
    // 0x26b6b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B6B8u;
    {
        const bool branch_taken_0x26b6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6B8u;
        // 0x26b6bc: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6b8) {
            ctx->pc = 0x26B6E0u;
            goto label_26b6e0;
        }
    }
    ctx->pc = 0x26B6C0u;
    // 0x26b6c0: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x26b6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x26b6c4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x26B6C4u;
    {
        const bool branch_taken_0x26b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6C4u;
        // 0x26b6c8: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6c4) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B6CCu;
    // 0x26b6cc: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26B6CCu;
    {
        const bool branch_taken_0x26b6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b6cc) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B6D4u;
    // 0x26b6d4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26B6D4u;
    {
        const bool branch_taken_0x26b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6d4) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B6DCu;
    // 0x26b6dc: 0x0  nop
    ctx->pc = 0x26b6dcu;
    // NOP
label_26b6e0:
    // 0x26b6e0: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26B6E0u;
    {
        const bool branch_taken_0x26b6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6E0u;
        // 0x26b6e4: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6e0) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B6E8u;
    // 0x26b6e8: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x26B6E8u;
    {
        const bool branch_taken_0x26b6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6E8u;
        // 0x26b6ec: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6e8) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B6F0u;
    // 0x26b6f0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26B6F0u;
    {
        const bool branch_taken_0x26b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b6f0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B6F8u;
    // 0x26b6f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26B6F8u;
    {
        const bool branch_taken_0x26b6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b6f8) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B700u;
label_26b700:
    // 0x26b700: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26B700u;
    {
        const bool branch_taken_0x26b700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B700u;
        // 0x26b704: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b700) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B708u;
    // 0x26b708: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26B708u;
    {
        const bool branch_taken_0x26b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B708u;
        // 0x26b70c: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b708) {
            ctx->pc = 0x26B7C0u;
            goto label_26b7c0;
        }
    }
    ctx->pc = 0x26B710u;
    // 0x26b710: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x26b710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26b714: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26B714u;
    {
        const bool branch_taken_0x26b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B714u;
        // 0x26b718: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b714) {
            ctx->pc = 0x26B768u;
            goto label_26b768;
        }
    }
    ctx->pc = 0x26B71Cu;
    // 0x26b71c: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x26b71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x26b720: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x26B720u;
    {
        const bool branch_taken_0x26b720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B720u;
        // 0x26b724: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b720) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B728u;
    // 0x26b728: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26B728u;
    {
        const bool branch_taken_0x26b728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B728u;
        // 0x26b72c: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b728) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B730u;
    // 0x26b730: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B730u;
    {
        const bool branch_taken_0x26b730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B730u;
        // 0x26b734: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b730) {
            ctx->pc = 0x26B750u;
            goto label_26b750;
        }
    }
    ctx->pc = 0x26B738u;
    // 0x26b738: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x26b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x26b73c: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x26B73Cu;
    {
        const bool branch_taken_0x26b73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b73c) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B744u;
    // 0x26b744: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26B744u;
    {
        const bool branch_taken_0x26b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b744) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B74Cu;
    // 0x26b74c: 0x0  nop
    ctx->pc = 0x26b74cu;
    // NOP
label_26b750:
    // 0x26b750: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26B750u;
    {
        const bool branch_taken_0x26b750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B750u;
        // 0x26b754: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b750) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B758u;
    // 0x26b758: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26B758u;
    {
        const bool branch_taken_0x26b758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b758) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B760u;
    // 0x26b760: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26B760u;
    {
        const bool branch_taken_0x26b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b760) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B768u;
label_26b768:
    // 0x26b768: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26B768u;
    {
        const bool branch_taken_0x26b768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B768u;
        // 0x26b76c: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b768) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B770u;
    // 0x26b770: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B770u;
    {
        const bool branch_taken_0x26b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B770u;
        // 0x26b774: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b770) {
            ctx->pc = 0x26B798u;
            goto label_26b798;
        }
    }
    ctx->pc = 0x26B778u;
    // 0x26b778: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x26b778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x26b77c: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26B77Cu;
    {
        const bool branch_taken_0x26b77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B77Cu;
        // 0x26b780: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b77c) {
            ctx->pc = 0x26B888u;
            goto label_26b888;
        }
    }
    ctx->pc = 0x26B784u;
    // 0x26b784: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26B784u;
    {
        const bool branch_taken_0x26b784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B784u;
        // 0x26b788: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b784) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B78Cu;
    // 0x26b78c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26B78Cu;
    {
        const bool branch_taken_0x26b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b78c) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B794u;
    // 0x26b794: 0x0  nop
    ctx->pc = 0x26b794u;
    // NOP
label_26b798:
    // 0x26b798: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26B798u;
    {
        const bool branch_taken_0x26b798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B798u;
        // 0x26b79c: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b798) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B7A0u;
    // 0x26b7a0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26B7A0u;
    {
        const bool branch_taken_0x26b7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A0u;
        // 0x26b7a4: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7a0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B7A8u;
    // 0x26b7a8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26B7A8u;
    {
        const bool branch_taken_0x26b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7A8u;
        // 0x26b7ac: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7a8) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B7B0u;
    // 0x26b7b0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26B7B0u;
    {
        const bool branch_taken_0x26b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b7b0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B7B8u;
    // 0x26b7b8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26B7B8u;
    {
        const bool branch_taken_0x26b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7b8) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B7C0u;
label_26b7c0:
    // 0x26b7c0: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26B7C0u;
    {
        const bool branch_taken_0x26b7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7C0u;
        // 0x26b7c4: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7c0) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B7C8u;
    // 0x26b7c8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26B7C8u;
    {
        const bool branch_taken_0x26b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7C8u;
        // 0x26b7cc: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7c8) {
            ctx->pc = 0x26B818u;
            goto label_26b818;
        }
    }
    ctx->pc = 0x26B7D0u;
    // 0x26b7d0: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x26b7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26b7d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B7D4u;
    {
        const bool branch_taken_0x26b7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7D4u;
        // 0x26b7d8: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7d4) {
            ctx->pc = 0x26B800u;
            goto label_26b800;
        }
    }
    ctx->pc = 0x26B7DCu;
    // 0x26b7dc: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26b7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x26b7e0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26B7E0u;
    {
        const bool branch_taken_0x26b7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E0u;
        // 0x26b7e4: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e0) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B7E8u;
    // 0x26b7e8: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26B7E8u;
    {
        const bool branch_taken_0x26b7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B7E8u;
        // 0x26b7ec: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7e8) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B7F0u;
    // 0x26b7f0: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26B7F0u;
    {
        const bool branch_taken_0x26b7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b7f0) {
            ctx->pc = 0x26B8E8u;
            goto label_26b8e8;
        }
    }
    ctx->pc = 0x26B7F8u;
    // 0x26b7f8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26B7F8u;
    {
        const bool branch_taken_0x26b7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7f8) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B800u;
label_26b800:
    // 0x26b800: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26B800u;
    {
        const bool branch_taken_0x26b800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B800u;
        // 0x26b804: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b800) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B808u;
    // 0x26b808: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B808u;
    {
        const bool branch_taken_0x26b808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B808u;
        // 0x26b80c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b808) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B810u;
    // 0x26b810: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26B810u;
    {
        const bool branch_taken_0x26b810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b810) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B818u;
label_26b818:
    // 0x26b818: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26b818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26b81c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26B81Cu;
    {
        const bool branch_taken_0x26b81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B81Cu;
        // 0x26b820: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b81c) {
            ctx->pc = 0x26B858u;
            goto label_26b858;
        }
    }
    ctx->pc = 0x26B824u;
    // 0x26b824: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x26b828: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26b828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26b82c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26B82Cu;
    {
        const bool branch_taken_0x26b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B82Cu;
        // 0x26b830: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b82c) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B834u;
    // 0x26b834: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26b838: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26B838u;
    {
        const bool branch_taken_0x26b838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B838u;
        // 0x26b83c: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b838) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B840u;
    // 0x26b840: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26b840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26b844: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26B844u;
    {
        const bool branch_taken_0x26b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b844) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B84Cu;
    // 0x26b84c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26B84Cu;
    {
        const bool branch_taken_0x26b84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b84c) {
            ctx->pc = 0x26B8D0u;
            goto label_26b8d0;
        }
    }
    ctx->pc = 0x26B854u;
    // 0x26b854: 0x0  nop
    ctx->pc = 0x26b854u;
    // NOP
label_26b858:
    // 0x26b858: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26B858u;
    {
        const bool branch_taken_0x26b858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B858u;
        // 0x26b85c: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b858) {
            ctx->pc = 0x26B8A8u;
            goto label_26b8a8;
        }
    }
    ctx->pc = 0x26B860u;
    // 0x26b860: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26B860u;
    {
        const bool branch_taken_0x26b860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B860u;
        // 0x26b864: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b860) {
            ctx->pc = 0x26B8ACu;
            goto label_26b8ac;
        }
    }
    ctx->pc = 0x26B868u;
    // 0x26b868: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26B868u;
    {
        const bool branch_taken_0x26b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b868) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B870u;
label_26b870:
    // 0x26b870: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B870u;
    SET_GPR_U32(ctx, 31, 0x26B878u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B870u, 0x26B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B878u;
label_26b878:
    // 0x26b878: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x26b878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x26b87c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26B87Cu;
    {
        const bool branch_taken_0x26b87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B87Cu;
        // 0x26b880: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b87c) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B884u;
    // 0x26b884: 0x0  nop
    ctx->pc = 0x26b884u;
    // NOP
label_26b888:
    // 0x26b888: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B888u;
    SET_GPR_U32(ctx, 31, 0x26B890u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B888u, 0x26B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B890u;
label_26b890:
    // 0x26b890: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x26b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26b894: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26B894u;
    {
        const bool branch_taken_0x26b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B894u;
        // 0x26b898: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b894) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B89Cu;
    // 0x26b89c: 0x0  nop
    ctx->pc = 0x26b89cu;
    // NOP
label_26b8a0:
    // 0x26b8a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26B8A0u;
    {
        const bool branch_taken_0x26b8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8A0u;
        // 0x26b8a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8a0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8A8u;
label_26b8a8:
    // 0x26b8a8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26b8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26b8ac:
    // 0x26b8ac: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26b8b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26B8B0u;
    {
        const bool branch_taken_0x26b8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8B0u;
        // 0x26b8b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8b0) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8B8u;
    // 0x26b8b8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B8B8u;
    SET_GPR_U32(ctx, 31, 0x26B8C0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B8B8u, 0x26B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8C0u;
label_26b8c0:
    // 0x26b8c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26b8c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26B8C4u;
    {
        const bool branch_taken_0x26b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8C4u;
        // 0x26b8c8: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8c4) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8CCu;
    // 0x26b8cc: 0x0  nop
    ctx->pc = 0x26b8ccu;
    // NOP
label_26b8d0:
    // 0x26b8d0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B8D0u;
    SET_GPR_U32(ctx, 31, 0x26B8D8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B8D0u, 0x26B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8D8u;
label_26b8d8:
    // 0x26b8d8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26b8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26b8dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26B8DCu;
    {
        const bool branch_taken_0x26b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8DCu;
        // 0x26b8e0: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8dc) {
            ctx->pc = 0x26B8F8u;
            goto label_26b8f8;
        }
    }
    ctx->pc = 0x26B8E4u;
    // 0x26b8e4: 0x0  nop
    ctx->pc = 0x26b8e4u;
    // NOP
label_26b8e8:
    // 0x26b8e8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26B8E8u;
    SET_GPR_U32(ctx, 31, 0x26B8F0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26B8E8u, 0x26B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B8F0u;
label_26b8f0:
    // 0x26b8f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26b8f4: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26b8f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_26b8f8:
    // 0x26b8f8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B8F8u;
    {
        const bool branch_taken_0x26b8f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B8F8u;
        // 0x26b8fc: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8f8) {
            ctx->pc = 0x26B910u;
            goto label_26b910;
        }
    }
    ctx->pc = 0x26B900u;
    // 0x26b900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b904: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26B904u;
    SET_GPR_U32(ctx, 31, 0x26B90Cu);
    ctx->pc = 0x26B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B904u;
    // 0x26b908: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26B904u, 0x26B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B90Cu;
label_26b90c:
    // 0x26b90c: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x26b90cu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26b910:
    // 0x26b910: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B910u;
    {
        const bool branch_taken_0x26b910 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B910u;
        // 0x26b914: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b910) {
            ctx->pc = 0x26B934u;
            goto label_26b934;
        }
    }
    ctx->pc = 0x26B918u;
    // 0x26b918: 0xc09905e  jal         func_264178
    ctx->pc = 0x26B918u;
    SET_GPR_U32(ctx, 31, 0x26B920u);
    ctx->pc = 0x26B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B918u;
    // 0x26b91c: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26B918u, 0x26B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B920u;
label_26b920:
    // 0x26b920: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26b920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x26b924: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x26b924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26b928: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26b928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26b92c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B92Cu;
    {
        const bool branch_taken_0x26b92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b92c) {
            ctx->pc = 0x26B930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B92Cu;
            // 0x26b930: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B944u;
            goto label_26b944;
        }
    }
    ctx->pc = 0x26B934u;
label_26b934:
    // 0x26b934: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26b934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26b938: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x26b938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26b93c: 0x1440fe44  bnez        $v0, . + 4 + (-0x1BC << 2)
    ctx->pc = 0x26B93Cu;
    {
        const bool branch_taken_0x26b93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B93Cu;
        // 0x26b940: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b93c) {
            ctx->pc = 0x26B250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b250;
        }
    }
    ctx->pc = 0x26B944u;
label_26b944:
    // 0x26b944: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26b944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x26b948: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26b948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26b94c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26b94cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b950: 0x1462fe2f  bne         $v1, $v0, . + 4 + (-0x1D1 << 2)
    ctx->pc = 0x26B950u;
    {
        const bool branch_taken_0x26b950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B950u;
        // 0x26b954: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b950) {
            ctx->pc = 0x26B210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b210;
        }
    }
    ctx->pc = 0x26B958u;
label_26b958:
    // 0x26b958: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x26b958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26b960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26b964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26b964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26b968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26b96c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26b96cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b970: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26b970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26b974: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26b974u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b978: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x26b978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B97Cu;
        // 0x26b980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B984u;
    // 0x26b984: 0x0  nop
    ctx->pc = 0x26b984u;
    // NOP
    ctx->pc = 0x26b988u;
}
