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

// Function: sub_00200020
// Address: 0x200020 - 0x2006f8
void sub_00200020_0x200020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200020_0x200020");
#endif

    switch (ctx->pc) {
        case 0x200028u: goto label_200028;
        case 0x20002cu: goto label_20002c;
        case 0x200350u: goto label_200350;
        case 0x200364u: goto label_200364;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003c4u: goto label_2003c4;
        case 0x2003d8u: goto label_2003d8;
        case 0x200408u: goto label_200408;
        case 0x200420u: goto label_200420;
        case 0x200428u: goto label_200428;
        case 0x200430u: goto label_200430;
        case 0x200438u: goto label_200438;
        case 0x200500u: goto label_200500;
        case 0x200508u: goto label_200508;
        case 0x200528u: goto label_200528;
        case 0x200548u: goto label_200548;
        case 0x200558u: goto label_200558;
        default: break;
    }

    ctx->pc = 0x200020u;

    // 0x200020: 0xa2420201  sb          $v0, 0x201($s2)
    ctx->pc = 0x200020u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 513), (uint8_t)GPR_U32(ctx, 2));
    // 0x200024: 0x0  nop
    ctx->pc = 0x200024u;
    // NOP
label_200028:
    // 0x200028: 0xa2400201  sb          $zero, 0x201($s2)
    ctx->pc = 0x200028u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 513), (uint8_t)GPR_U32(ctx, 0));
label_20002c:
    // 0x20002c: 0x86420156  lh          $v0, 0x156($s2)
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 342)));
    // 0x200030: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x200030u;
    {
        const bool branch_taken_0x200030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200030u;
        // 0x200034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200030) {
            ctx->pc = 0x200064u;
            goto label_200064;
        }
    }
    ctx->pc = 0x200038u;
    // 0x200038: 0x94e20026  lhu         $v0, 0x26($a3)
    ctx->pc = 0x200038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x20003c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x200040: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x200040u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x200044: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x200044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x200048: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x200048u;
    {
        const bool branch_taken_0x200048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200048) {
            ctx->pc = 0x20004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200048u;
            // 0x20004c: 0xa24001f9  sb          $zero, 0x1F9($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200068u;
            goto label_200068;
        }
    }
    ctx->pc = 0x200050u;
    // 0x200050: 0x94e20028  lhu         $v0, 0x28($a3)
    ctx->pc = 0x200050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x200054: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x200054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200058: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x200058u;
    {
        const bool branch_taken_0x200058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200058) {
            ctx->pc = 0x20005Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200058u;
            // 0x20005c: 0xa24001f9  sb          $zero, 0x1F9($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200068u;
            goto label_200068;
        }
    }
    ctx->pc = 0x200060u;
    // 0x200060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200064:
    // 0x200064: 0xa24201f9  sb          $v0, 0x1F9($s2)
    ctx->pc = 0x200064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 2));
label_200068:
    // 0x200068: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20006c: 0x94e30028  lhu         $v1, 0x28($a3)
    ctx->pc = 0x20006cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x200070: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x200074: 0x5483001c  bnel        $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x200074u;
    {
        const bool branch_taken_0x200074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x200074) {
            ctx->pc = 0x200078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200074u;
            // 0x200078: 0x864202b8  lh          $v0, 0x2B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2000E8u;
            goto label_2000e8;
        }
    }
    ctx->pc = 0x20007Cu;
    // 0x20007c: 0x86430144  lh          $v1, 0x144($s2)
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x200080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200084: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200084u;
    {
        const bool branch_taken_0x200084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x200084) {
            ctx->pc = 0x200088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200084u;
            // 0x200088: 0x864202b8  lh          $v0, 0x2B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2000E8u;
            goto label_2000e8;
        }
    }
    ctx->pc = 0x20008Cu;
    // 0x20008c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200090: 0x10850014  beq         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x200090u;
    {
        const bool branch_taken_0x200090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x200094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200090u;
        // 0x200094: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200090) {
            ctx->pc = 0x2000E4u;
            goto label_2000e4;
        }
    }
    ctx->pc = 0x200098u;
    // 0x200098: 0x9243019a  lbu         $v1, 0x19A($s2)
    ctx->pc = 0x200098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 410)));
    // 0x20009c: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20009Cu;
    {
        const bool branch_taken_0x20009c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20009c) {
            ctx->pc = 0x2000A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20009Cu;
            // 0x2000a0: 0x864202b8  lh          $v0, 0x2B8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2000E8u;
            goto label_2000e8;
        }
    }
    ctx->pc = 0x2000A4u;
    // 0x2000a4: 0x92420187  lbu         $v0, 0x187($s2)
    ctx->pc = 0x2000a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 391)));
    // 0x2000a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2000A8u;
    {
        const bool branch_taken_0x2000a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000A8u;
        // 0x2000ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000a8) {
            ctx->pc = 0x2000E0u;
            goto label_2000e0;
        }
    }
    ctx->pc = 0x2000B0u;
    // 0x2000b0: 0x92420185  lbu         $v0, 0x185($s2)
    ctx->pc = 0x2000b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 389)));
    // 0x2000b4: 0x244200f2  addiu       $v0, $v0, 0xF2
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 242));
    // 0x2000b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2000b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2000bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2000bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2000c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2000C0u;
    {
        const bool branch_taken_0x2000c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2000c0) {
            ctx->pc = 0x2000C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2000C0u;
            // 0x2000c4: 0xa24501fb  sb          $a1, 0x1FB($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2000E4u;
            goto label_2000e4;
        }
    }
    ctx->pc = 0x2000C8u;
    // 0x2000c8: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x2000c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2000cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2000ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2000d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2000D0u;
    {
        const bool branch_taken_0x2000d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000D0u;
        // 0x2000d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000d0) {
            ctx->pc = 0x2000E0u;
            goto label_2000e0;
        }
    }
    ctx->pc = 0x2000D8u;
    // 0x2000d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2000D8u;
    {
        const bool branch_taken_0x2000d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000D8u;
        // 0x2000dc: 0xa24501fb  sb          $a1, 0x1FB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000d8) {
            ctx->pc = 0x2000E4u;
            goto label_2000e4;
        }
    }
    ctx->pc = 0x2000E0u;
