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

// Function: sub_0024C980
// Address: 0x24c980 - 0x24d0a8
void sub_0024C980_0x24c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C980_0x24c980");
#endif

    switch (ctx->pc) {
        case 0x24c9ccu: goto label_24c9cc;
        case 0x24ca18u: goto label_24ca18;
        case 0x24ca3cu: goto label_24ca3c;
        case 0x24ca9cu: goto label_24ca9c;
        case 0x24cab0u: goto label_24cab0;
        case 0x24caecu: goto label_24caec;
        case 0x24cb10u: goto label_24cb10;
        case 0x24cb50u: goto label_24cb50;
        case 0x24cb8cu: goto label_24cb8c;
        case 0x24cbb4u: goto label_24cbb4;
        case 0x24cbc4u: goto label_24cbc4;
        case 0x24cbccu: goto label_24cbcc;
        case 0x24cbd8u: goto label_24cbd8;
        case 0x24cbe8u: goto label_24cbe8;
        case 0x24cc00u: goto label_24cc00;
        case 0x24cc08u: goto label_24cc08;
        case 0x24cc14u: goto label_24cc14;
        case 0x24cc28u: goto label_24cc28;
        case 0x24cc48u: goto label_24cc48;
        case 0x24cc70u: goto label_24cc70;
        case 0x24cc80u: goto label_24cc80;
        case 0x24cc9cu: goto label_24cc9c;
        case 0x24ccb8u: goto label_24ccb8;
        case 0x24ccdcu: goto label_24ccdc;
        case 0x24ccf8u: goto label_24ccf8;
        case 0x24cd20u: goto label_24cd20;
        case 0x24cd38u: goto label_24cd38;
        case 0x24cd7cu: goto label_24cd7c;
        case 0x24cd94u: goto label_24cd94;
        case 0x24cda8u: goto label_24cda8;
        case 0x24cdb4u: goto label_24cdb4;
        case 0x24cdc0u: goto label_24cdc0;
        case 0x24cdd0u: goto label_24cdd0;
        case 0x24cde0u: goto label_24cde0;
        case 0x24ce38u: goto label_24ce38;
        case 0x24ce4cu: goto label_24ce4c;
        case 0x24ce68u: goto label_24ce68;
        case 0x24ce84u: goto label_24ce84;
        case 0x24ced4u: goto label_24ced4;
        case 0x24cef0u: goto label_24cef0;
        case 0x24cf18u: goto label_24cf18;
        case 0x24cf58u: goto label_24cf58;
        case 0x24cf70u: goto label_24cf70;
        case 0x24cfc8u: goto label_24cfc8;
        case 0x24d004u: goto label_24d004;
        case 0x24d02cu: goto label_24d02c;
        case 0x24d054u: goto label_24d054;
        case 0x24d070u: goto label_24d070;
        default: break;
    }

    ctx->pc = 0x24c980u;

    // 0x24c980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24c984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c98c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24c98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c990: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c994: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c998: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24c99c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24c9a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x24c9a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24c9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24c9a8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x24c9a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x24c9b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x24c9b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24c9b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24c9bc: 0x82330023  lb          $s3, 0x23($s1)
    ctx->pc = 0x24c9bcu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x24c9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9c4: 0xc0b4728  jal         func_2D1CA0
    ctx->pc = 0x24C9C4u;
    SET_GPR_U32(ctx, 31, 0x24C9CCu);
    ctx->pc = 0x24C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9C4u;
    // 0x24c9c8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1CA0u, 0x24C9C4u, 0x24C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9CCu;
label_24c9cc:
    // 0x24c9cc: 0x29c2021  addu        $a0, $s4, $gp
    ctx->pc = 0x24c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 28)));
    // 0x24c9d0: 0x8c84a850  lw          $a0, -0x57B0($a0)
    ctx->pc = 0x24c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944848)));
    // 0x24c9d4: 0x82270020  lb          $a3, 0x20($s1)
    ctx->pc = 0x24c9d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24c9d8: 0x29c2821  addu        $a1, $s4, $gp
    ctx->pc = 0x24c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 28)));
    // 0x24c9dc: 0x8ca5a858  lw          $a1, -0x57A8($a1)
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944856)));
    // 0x24c9e0: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x24c9e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x24c9e4: 0x2ce30012  sltiu       $v1, $a3, 0x12
    ctx->pc = 0x24c9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x24c9e8: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x24C9E8u;
    {
        const bool branch_taken_0x24c9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9E8u;
        // 0x24c9ec: 0xa22824  and         $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9e8) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24C9F0u;
    // 0x24c9f0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x24c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x24c9f4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24c9f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24c9fc: 0x8c6318e0  lw          $v1, 0x18E0($v1)
    ctx->pc = 0x24c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6368)));
    // 0x24ca00: 0x600008  jr          $v1
    ctx->pc = 0x24CA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CA08u: goto label_24ca08;
            case 0x24CC78u: goto label_24cc78;
            case 0x24CCA8u: goto label_24cca8;
            case 0x24CE28u: goto label_24ce28;
            case 0x24CE90u: goto label_24ce90;
            case 0x24CEB8u: goto label_24ceb8;
            case 0x24CF30u: goto label_24cf30;
            case 0x24CF68u: goto label_24cf68;
            case 0x24CF80u: goto label_24cf80;
            case 0x24CFB0u: goto label_24cfb0;
            case 0x24CFE0u: goto label_24cfe0;
            case 0x24CFF0u: goto label_24cff0;
            case 0x24CFF8u: goto label_24cff8;
            case 0x24D068u: goto label_24d068;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CA08u;
