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

// Function: sub_002C8358
// Address: 0x2c8358 - 0x2c8550
void sub_002C8358_0x2c8358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8358_0x2c8358");
#endif

    ctx->pc = 0x2c8358u;

    // 0x2c8358: 0x24870034  addiu       $a3, $a0, 0x34
    ctx->pc = 0x2c8358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2c835c: 0x24a90034  addiu       $t1, $a1, 0x34
    ctx->pc = 0x2c835cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x2c8360: 0x90eb000a  lbu         $t3, 0xA($a3)
    ctx->pc = 0x2c8360u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2c8364: 0x248a0028  addiu       $t2, $a0, 0x28
    ctx->pc = 0x2c8364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2c8368: 0x2d62000a  sltiu       $v0, $t3, 0xA
    ctx->pc = 0x2c8368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c836c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C836Cu;
    {
        const bool branch_taken_0x2c836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C836Cu;
        // 0x2c8370: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c836c) {
            ctx->pc = 0x2C8398u;
            goto label_2c8398;
        }
    }
    ctx->pc = 0x2C8374u;
    // 0x2c8374: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2c8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2c8378: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2c8378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c837c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C837Cu;
    {
        const bool branch_taken_0x2c837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c837c) {
            ctx->pc = 0x2C8380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C837Cu;
            // 0x2c8380: 0x2402017c  addiu       $v0, $zero, 0x17C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8464u;
            goto label_2c8464;
        }
    }
    ctx->pc = 0x2C8384u;
    // 0x2c8384: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c8384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c838c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8390: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C8390u;
    {
        const bool branch_taken_0x2c8390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8390u;
        // 0x2c8394: 0x244200c8  addiu       $v0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8390) {
            ctx->pc = 0x2C8464u;
            goto label_2c8464;
        }
    }
    ctx->pc = 0x2C8398u;
label_2c8398:
    // 0x2c8398: 0x9122000a  lbu         $v0, 0xA($t1)
    ctx->pc = 0x2c8398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x2c839c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2c839cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2c83a0: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C83A0u;
    {
        const bool branch_taken_0x2c83a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c83a0) {
            ctx->pc = 0x2C83A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83A0u;
            // 0x2c83a4: 0x94e20008  lhu         $v0, 0x8($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8470u;
            goto label_2c8470;
        }
    }
    ctx->pc = 0x2C83A8u;
    // 0x2c83a8: 0x9123000a  lbu         $v1, 0xA($t1)
    ctx->pc = 0x2c83a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x2c83ac: 0x90e2000a  lbu         $v0, 0xA($a3)
    ctx->pc = 0x2c83acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2c83b0: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x2c83b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c83b4: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C83B4u;
    {
        const bool branch_taken_0x2c83b4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83B4u;
        // 0x2c83b8: 0x28a40003  slti        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83b4) {
            ctx->pc = 0x2C83E0u;
            goto label_2c83e0;
        }
    }
    ctx->pc = 0x2C83BCu;
    // 0x2c83bc: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2c83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2c83c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c83c4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2c83c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2c83c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c83cc: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2c83ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2c83d0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2c83d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c83d4: 0x8508e3e0  lh          $t0, -0x1C20($t0)
    ctx->pc = 0x2c83d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294960096)));
    // 0x2c83d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C83D8u;
    {
        const bool branch_taken_0x2c83d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83D8u;
        // 0x2c83dc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83d8) {
            ctx->pc = 0x2C8424u;
            goto label_2c8424;
        }
    }
    ctx->pc = 0x2C83E0u;
label_2c83e0:
    // 0x2c83e0: 0x4a1000f  bgez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C83E0u;
    {
        const bool branch_taken_0x2c83e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83E0u;
        // 0x2c83e4: 0x8788bb28  lh          $t0, -0x44D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294949672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83e0) {
            ctx->pc = 0x2C8420u;
            goto label_2c8420;
        }
    }
    ctx->pc = 0x2C83E8u;
    // 0x2c83e8: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x2c83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2c83ec: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c83ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c83f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C83F0u;
    {
        const bool branch_taken_0x2c83f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c83f0) {
            ctx->pc = 0x2C83F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C83F0u;
            // 0x2c83f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8408u;
            goto label_2c8408;
        }
    }
    ctx->pc = 0x2C83F8u;
    // 0x2c83f8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C83F8u;
    {
        const bool branch_taken_0x2c83f8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2C83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C83F8u;
        // 0x2c83fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c83f8) {
            ctx->pc = 0x2C8404u;
            goto label_2c8404;
        }
    }
    ctx->pc = 0x2C8400u;
    // 0x2c8400: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c8400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2c8404:
    // 0x2c8404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c8408:
    // 0x2c8408: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c840c: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2c840cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2c8410: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2c8410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c8414: 0x8508e3f0  lh          $t0, -0x1C10($t0)
    ctx->pc = 0x2c8414u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294960112)));
    // 0x2c8418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8418u;
    {
        const bool branch_taken_0x2c8418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8418u;
        // 0x2c841c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8418) {
            ctx->pc = 0x2C8424u;
            goto label_2c8424;
        }
    }
    ctx->pc = 0x2C8420u;