label_2000e0:
    // 0x2000e0: 0xa24201fa  sb          $v0, 0x1FA($s2)
    ctx->pc = 0x2000e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 506), (uint8_t)GPR_U32(ctx, 2));
label_2000e4:
    // 0x2000e4: 0x864202b8  lh          $v0, 0x2B8($s2)
    ctx->pc = 0x2000e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
label_2000e8:
    // 0x2000e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2000E8u;
    {
        const bool branch_taken_0x2000e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2000ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000E8u;
        // 0x2000ec: 0x964302b8  lhu         $v1, 0x2B8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000e8) {
            ctx->pc = 0x20011Cu;
            goto label_20011c;
        }
    }
    ctx->pc = 0x2000F0u;
    // 0x2000f0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2000f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2000f8: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2000F8u;
    {
        const bool branch_taken_0x2000f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2000FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000F8u;
        // 0x2000fc: 0xa64202b8  sh          $v0, 0x2B8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 696), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000f8) {
            ctx->pc = 0x200104u;
            goto label_200104;
        }
    }
    ctx->pc = 0x200100u;
    // 0x200100: 0xa64002b8  sh          $zero, 0x2B8($s2)
    ctx->pc = 0x200100u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 696), (uint16_t)GPR_U32(ctx, 0));
label_200104:
    // 0x200104: 0x924201ef  lbu         $v0, 0x1EF($s2)
    ctx->pc = 0x200104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 495)));
    // 0x200108: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200108u;
    {
        const bool branch_taken_0x200108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200108u;
        // 0x20010c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200108) {
            ctx->pc = 0x200118u;
            goto label_200118;
        }
    }
    ctx->pc = 0x200110u;
    // 0x200110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200110u;
    {
        const bool branch_taken_0x200110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200110u;
        // 0x200114: 0xa64002b8  sh          $zero, 0x2B8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 696), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200110) {
            ctx->pc = 0x20011Cu;
            goto label_20011c;
        }
    }
    ctx->pc = 0x200118u;
label_200118:
    // 0x200118: 0x964302b8  lhu         $v1, 0x2B8($s2)
    ctx->pc = 0x200118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 696)));
label_20011c:
    // 0x20011c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x20011cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x200120: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x200120u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x200124: 0x2842001f  slti        $v0, $v0, 0x1F
    ctx->pc = 0x200124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x200128: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x200128u;
    {
        const bool branch_taken_0x200128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200128) {
            ctx->pc = 0x20012Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200128u;
            // 0x20012c: 0x8642014e  lh          $v0, 0x14E($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200154u;
            goto label_200154;
        }
    }
    ctx->pc = 0x200130u;
    // 0x200130: 0x864202b6  lh          $v0, 0x2B6($s2)
    ctx->pc = 0x200130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 694)));
    // 0x200134: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200134u;
    {
        const bool branch_taken_0x200134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200134u;
        // 0x200138: 0x964302b6  lhu         $v1, 0x2B6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 694)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200134) {
            ctx->pc = 0x200150u;
            goto label_200150;
        }
    }
    ctx->pc = 0x20013Cu;
    // 0x20013c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x20013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200140: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x200140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x200144: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200144u;
    {
        const bool branch_taken_0x200144 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x200148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200144u;
        // 0x200148: 0xa64202b6  sh          $v0, 0x2B6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 694), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200144) {
            ctx->pc = 0x200150u;
            goto label_200150;
        }
    }
    ctx->pc = 0x20014Cu;
    // 0x20014c: 0xa64002b6  sh          $zero, 0x2B6($s2)
    ctx->pc = 0x20014cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 694), (uint16_t)GPR_U32(ctx, 0));
label_200150:
    // 0x200150: 0x8642014e  lh          $v0, 0x14E($s2)
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
label_200154:
    // 0x200154: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x200154u;
    {
        const bool branch_taken_0x200154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200154u;
        // 0x200158: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200154) {
            ctx->pc = 0x20018Cu;
            goto label_20018c;
        }
    }
    ctx->pc = 0x20015Cu;
    // 0x20015c: 0x94e50044  lhu         $a1, 0x44($a3)
    ctx->pc = 0x20015cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x200160: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x200160u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x200164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200168: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x20016c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x20016cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x200170: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x200170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x200174: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x200174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200178: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x200178u;
    {
        const bool branch_taken_0x200178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200178) {
            ctx->pc = 0x20017Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200178u;
            // 0x20017c: 0x924201a3  lbu         $v0, 0x1A3($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 419)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200190u;
            goto label_200190;
        }
    }
    ctx->pc = 0x200180u;
    // 0x200180: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x200180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x200184: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x200184u;
    {
        const bool branch_taken_0x200184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200184) {
            ctx->pc = 0x200188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200184u;
            // 0x200188: 0xa24601ff  sb          $a2, 0x1FF($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 511), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20018Cu;
            goto label_20018c;
        }
    }
    ctx->pc = 0x20018Cu;
label_20018c:
    // 0x20018c: 0x924201a3  lbu         $v0, 0x1A3($s2)
    ctx->pc = 0x20018cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 419)));
label_200190:
    // 0x200190: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200190u;
    {
        const bool branch_taken_0x200190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200190u;
        // 0x200194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200190) {
            ctx->pc = 0x20019Cu;
            goto label_20019c;
        }
    }
    ctx->pc = 0x200198u;
    // 0x200198: 0xa24201ff  sb          $v0, 0x1FF($s2)
    ctx->pc = 0x200198u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 511), (uint8_t)GPR_U32(ctx, 2));