label_24ca08:
    // 0x24ca08: 0xa2200022  sb          $zero, 0x22($s1)
    ctx->pc = 0x24ca08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ca0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24ca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca10: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x24ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x24ca14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24ca18:
    // 0x24ca18: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x24ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24ca1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24ca20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x24ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24ca24: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x24ca24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x24ca28: 0x0  nop
    ctx->pc = 0x24ca28u;
    // NOP
    // 0x24ca2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24CA2Cu;
    {
        const bool branch_taken_0x24ca2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA2Cu;
        // 0x24ca30: 0xac460040  sw          $a2, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca2c) {
            ctx->pc = 0x24CA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ca18;
        }
    }
    ctx->pc = 0x24CA34u;
    // 0x24ca34: 0xc092eea  jal         func_24BBA8
    ctx->pc = 0x24CA34u;
    SET_GPR_U32(ctx, 31, 0x24CA3Cu);
    ctx->pc = 0x24CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA34u;
    // 0x24ca38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BBA8u, 0x24CA34u, 0x24CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA3Cu;
label_24ca3c:
    // 0x24ca3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24ca40: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x24ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x24ca44: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x24ca44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24ca48: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x24CA48u;
    {
        const bool branch_taken_0x24ca48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA48u;
        // 0x24ca4c: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca48) {
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24CA50u;
    // 0x24ca50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24ca54: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24ca58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24ca5c: 0x8c631930  lw          $v1, 0x1930($v1)
    ctx->pc = 0x24ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6448)));
    // 0x24ca60: 0x600008  jr          $v1
    ctx->pc = 0x24CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CA68u: goto label_24ca68;
            case 0x24CAA8u: goto label_24caa8;
            case 0x24CAF8u: goto label_24caf8;
            case 0x24CB18u: goto label_24cb18;
            case 0x24CB58u: goto label_24cb58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CA68u;
label_24ca68:
    // 0x24ca68: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24ca6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ca70: 0x26048858  addiu       $a0, $s0, -0x77A8
    ctx->pc = 0x24ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x24ca74: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x24ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x24ca78: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x24ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x24ca7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24ca7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ca80: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x24CA80u;
    {
        const bool branch_taken_0x24ca80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ca80) {
            ctx->pc = 0x24CA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CA80u;
            // 0x24ca84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CA8Cu;
            goto label_24ca8c;
        }
    }
    ctx->pc = 0x24CA88u;
    // 0x24ca88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24ca8c:
    // 0x24ca8c: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24ca8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ca90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca94: 0xc093020  jal         func_24C080
    ctx->pc = 0x24CA94u;
    SET_GPR_U32(ctx, 31, 0x24CA9Cu);
    ctx->pc = 0x24CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA94u;
    // 0x24ca98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C080u, 0x24CA94u, 0x24CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA9Cu;
label_24ca9c:
    // 0x24ca9c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x24CA9Cu;
    {
        const bool branch_taken_0x24ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA9Cu;
        // 0x24caa0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca9c) {
            ctx->pc = 0x24CB9Cu;
            goto label_24cb9c;
        }
    }
    ctx->pc = 0x24CAA4u;
    // 0x24caa4: 0x0  nop
    ctx->pc = 0x24caa4u;
    // NOP
label_24caa8:
    // 0x24caa8: 0xc086632  jal         func_2198C8
    ctx->pc = 0x24CAA8u;
    SET_GPR_U32(ctx, 31, 0x24CAB0u);
    ctx->pc = 0x24CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAA8u;
    // 0x24caac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2198C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2198C8u, 0x24CAA8u, 0x24CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAB0u;
label_24cab0:
    // 0x24cab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24cab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cab8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CAB8u;
    {
        const bool branch_taken_0x24cab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAB8u;
        // 0x24cabc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cab8) {
            ctx->pc = 0x24CADCu;
            goto label_24cadc;
        }
    }
    ctx->pc = 0x24CAC0u;
    // 0x24cac0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x24cac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24cac4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CAC4u;
    {
        const bool branch_taken_0x24cac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAC4u;
        // 0x24cac8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cac4) {
            ctx->pc = 0x24CADCu;
            goto label_24cadc;
        }
    }
    ctx->pc = 0x24CACCu;
    // 0x24cacc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cad0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CAD0u;
    {
        const bool branch_taken_0x24cad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAD0u;
        // 0x24cad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cad0) {
            ctx->pc = 0x24CAE4u;
            goto label_24cae4;
        }
    }
    ctx->pc = 0x24CAD8u;
    // 0x24cad8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24cadc:
    // 0x24cadc: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cadcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cae4:
    // 0x24cae4: 0xc093020  jal         func_24C080
    ctx->pc = 0x24CAE4u;
    SET_GPR_U32(ctx, 31, 0x24CAECu);
    ctx->pc = 0x24CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAE4u;
    // 0x24cae8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C080u, 0x24CAE4u, 0x24CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CAECu;
label_24caec:
    // 0x24caec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x24CAECu;
    {
        const bool branch_taken_0x24caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAECu;
        // 0x24caf0: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caec) {
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24CAF4u;
    // 0x24caf4: 0x0  nop
    ctx->pc = 0x24caf4u;
    // NOP
label_24caf8:
    // 0x24caf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cafc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb00: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cb00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cb04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb08: 0xc09303a  jal         func_24C0E8
    ctx->pc = 0x24CB08u;
    SET_GPR_U32(ctx, 31, 0x24CB10u);
    ctx->pc = 0x24CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB08u;
    // 0x24cb0c: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C0E8u, 0x24CB08u, 0x24CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB10u;
label_24cb10:
    // 0x24cb10: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24CB10u;
    {
        const bool branch_taken_0x24cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB10u;
        // 0x24cb14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb10) {
            ctx->pc = 0x24CB9Cu;
            goto label_24cb9c;
        }
    }
    ctx->pc = 0x24CB18u;
