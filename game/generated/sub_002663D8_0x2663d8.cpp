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

// Function: sub_002663D8
// Address: 0x2663d8 - 0x266cf8
void sub_002663D8_0x2663d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002663D8_0x2663d8");
#endif

    switch (ctx->pc) {
        case 0x266438u: goto label_266438;
        case 0x266478u: goto label_266478;
        case 0x266aa0u: goto label_266aa0;
        case 0x266ab8u: goto label_266ab8;
        case 0x266ae8u: goto label_266ae8;
        case 0x266b00u: goto label_266b00;
        case 0x266b18u: goto label_266b18;
        case 0x266b30u: goto label_266b30;
        case 0x266b44u: goto label_266b44;
        case 0x266b58u: goto label_266b58;
        case 0x266b6cu: goto label_266b6c;
        case 0x266bc4u: goto label_266bc4;
        case 0x266c30u: goto label_266c30;
        case 0x266c44u: goto label_266c44;
        case 0x266c58u: goto label_266c58;
        case 0x266c6cu: goto label_266c6c;
        case 0x266cb4u: goto label_266cb4;
        default: break;
    }

    ctx->pc = 0x2663d8u;

    // 0x2663d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2663d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2663dc: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2663dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2663e0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2663e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2663e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2663e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2663e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2663ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2663ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2663f0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2663f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2663f4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2663f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2663f8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2663f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2663fc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2663fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x266400: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x266400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x266404: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x266404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x266408: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x266408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x26640c: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x26640cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x266410: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x266410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266414: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x266414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x266418: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x266418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26641c: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266420: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x266420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x266424: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x266424u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x266428: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x266428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26642c: 0x106501e1  beq         $v1, $a1, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x26642Cu;
    {
        const bool branch_taken_0x26642c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x266430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26642Cu;
        // 0x266430: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26642c) {
            ctx->pc = 0x266BB4u;
            goto label_266bb4;
        }
    }
    ctx->pc = 0x266434u;
    // 0x266434: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x266434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_266438:
    // 0x266438: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x266438u;
    {
        const bool branch_taken_0x266438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x266438) {
            ctx->pc = 0x26643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266438u;
            // 0x26643c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266468u;
            goto label_266468;
        }
    }
    ctx->pc = 0x266440u;
    // 0x266440: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x266440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266444: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x266444u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x266448: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x266448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26644c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x266450: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x266450u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x266454: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266458: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x266458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26645c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26645cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x266460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266460u;
    {
        const bool branch_taken_0x266460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266460u;
        // 0x266464: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266460) {
            ctx->pc = 0x26646Cu;
            goto label_26646c;
        }
    }
    ctx->pc = 0x266468u;
label_266468:
    // 0x266468: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x266468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26646c:
    // 0x26646c: 0x124001cc  beqz        $s2, . + 4 + (0x1CC << 2)
    ctx->pc = 0x26646Cu;
    {
        const bool branch_taken_0x26646c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x266470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26646Cu;
        // 0x266470: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26646c) {
            ctx->pc = 0x266BA0u;
            goto label_266ba0;
        }
    }
    ctx->pc = 0x266474u;
    // 0x266474: 0x0  nop
    ctx->pc = 0x266474u;
    // NOP