label_20019c:
    // 0x20019c: 0x92430198  lbu         $v1, 0x198($s2)
    ctx->pc = 0x20019cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 408)));
    // 0x2001a0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2001A0u;
    {
        const bool branch_taken_0x2001a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001A0u;
        // 0x2001a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001a0) {
            ctx->pc = 0x200290u;
            goto label_200290;
        }
    }
    ctx->pc = 0x2001A8u;
    // 0x2001a8: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2001A8u;
    {
        const bool branch_taken_0x2001a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2001a8) {
            ctx->pc = 0x2001ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2001A8u;
            // 0x2001ac: 0x964306ac  lhu         $v1, 0x6AC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2001F0u;
            goto label_2001f0;
        }
    }
    ctx->pc = 0x2001B0u;
    // 0x2001b0: 0x92e30184  lbu         $v1, 0x184($s7)
    ctx->pc = 0x2001b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 388)));
    // 0x2001b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2001b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2001b8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2001B8u;
    {
        const bool branch_taken_0x2001b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2001BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001B8u;
        // 0x2001bc: 0x24022821  addiu       $v0, $zero, 0x2821 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001b8) {
            ctx->pc = 0x2001E8u;
            goto label_2001e8;
        }
    }
    ctx->pc = 0x2001C0u;
    // 0x2001c0: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2001c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2001c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2001C4u;
    {
        const bool branch_taken_0x2001c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001C4u;
        // 0x2001c8: 0x24022821  addiu       $v0, $zero, 0x2821 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001c4) {
            ctx->pc = 0x2001E8u;
            goto label_2001e8;
        }
    }
    ctx->pc = 0x2001CCu;
    // 0x2001cc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2001ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2001d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2001D0u;
    {
        const bool branch_taken_0x2001d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2001d0) {
            ctx->pc = 0x2001D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2001D0u;
            // 0x2001d4: 0x24022821  addiu       $v0, $zero, 0x2821 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2001E8u;
            goto label_2001e8;
        }
    }
    ctx->pc = 0x2001D8u;
    // 0x2001d8: 0x24021052  addiu       $v0, $zero, 0x1052
    ctx->pc = 0x2001d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
    // 0x2001dc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2001DCu;
    {
        const bool branch_taken_0x2001dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001DCu;
        // 0x2001e0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001dc) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x2001E4u;
    // 0x2001e4: 0x0  nop
    ctx->pc = 0x2001e4u;
    // NOP
label_2001e8:
    // 0x2001e8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2001E8u;
    {
        const bool branch_taken_0x2001e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001E8u;
        // 0x2001ec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001e8) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x2001F0u;
label_2001f0:
    // 0x2001f0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2001f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2001f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2001F4u;
    {
        const bool branch_taken_0x2001f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2001F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001F4u;
        // 0x2001f8: 0x24024072  addiu       $v0, $zero, 0x4072 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16498));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001f4) {
            ctx->pc = 0x200208u;
            goto label_200208;
        }
    }
    ctx->pc = 0x2001FCu;
    // 0x2001fc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2001FCu;
    {
        const bool branch_taken_0x2001fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001FCu;
        // 0x200200: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2001fc) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x200204u;
    // 0x200204: 0x0  nop
    ctx->pc = 0x200204u;
    // NOP
label_200208:
    // 0x200208: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x200208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x20020c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20020Cu;
    {
        const bool branch_taken_0x20020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20020Cu;
        // 0x200210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20020c) {
            ctx->pc = 0x200238u;
            goto label_200238;
        }
    }
    ctx->pc = 0x200214u;
    // 0x200214: 0x92e30184  lbu         $v1, 0x184($s7)
    ctx->pc = 0x200214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 388)));
    // 0x200218: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200218u;
    {
        const bool branch_taken_0x200218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x200218) {
            ctx->pc = 0x20021Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200218u;
            // 0x20021c: 0x2402482a  addiu       $v0, $zero, 0x482A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18474));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200230u;
            goto label_200230;
        }
    }
    ctx->pc = 0x200220u;
    // 0x200220: 0x24025029  addiu       $v0, $zero, 0x5029
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20521));
    // 0x200224: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x200224u;
    {
        const bool branch_taken_0x200224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200224u;
        // 0x200228: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200224) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x20022Cu;
    // 0x20022c: 0x0  nop
    ctx->pc = 0x20022cu;
    // NOP
label_200230:
    // 0x200230: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x200230u;
    {
        const bool branch_taken_0x200230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200230u;
        // 0x200234: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200230) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x200238u;
label_200238:
    // 0x200238: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x200238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x20023c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20023Cu;
    {
        const bool branch_taken_0x20023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20023Cu;
        // 0x200240: 0x24025822  addiu       $v0, $zero, 0x5822 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22562));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20023c) {
            ctx->pc = 0x200250u;
            goto label_200250;
        }
    }
    ctx->pc = 0x200244u;
    // 0x200244: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x200244u;
    {
        const bool branch_taken_0x200244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200244u;
        // 0x200248: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200244) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x20024Cu;
    // 0x20024c: 0x0  nop
    ctx->pc = 0x20024cu;
    // NOP
label_200250:
    // 0x200250: 0x84e4000c  lh          $a0, 0xC($a3)
    ctx->pc = 0x200250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x200254: 0xae4400cc  sw          $a0, 0xCC($s2)
    ctx->pc = 0x200254u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 4));
    // 0x200258: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x200258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x20025c: 0x964200cc  lhu         $v0, 0xCC($s2)
    ctx->pc = 0x20025cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x200260: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x200260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x200264: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x200264u;
    {
        const bool branch_taken_0x200264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200264u;
        // 0x200268: 0xa6420152  sh          $v0, 0x152($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200264) {
            ctx->pc = 0x200304u;
            goto label_200304;
        }
    }
    ctx->pc = 0x20026Cu;
    // 0x20026c: 0x924201c0  lbu         $v0, 0x1C0($s2)
    ctx->pc = 0x20026cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x200270: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x200270u;
    {
        const bool branch_taken_0x200270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200270) {
            ctx->pc = 0x200274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200270u;
            // 0x200274: 0x924201f9  lbu         $v0, 0x1F9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200308u;
            goto label_200308;
        }
    }
    ctx->pc = 0x200278u;
    // 0x200278: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x200278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x20027c: 0xa6400152  sh          $zero, 0x152($s2)
    ctx->pc = 0x20027cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x200280: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x200280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x200284: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x200284u;
    {
        const bool branch_taken_0x200284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200284u;
        // 0x200288: 0xae4200cc  sw          $v0, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200284) {
            ctx->pc = 0x200304u;
            goto label_200304;
        }
    }
    ctx->pc = 0x20028Cu;
    // 0x20028c: 0x0  nop
    ctx->pc = 0x20028cu;
    // NOP