label_24cb18:
    // 0x24cb18: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24cb18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24cb1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cb20: 0x26028858  addiu       $v0, $s0, -0x77A8
    ctx->pc = 0x24cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x24cb24: 0x2652004  sllv        $a0, $a1, $s3
    ctx->pc = 0x24cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 19) & 0x1F));
    // 0x24cb28: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x24cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x24cb2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x24cb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x24cb30: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CB30u;
    {
        const bool branch_taken_0x24cb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb30) {
            ctx->pc = 0x24CB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CB30u;
            // 0x24cb34: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CB40u;
            goto label_24cb40;
        }
    }
    ctx->pc = 0x24CB38u;
    // 0x24cb38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CB38u;
    {
        const bool branch_taken_0x24cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB38u;
        // 0x24cb3c: 0xa2250021  sb          $a1, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb38) {
            ctx->pc = 0x24CB44u;
            goto label_24cb44;
        }
    }
    ctx->pc = 0x24CB40u;
label_24cb40:
    // 0x24cb40: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cb40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
label_24cb44:
    // 0x24cb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb48: 0xc09304e  jal         func_24C138
    ctx->pc = 0x24CB48u;
    SET_GPR_U32(ctx, 31, 0x24CB50u);
    ctx->pc = 0x24CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB48u;
    // 0x24cb4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C138u, 0x24CB48u, 0x24CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB50u;
label_24cb50:
    // 0x24cb50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24CB50u;
    {
        const bool branch_taken_0x24cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB50u;
        // 0x24cb54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb50) {
            ctx->pc = 0x24CB9Cu;
            goto label_24cb9c;
        }
    }
    ctx->pc = 0x24CB58u;
label_24cb58:
    // 0x24cb58: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x24cb58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x24cb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cb60: 0x26048858  addiu       $a0, $s0, -0x77A8
    ctx->pc = 0x24cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x24cb64: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x24cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x24cb68: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x24cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x24cb6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24cb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24cb70: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x24CB70u;
    {
        const bool branch_taken_0x24cb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cb70) {
            ctx->pc = 0x24CB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CB70u;
            // 0x24cb74: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CB7Cu;
            goto label_24cb7c;
        }
    }
    ctx->pc = 0x24CB78u;
    // 0x24cb78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24cb7c:
    // 0x24cb7c: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb84: 0xc093020  jal         func_24C080
    ctx->pc = 0x24CB84u;
    SET_GPR_U32(ctx, 31, 0x24CB8Cu);
    ctx->pc = 0x24CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CB84u;
    // 0x24cb88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C080u, 0x24CB84u, 0x24CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CB8Cu;
label_24cb8c:
    // 0x24cb8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CB8Cu;
    {
        const bool branch_taken_0x24cb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB8Cu;
        // 0x24cb90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb8c) {
            ctx->pc = 0x24CB9Cu;
            goto label_24cb9c;
        }
    }
    ctx->pc = 0x24CB94u;
    // 0x24cb94: 0x0  nop
    ctx->pc = 0x24cb94u;
    // NOP
label_24cb98:
    // 0x24cb98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24cb9c:
    // 0x24cb9c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x24cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x24cba0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x24cba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cba8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x24cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x24cbac: 0xc086624  jal         func_219890
    ctx->pc = 0x24CBACu;
    SET_GPR_U32(ctx, 31, 0x24CBB4u);
    ctx->pc = 0x24CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBACu;
    // 0x24cbb0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x24CBACu, 0x24CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBB4u;
label_24cbb4:
    // 0x24cbb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24CBB4u;
    {
        const bool branch_taken_0x24cbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cbb4) {
            ctx->pc = 0x24CBE0u;
            goto label_24cbe0;
        }
    }
    ctx->pc = 0x24CBBCu;
    // 0x24cbbc: 0xc086644  jal         func_219910
    ctx->pc = 0x24CBBCu;
    SET_GPR_U32(ctx, 31, 0x24CBC4u);
    ctx->pc = 0x24CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBBCu;
    // 0x24cbc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x24CBBCu, 0x24CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBC4u;
label_24cbc4:
    // 0x24cbc4: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x24CBC4u;
    SET_GPR_U32(ctx, 31, 0x24CBCCu);
    ctx->pc = 0x24CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBC4u;
    // 0x24cbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x24CBC4u, 0x24CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBCCu;
label_24cbcc:
    // 0x24cbcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cbd0: 0xc086644  jal         func_219910
    ctx->pc = 0x24CBD0u;
    SET_GPR_U32(ctx, 31, 0x24CBD8u);
    ctx->pc = 0x24CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBD0u;
    // 0x24cbd4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x24CBD0u, 0x24CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBD8u;
label_24cbd8:
    // 0x24cbd8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24CBD8u;
    {
        const bool branch_taken_0x24cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CBD8u;
        // 0x24cbdc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cbd8) {
            ctx->pc = 0x24CC2Cu;
            goto label_24cc2c;
        }
    }
    ctx->pc = 0x24CBE0u;
label_24cbe0:
    // 0x24cbe0: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x24CBE0u;
    SET_GPR_U32(ctx, 31, 0x24CBE8u);
    ctx->pc = 0x24CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBE0u;
    // 0x24cbe4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x24CBE0u, 0x24CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CBE8u;
label_24cbe8:
    // 0x24cbe8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x24cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24cbec: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x24cbecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cbf0: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24CBF0u;
    {
        const bool branch_taken_0x24cbf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24cbf0) {
            ctx->pc = 0x24CBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CBF0u;
            // 0x24cbf4: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CC20u;
            goto label_24cc20;
        }
    }
    ctx->pc = 0x24CBF8u;
    // 0x24cbf8: 0xc086644  jal         func_219910
    ctx->pc = 0x24CBF8u;
    SET_GPR_U32(ctx, 31, 0x24CC00u);
    ctx->pc = 0x24CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CBF8u;
    // 0x24cbfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x24CBF8u, 0x24CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC00u;
label_24cc00:
    // 0x24cc00: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x24CC00u;
    SET_GPR_U32(ctx, 31, 0x24CC08u);
    ctx->pc = 0x24CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC00u;
    // 0x24cc04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x24CC00u, 0x24CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC08u;
label_24cc08:
    // 0x24cc08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc0c: 0xc086644  jal         func_219910
    ctx->pc = 0x24CC0Cu;
    SET_GPR_U32(ctx, 31, 0x24CC14u);
    ctx->pc = 0x24CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC0Cu;
    // 0x24cc10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x24CC0Cu, 0x24CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC14u;
