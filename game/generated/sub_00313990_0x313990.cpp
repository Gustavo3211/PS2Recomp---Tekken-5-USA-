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

// Function: sub_00313990
// Address: 0x313990 - 0x313b18
void sub_00313990_0x313990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313990_0x313990");
#endif

    switch (ctx->pc) {
        case 0x313a10u: goto label_313a10;
        case 0x313a28u: goto label_313a28;
        case 0x313a70u: goto label_313a70;
        case 0x313a90u: goto label_313a90;
        default: break;
    }

    ctx->pc = 0x313990u;

    // 0x313990: 0x3c0a001c  lui         $t2, 0x1C
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28 << 16));
    // 0x313994: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x313994u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313998: 0x25428110  addiu       $v0, $t2, -0x7EF0
    ctx->pc = 0x313998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294934800));
    // 0x31399c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x31399cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139a0: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x3139a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1B814Cu));
    // 0x3139a4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3139a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139a8: 0x8c480040  lw          $t0, 0x40($v0)
    ctx->pc = 0x3139a8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x1B8150u));
    // 0x3139ac: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x3139acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3139b0: 0x248cffff  addiu       $t4, $a0, -0x1
    ctx->pc = 0x3139b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3139b4: 0x6d102b  sltu        $v0, $v1, $t5
    ctx->pc = 0x3139b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x3139b8: 0x69282b  sltu        $a1, $v1, $t1
    ctx->pc = 0x3139b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3139bc: 0x2504fffe  addiu       $a0, $t0, -0x2
    ctx->pc = 0x3139bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x3139c0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3139c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3139c4: 0x62680b  movn        $t5, $v1, $v0
    ctx->pc = 0x3139c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x3139c8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3139c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3139cc: 0x65480b  movn        $t1, $v1, $a1
    ctx->pc = 0x3139ccu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x3139d0: 0x8b302b  sltu        $a2, $a0, $t3
    ctx->pc = 0x3139d0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3139d4: 0x1a9182b  sltu        $v1, $t5, $t1
    ctx->pc = 0x3139d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3139d8: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x3139d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x3139dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3139DCu;
    {
        const bool branch_taken_0x3139dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3139E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139DCu;
        // 0x3139e0: 0x86580b  movn        $t3, $a0, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139dc) {
            ctx->pc = 0x3139F0u;
            goto label_3139f0;
        }
    }
    ctx->pc = 0x3139E4u;
    // 0x3139e4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3139e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139e8: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x3139e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139ec: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3139ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3139f0:
    // 0x3139f0: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x3139f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3139f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3139F4u;
    {
        const bool branch_taken_0x3139f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3139F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139F4u;
        // 0x3139f8: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139f4) {
            ctx->pc = 0x313A04u;
            goto label_313a04;
        }
    }
    ctx->pc = 0x3139FCu;
    // 0x3139fc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3139fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a00: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x313a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_313a04:
    // 0x313a04: 0x19800013  blez        $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x313A04u;
    {
        const bool branch_taken_0x313a04 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x313A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A04u;
        // 0x313a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a04) {
            ctx->pc = 0x313A54u;
            goto label_313a54;
        }
    }
    ctx->pc = 0x313A0Cu;
    // 0x313a0c: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x313a0cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_313a10:
    // 0x313a10: 0x5900000d  blezl       $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x313A10u;
    {
        const bool branch_taken_0x313a10 = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x313a10) {
            ctx->pc = 0x313A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A10u;
            // 0x313a14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313A48u;
            goto label_313a48;
        }
    }
    ctx->pc = 0x313A18u;
    // 0x313a18: 0x25ca8110  addiu       $t2, $t6, -0x7EF0
    ctx->pc = 0x313a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), 4294934800));
    // 0x313a1c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x313a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x313a20: 0xc2880  sll         $a1, $t4, 2
    ctx->pc = 0x313a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x313a24: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x313a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_313a28:
    // 0x313a28: 0x8d420070  lw          $v0, 0x70($t2)
    ctx->pc = 0x313a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x313a2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313a30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x313a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x313a34: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x313a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313a38: 0x0  nop
    ctx->pc = 0x313a38u;
    // NOP
    // 0x313a3c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x313A3Cu;
    {
        const bool branch_taken_0x313a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x313A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A3Cu;
        // 0x313a40: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a3c) {
            ctx->pc = 0x313A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a28;
        }
    }
    ctx->pc = 0x313A44u;
    // 0x313a44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_313a48:
    // 0x313a48: 0xcc102a  slt         $v0, $a2, $t4
    ctx->pc = 0x313a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x313a4c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x313A4Cu;
    {
        const bool branch_taken_0x313a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313a4c) {
            ctx->pc = 0x313A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a10;
        }
    }
    ctx->pc = 0x313A54u;