label_200290:
    // 0x200290: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x200294: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x200294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x200298: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x200298u;
    {
        const bool branch_taken_0x200298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200298) {
            ctx->pc = 0x20029Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200298u;
            // 0x20029c: 0x924201f9  lbu         $v0, 0x1F9($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200308u;
            goto label_200308;
        }
    }
    ctx->pc = 0x2002A0u;
    // 0x2002a0: 0x924201c0  lbu         $v0, 0x1C0($s2)
    ctx->pc = 0x2002a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x2002a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2002A4u;
    {
        const bool branch_taken_0x2002a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002A4u;
        // 0x2002a8: 0x964306ac  lhu         $v1, 0x6AC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002a4) {
            ctx->pc = 0x2002C8u;
            goto label_2002c8;
        }
    }
    ctx->pc = 0x2002ACu;
    // 0x2002ac: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x2002acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x2002b0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2002B0u;
    {
        const bool branch_taken_0x2002b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2002b0) {
            ctx->pc = 0x2002B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2002B0u;
            // 0x2002b4: 0x30620006  andi        $v0, $v1, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2002E4u;
            goto label_2002e4;
        }
    }
    ctx->pc = 0x2002B8u;
    // 0x2002b8: 0x24021052  addiu       $v0, $zero, 0x1052
    ctx->pc = 0x2002b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
    // 0x2002bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2002BCu;
    {
        const bool branch_taken_0x2002bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002BCu;
        // 0x2002c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002bc) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x2002C4u;
    // 0x2002c4: 0x0  nop
    ctx->pc = 0x2002c4u;
    // NOP
label_2002c8:
    // 0x2002c8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2002cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2002CCu;
    {
        const bool branch_taken_0x2002cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002CCu;
        // 0x2002d0: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002cc) {
            ctx->pc = 0x2002E0u;
            goto label_2002e0;
        }
    }
    ctx->pc = 0x2002D4u;
    // 0x2002d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2002D4u;
    {
        const bool branch_taken_0x2002d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002D4u;
        // 0x2002d8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002d4) {
            ctx->pc = 0x2002F0u;
            goto label_2002f0;
        }
    }
    ctx->pc = 0x2002DCu;
    // 0x2002dc: 0x0  nop
    ctx->pc = 0x2002dcu;
    // NOP
label_2002e0:
    // 0x2002e0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2002e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2002e4:
    // 0x2002e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2002E4u;
    {
        const bool branch_taken_0x2002e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2002E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002E4u;
        // 0x2002e8: 0x24023029  addiu       $v0, $zero, 0x3029 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2002e4) {
            ctx->pc = 0x200304u;
            goto label_200304;
        }
    }
    ctx->pc = 0x2002ECu;
    // 0x2002ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2002ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2002f0:
    // 0x2002f0: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x2002f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x2002f4: 0xa2430185  sb          $v1, 0x185($s2)
    ctx->pc = 0x2002f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 389), (uint8_t)GPR_U32(ctx, 3));
    // 0x2002f8: 0x964200cc  lhu         $v0, 0xCC($s2)
    ctx->pc = 0x2002f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2002fc: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x2002fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x200300: 0xa6420152  sh          $v0, 0x152($s2)
    ctx->pc = 0x200300u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 2));
label_200304:
    // 0x200304: 0x924201f9  lbu         $v0, 0x1F9($s2)
    ctx->pc = 0x200304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
label_200308:
    // 0x200308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200308u;
    {
        const bool branch_taken_0x200308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200308u;
        // 0x20030c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200308) {
            ctx->pc = 0x200324u;
            goto label_200324;
        }
    }
    ctx->pc = 0x200310u;
    // 0x200310: 0x92430185  lbu         $v1, 0x185($s2)
    ctx->pc = 0x200310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 389)));
    // 0x200314: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200314u;
    {
        const bool branch_taken_0x200314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200314u;
        // 0x200318: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200314) {
            ctx->pc = 0x200324u;
            goto label_200324;
        }
    }
    ctx->pc = 0x20031Cu;
    // 0x20031c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20031Cu;
    {
        const bool branch_taken_0x20031c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20031c) {
            ctx->pc = 0x200320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20031Cu;
            // 0x200320: 0xa6400152  sh          $zero, 0x152($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200348u;
            goto label_200348;
        }
    }
    ctx->pc = 0x200324u;
label_200324:
    // 0x200324: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x200328: 0x28424000  slti        $v0, $v0, 0x4000
    ctx->pc = 0x200328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x20032c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20032Cu;
    {
        const bool branch_taken_0x20032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20032c) {
            ctx->pc = 0x200330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20032Cu;
            // 0x200330: 0x964200cc  lhu         $v0, 0xCC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200340u;
            goto label_200340;
        }
    }
    ctx->pc = 0x200334u;
    // 0x200334: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200334u;
    {
        const bool branch_taken_0x200334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200334u;
        // 0x200338: 0xa6400152  sh          $zero, 0x152($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200334) {
            ctx->pc = 0x200348u;
            goto label_200348;
        }
    }
    ctx->pc = 0x20033Cu;
    // 0x20033c: 0x0  nop
    ctx->pc = 0x20033cu;
    // NOP
label_200340:
    // 0x200340: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x200340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x200344: 0xa6420152  sh          $v0, 0x152($s2)
    ctx->pc = 0x200344u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 2));
label_200348:
    // 0x200348: 0xc07f99e  jal         func_1FE678
    ctx->pc = 0x200348u;
    SET_GPR_U32(ctx, 31, 0x200350u);
    ctx->pc = 0x20034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200348u;
    // 0x20034c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE678u, 0x200348u, 0x200350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200350u;
label_200350:
    // 0x200350: 0x924201ef  lbu         $v0, 0x1EF($s2)
    ctx->pc = 0x200350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 495)));
    // 0x200354: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200354u;
    {
        const bool branch_taken_0x200354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200354u;
        // 0x200358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200354) {
            ctx->pc = 0x200370u;
            goto label_200370;
        }
    }
    ctx->pc = 0x20035Cu;
    // 0x20035c: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x20035Cu;
    SET_GPR_U32(ctx, 31, 0x200364u);
    ctx->pc = 0x200360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20035Cu;
    // 0x200360: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B40u, 0x20035Cu, 0x200364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200364u;