label_24cc14:
    // 0x24cc14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24CC14u;
    {
        const bool branch_taken_0x24cc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC14u;
        // 0x24cc18: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc14) {
            ctx->pc = 0x24CC2Cu;
            goto label_24cc2c;
        }
    }
    ctx->pc = 0x24CC1Cu;
    // 0x24cc1c: 0x0  nop
    ctx->pc = 0x24cc1cu;
    // NOP
label_24cc20:
    // 0x24cc20: 0xc086396  jal         func_218E58
    ctx->pc = 0x24CC20u;
    SET_GPR_U32(ctx, 31, 0x24CC28u);
    ctx->pc = 0x24CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC20u;
    // 0x24cc24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E58u, 0x24CC20u, 0x24CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC28u;
label_24cc28:
    // 0x24cc28: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x24cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_24cc2c:
    // 0x24cc2c: 0x82230021  lb          $v1, 0x21($s1)
    ctx->pc = 0x24cc2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x24cc30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cc34: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CC34u;
    {
        const bool branch_taken_0x24cc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24cc34) {
            ctx->pc = 0x24CC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CC34u;
            // 0x24cc38: 0x26028858  addiu       $v0, $s0, -0x77A8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CC4Cu;
            goto label_24cc4c;
        }
    }
    ctx->pc = 0x24CC3Cu;
    // 0x24cc3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc40: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x24CC40u;
    SET_GPR_U32(ctx, 31, 0x24CC48u);
    ctx->pc = 0x24CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC40u;
    // 0x24cc44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x24CC40u, 0x24CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC48u;
label_24cc48:
    // 0x24cc48: 0x26028858  addiu       $v0, $s0, -0x77A8
    ctx->pc = 0x24cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
label_24cc4c:
    // 0x24cc4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cc50: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x24cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x24cc54: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x24cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x24cc58: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24cc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24cc5c: 0x54800106  bnel        $a0, $zero, . + 4 + (0x106 << 2)
    ctx->pc = 0x24CC5Cu;
    {
        const bool branch_taken_0x24cc5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cc5c) {
            ctx->pc = 0x24CC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CC5Cu;
            // 0x24cc60: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CC64u;
    // 0x24cc64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc68: 0xc0b719a  jal         func_2DC668
    ctx->pc = 0x24CC68u;
    SET_GPR_U32(ctx, 31, 0x24CC70u);
    ctx->pc = 0x24CC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC68u;
    // 0x24cc6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC668u, 0x24CC68u, 0x24CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC70u;
label_24cc70:
    // 0x24cc70: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x24CC70u;
    {
        const bool branch_taken_0x24cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC70u;
        // 0x24cc74: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc70) {
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CC78u;
label_24cc78:
    // 0x24cc78: 0xc0930a4  jal         func_24C290
    ctx->pc = 0x24CC78u;
    SET_GPR_U32(ctx, 31, 0x24CC80u);
    ctx->pc = 0x24CC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC78u;
    // 0x24cc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C290u, 0x24CC78u, 0x24CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC80u;
label_24cc80:
    // 0x24cc80: 0x29c1021  addu        $v0, $s4, $gp
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 28)));
    // 0x24cc84: 0x8c42a850  lw          $v0, -0x57B0($v0)
    ctx->pc = 0x24cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944848)));
    // 0x24cc88: 0x304208f0  andi        $v0, $v0, 0x8F0
    ctx->pc = 0x24cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2288);
    // 0x24cc8c: 0x504000fa  beql        $v0, $zero, . + 4 + (0xFA << 2)
    ctx->pc = 0x24CC8Cu;
    {
        const bool branch_taken_0x24cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cc8c) {
            ctx->pc = 0x24CC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CC8Cu;
            // 0x24cc90: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CC94u;
    // 0x24cc94: 0xc092940  jal         func_24A500
    ctx->pc = 0x24CC94u;
    SET_GPR_U32(ctx, 31, 0x24CC9Cu);
    ctx->pc = 0x24CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC94u;
    // 0x24cc98: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24CC94u, 0x24CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC9Cu;
label_24cc9c:
    // 0x24cc9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cca0: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x24CCA0u;
    {
        const bool branch_taken_0x24cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCA0u;
        // 0x24cca4: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cca0) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CCA8u;
label_24cca8:
    // 0x24cca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ccac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24ccacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ccb0: 0xc093074  jal         func_24C1D0
    ctx->pc = 0x24CCB0u;
    SET_GPR_U32(ctx, 31, 0x24CCB8u);
    ctx->pc = 0x24CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCB0u;
    // 0x24ccb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C1D0u, 0x24CCB0u, 0x24CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCB8u;
label_24ccb8:
    // 0x24ccb8: 0x82230020  lb          $v1, 0x20($s1)
    ctx->pc = 0x24ccb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24ccbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ccc0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24CCC0u;
    {
        const bool branch_taken_0x24ccc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCC0u;
        // 0x24ccc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccc0) {
            ctx->pc = 0x24CD0Cu;
            goto label_24cd0c;
        }
    }
    ctx->pc = 0x24CCC8u;
    // 0x24ccc8: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x24ccc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
    // 0x24cccc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CCCCu;
    {
        const bool branch_taken_0x24cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cccc) {
            ctx->pc = 0x24CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CCCCu;
            // 0x24ccd0: 0x32020100  andi        $v0, $s0, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CCE8u;
            goto label_24cce8;
        }
    }
    ctx->pc = 0x24CCD4u;
    // 0x24ccd4: 0xc092940  jal         func_24A500
    ctx->pc = 0x24CCD4u;
    SET_GPR_U32(ctx, 31, 0x24CCDCu);
    ctx->pc = 0x24CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCD4u;
    // 0x24ccd8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24CCD4u, 0x24CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCDCu;