label_266478:
    // 0x266478: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x266478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26647c: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26647cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x266480: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x266480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x266484: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x266484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x266488: 0x144001ba  bnez        $v0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x266488u;
    {
        const bool branch_taken_0x266488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266488u;
        // 0x26648c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266488) {
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x266490u;
    // 0x266490: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x266490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x266494: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x266494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x266498: 0x144001b6  bnez        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x266498u;
    {
        const bool branch_taken_0x266498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266498) {
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x2664A0u;
    // 0x2664a0: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x2664a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x2664a4: 0x24053ff8  addiu       $a1, $zero, 0x3FF8
    ctx->pc = 0x2664a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
    // 0x2664a8: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x2664a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2664ac: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2664acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2664b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2664b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2664b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2664b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2664b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2664b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2664bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2664bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2664c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2664c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2664c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2664c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2664c8: 0x10850181  beq         $a0, $a1, . + 4 + (0x181 << 2)
    ctx->pc = 0x2664C8u;
    {
        const bool branch_taken_0x2664c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2664CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664C8u;
        // 0x2664cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c8) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x2664D0u;
    // 0x2664d0: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x2664d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x2664d4: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2664D4u;
    {
        const bool branch_taken_0x2664d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664D4u;
        // 0x2664d8: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664d4) {
            ctx->pc = 0x2667C8u;
            goto label_2667c8;
        }
    }
    ctx->pc = 0x2664DCu;
    // 0x2664dc: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x2664dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x2664e0: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2664E0u;
    {
        const bool branch_taken_0x2664e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664E0u;
        // 0x2664e4: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664e0) {
            ctx->pc = 0x266660u;
            goto label_266660;
        }
    }
    ctx->pc = 0x2664E8u;
    // 0x2664e8: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x2664e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x2664ec: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x2664ECu;
    {
        const bool branch_taken_0x2664ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664ECu;
        // 0x2664f0: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664ec) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2664F4u;
    // 0x2664f4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2664F4u;
    {
        const bool branch_taken_0x2664f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664F4u;
        // 0x2664f8: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664f4) {
            ctx->pc = 0x2665A0u;
            goto label_2665a0;
        }
    }
    ctx->pc = 0x2664FCu;
    // 0x2664fc: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x2664fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x266500: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x266500u;
    {
        const bool branch_taken_0x266500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266500u;
        // 0x266504: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266500) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266508u;
    // 0x266508: 0x10820169  beq         $a0, $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x266508u;
    {
        const bool branch_taken_0x266508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266508u;
        // 0x26650c: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266508) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x266510u;
    // 0x266510: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x266510u;
    {
        const bool branch_taken_0x266510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266510u;
        // 0x266514: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266510) {
            ctx->pc = 0x266558u;
            goto label_266558;
        }
    }
    ctx->pc = 0x266518u;
    // 0x266518: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x266518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26651c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26651Cu;
    {
        const bool branch_taken_0x26651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26651Cu;
        // 0x266520: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26651c) {
            ctx->pc = 0x266540u;
            goto label_266540;
        }
    }
    ctx->pc = 0x266524u;
    // 0x266524: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x266524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x266528: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x266528u;
    {
        const bool branch_taken_0x266528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266528u;
        // 0x26652c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266528) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266530u;
    // 0x266530: 0x10820177  beq         $a0, $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x266530u;
    {
        const bool branch_taken_0x266530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266530) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266538u;
    // 0x266538: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x266538u;
    {
        const bool branch_taken_0x266538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266538) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266540u;
label_266540:
    // 0x266540: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x266540u;
    {
        const bool branch_taken_0x266540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266540u;
        // 0x266544: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266540) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266548u;
    // 0x266548: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x266548u;
    {
        const bool branch_taken_0x266548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266548) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266550u;
    // 0x266550: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x266550u;
    {
        const bool branch_taken_0x266550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266550) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x266558u;
label_266558:
    // 0x266558: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x266558u;
    {
        const bool branch_taken_0x266558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266558u;
        // 0x26655c: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266558) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266560u;
    // 0x266560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266560u;
    {
        const bool branch_taken_0x266560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266560u;
        // 0x266564: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266560) {
            ctx->pc = 0x266588u;
            goto label_266588;
        }
    }
    ctx->pc = 0x266568u;
    // 0x266568: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x266568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x26656c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26656Cu;
    {
        const bool branch_taken_0x26656c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26656Cu;
        // 0x266570: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26656c) {
            ctx->pc = 0x266AC8u;
            goto label_266ac8;
        }
    }
    ctx->pc = 0x266574u;
    // 0x266574: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x266574u;
    {
        const bool branch_taken_0x266574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266574u;
        // 0x266578: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266574) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x26657Cu;
    // 0x26657c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x26657Cu;
    {
        const bool branch_taken_0x26657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26657c) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266584u;
    // 0x266584: 0x0  nop
    ctx->pc = 0x266584u;
    // NOP
label_266588:
    // 0x266588: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x266588u;
    {
        const bool branch_taken_0x266588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266588u;
        // 0x26658c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266588) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x266590u;
    // 0x266590: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x266590u;
    {
        const bool branch_taken_0x266590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266590) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266598u;
    // 0x266598: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x266598u;
    {
        const bool branch_taken_0x266598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266598) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2665A0u;
label_2665a0:
    // 0x2665a0: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x2665A0u;
    {
        const bool branch_taken_0x2665a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2665A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665A0u;
        // 0x2665a4: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665a0) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x2665A8u;
    // 0x2665a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2665A8u;
    {
        const bool branch_taken_0x2665a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665A8u;
        // 0x2665ac: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665a8) {
            ctx->pc = 0x266600u;
            goto label_266600;
        }
    }
    ctx->pc = 0x2665B0u;
    // 0x2665b0: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x2665b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x2665b4: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x2665B4u;
    {
        const bool branch_taken_0x2665b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2665B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665B4u;
        // 0x2665b8: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665b4) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x2665BCu;
    // 0x2665bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2665BCu;
    {
        const bool branch_taken_0x2665bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665BCu;
        // 0x2665c0: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665bc) {
            ctx->pc = 0x2665E0u;
            goto label_2665e0;
        }
    }
    ctx->pc = 0x2665C4u;
    // 0x2665c4: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x2665c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x2665c8: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2665C8u;
    {
        const bool branch_taken_0x2665c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2665CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665C8u;
        // 0x2665cc: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665c8) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x2665D0u;
    // 0x2665d0: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x2665D0u;
    {
        const bool branch_taken_0x2665d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2665D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665D0u;
        // 0x2665d4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665d0) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2665D8u;
    // 0x2665d8: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x2665D8u;
    {
        const bool branch_taken_0x2665d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665d8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2665E0u;
label_2665e0:
    // 0x2665e0: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x2665E0u;
    {
        const bool branch_taken_0x2665e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2665E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665E0u;
        // 0x2665e4: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665e0) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2665E8u;
    // 0x2665e8: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2665E8u;
    {
        const bool branch_taken_0x2665e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2665ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665E8u;
        // 0x2665ec: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665e8) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2665F0u;
    // 0x2665f0: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2665F0u;
    {
        const bool branch_taken_0x2665f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2665F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665F0u;
        // 0x2665f4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665f0) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2665F8u;
    // 0x2665f8: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x2665F8u;
    {
        const bool branch_taken_0x2665f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2665f8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266600u;
label_266600:
    // 0x266600: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266600u;
    {
        const bool branch_taken_0x266600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266600u;
        // 0x266604: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266600) {
            ctx->pc = 0x266628u;
            goto label_266628;
        }
    }
    ctx->pc = 0x266608u;
    // 0x266608: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x266608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26660c: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26660Cu;
    {
        const bool branch_taken_0x26660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26660Cu;
        // 0x266610: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26660c) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266614u;
    // 0x266614: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x266614u;
    {
        const bool branch_taken_0x266614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266614) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x26661Cu;
    // 0x26661c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26661Cu;
    {
        const bool branch_taken_0x26661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26661c) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266624u;
    // 0x266624: 0x0  nop
    ctx->pc = 0x266624u;
    // NOP
label_266628:
    // 0x266628: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x266628u;
    {
        const bool branch_taken_0x266628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266628u;
        // 0x26662c: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266628) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266630u;
    // 0x266630: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266630u;
    {
        const bool branch_taken_0x266630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266630u;
        // 0x266634: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266630) {
            ctx->pc = 0x266650u;
            goto label_266650;
        }
    }
    ctx->pc = 0x266638u;
    // 0x266638: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x266638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26663c: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26663Cu;
    {
        const bool branch_taken_0x26663c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26663Cu;
        // 0x266640: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26663c) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x266644u;
    // 0x266644: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x266644u;
    {
        const bool branch_taken_0x266644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266644) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x26664Cu;
    // 0x26664c: 0x0  nop
    ctx->pc = 0x26664cu;
    // NOP
label_266650:
    // 0x266650: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x266650u;
    {
        const bool branch_taken_0x266650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266650) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266658u;
    // 0x266658: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x266658u;
    {
        const bool branch_taken_0x266658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266658) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266660u;
label_266660:
    // 0x266660: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x266660u;
    {
        const bool branch_taken_0x266660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266660u;
        // 0x266664: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266660) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266668u;
    // 0x266668: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x266668u;
    {
        const bool branch_taken_0x266668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266668u;
        // 0x26666c: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266668) {
            ctx->pc = 0x266728u;
            goto label_266728;
        }
    }
    ctx->pc = 0x266670u;
    // 0x266670: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x266670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x266674: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x266674u;
    {
        const bool branch_taken_0x266674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266674u;
        // 0x266678: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266674) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x26667Cu;
    // 0x26667c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26667Cu;
    {
        const bool branch_taken_0x26667c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26667Cu;
        // 0x266680: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26667c) {
            ctx->pc = 0x2666C8u;
            goto label_2666c8;
        }
    }
    ctx->pc = 0x266684u;
    // 0x266684: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x266684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x266688: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266688u;
    {
        const bool branch_taken_0x266688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266688u;
        // 0x26668c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266688) {
            ctx->pc = 0x2666B0u;
            goto label_2666b0;
        }
    }
    ctx->pc = 0x266690u;
    // 0x266690: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x266690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x266694: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x266694u;
    {
        const bool branch_taken_0x266694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266694u;
        // 0x266698: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266694) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x26669Cu;
    // 0x26669c: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26669Cu;
    {
        const bool branch_taken_0x26669c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26669c) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x2666A4u;
    // 0x2666a4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2666A4u;
    {
        const bool branch_taken_0x2666a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2666a4) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2666ACu;
    // 0x2666ac: 0x0  nop
    ctx->pc = 0x2666acu;
    // NOP
label_2666b0:
    // 0x2666b0: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2666B0u;
    {
        const bool branch_taken_0x2666b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2666B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666B0u;
        // 0x2666b4: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666b0) {
            ctx->pc = 0x266A98u;
            goto label_266a98;
        }
    }
    ctx->pc = 0x2666B8u;
    // 0x2666b8: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x2666B8u;
    {
        const bool branch_taken_0x2666b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2666BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666B8u;
        // 0x2666bc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666b8) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2666C0u;
    // 0x2666c0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2666C0u;
    {
        const bool branch_taken_0x2666c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2666c0) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2666C8u;
label_2666c8:
    // 0x2666c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2666C8u;
    {
        const bool branch_taken_0x2666c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666C8u;
        // 0x2666cc: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666c8) {
            ctx->pc = 0x2666F0u;
            goto label_2666f0;
        }
    }
    ctx->pc = 0x2666D0u;
    // 0x2666d0: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x2666d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x2666d4: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2666D4u;
    {
        const bool branch_taken_0x2666d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666D4u;
        // 0x2666d8: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666d4) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2666DCu;
    // 0x2666dc: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2666DCu;
    {
        const bool branch_taken_0x2666dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2666dc) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x2666E4u;
    // 0x2666e4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2666E4u;
    {
        const bool branch_taken_0x2666e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2666e4) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2666ECu;
    // 0x2666ec: 0x0  nop
    ctx->pc = 0x2666ecu;
    // NOP
label_2666f0:
    // 0x2666f0: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x2666F0u;
    {
        const bool branch_taken_0x2666f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2666F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666F0u;
        // 0x2666f4: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666f0) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x2666F8u;
    // 0x2666f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2666F8u;
    {
        const bool branch_taken_0x2666f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2666F8u;
        // 0x2666fc: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666f8) {
            ctx->pc = 0x266718u;
            goto label_266718;
        }
    }
    ctx->pc = 0x266700u;
    // 0x266700: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x266700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x266704: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x266704u;
    {
        const bool branch_taken_0x266704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266704u;
        // 0x266708: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266704) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x26670Cu;
    // 0x26670c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26670Cu;
    {
        const bool branch_taken_0x26670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26670c) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266714u;
    // 0x266714: 0x0  nop
    ctx->pc = 0x266714u;
    // NOP
label_266718:
    // 0x266718: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x266718u;
    {
        const bool branch_taken_0x266718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266718) {
            ctx->pc = 0x26671Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266718u;
            // 0x26671c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266720u;
    // 0x266720: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x266720u;
    {
        const bool branch_taken_0x266720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266720) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266728u;
label_266728:
    // 0x266728: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x266728u;
    {
        const bool branch_taken_0x266728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266728u;
        // 0x26672c: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266728) {
            ctx->pc = 0x266780u;
            goto label_266780;
        }
    }
    ctx->pc = 0x266730u;
    // 0x266730: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x266730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x266734: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x266734u;
    {
        const bool branch_taken_0x266734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266734u;
        // 0x266738: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266734) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x26673Cu;
    // 0x26673c: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26673Cu;
    {
        const bool branch_taken_0x26673c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26673Cu;
        // 0x266740: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26673c) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266744u;
    // 0x266744: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266744u;
    {
        const bool branch_taken_0x266744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266744u;
        // 0x266748: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266744) {
            ctx->pc = 0x266768u;
            goto label_266768;
        }
    }
    ctx->pc = 0x26674Cu;
    // 0x26674c: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x26674cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x266750: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x266750u;
    {
        const bool branch_taken_0x266750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266750u;
        // 0x266754: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266750) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266758u;
    // 0x266758: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x266758u;
    {
        const bool branch_taken_0x266758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266758) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266760u;
    // 0x266760: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x266760u;
    {
        const bool branch_taken_0x266760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266760) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266768u;
label_266768:
    // 0x266768: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x266768u;
    {
        const bool branch_taken_0x266768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266768u;
        // 0x26676c: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266768) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266770u;
    // 0x266770: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x266770u;
    {
        const bool branch_taken_0x266770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266770) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266778u;
    // 0x266778: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x266778u;
    {
        const bool branch_taken_0x266778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266778) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266780u;
label_266780:
    // 0x266780: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x266780u;
    {
        const bool branch_taken_0x266780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266780u;
        // 0x266784: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266780) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266788u;
    // 0x266788: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266788u;
    {
        const bool branch_taken_0x266788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266788u;
        // 0x26678c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266788) {
            ctx->pc = 0x2667B0u;
            goto label_2667b0;
        }
    }
    ctx->pc = 0x266790u;
    // 0x266790: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x266790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x266794: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x266794u;
    {
        const bool branch_taken_0x266794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266794u;
        // 0x266798: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266794) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x26679Cu;
    // 0x26679c: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x26679Cu;
    {
        const bool branch_taken_0x26679c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2667A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26679Cu;
        // 0x2667a0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26679c) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2667A4u;
    // 0x2667a4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2667A4u;
    {
        const bool branch_taken_0x2667a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2667a4) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2667ACu;
    // 0x2667ac: 0x0  nop
    ctx->pc = 0x2667acu;
    // NOP
label_2667b0:
    // 0x2667b0: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2667B0u;
    {
        const bool branch_taken_0x2667b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667B0u;
        // 0x2667b4: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667b0) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2667B8u;
    // 0x2667b8: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2667B8u;
    {
        const bool branch_taken_0x2667b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2667b8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2667C0u;
    // 0x2667c0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2667C0u;
    {
        const bool branch_taken_0x2667c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2667c0) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2667C8u;
label_2667c8:
    // 0x2667c8: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2667C8u;
    {
        const bool branch_taken_0x2667c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2667CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667C8u;
        // 0x2667cc: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667c8) {
            ctx->pc = 0x266AC8u;
            goto label_266ac8;
        }
    }
    ctx->pc = 0x2667D0u;
    // 0x2667d0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2667D0u;
    {
        const bool branch_taken_0x2667d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667D0u;
        // 0x2667d4: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667d0) {
            ctx->pc = 0x266928u;
            goto label_266928;
        }
    }
    ctx->pc = 0x2667D8u;
    // 0x2667d8: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x2667d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x2667dc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2667DCu;
    {
        const bool branch_taken_0x2667dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667DCu;
        // 0x2667e0: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667dc) {
            ctx->pc = 0x266880u;
            goto label_266880;
        }
    }
    ctx->pc = 0x2667E4u;
    // 0x2667e4: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x2667e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x2667e8: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2667E8u;
    {
        const bool branch_taken_0x2667e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667E8u;
        // 0x2667ec: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667e8) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2667F0u;
    // 0x2667f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2667F0u;
    {
        const bool branch_taken_0x2667f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2667F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667F0u;
        // 0x2667f4: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667f0) {
            ctx->pc = 0x266838u;
            goto label_266838;
        }
    }
    ctx->pc = 0x2667F8u;
    // 0x2667f8: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x2667f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x2667fc: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2667FCu;
    {
        const bool branch_taken_0x2667fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2667FCu;
        // 0x266800: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2667fc) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266804u;
    // 0x266804: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x266804u;
    {
        const bool branch_taken_0x266804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266804u;
        // 0x266808: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266804) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x26680Cu;
    // 0x26680c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26680Cu;
    {
        const bool branch_taken_0x26680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26680Cu;
        // 0x266810: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26680c) {
            ctx->pc = 0x266828u;
            goto label_266828;
        }
    }
    ctx->pc = 0x266814u;
    // 0x266814: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x266818: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x266818u;
    {
        const bool branch_taken_0x266818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266818u;
        // 0x26681c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266818) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x266820u;
    // 0x266820: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x266820u;
    {
        const bool branch_taken_0x266820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266820) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266828u;
label_266828:
    // 0x266828: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x266828u;
    {
        const bool branch_taken_0x266828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266828) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266830u;
    // 0x266830: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x266830u;
    {
        const bool branch_taken_0x266830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266830) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266838u;
label_266838:
    // 0x266838: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x266838u;
    {
        const bool branch_taken_0x266838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266838u;
        // 0x26683c: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266838) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266840u;
    // 0x266840: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266840u;
    {
        const bool branch_taken_0x266840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266840) {
            ctx->pc = 0x266868u;
            goto label_266868;
        }
    }
    ctx->pc = 0x266848u;
    // 0x266848: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x266848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x26684c: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26684Cu;
    {
        const bool branch_taken_0x26684c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26684Cu;
        // 0x266850: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26684c) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266854u;
    // 0x266854: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x266854u;
    {
        const bool branch_taken_0x266854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266854u;
        // 0x266858: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266854) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x26685Cu;
    // 0x26685c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26685Cu;
    {
        const bool branch_taken_0x26685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26685c) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266864u;
    // 0x266864: 0x0  nop
    ctx->pc = 0x266864u;
    // NOP
label_266868:
    // 0x266868: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x266868u;
    {
        const bool branch_taken_0x266868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266868u;
        // 0x26686c: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266868) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266870u;
    // 0x266870: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x266870u;
    {
        const bool branch_taken_0x266870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266870) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266878u;
    // 0x266878: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x266878u;
    {
        const bool branch_taken_0x266878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266878) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266880u;
label_266880:
    // 0x266880: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x266880u;
    {
        const bool branch_taken_0x266880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266880u;
        // 0x266884: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266880) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266888u;
    // 0x266888: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x266888u;
    {
        const bool branch_taken_0x266888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266888u;
        // 0x26688c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266888) {
            ctx->pc = 0x2668E0u;
            goto label_2668e0;
        }
    }
    ctx->pc = 0x266890u;
    // 0x266890: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x266890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x266894: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x266894u;
    {
        const bool branch_taken_0x266894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266894u;
        // 0x266898: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266894) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x26689Cu;
    // 0x26689c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26689Cu;
    {
        const bool branch_taken_0x26689c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26689Cu;
        // 0x2668a0: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26689c) {
            ctx->pc = 0x2668C0u;
            goto label_2668c0;
        }
    }
    ctx->pc = 0x2668A4u;
    // 0x2668a4: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x2668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x2668a8: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2668A8u;
    {
        const bool branch_taken_0x2668a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2668ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668A8u;
        // 0x2668ac: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668a8) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x2668B0u;
    // 0x2668b0: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2668B0u;
    {
        const bool branch_taken_0x2668b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2668B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668B0u;
        // 0x2668b4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668b0) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2668B8u;
    // 0x2668b8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2668B8u;
    {
        const bool branch_taken_0x2668b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668b8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2668C0u;
label_2668c0:
    // 0x2668c0: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2668C0u;
    {
        const bool branch_taken_0x2668c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2668C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668C0u;
        // 0x2668c4: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668c0) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2668C8u;
    // 0x2668c8: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2668C8u;
    {
        const bool branch_taken_0x2668c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668C8u;
        // 0x2668cc: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668c8) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2668D0u;
    // 0x2668d0: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2668D0u;
    {
        const bool branch_taken_0x2668d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2668D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668D0u;
        // 0x2668d4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668d0) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2668D8u;
    // 0x2668d8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2668D8u;
    {
        const bool branch_taken_0x2668d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668d8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2668E0u;
label_2668e0:
    // 0x2668e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2668E0u;
    {
        const bool branch_taken_0x2668e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668E0u;
        // 0x2668e4: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668e0) {
            ctx->pc = 0x266908u;
            goto label_266908;
        }
    }
    ctx->pc = 0x2668E8u;
    // 0x2668e8: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x2668e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x2668ec: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2668ECu;
    {
        const bool branch_taken_0x2668ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2668F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2668ECu;
        // 0x2668f0: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2668ec) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2668F4u;
    // 0x2668f4: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2668F4u;
    {
        const bool branch_taken_0x2668f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2668f4) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x2668FCu;
    // 0x2668fc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2668FCu;
    {
        const bool branch_taken_0x2668fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668fc) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266904u;
    // 0x266904: 0x0  nop
    ctx->pc = 0x266904u;
    // NOP
label_266908:
    // 0x266908: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x266908u;
    {
        const bool branch_taken_0x266908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266908u;
        // 0x26690c: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266908) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x266910u;
    // 0x266910: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x266910u;
    {
        const bool branch_taken_0x266910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266910u;
        // 0x266914: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266910) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266918u;
    // 0x266918: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x266918u;
    {
        const bool branch_taken_0x266918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266918) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266920u;
    // 0x266920: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x266920u;
    {
        const bool branch_taken_0x266920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266920) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x266928u;
label_266928:
    // 0x266928: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x266928u;
    {
        const bool branch_taken_0x266928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266928u;
        // 0x26692c: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266928) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266930u;
    // 0x266930: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x266930u;
    {
        const bool branch_taken_0x266930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266930u;
        // 0x266934: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266930) {
            ctx->pc = 0x2669E8u;
            goto label_2669e8;
        }
    }
    ctx->pc = 0x266938u;
    // 0x266938: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x266938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26693c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26693Cu;
    {
        const bool branch_taken_0x26693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26693Cu;
        // 0x266940: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26693c) {
            ctx->pc = 0x266990u;
            goto label_266990;
        }
    }
    ctx->pc = 0x266944u;
    // 0x266944: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x266944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x266948: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x266948u;
    {
        const bool branch_taken_0x266948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266948u;
        // 0x26694c: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266948) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266950u;
    // 0x266950: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x266950u;
    {
        const bool branch_taken_0x266950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266950u;
        // 0x266954: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266950) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266958u;
    // 0x266958: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x266958u;
    {
        const bool branch_taken_0x266958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266958u;
        // 0x26695c: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266958) {
            ctx->pc = 0x266978u;
            goto label_266978;
        }
    }
    ctx->pc = 0x266960u;
    // 0x266960: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x266960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x266964: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x266964u;
    {
        const bool branch_taken_0x266964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266964) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x26696Cu;
    // 0x26696c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26696Cu;
    {
        const bool branch_taken_0x26696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26696c) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266974u;
    // 0x266974: 0x0  nop
    ctx->pc = 0x266974u;
    // NOP
label_266978:
    // 0x266978: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x266978u;
    {
        const bool branch_taken_0x266978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266978u;
        // 0x26697c: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266978) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266980u;
    // 0x266980: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x266980u;
    {
        const bool branch_taken_0x266980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266980) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266988u;
    // 0x266988: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x266988u;
    {
        const bool branch_taken_0x266988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266988) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266990u;
label_266990:
    // 0x266990: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x266990u;
    {
        const bool branch_taken_0x266990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266990u;
        // 0x266994: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266990) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266998u;
    // 0x266998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x266998u;
    {
        const bool branch_taken_0x266998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266998u;
        // 0x26699c: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266998) {
            ctx->pc = 0x2669C0u;
            goto label_2669c0;
        }
    }
    ctx->pc = 0x2669A0u;
    // 0x2669a0: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x2669a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x2669a4: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2669A4u;
    {
        const bool branch_taken_0x2669a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2669A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669A4u;
        // 0x2669a8: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669a4) {
            ctx->pc = 0x266AB0u;
            goto label_266ab0;
        }
    }
    ctx->pc = 0x2669ACu;
    // 0x2669ac: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2669ACu;
    {
        const bool branch_taken_0x2669ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2669B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669ACu;
        // 0x2669b0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669ac) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x2669B4u;
    // 0x2669b4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2669B4u;
    {
        const bool branch_taken_0x2669b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2669b4) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669BCu;
    // 0x2669bc: 0x0  nop
    ctx->pc = 0x2669bcu;
    // NOP
label_2669c0:
    // 0x2669c0: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2669C0u;
    {
        const bool branch_taken_0x2669c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2669C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669C0u;
        // 0x2669c4: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669c0) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x2669C8u;
    // 0x2669c8: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2669C8u;
    {
        const bool branch_taken_0x2669c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2669CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669C8u;
        // 0x2669cc: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669c8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669D0u;
    // 0x2669d0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2669D0u;
    {
        const bool branch_taken_0x2669d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2669D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669D0u;
        // 0x2669d4: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669d0) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669D8u;
    // 0x2669d8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2669D8u;
    {
        const bool branch_taken_0x2669d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2669d8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x2669E0u;
    // 0x2669e0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2669E0u;
    {
        const bool branch_taken_0x2669e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2669e0) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x2669E8u;
label_2669e8:
    // 0x2669e8: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2669E8u;
    {
        const bool branch_taken_0x2669e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2669ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669E8u;
        // 0x2669ec: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669e8) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x2669F0u;
    // 0x2669f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2669F0u;
    {
        const bool branch_taken_0x2669f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2669F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669F0u;
        // 0x2669f4: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669f0) {
            ctx->pc = 0x266A40u;
            goto label_266a40;
        }
    }
    ctx->pc = 0x2669F8u;
    // 0x2669f8: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x2669f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x2669fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2669FCu;
    {
        const bool branch_taken_0x2669fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2669FCu;
        // 0x266a00: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2669fc) {
            ctx->pc = 0x266A28u;
            goto label_266a28;
        }
    }
    ctx->pc = 0x266A04u;
    // 0x266a04: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x266a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x266a08: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x266A08u;
    {
        const bool branch_taken_0x266a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A08u;
        // 0x266a0c: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a08) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266A10u;
    // 0x266a10: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x266A10u;
    {
        const bool branch_taken_0x266a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A10u;
        // 0x266a14: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a10) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266A18u;
    // 0x266a18: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x266A18u;
    {
        const bool branch_taken_0x266a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x266a18) {
            ctx->pc = 0x266B10u;
            goto label_266b10;
        }
    }
    ctx->pc = 0x266A20u;
    // 0x266a20: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x266A20u;
    {
        const bool branch_taken_0x266a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a20) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A28u;
label_266a28:
    // 0x266a28: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x266A28u;
    {
        const bool branch_taken_0x266a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A28u;
        // 0x266a2c: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a28) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266A30u;
    // 0x266a30: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x266A30u;
    {
        const bool branch_taken_0x266a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A30u;
        // 0x266a34: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a30) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x266A38u;
    // 0x266a38: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x266A38u;
    {
        const bool branch_taken_0x266a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a38) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A40u;
label_266a40:
    // 0x266a40: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x266a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x266a44: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x266A44u;
    {
        const bool branch_taken_0x266a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A44u;
        // 0x266a48: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a44) {
            ctx->pc = 0x266A80u;
            goto label_266a80;
        }
    }
    ctx->pc = 0x266A4Cu;
    // 0x266a4c: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x266a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x266a50: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x266a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266a54: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x266A54u;
    {
        const bool branch_taken_0x266a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A54u;
        // 0x266a58: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a54) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266A5Cu;
    // 0x266a5c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x266a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x266a60: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x266A60u;
    {
        const bool branch_taken_0x266a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A60u;
        // 0x266a64: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a60) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A68u;
    // 0x266a68: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x266a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x266a6c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x266A6Cu;
    {
        const bool branch_taken_0x266a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266a6c) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A74u;
    // 0x266a74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x266A74u;
    {
        const bool branch_taken_0x266a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a74) {
            ctx->pc = 0x266AF8u;
            goto label_266af8;
        }
    }
    ctx->pc = 0x266A7Cu;
    // 0x266a7c: 0x0  nop
    ctx->pc = 0x266a7cu;
    // NOP
label_266a80:
    // 0x266a80: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x266A80u;
    {
        const bool branch_taken_0x266a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A80u;
        // 0x266a84: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a80) {
            ctx->pc = 0x266AD0u;
            goto label_266ad0;
        }
    }
    ctx->pc = 0x266A88u;
    // 0x266a88: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x266A88u;
    {
        const bool branch_taken_0x266a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x266A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266A88u;
        // 0x266a8c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266a88) {
            ctx->pc = 0x266AD4u;
            goto label_266ad4;
        }
    }
    ctx->pc = 0x266A90u;
    // 0x266a90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x266A90u;
    {
        const bool branch_taken_0x266a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266a90) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266A98u;
label_266a98:
    // 0x266a98: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x266A98u;
    SET_GPR_U32(ctx, 31, 0x266AA0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x266A98u, 0x266AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AA0u;
label_266aa0:
    // 0x266aa0: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x266aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x266aa4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x266AA4u;
    {
        const bool branch_taken_0x266aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AA4u;
        // 0x266aa8: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266aa4) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AACu;
    // 0x266aac: 0x0  nop
    ctx->pc = 0x266aacu;
    // NOP
label_266ab0:
    // 0x266ab0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x266AB0u;
    SET_GPR_U32(ctx, 31, 0x266AB8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x266AB0u, 0x266AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AB8u;
label_266ab8:
    // 0x266ab8: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x266ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x266abc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x266ABCu;
    {
        const bool branch_taken_0x266abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266ABCu;
        // 0x266ac0: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266abc) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AC4u;
    // 0x266ac4: 0x0  nop
    ctx->pc = 0x266ac4u;
    // NOP
label_266ac8:
    // 0x266ac8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x266AC8u;
    {
        const bool branch_taken_0x266ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AC8u;
        // 0x266acc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ac8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AD0u;
label_266ad0:
    // 0x266ad0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_266ad4:
    // 0x266ad4: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x266ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x266ad8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x266AD8u;
    {
        const bool branch_taken_0x266ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AD8u;
        // 0x266adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ad8) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AE0u;
    // 0x266ae0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x266AE0u;
    SET_GPR_U32(ctx, 31, 0x266AE8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x266AE0u, 0x266AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266AE8u;
label_266ae8:
    // 0x266ae8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x266ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x266aec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x266AECu;
    {
        const bool branch_taken_0x266aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266AECu;
        // 0x266af0: 0x28460400  slti        $a2, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266aec) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266AF4u;
    // 0x266af4: 0x0  nop
    ctx->pc = 0x266af4u;
    // NOP
label_266af8:
    // 0x266af8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x266AF8u;
    SET_GPR_U32(ctx, 31, 0x266B00u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x266AF8u, 0x266B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B00u;
label_266b00:
    // 0x266b00: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x266b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x266b04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266B04u;
    {
        const bool branch_taken_0x266b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B04u;
        // 0x266b08: 0x284600cc  slti        $a2, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b04) {
            ctx->pc = 0x266B20u;
            goto label_266b20;
        }
    }
    ctx->pc = 0x266B0Cu;
    // 0x266b0c: 0x0  nop
    ctx->pc = 0x266b0cu;
    // NOP
label_266b10:
    // 0x266b10: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x266B10u;
    SET_GPR_U32(ctx, 31, 0x266B18u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x266B10u, 0x266B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B18u;
label_266b18:
    // 0x266b18: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x266b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x266b1c: 0x28460199  slti        $a2, $v0, 0x199
    ctx->pc = 0x266b1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_266b20:
    // 0x266b20: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x266B20u;
    {
        const bool branch_taken_0x266b20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B20u;
        // 0x266b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b20) {
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x266B28u;
    // 0x266b28: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266B28u;
    SET_GPR_U32(ctx, 31, 0x266B30u);
    ctx->pc = 0x266B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B28u;
    // 0x266b2c: 0x2405006a  addiu       $a1, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266B28u, 0x266B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B30u;
label_266b30:
    // 0x266b30: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x266B30u;
    {
        const bool branch_taken_0x266b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266b30) {
            ctx->pc = 0x266B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B30u;
            // 0x266b34: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x266B38u;
    // 0x266b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b3c: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266B3Cu;
    SET_GPR_U32(ctx, 31, 0x266B44u);
    ctx->pc = 0x266B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B3Cu;
    // 0x266b40: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266B3Cu, 0x266B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B44u;
label_266b44:
    // 0x266b44: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x266B44u;
    {
        const bool branch_taken_0x266b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266b44) {
            ctx->pc = 0x266B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B44u;
            // 0x266b48: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x266B4Cu;
    // 0x266b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b50: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266B50u;
    SET_GPR_U32(ctx, 31, 0x266B58u);
    ctx->pc = 0x266B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B50u;
    // 0x266b54: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266B50u, 0x266B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B58u;
label_266b58:
    // 0x266b58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x266B58u;
    {
        const bool branch_taken_0x266b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266b58) {
            ctx->pc = 0x266B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B58u;
            // 0x266b5c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x266B60u;
    // 0x266b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266b64: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266B64u;
    SET_GPR_U32(ctx, 31, 0x266B6Cu);
    ctx->pc = 0x266B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266B64u;
    // 0x266b68: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266B64u, 0x266B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B6Cu;
label_266b6c:
    // 0x266b6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x266B6Cu;
    {
        const bool branch_taken_0x266b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266b6c) {
            ctx->pc = 0x266B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B6Cu;
            // 0x266b70: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B74u;
            goto label_266b74;
        }
    }
    ctx->pc = 0x266B74u;
label_266b74:
    // 0x266b74: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x266B74u;
    {
        const bool branch_taken_0x266b74 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b74) {
            ctx->pc = 0x266B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266B74u;
            // 0x266b78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266B94u;
            goto label_266b94;
        }
    }
    ctx->pc = 0x266B7Cu;
    // 0x266b7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x266b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x266b80: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x266b80u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x266b84: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x266b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x266b88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x266B88u;
    {
        const bool branch_taken_0x266b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B88u;
        // 0x266b8c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b88) {
            ctx->pc = 0x266BB4u;
            goto label_266bb4;
        }
    }
    ctx->pc = 0x266B90u;
    // 0x266b90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x266b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_266b94:
    // 0x266b94: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x266b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x266b98: 0x1440fe37  bnez        $v0, . + 4 + (-0x1C9 << 2)
    ctx->pc = 0x266B98u;
    {
        const bool branch_taken_0x266b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266B98u;
        // 0x266b9c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266b98) {
            ctx->pc = 0x266478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266478;
        }
    }
    ctx->pc = 0x266BA0u;
label_266ba0:
    // 0x266ba0: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x266ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x266ba4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x266ba8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x266ba8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266bac: 0x1462fe22  bne         $v1, $v0, . + 4 + (-0x1DE << 2)
    ctx->pc = 0x266BACu;
    {
        const bool branch_taken_0x266bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BACu;
        // 0x266bb0: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bac) {
            ctx->pc = 0x266438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266438;
        }
    }
    ctx->pc = 0x266BB4u;
label_266bb4:
    // 0x266bb4: 0x1a800045  blez        $s4, . + 4 + (0x45 << 2)
    ctx->pc = 0x266BB4u;
    {
        const bool branch_taken_0x266bb4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x266BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266BB4u;
        // 0x266bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266bb4) {
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266BBCu;
    // 0x266bbc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x266BBCu;
    SET_GPR_U32(ctx, 31, 0x266BC4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x266BBCu, 0x266BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BC4u;
label_266bc4:
    // 0x266bc4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x266bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x266bc8: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x266bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x266bcc: 0x8f87aa7c  lw          $a3, -0x5584($gp)
    ctx->pc = 0x266bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266bd0: 0x8cc40064  lw          $a0, 0x64($a2)
    ctx->pc = 0x266bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x266bd4: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x266bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x266bd8: 0x8f88aa78  lw          $t0, -0x5588($gp)
    ctx->pc = 0x266bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x266bdc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x266bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266be0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266be4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266be8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x266be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x266bec: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x266becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x266bf0: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x266bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x266bf4: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x266bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x266bf8: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x266bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x266bfc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x266bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x266c00: 0x24467fff  addiu       $a2, $v0, 0x7FFF
    ctx->pc = 0x266c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x266c04: 0xad040100  sw          $a0, 0x100($t0)
    ctx->pc = 0x266c04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 256), GPR_U32(ctx, 4));
    // 0x266c08: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x266c08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x266c0c: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x266c0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x266c10: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x266c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x266c14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266c18: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x266c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x266c1c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x266c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x266c20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x266c24: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x266c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
    // 0x266c28: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266C28u;
    SET_GPR_U32(ctx, 31, 0x266C30u);
    ctx->pc = 0x266C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C28u;
    // 0x266c2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266C28u, 0x266C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C30u;
label_266c30:
    // 0x266c30: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x266C30u;
    {
        const bool branch_taken_0x266c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C30u;
        // 0x266c34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c30) {
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266C38u;
    // 0x266c38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x266c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266c3c: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266C3Cu;
    SET_GPR_U32(ctx, 31, 0x266C44u);
    ctx->pc = 0x266C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C3Cu;
    // 0x266c40: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266C3Cu, 0x266C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C44u;
label_266c44:
    // 0x266c44: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x266C44u;
    {
        const bool branch_taken_0x266c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C44u;
        // 0x266c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c44) {
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266C4Cu;
    // 0x266c4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x266c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266c50: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266C50u;
    SET_GPR_U32(ctx, 31, 0x266C58u);
    ctx->pc = 0x266C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C50u;
    // 0x266c54: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266C50u, 0x266C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C58u;
label_266c58:
    // 0x266c58: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x266C58u;
    {
        const bool branch_taken_0x266c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C58u;
        // 0x266c5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c58) {
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266C60u;
    // 0x266c60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x266c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266c64: 0xc080b5c  jal         func_202D70
    ctx->pc = 0x266C64u;
    SET_GPR_U32(ctx, 31, 0x266C6Cu);
    ctx->pc = 0x266C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C64u;
    // 0x266c68: 0x2405006b  addiu       $a1, $zero, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D70u, 0x266C64u, 0x266C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C6Cu;
label_266c6c:
    // 0x266c6c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x266C6Cu;
    {
        const bool branch_taken_0x266c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c6c) {
            ctx->pc = 0x266C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266C6Cu;
            // 0x266c70: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266CC8u;
            goto label_266cc8;
        }
    }
    ctx->pc = 0x266C74u;
    // 0x266c74: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x266c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x266c78: 0x34028006  ori         $v0, $zero, 0x8006
    ctx->pc = 0x266c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x266c7c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x266c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266c80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x266c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x266c84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x266C84u;
    {
        const bool branch_taken_0x266c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c84) {
            ctx->pc = 0x266C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266C84u;
            // 0x266c88: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266CC0u;
            goto label_266cc0;
        }
    }
    ctx->pc = 0x266C8Cu;
    // 0x266c8c: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x266c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x266c90: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x266c94: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x266c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x266c98: 0x3463ffc8  ori         $v1, $v1, 0xFFC8
    ctx->pc = 0x266c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65480);
    // 0x266c9c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x266c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x266ca0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x266ca4: 0x8ca401e8  lw          $a0, 0x1E8($a1)
    ctx->pc = 0x266ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x266ca8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x266ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x266cac: 0xc0997d8  jal         func_265F60
    ctx->pc = 0x266CACu;
    SET_GPR_U32(ctx, 31, 0x266CB4u);
    ctx->pc = 0x266CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CACu;
    // 0x266cb0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265F60u, 0x266CACu, 0x266CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CB4u;
label_266cb4:
    // 0x266cb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x266CB4u;
    {
        const bool branch_taken_0x266cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CB4u;
        // 0x266cb8: 0x34028007  ori         $v0, $zero, 0x8007 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cb4) {
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266CBCu;
    // 0x266cbc: 0x0  nop
    ctx->pc = 0x266cbcu;
    // NOP
label_266cc0:
    // 0x266cc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x266CC0u;
    {
        const bool branch_taken_0x266cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CC0u;
        // 0x266cc4: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266cc0) {
            ctx->pc = 0x266CCCu;
            goto label_266ccc;
        }
    }
    ctx->pc = 0x266CC8u;
label_266cc8:
    // 0x266cc8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x266cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_266ccc:
    // 0x266ccc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x266cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266cd0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x266cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x266cd4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x266cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266cd8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x266cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x266cdc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x266cdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266ce0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x266ce0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x266ce4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x266ce4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266ce8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x266ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x266cec: 0x3e00008  jr          $ra
    ctx->pc = 0x266CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266CECu;
        // 0x266cf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266CF4u;
    // 0x266cf4: 0x0  nop
    ctx->pc = 0x266cf4u;
    // NOP
    ctx->pc = 0x266cf8u;
}