label_200364:
    // 0x200364: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x200364u;
    {
        const bool branch_taken_0x200364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200364) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x20036Cu;
    // 0x20036c: 0x0  nop
    ctx->pc = 0x20036cu;
    // NOP
label_200370:
    // 0x200370: 0x9242019e  lbu         $v0, 0x19E($s2)
    ctx->pc = 0x200370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 414)));
    // 0x200374: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x200374u;
    {
        const bool branch_taken_0x200374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200374) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x20037Cu;
    // 0x20037c: 0x924201f7  lbu         $v0, 0x1F7($s2)
    ctx->pc = 0x20037cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 503)));
    // 0x200380: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x200380u;
    {
        const bool branch_taken_0x200380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200380u;
        // 0x200384: 0x9643014e  lhu         $v1, 0x14E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200380) {
            ctx->pc = 0x2003DCu;
            goto label_2003dc;
        }
    }
    ctx->pc = 0x200388u;
    // 0x200388: 0x8642014e  lh          $v0, 0x14E($s2)
    ctx->pc = 0x200388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
    // 0x20038c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20038Cu;
    {
        const bool branch_taken_0x20038c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20038c) {
            ctx->pc = 0x200390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20038Cu;
            // 0x200390: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2003E8u;
            goto label_2003e8;
        }
    }
    ctx->pc = 0x200394u;
    // 0x200394: 0x9242018b  lbu         $v0, 0x18B($s2)
    ctx->pc = 0x200394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 395)));
    // 0x200398: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x200398u;
    {
        const bool branch_taken_0x200398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200398) {
            ctx->pc = 0x2003DCu;
            goto label_2003dc;
        }
    }
    ctx->pc = 0x2003A0u;
    // 0x2003a0: 0xc082140  jal         func_208500
    ctx->pc = 0x2003A0u;
    SET_GPR_U32(ctx, 31, 0x2003A8u);
    ctx->pc = 0x208500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208500u, 0x2003A0u, 0x2003A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003A8u;
label_2003a8:
    // 0x2003a8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2003A8u;
    {
        const bool branch_taken_0x2003a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003a8) {
            ctx->pc = 0x2003ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2003A8u;
            // 0x2003ac: 0x9643014e  lhu         $v1, 0x14E($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2003DCu;
            goto label_2003dc;
        }
    }
    ctx->pc = 0x2003B0u;
    // 0x2003b0: 0x86420148  lh          $v0, 0x148($s2)
    ctx->pc = 0x2003b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2003b4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2003B4u;
    {
        const bool branch_taken_0x2003b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003B4u;
        // 0x2003b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003b4) {
            ctx->pc = 0x2003D0u;
            goto label_2003d0;
        }
    }
    ctx->pc = 0x2003BCu;
    // 0x2003bc: 0xc07dad0  jal         func_1F6B40
    ctx->pc = 0x2003BCu;
    SET_GPR_U32(ctx, 31, 0x2003C4u);
    ctx->pc = 0x2003C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003BCu;
    // 0x2003c0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B40u, 0x2003BCu, 0x2003C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003C4u;
label_2003c4:
    // 0x2003c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2003C4u;
    {
        const bool branch_taken_0x2003c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003C4u;
        // 0x2003c8: 0x9643014e  lhu         $v1, 0x14E($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003c4) {
            ctx->pc = 0x2003DCu;
            goto label_2003dc;
        }
    }
    ctx->pc = 0x2003CCu;
    // 0x2003cc: 0x0  nop
    ctx->pc = 0x2003ccu;
    // NOP
label_2003d0:
    // 0x2003d0: 0xc07daaa  jal         func_1F6AA8
    ctx->pc = 0x2003D0u;
    SET_GPR_U32(ctx, 31, 0x2003D8u);
    ctx->pc = 0x2003D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003D0u;
    // 0x2003d4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6AA8u, 0x2003D0u, 0x2003D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003D8u;
label_2003d8:
    // 0x2003d8: 0x9643014e  lhu         $v1, 0x14E($s2)
    ctx->pc = 0x2003d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 334)));
label_2003dc:
    // 0x2003dc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2003DCu;
    {
        const bool branch_taken_0x2003dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003dc) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x2003E4u;
    // 0x2003e4: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2003e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2003e8:
    // 0x2003e8: 0x86430096  lh          $v1, 0x96($s2)
    ctx->pc = 0x2003e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x2003ec: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x2003ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2003f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2003f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2003f4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2003f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2003f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2003F8u;
    {
        const bool branch_taken_0x2003f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2003f8) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x200400u;
    // 0x200400: 0xc088122  jal         func_220488
    ctx->pc = 0x200400u;
    SET_GPR_U32(ctx, 31, 0x200408u);
    ctx->pc = 0x200404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200400u;
    // 0x200404: 0x90840040  lbu         $a0, 0x40($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220488u, 0x200400u, 0x200408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200408u;
label_200408:
    // 0x200408: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x200408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20040c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20040Cu;
    {
        const bool branch_taken_0x20040c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20040c) {
            ctx->pc = 0x200420u;
            goto label_200420;
        }
    }
    ctx->pc = 0x200414u;
    // 0x200414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200418: 0xc07dac4  jal         func_1F6B10
    ctx->pc = 0x200418u;
    SET_GPR_U32(ctx, 31, 0x200420u);
    ctx->pc = 0x20041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200418u;
    // 0x20041c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6B10u, 0x200418u, 0x200420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200420u;
label_200420:
    // 0x200420: 0xc07da58  jal         func_1F6960
    ctx->pc = 0x200420u;
    SET_GPR_U32(ctx, 31, 0x200428u);
    ctx->pc = 0x200424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200420u;
    // 0x200424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6960u, 0x200420u, 0x200428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200428u;
label_200428:
    // 0x200428: 0xc0802da  jal         func_200B68
    ctx->pc = 0x200428u;
    SET_GPR_U32(ctx, 31, 0x200430u);
    ctx->pc = 0x20042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200428u;
    // 0x20042c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B68u, 0x200428u, 0x200430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200430u;
label_200430:
    // 0x200430: 0xc080422  jal         func_201088
    ctx->pc = 0x200430u;
    SET_GPR_U32(ctx, 31, 0x200438u);
    ctx->pc = 0x200434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200430u;
    // 0x200434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201088u, 0x200430u, 0x200438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200438u;