label_24ccdc:
    // 0x24ccdc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24CCDCu;
    {
        const bool branch_taken_0x24ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCDCu;
        // 0x24cce0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccdc) {
            ctx->pc = 0x24CD2Cu;
            goto label_24cd2c;
        }
    }
    ctx->pc = 0x24CCE4u;
    // 0x24cce4: 0x0  nop
    ctx->pc = 0x24cce4u;
    // NOP
label_24cce8:
    // 0x24cce8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CCE8u;
    {
        const bool branch_taken_0x24cce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cce8) {
            ctx->pc = 0x24CCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CCE8u;
            // 0x24ccec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CD0Cu;
            goto label_24cd0c;
        }
    }
    ctx->pc = 0x24CCF0u;
    // 0x24ccf0: 0xc093104  jal         func_24C410
    ctx->pc = 0x24CCF0u;
    SET_GPR_U32(ctx, 31, 0x24CCF8u);
    ctx->pc = 0x24CCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCF0u;
    // 0x24ccf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C410u, 0x24CCF0u, 0x24CCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CCF8u;
label_24ccf8:
    // 0x24ccf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24CCF8u;
    {
        const bool branch_taken_0x24ccf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCF8u;
        // 0x24ccfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccf8) {
            ctx->pc = 0x24CD08u;
            goto label_24cd08;
        }
    }
    ctx->pc = 0x24CD00u;
    // 0x24cd00: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x24CD00u;
    {
        const bool branch_taken_0x24cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD00u;
        // 0x24cd04: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd00) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CD08u;
label_24cd08:
    // 0x24cd08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24cd0c:
    // 0x24cd0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24cd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd10: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x24cd10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24cd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd18: 0xc093140  jal         func_24C500
    ctx->pc = 0x24CD18u;
    SET_GPR_U32(ctx, 31, 0x24CD20u);
    ctx->pc = 0x24CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD18u;
    // 0x24cd1c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C500u, 0x24CD18u, 0x24CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD20u;
label_24cd20:
    // 0x24cd20: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x24CD20u;
    {
        const bool branch_taken_0x24cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD20u;
        // 0x24cd24: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd20) {
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CD28u;
    // 0x24cd28: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x24cd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24cd2c:
    // 0x24cd2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd30: 0xc0b71c4  jal         func_2DC710
    ctx->pc = 0x24CD30u;
    SET_GPR_U32(ctx, 31, 0x24CD38u);
    ctx->pc = 0x24CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD30u;
    // 0x24cd34: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC710u, 0x24CD30u, 0x24CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD38u;
label_24cd38:
    // 0x24cd38: 0x264483c0  addiu       $a0, $s2, -0x7C40
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935488));
    // 0x24cd3c: 0x9082000e  lbu         $v0, 0xE($a0)
    ctx->pc = 0x24cd3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x24cd40: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x24CD40u;
    {
        const bool branch_taken_0x24cd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD40u;
        // 0x24cd44: 0x8e4383c0  lw          $v1, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd40) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CD48u;
    // 0x24cd48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24cd4c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x24cd4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24cd50: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x24CD50u;
    {
        const bool branch_taken_0x24cd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD50u;
        // 0x24cd54: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd50) {
            ctx->pc = 0x24CDE0u;
            goto label_24cde0;
        }
    }
    ctx->pc = 0x24CD58u;
    // 0x24cd58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24cd5c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24cd60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cd64: 0x8c631960  lw          $v1, 0x1960($v1)
    ctx->pc = 0x24cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6496)));
    // 0x24cd68: 0x600008  jr          $v1
    ctx->pc = 0x24CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CD70u: goto label_24cd70;
            case 0x24CD88u: goto label_24cd88;
            case 0x24CDA0u: goto label_24cda0;
            case 0x24CDC8u: goto label_24cdc8;
            case 0x24CDD8u: goto label_24cdd8;
            case 0x24CDE0u: goto label_24cde0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CD70u;
label_24cd70:
    // 0x24cd70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24cd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd74: 0xc086f9a  jal         func_21BE68
    ctx->pc = 0x24CD74u;
    SET_GPR_U32(ctx, 31, 0x24CD7Cu);
    ctx->pc = 0x24CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD74u;
    // 0x24cd78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE68u, 0x24CD74u, 0x24CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD7Cu;
label_24cd7c:
    // 0x24cd7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24CD7Cu;
    {
        const bool branch_taken_0x24cd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD7Cu;
        // 0x24cd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd7c) {
            ctx->pc = 0x24CDACu;
            goto label_24cdac;
        }
    }
    ctx->pc = 0x24CD84u;
    // 0x24cd84: 0x0  nop
    ctx->pc = 0x24cd84u;
    // NOP
label_24cd88:
    // 0x24cd88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24cd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cd8c: 0xc086f9a  jal         func_21BE68
    ctx->pc = 0x24CD8Cu;
    SET_GPR_U32(ctx, 31, 0x24CD94u);
    ctx->pc = 0x24CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD8Cu;
    // 0x24cd90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE68u, 0x24CD8Cu, 0x24CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD94u;
label_24cd94:
    // 0x24cd94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24CD94u;
    {
        const bool branch_taken_0x24cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD94u;
        // 0x24cd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd94) {
            ctx->pc = 0x24CDACu;
            goto label_24cdac;
        }
    }
    ctx->pc = 0x24CD9Cu;
    // 0x24cd9c: 0x0  nop
    ctx->pc = 0x24cd9cu;
    // NOP
label_24cda0:
    // 0x24cda0: 0xc0873f2  jal         func_21CFC8
    ctx->pc = 0x24CDA0u;
    SET_GPR_U32(ctx, 31, 0x24CDA8u);
    ctx->pc = 0x24CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDA0u;
    // 0x24cda4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CFC8u, 0x24CDA0u, 0x24CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDA8u;
