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

// Function: sub_00267160
// Address: 0x267160 - 0x2678f8
void sub_00267160_0x267160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267160_0x267160");
#endif

    switch (ctx->pc) {
        case 0x2671b0u: goto label_2671b0;
        case 0x2671f0u: goto label_2671f0;
        case 0x2677f8u: goto label_2677f8;
        case 0x267810u: goto label_267810;
        case 0x267840u: goto label_267840;
        case 0x267858u: goto label_267858;
        case 0x267870u: goto label_267870;
        case 0x26788cu: goto label_26788c;
        default: break;
    }

    ctx->pc = 0x267160u;

    // 0x267160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x267164: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x267164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x267168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26716c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26716cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267170: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x267170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x267174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x267174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267178: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x267178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26717c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x267180: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x267180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x267184: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x267184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x267188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x267188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26718c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x26718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x267190: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x267190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x267194: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x267194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267198: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x267198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x26719c: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x26719cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2671a0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2671a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2671a4: 0x106601c9  beq         $v1, $a2, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x2671A4u;
    {
        const bool branch_taken_0x2671a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2671A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671A4u;
        // 0x2671a8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671a4) {
            ctx->pc = 0x2678CCu;
            goto label_2678cc;
        }
    }
    ctx->pc = 0x2671ACu;
    // 0x2671ac: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x2671acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_2671b0:
    // 0x2671b0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2671B0u;
    {
        const bool branch_taken_0x2671b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2671b0) {
            ctx->pc = 0x2671B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2671B0u;
            // 0x2671b4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2671E0u;
            goto label_2671e0;
        }
    }
    ctx->pc = 0x2671B8u;
    // 0x2671b8: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2671b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2671bc: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x2671bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2671c0: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2671c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2671c4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2671c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2671c8: 0x96330014  lhu         $s3, 0x14($s1)
    ctx->pc = 0x2671c8u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2671cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2671ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2671d0: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x2671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2671d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2671d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2671d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2671D8u;
    {
        const bool branch_taken_0x2671d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671D8u;
        // 0x2671dc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671d8) {
            ctx->pc = 0x2671E4u;
            goto label_2671e4;
        }
    }
    ctx->pc = 0x2671E0u;
label_2671e0:
    // 0x2671e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2671e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2671e4:
    // 0x2671e4: 0x126001b4  beqz        $s3, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2671E4u;
    {
        const bool branch_taken_0x2671e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2671E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671E4u;
        // 0x2671e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671e4) {
            ctx->pc = 0x2678B8u;
            goto label_2678b8;
        }
    }
    ctx->pc = 0x2671ECu;
    // 0x2671ec: 0x0  nop
    ctx->pc = 0x2671ecu;
    // NOP