label_200438:
    // 0x200438: 0x924201ef  lbu         $v0, 0x1EF($s2)
    ctx->pc = 0x200438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 495)));
    // 0x20043c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20043Cu;
    {
        const bool branch_taken_0x20043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20043c) {
            ctx->pc = 0x200440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20043Cu;
            // 0x200440: 0xa64002bc  sh          $zero, 0x2BC($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 700), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20047Cu;
            goto label_20047c;
        }
    }
    ctx->pc = 0x200444u;
    // 0x200444: 0x92e201ef  lbu         $v0, 0x1EF($s7)
    ctx->pc = 0x200444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 495)));
    // 0x200448: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x200448u;
    {
        const bool branch_taken_0x200448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200448) {
            ctx->pc = 0x20044Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200448u;
            // 0x20044c: 0xa64002bc  sh          $zero, 0x2BC($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 700), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20047Cu;
            goto label_20047c;
        }
    }
    ctx->pc = 0x200450u;
    // 0x200450: 0x864202bc  lh          $v0, 0x2BC($s2)
    ctx->pc = 0x200450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x200454: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200454u;
    {
        const bool branch_taken_0x200454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200454u;
        // 0x200458: 0x964302bc  lhu         $v1, 0x2BC($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200454) {
            ctx->pc = 0x20047Cu;
            goto label_20047c;
        }
    }
    ctx->pc = 0x20045Cu;
    // 0x20045c: 0x96420152  lhu         $v0, 0x152($s2)
    ctx->pc = 0x20045cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x200460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200464: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x200468: 0xa64302bc  sh          $v1, 0x2BC($s2)
    ctx->pc = 0x200468u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 700), (uint16_t)GPR_U32(ctx, 3));
    // 0x20046c: 0x3042ffe7  andi        $v0, $v0, 0xFFE7
    ctx->pc = 0x20046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65511);
    // 0x200470: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200470u;
    {
        const bool branch_taken_0x200470 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x200474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200470u;
        // 0x200474: 0xa6420152  sh          $v0, 0x152($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 338), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200470) {
            ctx->pc = 0x20047Cu;
            goto label_20047c;
        }
    }
    ctx->pc = 0x200478u;
    // 0x200478: 0xa64002bc  sh          $zero, 0x2BC($s2)
    ctx->pc = 0x200478u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 700), (uint16_t)GPR_U32(ctx, 0));
label_20047c:
    // 0x20047c: 0x864202be  lh          $v0, 0x2BE($s2)
    ctx->pc = 0x20047cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 702)));
    // 0x200480: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200480u;
    {
        const bool branch_taken_0x200480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200480u;
        // 0x200484: 0x964302be  lhu         $v1, 0x2BE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 702)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200480) {
            ctx->pc = 0x20049Cu;
            goto label_20049c;
        }
    }
    ctx->pc = 0x200488u;
    // 0x200488: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x200488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20048c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x20048cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x200490: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200490u;
    {
        const bool branch_taken_0x200490 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x200494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200490u;
        // 0x200494: 0xa64202be  sh          $v0, 0x2BE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 702), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200490) {
            ctx->pc = 0x20049Cu;
            goto label_20049c;
        }
    }
    ctx->pc = 0x200498u;
    // 0x200498: 0xa64002be  sh          $zero, 0x2BE($s2)
    ctx->pc = 0x200498u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 702), (uint16_t)GPR_U32(ctx, 0));
label_20049c:
    // 0x20049c: 0x924201f9  lbu         $v0, 0x1F9($s2)
    ctx->pc = 0x20049cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
    // 0x2004a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2004A0u;
    {
        const bool branch_taken_0x2004a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2004a0) {
            ctx->pc = 0x2004A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2004A0u;
            // 0x2004a4: 0xa64002c2  sh          $zero, 0x2C2($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 706), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2004A8u;
            goto label_2004a8;
        }
    }
    ctx->pc = 0x2004A8u;
label_2004a8:
    // 0x2004a8: 0x864202c2  lh          $v0, 0x2C2($s2)
    ctx->pc = 0x2004a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 706)));
    // 0x2004ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2004ACu;
    {
        const bool branch_taken_0x2004ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2004B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004ACu;
        // 0x2004b0: 0x964302c2  lhu         $v1, 0x2C2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 706)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004ac) {
            ctx->pc = 0x2004C0u;
            goto label_2004c0;
        }
    }
    ctx->pc = 0x2004B4u;
    // 0x2004b4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2004b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2004B8u;
    {
        const bool branch_taken_0x2004b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B8u;
        // 0x2004bc: 0xa64202c2  sh          $v0, 0x2C2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 706), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004b8) {
            ctx->pc = 0x2004C4u;
            goto label_2004c4;
        }
    }
    ctx->pc = 0x2004C0u;
label_2004c0:
    // 0x2004c0: 0xa64002c2  sh          $zero, 0x2C2($s2)
    ctx->pc = 0x2004c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 706), (uint16_t)GPR_U32(ctx, 0));
label_2004c4:
    // 0x2004c4: 0x864202c2  lh          $v0, 0x2C2($s2)
    ctx->pc = 0x2004c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 706)));
    // 0x2004c8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2004C8u;
    {
        const bool branch_taken_0x2004c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2004c8) {
            ctx->pc = 0x2004CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2004C8u;
            // 0x2004cc: 0xa64002c0  sh          $zero, 0x2C0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 704), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2004D0u;
            goto label_2004d0;
        }
    }
    ctx->pc = 0x2004D0u;