label_24cda8:
    // 0x24cda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24cdac:
    // 0x24cdac: 0xc086b22  jal         func_21AC88
    ctx->pc = 0x24CDACu;
    SET_GPR_U32(ctx, 31, 0x24CDB4u);
    ctx->pc = 0x24CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDACu;
    // 0x24cdb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC88u, 0x24CDACu, 0x24CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDB4u;
label_24cdb4:
    // 0x24cdb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24cdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cdb8: 0xc093124  jal         func_24C490
    ctx->pc = 0x24CDB8u;
    SET_GPR_U32(ctx, 31, 0x24CDC0u);
    ctx->pc = 0x24CDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CDB8u;
    // 0x24cdbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C490u, 0x24CDB8u, 0x24CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDC0u;
label_24cdc0:
    // 0x24cdc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24CDC0u;
    {
        const bool branch_taken_0x24cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDC0u;
        // 0x24cdc4: 0x8e4383c0  lw          $v1, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdc0) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CDC8u;
label_24cdc8:
    // 0x24cdc8: 0xc0871da  jal         func_21C768
    ctx->pc = 0x24CDC8u;
    SET_GPR_U32(ctx, 31, 0x24CDD0u);
    ctx->pc = 0x21C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C768u, 0x24CDC8u, 0x24CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDD0u;
label_24cdd0:
    // 0x24cdd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24CDD0u;
    {
        const bool branch_taken_0x24cdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDD0u;
        // 0x24cdd4: 0x8e4383c0  lw          $v1, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cdd0) {
            ctx->pc = 0x24CDE4u;
            goto label_24cde4;
        }
    }
    ctx->pc = 0x24CDD8u;
label_24cdd8:
    // 0x24cdd8: 0xc087178  jal         func_21C5E0
    ctx->pc = 0x24CDD8u;
    SET_GPR_U32(ctx, 31, 0x24CDE0u);
    ctx->pc = 0x21C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5E0u, 0x24CDD8u, 0x24CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CDE0u;
label_24cde0:
    // 0x24cde0: 0x8e4383c0  lw          $v1, -0x7C40($s2)
    ctx->pc = 0x24cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
label_24cde4:
    // 0x24cde4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x24cde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24cde8: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x24CDE8u;
    {
        const bool branch_taken_0x24cde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CDE8u;
        // 0x24cdec: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cde8) {
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CDF0u;
    // 0x24cdf0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24cdf4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24cdf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cdfc: 0x8c631990  lw          $v1, 0x1990($v1)
    ctx->pc = 0x24cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6544)));
    // 0x24ce00: 0x600008  jr          $v1
    ctx->pc = 0x24CE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CE08u: goto label_24ce08;
            case 0x24CE18u: goto label_24ce18;
            case 0x24CE84u: goto label_24ce84;
            case 0x24CFE0u: goto label_24cfe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CE00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24CE08u;
label_24ce08:
    // 0x24ce08: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x24ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24ce0c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x24CE0Cu;
    {
        const bool branch_taken_0x24ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE0Cu;
        // 0x24ce10: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce0c) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CE14u;
    // 0x24ce14: 0x0  nop
    ctx->pc = 0x24ce14u;
    // NOP
label_24ce18:
    // 0x24ce18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24ce1c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x24CE1Cu;
    {
        const bool branch_taken_0x24ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE1Cu;
        // 0x24ce20: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce1c) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CE24u;
    // 0x24ce24: 0x0  nop
    ctx->pc = 0x24ce24u;
    // NOP
label_24ce28:
    // 0x24ce28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24ce28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24ce2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce30: 0xc0930c4  jal         func_24C310
    ctx->pc = 0x24CE30u;
    SET_GPR_U32(ctx, 31, 0x24CE38u);
    ctx->pc = 0x24CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE30u;
    // 0x24ce34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C310u, 0x24CE30u, 0x24CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE38u;
label_24ce38:
    // 0x24ce38: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x24ce38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
    // 0x24ce3c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24CE3Cu;
    {
        const bool branch_taken_0x24ce3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce3c) {
            ctx->pc = 0x24CE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CE3Cu;
            // 0x24ce40: 0x320200f0  andi        $v0, $s0, 0xF0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)240);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CE58u;
            goto label_24ce58;
        }
    }
    ctx->pc = 0x24CE44u;
    // 0x24ce44: 0xc093104  jal         func_24C410
    ctx->pc = 0x24CE44u;
    SET_GPR_U32(ctx, 31, 0x24CE4Cu);
    ctx->pc = 0x24CE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE44u;
    // 0x24ce48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C410u, 0x24CE44u, 0x24CE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE4Cu;
label_24ce4c:
    // 0x24ce4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ce50: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x24CE50u;
    {
        const bool branch_taken_0x24ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE50u;
        // 0x24ce54: 0xa2230021  sb          $v1, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce50) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CE58u;
label_24ce58:
    // 0x24ce58: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x24CE58u;
    {
        const bool branch_taken_0x24ce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ce58) {
            ctx->pc = 0x24CE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CE58u;
            // 0x24ce5c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CE60u;
    // 0x24ce60: 0xc092940  jal         func_24A500
    ctx->pc = 0x24CE60u;
    SET_GPR_U32(ctx, 31, 0x24CE68u);
    ctx->pc = 0x24CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE60u;
    // 0x24ce64: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24CE60u, 0x24CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE68u;
label_24ce68:
    // 0x24ce68: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24ce6c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x24ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x24ce70: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x24ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x24ce74: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CE74u;
    {
        const bool branch_taken_0x24ce74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ce74) {
            ctx->pc = 0x24CE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CE74u;
            // 0x24ce78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CE88u;
            goto label_24ce88;
        }
    }
    ctx->pc = 0x24CE7Cu;
    // 0x24ce7c: 0xc0b471e  jal         func_2D1C78
    ctx->pc = 0x24CE7Cu;
    SET_GPR_U32(ctx, 31, 0x24CE84u);
    ctx->pc = 0x24CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CE7Cu;
    // 0x24ce80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C78u, 0x24CE7Cu, 0x24CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CE84u;
label_24ce84:
    // 0x24ce84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24ce88:
    // 0x24ce88: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x24CE88u;
    {
        const bool branch_taken_0x24ce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE88u;
        // 0x24ce8c: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce88) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CE90u;
label_24ce90:
    // 0x24ce90: 0x82a30020  lb          $v1, 0x20($s5)
    ctx->pc = 0x24ce90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x24ce94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24ce98: 0x14620077  bne         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x24CE98u;
    {
        const bool branch_taken_0x24ce98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE98u;
        // 0x24ce9c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce98) {
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CEA0u;
    // 0x24cea0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x24cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24cea4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24cea8: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ceac: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x24CEACu;
    {
        const bool branch_taken_0x24ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEACu;
        // 0x24ceb0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ceac) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CEB4u;
    // 0x24ceb4: 0x0  nop
    ctx->pc = 0x24ceb4u;
    // NOP
label_24ceb8:
    // 0x24ceb8: 0x82b00023  lb          $s0, 0x23($s5)
    ctx->pc = 0x24ceb8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
    // 0x24cebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cec0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24cec0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24cec4: 0x21c3021  addu        $a2, $s0, $gp
    ctx->pc = 0x24cec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x24cec8: 0x8cc6a858  lw          $a2, -0x57A8($a2)
    ctx->pc = 0x24cec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944856)));
    // 0x24cecc: 0xc093074  jal         func_24C1D0
    ctx->pc = 0x24CECCu;
    SET_GPR_U32(ctx, 31, 0x24CED4u);
    ctx->pc = 0x24CED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CECCu;
    // 0x24ced0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C1D0u, 0x24CECCu, 0x24CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CED4u;
label_24ced4:
    // 0x24ced4: 0x21c3021  addu        $a2, $s0, $gp
    ctx->pc = 0x24ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 28)));
    // 0x24ced8: 0x8cc6a850  lw          $a2, -0x57B0($a2)
    ctx->pc = 0x24ced8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944848)));
    // 0x24cedc: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x24cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x24cee0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24CEE0u;
    {
        const bool branch_taken_0x24cee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cee0) {
            ctx->pc = 0x24CEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CEE0u;
            // 0x24cee4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CF08u;
            goto label_24cf08;
        }
    }
    ctx->pc = 0x24CEE8u;
    // 0x24cee8: 0xc093104  jal         func_24C410
    ctx->pc = 0x24CEE8u;
    SET_GPR_U32(ctx, 31, 0x24CEF0u);
    ctx->pc = 0x24CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CEE8u;
    // 0x24ceec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C410u, 0x24CEE8u, 0x24CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEF0u;