label_2c8420:
    // 0x2c8420: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c8420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c8424:
    // 0x2c8424: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2c8424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c8428: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8428u;
    {
        const bool branch_taken_0x2c8428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8428) {
            ctx->pc = 0x2C842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8428u;
            // 0x2c842c: 0x94e20008  lhu         $v0, 0x8($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8470u;
            goto label_2c8470;
        }
    }
    ctx->pc = 0x2C8430u;
    // 0x2c8430: 0x80e2000b  lb          $v0, 0xB($a3)
    ctx->pc = 0x2c8430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
    // 0x2c8434: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8434u;
    {
        const bool branch_taken_0x2c8434 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8434u;
        // 0x2c8438: 0x90e3000b  lbu         $v1, 0xB($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8434) {
            ctx->pc = 0x2C8448u;
            goto label_2c8448;
        }
    }
    ctx->pc = 0x2C843Cu;
    // 0x2c843c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8440: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C8440u;
    {
        const bool branch_taken_0x2c8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8440u;
        // 0x2c8444: 0xa0e2000b  sb          $v0, 0xB($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8440) {
            ctx->pc = 0x2C846Cu;
            goto label_2c846c;
        }
    }
    ctx->pc = 0x2C8448u;
label_2c8448:
    // 0x2c8448: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2c8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c844c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8450: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2c8450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2c8454: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2c8454u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2c8458: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8458u;
    {
        const bool branch_taken_0x2c8458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8458u;
        // 0x2c845c: 0xa0e2000b  sb          $v0, 0xB($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8458) {
            ctx->pc = 0x2C846Cu;
            goto label_2c846c;
        }
    }
    ctx->pc = 0x2C8460u;
    // 0x2c8460: 0x250207d0  addiu       $v0, $t0, 0x7D0
    ctx->pc = 0x2c8460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 2000));
label_2c8464:
    // 0x2c8464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2c8464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2c8468: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x2c8468u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
label_2c846c:
    // 0x2c846c: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x2c846cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_2c8470:
    // 0x2c8470: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x2c8470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x2c8474: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2c8474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c8478: 0xa4e20008  sh          $v0, 0x8($a3)
    ctx->pc = 0x2c8478u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c847c: 0x9123000a  lbu         $v1, 0xA($t1)
    ctx->pc = 0x2c847cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x2c8480: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2c8480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c8484: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8484u;
    {
        const bool branch_taken_0x2c8484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8484) {
            ctx->pc = 0x2C84C0u;
            goto label_2c84c0;
        }
    }
    ctx->pc = 0x2C848Cu;
    // 0x2c848c: 0x90e4000a  lbu         $a0, 0xA($a3)
    ctx->pc = 0x2c848cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2c8490: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2c8490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c8494: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c8494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c8498: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c8498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c849c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c84a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c84a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c84a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c84ac: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2c84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2c84b0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2c84b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c84b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2c84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c84b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C84B8u;
    {
        const bool branch_taken_0x2c84b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84B8u;
        // 0x2c84bc: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84b8) {
            ctx->pc = 0x2C8504u;
            goto label_2c8504;
        }
    }
    ctx->pc = 0x2C84C0u;
label_2c84c0:
    // 0x2c84c0: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C84C0u;
    {
        const bool branch_taken_0x2c84c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c84c0) {
            ctx->pc = 0x2C84C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C84C0u;
            // 0x2c84c4: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C84E8u;
            goto label_2c84e8;
        }
    }
    ctx->pc = 0x2C84C8u;
    // 0x2c84c8: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2c84cc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c84d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2c84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c84d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c84d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c84dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C84DCu;
    {
        const bool branch_taken_0x2c84dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C84DCu;
        // 0x2c84e0: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c84dc) {
            ctx->pc = 0x2C84FCu;
            goto label_2c84fc;
        }
    }
    ctx->pc = 0x2C84E4u;
    // 0x2c84e4: 0x0  nop
    ctx->pc = 0x2c84e4u;
    // NOP
label_2c84e8:
    // 0x2c84e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c84ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c84f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c84f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c84f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c84fc:
    // 0x2c84fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8500: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2c8500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2c8504:
    // 0x2c8504: 0x9122000a  lbu         $v0, 0xA($t1)
    ctx->pc = 0x2c8504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x2c8508: 0x2c420016  sltiu       $v0, $v0, 0x16
    ctx->pc = 0x2c8508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x2c850c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C850Cu;
    {
        const bool branch_taken_0x2c850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c850c) {
            ctx->pc = 0x2C8510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C850Cu;
            // 0x2c8510: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8538u;
            goto label_2c8538;
        }
    }
    ctx->pc = 0x2C8514u;
    // 0x2c8514: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2c8514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2c8518: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2c8518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c851c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2c851cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c8520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8524: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c8528: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c8528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c852c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8530: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2c8530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2c8534: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2c8534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2c8538:
    // 0x2c8538: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2c8538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2c853c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c8540: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c8540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c8544: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x2c8544u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x2c8548: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8548u;
        // 0x2c854c: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8550u;
}