label_2004d0:
    // 0x2004d0: 0x86440012  lh          $a0, 0x12($s2)
    ctx->pc = 0x2004d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x2004d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2004d8: 0x8f83a530  lw          $v1, -0x5AD0($gp)
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2004dc: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2004e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2004e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2004e4: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2004E4u;
    {
        const bool branch_taken_0x2004e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2004e4) {
            ctx->pc = 0x2004E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2004E4u;
            // 0x2004e8: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20052Cu;
            goto label_20052c;
        }
    }
    ctx->pc = 0x2004ECu;
    // 0x2004ec: 0x924201fb  lbu         $v0, 0x1FB($s2)
    ctx->pc = 0x2004ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 507)));
    // 0x2004f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2004F0u;
    {
        const bool branch_taken_0x2004f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004F0u;
        // 0x2004f4: 0x26500750  addiu       $s0, $s2, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004f0) {
            ctx->pc = 0x200528u;
            goto label_200528;
        }
    }
    ctx->pc = 0x2004F8u;
    // 0x2004f8: 0xc09569e  jal         func_255A78
    ctx->pc = 0x2004F8u;
    SET_GPR_U32(ctx, 31, 0x200500u);
    ctx->pc = 0x2004FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2004F8u;
    // 0x2004fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A78u, 0x2004F8u, 0x200500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200500u;
label_200500:
    // 0x200500: 0xc08e4b0  jal         func_2392C0
    ctx->pc = 0x200500u;
    SET_GPR_U32(ctx, 31, 0x200508u);
    ctx->pc = 0x200504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200500u;
    // 0x200504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2392C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2392C0u, 0x200500u, 0x200508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200508u;
label_200508:
    // 0x200508: 0x86430164  lh          $v1, 0x164($s2)
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x20050c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20050Cu;
    {
        const bool branch_taken_0x20050c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20050Cu;
        // 0x200510: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20050c) {
            ctx->pc = 0x200528u;
            goto label_200528;
        }
    }
    ctx->pc = 0x200514u;
    // 0x200514: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x200514u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x200518: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x200518u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x20051c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200520: 0xc081ffc  jal         func_207FF0
    ctx->pc = 0x200520u;
    SET_GPR_U32(ctx, 31, 0x200528u);
    ctx->pc = 0x200524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200520u;
    // 0x200524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF0u, 0x200520u, 0x200528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200528u;
label_200528:
    // 0x200528: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x200528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_20052c:
    // 0x20052c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20052Cu;
    {
        const bool branch_taken_0x20052c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20052Cu;
        // 0x200530: 0x26500660  addiu       $s0, $s2, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20052c) {
            ctx->pc = 0x20055Cu;
            goto label_20055c;
        }
    }
    ctx->pc = 0x200534u;
    // 0x200534: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x200534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200538: 0xc64d0018  lwc1        $f13, 0x18($s2)
    ctx->pc = 0x200538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20053c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200540: 0xc09fc70  jal         func_27F1C0
    ctx->pc = 0x200540u;
    SET_GPR_U32(ctx, 31, 0x200548u);
    ctx->pc = 0x200544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200540u;
    // 0x200544: 0xc64e001c  lwc1        $f14, 0x1C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1C0u, 0x200540u, 0x200548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200548u;
label_200548:
    // 0x200548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20054c: 0xc64c0670  lwc1        $f12, 0x670($s2)
    ctx->pc = 0x20054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x200550: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x200550u;
    SET_GPR_U32(ctx, 31, 0x200558u);
    ctx->pc = 0x200554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200550u;
    // 0x200554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x200550u, 0x200558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200558u;
label_200558:
    // 0x200558: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_20055c:
    // 0x20055c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20055Cu;
    {
        const bool branch_taken_0x20055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20055Cu;
        // 0x200560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20055c) {
            ctx->pc = 0x20058Cu;
            goto label_20058c;
        }
    }
    ctx->pc = 0x200564u;
    // 0x200564: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x200564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x200568: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200568u;
    {
        const bool branch_taken_0x200568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200568u;
        // 0x20056c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200568) {
            ctx->pc = 0x20058Cu;
            goto label_20058c;
        }
    }
    ctx->pc = 0x200570u;
    // 0x200570: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x200570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x200574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200574u;
    {
        const bool branch_taken_0x200574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200574u;
        // 0x200578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200574) {
            ctx->pc = 0x20058Cu;
            goto label_20058c;
        }
    }
    ctx->pc = 0x20057Cu;
    // 0x20057c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x20057cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x200580: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x200580u;
    {
        const bool branch_taken_0x200580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200580) {
            ctx->pc = 0x200584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200580u;
            // 0x200584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20058Cu;
            goto label_20058c;
        }
    }
    ctx->pc = 0x200588u;
    // 0x200588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20058c:
    // 0x20058c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20058Cu;
    {
        const bool branch_taken_0x20058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20058c) {
            ctx->pc = 0x200590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20058Cu;
            // 0x200590: 0x8e4400c4  lw          $a0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2005A8u;
            goto label_2005a8;
        }
    }
    ctx->pc = 0x200594u;
    // 0x200594: 0xe6560750  swc1        $f22, 0x750($s2)
    ctx->pc = 0x200594u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x200598: 0xe6570758  swc1        $f23, 0x758($s2)
    ctx->pc = 0x200598u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
    // 0x20059c: 0xe6580000  swc1        $f24, 0x0($s2)
    ctx->pc = 0x20059cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2005a0: 0xe6590008  swc1        $f25, 0x8($s2)
    ctx->pc = 0x2005a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2005a4: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2005a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2005a8:
    // 0x2005a8: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x2005a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2005ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2005ACu;
    {
        const bool branch_taken_0x2005ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005ACu;
        // 0x2005b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005ac) {
            ctx->pc = 0x2005E8u;
            goto label_2005e8;
        }
    }
    ctx->pc = 0x2005B4u;
    // 0x2005b4: 0x86420096  lh          $v0, 0x96($s2)
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x2005b8: 0x96430170  lhu         $v1, 0x170($s2)
    ctx->pc = 0x2005b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 368)));
    // 0x2005bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2005bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2005c0: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2005C0u;
    {
        const bool branch_taken_0x2005c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2005c0) {
            ctx->pc = 0x2005C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005C0u;
            // 0x2005c4: 0x86430180  lh          $v1, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x2005C8u;
    // 0x2005c8: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x2005c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2005cc: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x2005d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2005d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2005d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2005d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2005d8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2005D8u;
    {
        const bool branch_taken_0x2005d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2005d8) {
            ctx->pc = 0x2005DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005D8u;
            // 0x2005dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200674u;
            goto label_200674;
        }
    }
    ctx->pc = 0x2005E0u;
    // 0x2005e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2005E0u;
    {
        const bool branch_taken_0x2005e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2005E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005E0u;
        // 0x2005e4: 0x86430180  lh          $v1, 0x180($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005e0) {
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x2005E8u;
label_2005e8:
    // 0x2005e8: 0x92450187  lbu         $a1, 0x187($s2)
    ctx->pc = 0x2005e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 391)));
    // 0x2005ec: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2005ECu;
    {
        const bool branch_taken_0x2005ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2005ec) {
            ctx->pc = 0x2005F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005ECu;
            // 0x2005f0: 0x94820044  lhu         $v0, 0x44($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200614u;
            goto label_200614;
        }
    }
    ctx->pc = 0x2005F4u;
    // 0x2005f4: 0x924201f9  lbu         $v0, 0x1F9($s2)
    ctx->pc = 0x2005f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 505)));
    // 0x2005f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2005F8u;
    {
        const bool branch_taken_0x2005f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2005f8) {
            ctx->pc = 0x2005FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2005F8u;
            // 0x2005fc: 0x94820044  lhu         $v0, 0x44($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200614u;
            goto label_200614;
        }
    }
    ctx->pc = 0x200600u;
    // 0x200600: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x200600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x200604: 0x30420404  andi        $v0, $v0, 0x404
    ctx->pc = 0x200604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1028);
    // 0x200608: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x200608u;
    {
        const bool branch_taken_0x200608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200608) {
            ctx->pc = 0x20060Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200608u;
            // 0x20060c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200674u;
            goto label_200674;
        }
    }
    ctx->pc = 0x200610u;
    // 0x200610: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x200610u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