label_313a54:
    // 0x313a54: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x313a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313a58: 0x1a6102b  sltu        $v0, $t5, $a2
    ctx->pc = 0x313a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x313a5c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x313A5Cu;
    {
        const bool branch_taken_0x313a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A5Cu;
        // 0x313a60: 0x16c1018  mult        $v0, $t3, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a5c) {
            ctx->pc = 0x313ABCu;
            goto label_313abc;
        }
    }
    ctx->pc = 0x313A64u;
    // 0x313a64: 0x3c0f001c  lui         $t7, 0x1C
    ctx->pc = 0x313a64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)28 << 16));
    // 0x313a68: 0x27080  sll         $t6, $v0, 2
    ctx->pc = 0x313a68u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x313a6c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x313a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_313a70:
    // 0x313a70: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x313a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313a74: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x313A74u;
    {
        const bool branch_taken_0x313a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313a74) {
            ctx->pc = 0x313A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A74u;
            // 0x313a78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313AB0u;
            goto label_313ab0;
        }
    }
    ctx->pc = 0x313A7Cu;
    // 0x313a7c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x313a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x313a80: 0x25ea8110  addiu       $t2, $t7, -0x7EF0
    ctx->pc = 0x313a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 4294934800));
    // 0x313a84: 0x1c22821  addu        $a1, $t6, $v0
    ctx->pc = 0x313a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x313a88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x313a88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313a8c: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x313a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_313a90:
    // 0x313a90: 0x8d420070  lw          $v0, 0x70($t2)
    ctx->pc = 0x313a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 112)));
    // 0x313a94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x313a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x313a98: 0xe4182b  sltu        $v1, $a3, $a0
    ctx->pc = 0x313a98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313a9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x313a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x313aa0: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x313aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x313aa4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x313AA4u;
    {
        const bool branch_taken_0x313aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AA4u;
        // 0x313aa8: 0xac490000  sw          $t1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313aa4) {
            ctx->pc = 0x313A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a90;
        }
    }
    ctx->pc = 0x313AACu;
    // 0x313aac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_313ab0:
    // 0x313ab0: 0x1a6102b  sltu        $v0, $t5, $a2
    ctx->pc = 0x313ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x313ab4: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x313AB4u;
    {
        const bool branch_taken_0x313ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ab4) {
            ctx->pc = 0x313AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313AB4u;
            // 0x313ab8: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a70;
        }
    }
    ctx->pc = 0x313ABCu;
label_313abc:
    // 0x313abc: 0x3e00008  jr          $ra
    ctx->pc = 0x313ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313AC4u;
    // 0x313ac4: 0x0  nop
    ctx->pc = 0x313ac4u;
    // NOP
    // 0x313ac8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x313ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x313acc: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x313accu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x313ad0: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x313ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x313ad4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x313ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x313ad8: 0x8c47003c  lw          $a3, 0x3C($v0)
    ctx->pc = 0x313ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x313adc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x313adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x313ae0: 0x8c4a0070  lw          $t2, 0x70($v0)
    ctx->pc = 0x313ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x313ae4: 0x65402b  sltu        $t0, $v1, $a1
    ctx->pc = 0x313ae4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x313ae8: 0x24e9ffff  addiu       $t1, $a3, -0x1
    ctx->pc = 0x313ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x313aec: 0x68280b  movn        $a1, $v1, $t0
    ctx->pc = 0x313aecu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x313af0: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x313af4: 0xa92818  mult        $a1, $a1, $t1
    ctx->pc = 0x313af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x313af8: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x313af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313afc: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x313afcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x313b00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x313b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x313b04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x313b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x313b08: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x313b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x313b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x313B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B0Cu;
        // 0x313b10: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313B14u;
    // 0x313b14: 0x0  nop
    ctx->pc = 0x313b14u;
    // NOP
    ctx->pc = 0x313b18u;
}