label_2671f0:
    // 0x2671f0: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x2671f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2671f4: 0x24063ff8  addiu       $a2, $zero, 0x3FF8
    ctx->pc = 0x2671f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
    // 0x2671f8: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x2671f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2671fc: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x2671fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x267200: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x267200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x267204: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x267204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26720c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267210: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x267210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x267214: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x267214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x267218: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x267218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26721c: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x26721Cu;
    {
        const bool branch_taken_0x26721c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x267220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26721Cu;
        // 0x267220: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26721c) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267224u;
    // 0x267224: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x267224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x267228: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x267228u;
    {
        const bool branch_taken_0x267228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267228u;
        // 0x26722c: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267228) {
            ctx->pc = 0x267520u;
            goto label_267520;
        }
    }
    ctx->pc = 0x267230u;
    // 0x267230: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x267230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x267234: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x267234u;
    {
        const bool branch_taken_0x267234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267234u;
        // 0x267238: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267234) {
            ctx->pc = 0x2673B8u;
            goto label_2673b8;
        }
    }
    ctx->pc = 0x26723Cu;
    // 0x26723c: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x26723cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x267240: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x267240u;
    {
        const bool branch_taken_0x267240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267240u;
        // 0x267244: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267240) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267248u;
    // 0x267248: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x267248u;
    {
        const bool branch_taken_0x267248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267248u;
        // 0x26724c: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267248) {
            ctx->pc = 0x2672F8u;
            goto label_2672f8;
        }
    }
    ctx->pc = 0x267250u;
    // 0x267250: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x267250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x267254: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x267254u;
    {
        const bool branch_taken_0x267254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267254u;
        // 0x267258: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267254) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x26725Cu;
    // 0x26725c: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x26725Cu;
    {
        const bool branch_taken_0x26725c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26725Cu;
        // 0x267260: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26725c) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x267264u;
    // 0x267264: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x267264u;
    {
        const bool branch_taken_0x267264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267264u;
        // 0x267268: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267264) {
            ctx->pc = 0x2672B0u;
            goto label_2672b0;
        }
    }
    ctx->pc = 0x26726Cu;
    // 0x26726c: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x26726cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x267270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267270u;
    {
        const bool branch_taken_0x267270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267270u;
        // 0x267274: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267270) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x267278u;
    // 0x267278: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x267278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x26727c: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x26727Cu;
    {
        const bool branch_taken_0x26727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26727Cu;
        // 0x267280: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26727c) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267284u;
    // 0x267284: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x267284u;
    {
        const bool branch_taken_0x267284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x267284) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x26728Cu;
    // 0x26728c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x26728Cu;
    {
        const bool branch_taken_0x26728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26728c) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267294u;
    // 0x267294: 0x0  nop
    ctx->pc = 0x267294u;
    // NOP
label_267298:
    // 0x267298: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x267298u;
    {
        const bool branch_taken_0x267298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267298u;
        // 0x26729c: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267298) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2672A0u;
    // 0x2672a0: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x2672A0u;
    {
        const bool branch_taken_0x2672a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2672a0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2672A8u;
    // 0x2672a8: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x2672A8u;
    {
        const bool branch_taken_0x2672a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672a8) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x2672B0u;
label_2672b0:
    // 0x2672b0: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x2672B0u;
    {
        const bool branch_taken_0x2672b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2672B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672B0u;
        // 0x2672b4: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672b0) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2672B8u;
    // 0x2672b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2672B8u;
    {
        const bool branch_taken_0x2672b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2672BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672B8u;
        // 0x2672bc: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672b8) {
            ctx->pc = 0x2672E0u;
            goto label_2672e0;
        }
    }
    ctx->pc = 0x2672C0u;
    // 0x2672c0: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x2672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2672c4: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x2672C4u;
    {
        const bool branch_taken_0x2672c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2672C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672C4u;
        // 0x2672c8: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672c4) {
            ctx->pc = 0x267820u;
            goto label_267820;
        }
    }
    ctx->pc = 0x2672CCu;
    // 0x2672cc: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x2672CCu;
    {
        const bool branch_taken_0x2672cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2672D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672CCu;
        // 0x2672d0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672cc) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x2672D4u;
    // 0x2672d4: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x2672D4u;
    {
        const bool branch_taken_0x2672d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672d4) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2672DCu;
    // 0x2672dc: 0x0  nop
    ctx->pc = 0x2672dcu;
    // NOP
label_2672e0:
    // 0x2672e0: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x2672E0u;
    {
        const bool branch_taken_0x2672e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2672E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672E0u;
        // 0x2672e4: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672e0) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x2672E8u;
    // 0x2672e8: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x2672E8u;
    {
        const bool branch_taken_0x2672e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2672e8) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2672F0u;
    // 0x2672f0: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x2672F0u;
    {
        const bool branch_taken_0x2672f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672f0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2672F8u;
label_2672f8:
    // 0x2672f8: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x2672F8u;
    {
        const bool branch_taken_0x2672f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2672FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672F8u;
        // 0x2672fc: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672f8) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267300u;
    // 0x267300: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x267300u;
    {
        const bool branch_taken_0x267300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267300u;
        // 0x267304: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267300) {
            ctx->pc = 0x267358u;
            goto label_267358;
        }
    }
    ctx->pc = 0x267308u;
    // 0x267308: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x267308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x26730c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26730Cu;
    {
        const bool branch_taken_0x26730c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26730Cu;
        // 0x267310: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26730c) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267314u;
    // 0x267314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267314u;
    {
        const bool branch_taken_0x267314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267314u;
        // 0x267318: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267314) {
            ctx->pc = 0x267338u;
            goto label_267338;
        }
    }
    ctx->pc = 0x26731Cu;
    // 0x26731c: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x26731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x267320: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x267320u;
    {
        const bool branch_taken_0x267320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267320u;
        // 0x267324: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267320) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267328u;
    // 0x267328: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x267328u;
    {
        const bool branch_taken_0x267328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267328u;
        // 0x26732c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267328) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267330u;
    // 0x267330: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x267330u;
    {
        const bool branch_taken_0x267330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267330) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267338u;
label_267338:
    // 0x267338: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x267338u;
    {
        const bool branch_taken_0x267338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267338u;
        // 0x26733c: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267338) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267340u;
    // 0x267340: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x267340u;
    {
        const bool branch_taken_0x267340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267340u;
        // 0x267344: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267340) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267348u;
    // 0x267348: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x267348u;
    {
        const bool branch_taken_0x267348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267348u;
        // 0x26734c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267348) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267350u;
    // 0x267350: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x267350u;
    {
        const bool branch_taken_0x267350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267350) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267358u;
label_267358:
    // 0x267358: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267358u;
    {
        const bool branch_taken_0x267358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267358u;
        // 0x26735c: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267358) {
            ctx->pc = 0x267380u;
            goto label_267380;
        }
    }
    ctx->pc = 0x267360u;
    // 0x267360: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x267360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x267364: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x267364u;
    {
        const bool branch_taken_0x267364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267364u;
        // 0x267368: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267364) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x26736Cu;
    // 0x26736c: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x26736Cu;
    {
        const bool branch_taken_0x26736c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26736c) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267374u;
    // 0x267374: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x267374u;
    {
        const bool branch_taken_0x267374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267374) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x26737Cu;
    // 0x26737c: 0x0  nop
    ctx->pc = 0x26737cu;
    // NOP
label_267380:
    // 0x267380: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x267380u;
    {
        const bool branch_taken_0x267380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267380u;
        // 0x267384: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267380) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267388u;
    // 0x267388: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267388u;
    {
        const bool branch_taken_0x267388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267388u;
        // 0x26738c: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267388) {
            ctx->pc = 0x2673A8u;
            goto label_2673a8;
        }
    }
    ctx->pc = 0x267390u;
    // 0x267390: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x267390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x267394: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x267394u;
    {
        const bool branch_taken_0x267394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267394u;
        // 0x267398: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267394) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x26739Cu;
    // 0x26739c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x26739Cu;
    {
        const bool branch_taken_0x26739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26739c) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2673A4u;
    // 0x2673a4: 0x0  nop
    ctx->pc = 0x2673a4u;
    // NOP
label_2673a8:
    // 0x2673a8: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2673A8u;
    {
        const bool branch_taken_0x2673a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2673a8) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x2673B0u;
    // 0x2673b0: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x2673B0u;
    {
        const bool branch_taken_0x2673b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2673b0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2673B8u;
label_2673b8:
    // 0x2673b8: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2673B8u;
    {
        const bool branch_taken_0x2673b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2673BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673B8u;
        // 0x2673bc: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673b8) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2673C0u;
    // 0x2673c0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2673C0u;
    {
        const bool branch_taken_0x2673c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673C0u;
        // 0x2673c4: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673c0) {
            ctx->pc = 0x267480u;
            goto label_267480;
        }
    }
    ctx->pc = 0x2673C8u;
    // 0x2673c8: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x2673c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x2673cc: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x2673CCu;
    {
        const bool branch_taken_0x2673cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2673D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673CCu;
        // 0x2673d0: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673cc) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2673D4u;
    // 0x2673d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2673D4u;
    {
        const bool branch_taken_0x2673d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673D4u;
        // 0x2673d8: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673d4) {
            ctx->pc = 0x267420u;
            goto label_267420;
        }
    }
    ctx->pc = 0x2673DCu;
    // 0x2673dc: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x2673dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x2673e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2673E0u;
    {
        const bool branch_taken_0x2673e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673E0u;
        // 0x2673e4: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673e0) {
            ctx->pc = 0x267408u;
            goto label_267408;
        }
    }
    ctx->pc = 0x2673E8u;
    // 0x2673e8: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x2673e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x2673ec: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x2673ECu;
    {
        const bool branch_taken_0x2673ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673ECu;
        // 0x2673f0: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673ec) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x2673F4u;
    // 0x2673f4: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x2673F4u;
    {
        const bool branch_taken_0x2673f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2673f4) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2673FCu;
    // 0x2673fc: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2673FCu;
    {
        const bool branch_taken_0x2673fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2673fc) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267404u;
    // 0x267404: 0x0  nop
    ctx->pc = 0x267404u;
    // NOP
label_267408:
    // 0x267408: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x267408u;
    {
        const bool branch_taken_0x267408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267408u;
        // 0x26740c: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267408) {
            ctx->pc = 0x2677F0u;
            goto label_2677f0;
        }
    }
    ctx->pc = 0x267410u;
    // 0x267410: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x267410u;
    {
        const bool branch_taken_0x267410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267410u;
        // 0x267414: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267410) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267418u;
    // 0x267418: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x267418u;
    {
        const bool branch_taken_0x267418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267418) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267420u;
label_267420:
    // 0x267420: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267420u;
    {
        const bool branch_taken_0x267420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267420u;
        // 0x267424: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267420) {
            ctx->pc = 0x267448u;
            goto label_267448;
        }
    }
    ctx->pc = 0x267428u;
    // 0x267428: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x267428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x26742c: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x26742Cu;
    {
        const bool branch_taken_0x26742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26742Cu;
        // 0x267430: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26742c) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267434u;
    // 0x267434: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x267434u;
    {
        const bool branch_taken_0x267434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x267434) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x26743Cu;
    // 0x26743c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x26743Cu;
    {
        const bool branch_taken_0x26743c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26743c) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267444u;
    // 0x267444: 0x0  nop
    ctx->pc = 0x267444u;
    // NOP
label_267448:
    // 0x267448: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x267448u;
    {
        const bool branch_taken_0x267448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267448u;
        // 0x26744c: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267448) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267450u;
    // 0x267450: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267450u;
    {
        const bool branch_taken_0x267450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267450u;
        // 0x267454: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267450) {
            ctx->pc = 0x267470u;
            goto label_267470;
        }
    }
    ctx->pc = 0x267458u;
    // 0x267458: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x267458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x26745c: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26745Cu;
    {
        const bool branch_taken_0x26745c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26745Cu;
        // 0x267460: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26745c) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267464u;
    // 0x267464: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x267464u;
    {
        const bool branch_taken_0x267464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267464) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x26746Cu;
    // 0x26746c: 0x0  nop
    ctx->pc = 0x26746cu;
    // NOP
label_267470:
    // 0x267470: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x267470u;
    {
        const bool branch_taken_0x267470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x267470) {
            ctx->pc = 0x267474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267470u;
            // 0x267474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267478u;
    // 0x267478: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x267478u;
    {
        const bool branch_taken_0x267478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267478) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267480u;
label_267480:
    // 0x267480: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x267480u;
    {
        const bool branch_taken_0x267480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267480u;
        // 0x267484: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267480) {
            ctx->pc = 0x2674D8u;
            goto label_2674d8;
        }
    }
    ctx->pc = 0x267488u;
    // 0x267488: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x267488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x26748c: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x26748Cu;
    {
        const bool branch_taken_0x26748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26748Cu;
        // 0x267490: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26748c) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267494u;
    // 0x267494: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x267494u;
    {
        const bool branch_taken_0x267494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267494u;
        // 0x267498: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267494) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x26749Cu;
    // 0x26749c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26749Cu;
    {
        const bool branch_taken_0x26749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26749Cu;
        // 0x2674a0: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26749c) {
            ctx->pc = 0x2674C0u;
            goto label_2674c0;
        }
    }
    ctx->pc = 0x2674A4u;
    // 0x2674a4: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x2674a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x2674a8: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2674A8u;
    {
        const bool branch_taken_0x2674a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674A8u;
        // 0x2674ac: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674a8) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2674B0u;
    // 0x2674b0: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2674B0u;
    {
        const bool branch_taken_0x2674b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2674b0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2674B8u;
    // 0x2674b8: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x2674B8u;
    {
        const bool branch_taken_0x2674b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674b8) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x2674C0u;
label_2674c0:
    // 0x2674c0: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2674C0u;
    {
        const bool branch_taken_0x2674c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2674C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674C0u;
        // 0x2674c4: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674c0) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2674C8u;
    // 0x2674c8: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2674C8u;
    {
        const bool branch_taken_0x2674c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2674c8) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2674D0u;
    // 0x2674d0: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2674D0u;
    {
        const bool branch_taken_0x2674d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674d0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2674D8u;
label_2674d8:
    // 0x2674d8: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2674D8u;
    {
        const bool branch_taken_0x2674d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2674DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674D8u;
        // 0x2674dc: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674d8) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2674E0u;
    // 0x2674e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2674E0u;
    {
        const bool branch_taken_0x2674e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674E0u;
        // 0x2674e4: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674e0) {
            ctx->pc = 0x267508u;
            goto label_267508;
        }
    }
    ctx->pc = 0x2674E8u;
    // 0x2674e8: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x2674e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x2674ec: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2674ECu;
    {
        const bool branch_taken_0x2674ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2674F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674ECu;
        // 0x2674f0: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674ec) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2674F4u;
    // 0x2674f4: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2674F4u;
    {
        const bool branch_taken_0x2674f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2674F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674F4u;
        // 0x2674f8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674f4) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x2674FCu;
    // 0x2674fc: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2674FCu;
    {
        const bool branch_taken_0x2674fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674fc) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267504u;
    // 0x267504: 0x0  nop
    ctx->pc = 0x267504u;
    // NOP
label_267508:
    // 0x267508: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x267508u;
    {
        const bool branch_taken_0x267508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267508u;
        // 0x26750c: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267508) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267510u;
    // 0x267510: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x267510u;
    {
        const bool branch_taken_0x267510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267510) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267518u;
    // 0x267518: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x267518u;
    {
        const bool branch_taken_0x267518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267518) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267520u;
label_267520:
    // 0x267520: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x267520u;
    {
        const bool branch_taken_0x267520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267520u;
        // 0x267524: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267520) {
            ctx->pc = 0x267820u;
            goto label_267820;
        }
    }
    ctx->pc = 0x267528u;
    // 0x267528: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x267528u;
    {
        const bool branch_taken_0x267528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267528u;
        // 0x26752c: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267528) {
            ctx->pc = 0x267680u;
            goto label_267680;
        }
    }
    ctx->pc = 0x267530u;
    // 0x267530: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x267530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x267534: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x267534u;
    {
        const bool branch_taken_0x267534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267534u;
        // 0x267538: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267534) {
            ctx->pc = 0x2675D8u;
            goto label_2675d8;
        }
    }
    ctx->pc = 0x26753Cu;
    // 0x26753c: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x26753cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x267540: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x267540u;
    {
        const bool branch_taken_0x267540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267540u;
        // 0x267544: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267540) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267548u;
    // 0x267548: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x267548u;
    {
        const bool branch_taken_0x267548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267548u;
        // 0x26754c: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267548) {
            ctx->pc = 0x267590u;
            goto label_267590;
        }
    }
    ctx->pc = 0x267550u;
    // 0x267550: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x267550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x267554: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x267554u;
    {
        const bool branch_taken_0x267554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267554u;
        // 0x267558: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267554) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x26755Cu;
    // 0x26755c: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x26755Cu;
    {
        const bool branch_taken_0x26755c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26755Cu;
        // 0x267560: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26755c) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267564u;
    // 0x267564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267564u;
    {
        const bool branch_taken_0x267564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267564u;
        // 0x267568: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267564) {
            ctx->pc = 0x267580u;
            goto label_267580;
        }
    }
    ctx->pc = 0x26756Cu;
    // 0x26756c: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x267570: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x267570u;
    {
        const bool branch_taken_0x267570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267570u;
        // 0x267574: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267570) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267578u;
    // 0x267578: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x267578u;
    {
        const bool branch_taken_0x267578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267578) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267580u;
label_267580:
    // 0x267580: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x267580u;
    {
        const bool branch_taken_0x267580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267580) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267588u;
    // 0x267588: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x267588u;
    {
        const bool branch_taken_0x267588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267588) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267590u;
label_267590:
    // 0x267590: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x267590u;
    {
        const bool branch_taken_0x267590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267590u;
        // 0x267594: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267590) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267598u;
    // 0x267598: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267598u;
    {
        const bool branch_taken_0x267598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267598u;
        // 0x26759c: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267598) {
            ctx->pc = 0x2675C0u;
            goto label_2675c0;
        }
    }
    ctx->pc = 0x2675A0u;
    // 0x2675a0: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x2675a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x2675a4: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2675A4u;
    {
        const bool branch_taken_0x2675a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2675A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675A4u;
        // 0x2675a8: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675a4) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2675ACu;
    // 0x2675ac: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2675ACu;
    {
        const bool branch_taken_0x2675ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2675B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675ACu;
        // 0x2675b0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675ac) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x2675B4u;
    // 0x2675b4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2675B4u;
    {
        const bool branch_taken_0x2675b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2675b4) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2675BCu;
    // 0x2675bc: 0x0  nop
    ctx->pc = 0x2675bcu;
    // NOP
label_2675c0:
    // 0x2675c0: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2675C0u;
    {
        const bool branch_taken_0x2675c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2675C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675C0u;
        // 0x2675c4: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675c0) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2675C8u;
    // 0x2675c8: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2675C8u;
    {
        const bool branch_taken_0x2675c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2675c8) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2675D0u;
    // 0x2675d0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2675D0u;
    {
        const bool branch_taken_0x2675d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2675d0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2675D8u;
label_2675d8:
    // 0x2675d8: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2675D8u;
    {
        const bool branch_taken_0x2675d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2675DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675D8u;
        // 0x2675dc: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675d8) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2675E0u;
    // 0x2675e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2675E0u;
    {
        const bool branch_taken_0x2675e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675E0u;
        // 0x2675e4: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675e0) {
            ctx->pc = 0x267638u;
            goto label_267638;
        }
    }
    ctx->pc = 0x2675E8u;
    // 0x2675e8: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x2675e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x2675ec: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2675ECu;
    {
        const bool branch_taken_0x2675ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2675F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675ECu;
        // 0x2675f0: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675ec) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2675F4u;
    // 0x2675f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2675F4u;
    {
        const bool branch_taken_0x2675f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2675F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2675F4u;
        // 0x2675f8: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2675f4) {
            ctx->pc = 0x267618u;
            goto label_267618;
        }
    }
    ctx->pc = 0x2675FCu;
    // 0x2675fc: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x2675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x267600: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x267600u;
    {
        const bool branch_taken_0x267600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267600u;
        // 0x267604: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267600) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267608u;
    // 0x267608: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x267608u;
    {
        const bool branch_taken_0x267608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267608u;
        // 0x26760c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267608) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267610u;
    // 0x267610: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x267610u;
    {
        const bool branch_taken_0x267610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267610) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267618u;
label_267618:
    // 0x267618: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x267618u;
    {
        const bool branch_taken_0x267618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267618u;
        // 0x26761c: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267618) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267620u;
    // 0x267620: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x267620u;
    {
        const bool branch_taken_0x267620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267620u;
        // 0x267624: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267620) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267628u;
    // 0x267628: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x267628u;
    {
        const bool branch_taken_0x267628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267628u;
        // 0x26762c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267628) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267630u;
    // 0x267630: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x267630u;
    {
        const bool branch_taken_0x267630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267630) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267638u;
label_267638:
    // 0x267638: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267638u;
    {
        const bool branch_taken_0x267638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267638u;
        // 0x26763c: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267638) {
            ctx->pc = 0x267660u;
            goto label_267660;
        }
    }
    ctx->pc = 0x267640u;
    // 0x267640: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x267640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x267644: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x267644u;
    {
        const bool branch_taken_0x267644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267644u;
        // 0x267648: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267644) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x26764Cu;
    // 0x26764c: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26764Cu;
    {
        const bool branch_taken_0x26764c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26764c) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267654u;
    // 0x267654: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x267654u;
    {
        const bool branch_taken_0x267654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267654) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x26765Cu;
    // 0x26765c: 0x0  nop
    ctx->pc = 0x26765cu;
    // NOP
label_267660:
    // 0x267660: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x267660u;
    {
        const bool branch_taken_0x267660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267660u;
        // 0x267664: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267660) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x267668u;
    // 0x267668: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x267668u;
    {
        const bool branch_taken_0x267668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267668u;
        // 0x26766c: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267668) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267670u;
    // 0x267670: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x267670u;
    {
        const bool branch_taken_0x267670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267670) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267678u;
    // 0x267678: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x267678u;
    {
        const bool branch_taken_0x267678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267678) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x267680u;
label_267680:
    // 0x267680: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x267680u;
    {
        const bool branch_taken_0x267680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267680u;
        // 0x267684: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267680) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267688u;
    // 0x267688: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x267688u;
    {
        const bool branch_taken_0x267688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267688u;
        // 0x26768c: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267688) {
            ctx->pc = 0x267740u;
            goto label_267740;
        }
    }
    ctx->pc = 0x267690u;
    // 0x267690: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x267690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x267694: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x267694u;
    {
        const bool branch_taken_0x267694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267694u;
        // 0x267698: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267694) {
            ctx->pc = 0x2676E8u;
            goto label_2676e8;
        }
    }
    ctx->pc = 0x26769Cu;
    // 0x26769c: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x26769cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x2676a0: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2676A0u;
    {
        const bool branch_taken_0x2676a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A0u;
        // 0x2676a4: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676a0) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x2676A8u;
    // 0x2676a8: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2676A8u;
    {
        const bool branch_taken_0x2676a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676A8u;
        // 0x2676ac: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676a8) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2676B0u;
    // 0x2676b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2676B0u;
    {
        const bool branch_taken_0x2676b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676B0u;
        // 0x2676b4: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676b0) {
            ctx->pc = 0x2676D0u;
            goto label_2676d0;
        }
    }
    ctx->pc = 0x2676B8u;
    // 0x2676b8: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x2676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x2676bc: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2676BCu;
    {
        const bool branch_taken_0x2676bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2676bc) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x2676C4u;
    // 0x2676c4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2676C4u;
    {
        const bool branch_taken_0x2676c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2676c4) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2676CCu;
    // 0x2676cc: 0x0  nop
    ctx->pc = 0x2676ccu;
    // NOP
label_2676d0:
    // 0x2676d0: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2676D0u;
    {
        const bool branch_taken_0x2676d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D0u;
        // 0x2676d4: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676d0) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2676D8u;
    // 0x2676d8: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2676D8u;
    {
        const bool branch_taken_0x2676d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2676d8) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x2676E0u;
    // 0x2676e0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2676E0u;
    {
        const bool branch_taken_0x2676e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2676e0) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2676E8u;
label_2676e8:
    // 0x2676e8: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2676E8u;
    {
        const bool branch_taken_0x2676e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2676ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676E8u;
        // 0x2676ec: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676e8) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2676F0u;
    // 0x2676f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2676F0u;
    {
        const bool branch_taken_0x2676f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2676F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676F0u;
        // 0x2676f4: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676f0) {
            ctx->pc = 0x267718u;
            goto label_267718;
        }
    }
    ctx->pc = 0x2676F8u;
    // 0x2676f8: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x2676f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x2676fc: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2676FCu;
    {
        const bool branch_taken_0x2676fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676FCu;
        // 0x267700: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676fc) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x267704u;
    // 0x267704: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x267704u;
    {
        const bool branch_taken_0x267704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267704u;
        // 0x267708: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267704) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x26770Cu;
    // 0x26770c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26770Cu;
    {
        const bool branch_taken_0x26770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26770c) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267714u;
    // 0x267714: 0x0  nop
    ctx->pc = 0x267714u;
    // NOP
label_267718:
    // 0x267718: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x267718u;
    {
        const bool branch_taken_0x267718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267718u;
        // 0x26771c: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267718) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267720u;
    // 0x267720: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x267720u;
    {
        const bool branch_taken_0x267720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267720u;
        // 0x267724: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267720) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267728u;
    // 0x267728: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x267728u;
    {
        const bool branch_taken_0x267728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267728u;
        // 0x26772c: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267728) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267730u;
    // 0x267730: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x267730u;
    {
        const bool branch_taken_0x267730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267730) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267738u;
    // 0x267738: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x267738u;
    {
        const bool branch_taken_0x267738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267738) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267740u;
label_267740:
    // 0x267740: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x267740u;
    {
        const bool branch_taken_0x267740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267740u;
        // 0x267744: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267740) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267748u;
    // 0x267748: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x267748u;
    {
        const bool branch_taken_0x267748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267748u;
        // 0x26774c: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267748) {
            ctx->pc = 0x267798u;
            goto label_267798;
        }
    }
    ctx->pc = 0x267750u;
    // 0x267750: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x267750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x267754: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267754u;
    {
        const bool branch_taken_0x267754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267754u;
        // 0x267758: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267754) {
            ctx->pc = 0x267780u;
            goto label_267780;
        }
    }
    ctx->pc = 0x26775Cu;
    // 0x26775c: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26775cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x267760: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x267760u;
    {
        const bool branch_taken_0x267760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267760u;
        // 0x267764: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267760) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x267768u;
    // 0x267768: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x267768u;
    {
        const bool branch_taken_0x267768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267768u;
        // 0x26776c: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267768) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267770u;
    // 0x267770: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x267770u;
    {
        const bool branch_taken_0x267770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x267770) {
            ctx->pc = 0x267868u;
            goto label_267868;
        }
    }
    ctx->pc = 0x267778u;
    // 0x267778: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x267778u;
    {
        const bool branch_taken_0x267778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267778) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267780u;
label_267780:
    // 0x267780: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x267780u;
    {
        const bool branch_taken_0x267780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x267784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267780u;
        // 0x267784: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267780) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x267788u;
    // 0x267788: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x267788u;
    {
        const bool branch_taken_0x267788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267788u;
        // 0x26778c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267788) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x267790u;
    // 0x267790: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x267790u;
    {
        const bool branch_taken_0x267790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267790) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267798u;
label_267798:
    // 0x267798: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x267798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26779c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26779Cu;
    {
        const bool branch_taken_0x26779c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2677A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26779Cu;
        // 0x2677a0: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26779c) {
            ctx->pc = 0x2677D8u;
            goto label_2677d8;
        }
    }
    ctx->pc = 0x2677A4u;
    // 0x2677a4: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x2677a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x2677a8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2677a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2677ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2677ACu;
    {
        const bool branch_taken_0x2677ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677ACu;
        // 0x2677b0: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677ac) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x2677B4u;
    // 0x2677b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2677b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2677b8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2677B8u;
    {
        const bool branch_taken_0x2677b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2677BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677B8u;
        // 0x2677bc: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677b8) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2677C0u;
    // 0x2677c0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2677c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2677c4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2677C4u;
    {
        const bool branch_taken_0x2677c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2677c4) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2677CCu;
    // 0x2677cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2677CCu;
    {
        const bool branch_taken_0x2677cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677cc) {
            ctx->pc = 0x267850u;
            goto label_267850;
        }
    }
    ctx->pc = 0x2677D4u;
    // 0x2677d4: 0x0  nop
    ctx->pc = 0x2677d4u;
    // NOP
label_2677d8:
    // 0x2677d8: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2677D8u;
    {
        const bool branch_taken_0x2677d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2677DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677D8u;
        // 0x2677dc: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677d8) {
            ctx->pc = 0x267828u;
            goto label_267828;
        }
    }
    ctx->pc = 0x2677E0u;
    // 0x2677e0: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2677E0u;
    {
        const bool branch_taken_0x2677e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2677E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677E0u;
        // 0x2677e4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677e0) {
            ctx->pc = 0x26782Cu;
            goto label_26782c;
        }
    }
    ctx->pc = 0x2677E8u;
    // 0x2677e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2677E8u;
    {
        const bool branch_taken_0x2677e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677e8) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x2677F0u;
label_2677f0:
    // 0x2677f0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2677F0u;
    SET_GPR_U32(ctx, 31, 0x2677F8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2677F0u, 0x2677F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677F8u;
label_2677f8:
    // 0x2677f8: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x2677f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x2677fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2677FCu;
    {
        const bool branch_taken_0x2677fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677FCu;
        // 0x267800: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677fc) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267804u;
    // 0x267804: 0x0  nop
    ctx->pc = 0x267804u;
    // NOP
label_267808:
    // 0x267808: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267808u;
    SET_GPR_U32(ctx, 31, 0x267810u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267808u, 0x267810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267810u;
label_267810:
    // 0x267810: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x267810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x267814: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x267814u;
    {
        const bool branch_taken_0x267814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267814u;
        // 0x267818: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267814) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x26781Cu;
    // 0x26781c: 0x0  nop
    ctx->pc = 0x26781cu;
    // NOP
label_267820:
    // 0x267820: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x267820u;
    {
        const bool branch_taken_0x267820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267820u;
        // 0x267824: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267820) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267828u;
label_267828:
    // 0x267828: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26782c:
    // 0x26782c: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x267830: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x267830u;
    {
        const bool branch_taken_0x267830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267830u;
        // 0x267834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267830) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267838u;
    // 0x267838: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267838u;
    SET_GPR_U32(ctx, 31, 0x267840u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267838u, 0x267840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267840u;
label_267840:
    // 0x267840: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267844: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x267844u;
    {
        const bool branch_taken_0x267844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267844u;
        // 0x267848: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267844) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x26784Cu;
    // 0x26784c: 0x0  nop
    ctx->pc = 0x26784cu;
    // NOP
label_267850:
    // 0x267850: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267850u;
    SET_GPR_U32(ctx, 31, 0x267858u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267850u, 0x267858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267858u;
label_267858:
    // 0x267858: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26785c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26785Cu;
    {
        const bool branch_taken_0x26785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26785Cu;
        // 0x267860: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26785c) {
            ctx->pc = 0x267878u;
            goto label_267878;
        }
    }
    ctx->pc = 0x267864u;
    // 0x267864: 0x0  nop
    ctx->pc = 0x267864u;
    // NOP
label_267868:
    // 0x267868: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267868u;
    SET_GPR_U32(ctx, 31, 0x267870u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267868u, 0x267870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267870u;
label_267870:
    // 0x267870: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267874: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x267874u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_267878:
    // 0x267878: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x267878u;
    {
        const bool branch_taken_0x267878 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267878u;
        // 0x26787c: 0x8f85aa7c  lw          $a1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267878) {
            ctx->pc = 0x2678A8u;
            goto label_2678a8;
        }
    }
    ctx->pc = 0x267880u;
    // 0x267880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267884: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x267884u;
    SET_GPR_U32(ctx, 31, 0x26788Cu);
    ctx->pc = 0x267888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267884u;
    // 0x267888: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x267884u, 0x26788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26788Cu;
label_26788c:
    // 0x26788c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26788Cu;
    {
        const bool branch_taken_0x26788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26788c) {
            ctx->pc = 0x267890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26788Cu;
            // 0x267890: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2678ACu;
            goto label_2678ac;
        }
    }
    ctx->pc = 0x267894u;
    // 0x267894: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x267894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x267898: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x267898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x26789c: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x26789cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2678a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2678A0u;
    {
        const bool branch_taken_0x2678a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678A0u;
        // 0x2678a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678a0) {
            ctx->pc = 0x2678CCu;
            goto label_2678cc;
        }
    }
    ctx->pc = 0x2678A8u;
label_2678a8:
    // 0x2678a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2678a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2678ac:
    // 0x2678ac: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2678acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2678b0: 0x1440fe4f  bnez        $v0, . + 4 + (-0x1B1 << 2)
    ctx->pc = 0x2678B0u;
    {
        const bool branch_taken_0x2678b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2678B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678B0u;
        // 0x2678b4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678b0) {
            ctx->pc = 0x2671F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2671f0;
        }
    }
    ctx->pc = 0x2678B8u;
label_2678b8:
    // 0x2678b8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2678b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2678bc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2678bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2678c0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2678c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2678c4: 0x1462fe3a  bne         $v1, $v0, . + 4 + (-0x1C6 << 2)
    ctx->pc = 0x2678C4u;
    {
        const bool branch_taken_0x2678c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2678C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678C4u;
        // 0x2678c8: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678c4) {
            ctx->pc = 0x2671B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2671b0;
        }
    }
    ctx->pc = 0x2678CCu;
label_2678cc:
    // 0x2678cc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2678ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2678d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2678d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2678d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2678d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2678d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2678dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2678dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2678e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2678e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2678e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2678e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2678e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2678e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2678ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2678ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2678ECu;
        // 0x2678f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2678ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2678F4u;
    // 0x2678f4: 0x0  nop
    ctx->pc = 0x2678f4u;
    // NOP
    ctx->pc = 0x2678f8u;
}