label_200614:
    // 0x200614: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x200614u;
    {
        const bool branch_taken_0x200614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200614) {
            ctx->pc = 0x200618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200614u;
            // 0x200618: 0x86430180  lh          $v1, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x20061Cu;
    // 0x20061c: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x20061Cu;
    {
        const bool branch_taken_0x20061c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20061c) {
            ctx->pc = 0x200620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20061Cu;
            // 0x200620: 0x94820044  lhu         $v0, 0x44($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200654u;
            goto label_200654;
        }
    }
    ctx->pc = 0x200624u;
    // 0x200624: 0x86420096  lh          $v0, 0x96($s2)
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 150)));
    // 0x200628: 0x96430170  lhu         $v1, 0x170($s2)
    ctx->pc = 0x200628u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 368)));
    // 0x20062c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20062cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200630: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x200630u;
    {
        const bool branch_taken_0x200630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200630) {
            ctx->pc = 0x200634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200630u;
            // 0x200634: 0x94820044  lhu         $v0, 0x44($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200654u;
            goto label_200654;
        }
    }
    ctx->pc = 0x200638u;
    // 0x200638: 0x94820018  lhu         $v0, 0x18($a0)
    ctx->pc = 0x200638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x20063c: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x20063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x200640: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x200640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x200644: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x200644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x200648: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x200648u;
    {
        const bool branch_taken_0x200648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200648) {
            ctx->pc = 0x20064Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200648u;
            // 0x20064c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200674u;
            goto label_200674;
        }
    }
    ctx->pc = 0x200650u;
    // 0x200650: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x200650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
label_200654:
    // 0x200654: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x200654u;
    {
        const bool branch_taken_0x200654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200654) {
            ctx->pc = 0x200658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200654u;
            // 0x200658: 0x86430180  lh          $v1, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x20065Cu;
    // 0x20065c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20065Cu;
    {
        const bool branch_taken_0x20065c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20065c) {
            ctx->pc = 0x200660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20065Cu;
            // 0x200660: 0x86430180  lh          $v1, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x200664u;
    // 0x200664: 0x92420198  lbu         $v0, 0x198($s2)
    ctx->pc = 0x200664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 408)));
    // 0x200668: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x200668u;
    {
        const bool branch_taken_0x200668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200668) {
            ctx->pc = 0x20066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200668u;
            // 0x20066c: 0x86430180  lh          $v1, 0x180($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x200670u;
    // 0x200670: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200674:
    // 0x200674: 0x86430180  lh          $v1, 0x180($s2)
    ctx->pc = 0x200674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 384)));
label_200678:
    // 0x200678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x200678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20067c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20067Cu;
    {
        const bool branch_taken_0x20067c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20067Cu;
        // 0x200680: 0xa246020f  sb          $a2, 0x20F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 527), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20067c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200684u;
    // 0x200684: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x200684u;
    {
        const bool branch_taken_0x200684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200684u;
        // 0x200688: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200684) {
            ctx->pc = 0x2006A8u;
            goto label_2006a8;
        }
    }
    ctx->pc = 0x20068Cu;
    // 0x20068c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20068cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x200690: 0x1810  mfhi        $v1
    ctx->pc = 0x200690u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x200694: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200694u;
    {
        const bool branch_taken_0x200694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200694u;
        // 0x200698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200694) {
            ctx->pc = 0x2006ACu;
            goto label_2006ac;
        }
    }
    ctx->pc = 0x20069Cu;
    // 0x20069c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20069Cu;
    {
        const bool branch_taken_0x20069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20069Cu;
        // 0x2006a0: 0xa24001bb  sb          $zero, 0x1BB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20069c) {
            ctx->pc = 0x2006B0u;
            goto label_2006b0;
        }
    }
    ctx->pc = 0x2006A4u;
    // 0x2006a4: 0x0  nop
    ctx->pc = 0x2006a4u;
    // NOP
label_2006a8:
    // 0x2006a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2006a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2006ac:
    // 0x2006ac: 0xa24201bb  sb          $v0, 0x1BB($s2)
    ctx->pc = 0x2006acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 443), (uint8_t)GPR_U32(ctx, 2));
label_2006b0:
    // 0x2006b0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2006b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2006b4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2006b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2006b8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2006b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2006bc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2006bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2006c0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2006c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2006c4: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2006c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2006c8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x2006c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2006cc: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x2006ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2006d0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2006d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2006d4: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2006d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2006d8: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x2006d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2006dc: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x2006dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2006e0: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x2006e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2006e4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2006e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2006e8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2006e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2006ec: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2006ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2006f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2006F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2006F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006F0u;
        // 0x2006f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2006F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2006F8u;
}