label_24cef0:
    // 0x24cef0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x24cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x24cef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24cef8: 0xa2230021  sb          $v1, 0x21($s1)
    ctx->pc = 0x24cef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x24cefc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x24CEFCu;
    {
        const bool branch_taken_0x24cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEFCu;
        // 0x24cf00: 0xa2a20021  sb          $v0, 0x21($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cefc) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CF04u;
    // 0x24cf04: 0x0  nop
    ctx->pc = 0x24cf04u;
    // NOP
label_24cf08:
    // 0x24cf08: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x24cf08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24cf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf10: 0xc093140  jal         func_24C500
    ctx->pc = 0x24CF10u;
    SET_GPR_U32(ctx, 31, 0x24CF18u);
    ctx->pc = 0x24CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF10u;
    // 0x24cf14: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C500u, 0x24CF10u, 0x24CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF18u;
label_24cf18:
    // 0x24cf18: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x24CF18u;
    {
        const bool branch_taken_0x24cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF18u;
        // 0x24cf1c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf18) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CF20u;
    // 0x24cf20: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24cf24: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cf24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cf28: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x24CF28u;
    {
        const bool branch_taken_0x24cf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF28u;
        // 0x24cf2c: 0xa2a30021  sb          $v1, 0x21($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf28) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CF30u;
label_24cf30:
    // 0x24cf30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24cf34: 0x8c438888  lw          $v1, -0x7778($v0)
    ctx->pc = 0x24cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8888u));
    // 0x24cf38: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24CF38u;
    {
        const bool branch_taken_0x24cf38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x24CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF38u;
        // 0x24cf3c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf38) {
            ctx->pc = 0x24CF50u;
            goto label_24cf50;
        }
    }
    ctx->pc = 0x24CF40u;
    // 0x24cf40: 0xae4000a8  sw          $zero, 0xA8($s2)
    ctx->pc = 0x24cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
    // 0x24cf44: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24CF44u;
    {
        const bool branch_taken_0x24cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF44u;
        // 0x24cf48: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf44) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CF4Cu;
    // 0x24cf4c: 0x0  nop
    ctx->pc = 0x24cf4cu;
    // NOP
label_24cf50:
    // 0x24cf50: 0xc092f8e  jal         func_24BE38
    ctx->pc = 0x24CF50u;
    SET_GPR_U32(ctx, 31, 0x24CF58u);
    ctx->pc = 0x24CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF50u;
    // 0x24cf54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BE38u, 0x24CF50u, 0x24CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF58u;
label_24cf58:
    // 0x24cf58: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24cf5c: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x24cf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x24cf60: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x24CF60u;
    {
        const bool branch_taken_0x24cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF60u;
        // 0x24cf64: 0xae5300a4  sw          $s3, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf60) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CF68u;
label_24cf68:
    // 0x24cf68: 0xc092f8e  jal         func_24BE38
    ctx->pc = 0x24CF68u;
    SET_GPR_U32(ctx, 31, 0x24CF70u);
    ctx->pc = 0x24CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CF68u;
    // 0x24cf6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BE38u, 0x24CF68u, 0x24CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CF70u;
label_24cf70:
    // 0x24cf70: 0xae5300a4  sw          $s3, 0xA4($s2)
    ctx->pc = 0x24cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 19));
    // 0x24cf74: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24cf78: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x24CF78u;
    {
        const bool branch_taken_0x24cf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF78u;
        // 0x24cf7c: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf78) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CF80u;
label_24cf80:
    // 0x24cf80: 0x82a20022  lb          $v0, 0x22($s5)
    ctx->pc = 0x24cf80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x24cf84: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x24CF84u;
    {
        const bool branch_taken_0x24cf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF84u;
        // 0x24cf88: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf84) {
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24CF8Cu;
    // 0x24cf8c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x24cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24cf90: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x24cf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x24cf94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CF94u;
    {
        const bool branch_taken_0x24cf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF94u;
        // 0x24cf98: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf94) {
            ctx->pc = 0x24CFA8u;
            goto label_24cfa8;
        }
    }
    ctx->pc = 0x24CF9Cu;
    // 0x24cf9c: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x24cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x24cfa0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x24cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x24cfa4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_24cfa8:
    // 0x24cfa8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x24CFA8u;
    {
        const bool branch_taken_0x24cfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFA8u;
        // 0x24cfac: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfa8) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CFB0u;
label_24cfb0:
    // 0x24cfb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24cfb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24cfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfb8: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x24cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x24cfbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfc0: 0xc092ef2  jal         func_24BBC8
    ctx->pc = 0x24CFC0u;
    SET_GPR_U32(ctx, 31, 0x24CFC8u);
    ctx->pc = 0x24CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFC0u;
    // 0x24cfc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BBC8u, 0x24CFC0u, 0x24CFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CFC8u;
label_24cfc8:
    // 0x24cfc8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24CFC8u;
    {
        const bool branch_taken_0x24cfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFC8u;
        // 0x24cfcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfc8) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CFD0u;
    // 0x24cfd0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x24cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24cfd4: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x24cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x24cfd8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24CFD8u;
    {
        const bool branch_taken_0x24cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFD8u;
        // 0x24cfdc: 0xa2230021  sb          $v1, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfd8) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CFE0u;
label_24cfe0:
    // 0x24cfe0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24cfe4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x24CFE4u;
    {
        const bool branch_taken_0x24cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE4u;
        // 0x24cfe8: 0xa2220021  sb          $v0, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfe4) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24CFECu;
    // 0x24cfec: 0x0  nop
    ctx->pc = 0x24cfecu;
    // NOP
label_24cff0:
    // 0x24cff0: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x24cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x24cff4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x24cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_24cff8:
    // 0x24cff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cffc: 0xc085048  jal         func_214120
    ctx->pc = 0x24CFFCu;
    SET_GPR_U32(ctx, 31, 0x24D004u);
    ctx->pc = 0x24D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CFFCu;
    // 0x24d000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214120u, 0x24CFFCu, 0x24D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D004u;
label_24d004:
    // 0x24d004: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24D004u;
    {
        const bool branch_taken_0x24d004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D004u;
        // 0x24d008: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d004) {
            ctx->pc = 0x24D060u;
            goto label_24d060;
        }
    }
    ctx->pc = 0x24D00Cu;
    // 0x24d00c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d010: 0x24638858  addiu       $v1, $v1, -0x77A8
    ctx->pc = 0x24d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x24d014: 0x2648004  sllv        $s0, $a0, $s3
    ctx->pc = 0x24d014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    // 0x24d018: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x24d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x24d01c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x24d01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x24d020: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x24d020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x24d024: 0xc086620  jal         func_219880
    ctx->pc = 0x24D024u;
    SET_GPR_U32(ctx, 31, 0x24D02Cu);
    ctx->pc = 0x24D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D024u;
    // 0x24d028: 0xa2200021  sb          $zero, 0x21($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x24D024u, 0x24D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D02Cu;
label_24d02c:
    // 0x24d02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d030: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24d034: 0x2631007  srav        $v0, $v1, $s3
    ctx->pc = 0x24d034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x24d038: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24d03c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24d040: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24D040u;
    {
        const bool branch_taken_0x24d040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D040u;
        // 0x24d044: 0x701025  or          $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d040) {
            ctx->pc = 0x24D04Cu;
            goto label_24d04c;
        }
    }
    ctx->pc = 0x24D048u;
    // 0x24d048: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24d048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_24d04c:
    // 0x24d04c: 0xc0865d8  jal         func_219760
    ctx->pc = 0x24D04Cu;
    SET_GPR_U32(ctx, 31, 0x24D054u);
    ctx->pc = 0x24D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D04Cu;
    // 0x24d050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219760u, 0x24D04Cu, 0x24D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D054u;
label_24d054:
    // 0x24d054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24D054u;
    {
        const bool branch_taken_0x24d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D054u;
        // 0x24d058: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d054) {
            ctx->pc = 0x24D078u;
            goto label_24d078;
        }
    }
    ctx->pc = 0x24D05Cu;
    // 0x24d05c: 0x0  nop
    ctx->pc = 0x24d05cu;
    // NOP
label_24d060:
    // 0x24d060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24D060u;
    {
        const bool branch_taken_0x24d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D060u;
        // 0x24d064: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d060) {
            ctx->pc = 0x24D074u;
            goto label_24d074;
        }
    }
    ctx->pc = 0x24D068u;
label_24d068:
    // 0x24d068: 0xc0a10c0  jal         func_284300
    ctx->pc = 0x24D068u;
    SET_GPR_U32(ctx, 31, 0x24D070u);
    ctx->pc = 0x284300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284300u, 0x24D068u, 0x24D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D070u;
label_24d070:
    // 0x24d070: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x24d070u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24d074:
    // 0x24d074: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x24d074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24d078:
    // 0x24d078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24d088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d08c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24d08cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d090: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24d090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d094: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24d094u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24d098: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24d098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d09c: 0x3e00008  jr          $ra
    ctx->pc = 0x24D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D09Cu;
        // 0x24d0a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D0A4u;
    // 0x24d0a4: 0x0  nop
    ctx->pc = 0x24d0a4u;
    // NOP
    ctx->pc = 0x24d0a8u;
}
