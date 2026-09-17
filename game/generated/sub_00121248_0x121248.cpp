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

// Function: sub_00121248
// Address: 0x121248 - 0x1217b0
void sub_00121248_0x121248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121248_0x121248");
#endif

    ctx->pc = 0x121248u;

    // 0x121248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12124c: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x12124cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x121250: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x121250u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x121254: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x121254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x121258: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x121258u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x12125c: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x12125cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x121260: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x121260u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x121264: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x121264u;
    {
        const bool branch_taken_0x121264 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x121268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121264u;
        // 0x121268: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121264) {
            ctx->pc = 0x121528u;
            goto label_121528;
        }
    }
    ctx->pc = 0x12126Cu;
    // 0x12126c: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x12126cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x121270: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x121270u;
    {
        const bool branch_taken_0x121270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121270u;
        // 0x121274: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121270) {
            ctx->pc = 0x1212F0u;
            goto label_1212f0;
        }
    }
    ctx->pc = 0x121278u;
    // 0x121278: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x121278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12127c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12127Cu;
    {
        const bool branch_taken_0x12127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12127Cu;
        // 0x121280: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12127c) {
            ctx->pc = 0x121298u;
            goto label_121298;
        }
    }
    ctx->pc = 0x121284u;
    // 0x121284: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x121284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121288: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x121288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12128c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12128Cu;
    {
        const bool branch_taken_0x12128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12128Cu;
        // 0x121290: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12128c) {
            ctx->pc = 0x1212ACu;
            goto label_1212ac;
        }
    }
    ctx->pc = 0x121294u;
    // 0x121294: 0x0  nop
    ctx->pc = 0x121294u;
    // NOP
label_121298:
    // 0x121298: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12129c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1212a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1212a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1212a4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1212a8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1212a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1212ac:
    // 0x1212ac: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1212acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1212b0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1212b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1212b4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1212b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1212b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1212b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1212bc: 0x9042f108  lbu         $v0, -0xEF8($v0)
    ctx->pc = 0x1212bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x1212c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1212c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1212c4: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1212c8: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1212C8u;
    {
        const bool branch_taken_0x1212c8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212C8u;
        // 0x1212cc: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212c8) {
            ctx->pc = 0x1212E4u;
            goto label_1212e4;
        }
    }
    ctx->pc = 0x1212D0u;
    // 0x1212d0: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1212d4: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1212d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1212d8: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1212d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1212dc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1212dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1212e0: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1212e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1212e4:
    // 0x1212e4: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1212e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1212e8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1212E8u;
    {
        const bool branch_taken_0x1212e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1212ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212E8u;
        // 0x1212ec: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212e8) {
            ctx->pc = 0x121450u;
            goto label_121450;
        }
    }
    ctx->pc = 0x1212F0u;
label_1212f0:
    // 0x1212f0: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1212F0u;
    {
        const bool branch_taken_0x1212f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1212F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1212F0u;
        // 0x1212f4: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212f0) {
            ctx->pc = 0x121318u;
            goto label_121318;
        }
    }
    ctx->pc = 0x1212F8u;
    // 0x1212f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1212f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1212fc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1212FCu;
    {
        const bool branch_taken_0x1212fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212fc) {
            ctx->pc = 0x121300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1212FCu;
            // 0x121300: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121304u;
            goto label_121304;
        }
    }
    ctx->pc = 0x121304u;
label_121304:
    // 0x121304: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x121304u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x121308: 0x1012  mflo        $v0
    ctx->pc = 0x121308u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12130c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12130cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121310: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x121310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x121314: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x121314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_121318:
    // 0x121318: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121318u;
        // 0x12131c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121318) {
            ctx->pc = 0x121330u;
            goto label_121330;
        }
    }
    ctx->pc = 0x121320u;
    // 0x121320: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x121320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121324: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x121328: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x121328u;
    {
        const bool branch_taken_0x121328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121328u;
        // 0x12132c: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121328) {
            ctx->pc = 0x121344u;
            goto label_121344;
        }
    }
    ctx->pc = 0x121330u;
label_121330:
    // 0x121330: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x121330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x121334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x121334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x121338: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x121338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12133c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x12133cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x121340: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x121340u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_121344:
    // 0x121344: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x121348: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x121348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12134c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x121350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x121350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x121354: 0x9042f108  lbu         $v0, -0xEF8($v0)
    ctx->pc = 0x121354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x121358: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12135c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x12135cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x121360: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x121360u;
    {
        const bool branch_taken_0x121360 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x121364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121360u;
        // 0x121364: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121360) {
            ctx->pc = 0x121378u;
            goto label_121378;
        }
    }
    ctx->pc = 0x121368u;
    // 0x121368: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x121368u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x12136c: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x12136cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x121370: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x121370u;
    {
        const bool branch_taken_0x121370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121370u;
        // 0x121374: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x121370) {
            ctx->pc = 0x121448u;
            goto label_121448;
        }
    }
    ctx->pc = 0x121378u;
label_121378:
    // 0x121378: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x121378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12137c: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x12137cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x121380: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x121380u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x121384: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x121384u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x121388: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x121388u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12138c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x12138cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x121390: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x121394: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x121394u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x121398: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x121398u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12139c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x12139cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1213a0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1213a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213a4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1213A4u;
    {
        const bool branch_taken_0x1213a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1213a4) {
            ctx->pc = 0x1213A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1213A4u;
            // 0x1213a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1213ACu;
            goto label_1213ac;
        }
    }
    ctx->pc = 0x1213ACu;
label_1213ac:
    // 0x1213ac: 0x1012  mflo        $v0
    ctx->pc = 0x1213acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1213b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1213b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1213b4: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1213b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1213b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1213bc: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1213bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1213c0: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1213c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1213c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1213C4u;
    {
        const bool branch_taken_0x1213c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213C4u;
        // 0x1213c8: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213c4) {
            ctx->pc = 0x1213F0u;
            goto label_1213f0;
        }
    }
    ctx->pc = 0x1213CCu;
    // 0x1213cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1213ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1213d0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1213d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1213d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1213D4u;
    {
        const bool branch_taken_0x1213d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1213d4) {
            ctx->pc = 0x1213D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1213D4u;
            // 0x1213d8: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1213F4u;
            goto label_1213f4;
        }
    }
    ctx->pc = 0x1213DCu;
    // 0x1213dc: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1213dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1213e0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1213e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1213e4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1213e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1213e8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1213e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1213ec: 0x0  nop
    ctx->pc = 0x1213ecu;
    // NOP
label_1213f0:
    // 0x1213f0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1213f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1213f4:
    // 0x1213f4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1213f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1213f8: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1213f8u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1213fc: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1213FCu;
    {
        const bool branch_taken_0x1213fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1213fc) {
            ctx->pc = 0x121400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1213FCu;
            // 0x121400: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121404u;
            goto label_121404;
        }
    }
    ctx->pc = 0x121404u;
label_121404:
    // 0x121404: 0x1012  mflo        $v0
    ctx->pc = 0x121404u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x121408: 0x1810  mfhi        $v1
    ctx->pc = 0x121408u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12140c: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x12140cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x121410: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x121410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x121414: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x121414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x121418: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x121418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12141c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12141Cu;
    {
        const bool branch_taken_0x12141c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12141Cu;
        // 0x121420: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12141c) {
            ctx->pc = 0x121448u;
            goto label_121448;
        }
    }
    ctx->pc = 0x121424u;
    // 0x121424: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x121428: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x121428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12142c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12142Cu;
    {
        const bool branch_taken_0x12142c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12142Cu;
        // 0x121430: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12142c) {
            ctx->pc = 0x121448u;
            goto label_121448;
        }
    }
    ctx->pc = 0x121434u;
    // 0x121434: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x121434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121438: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x121438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x12143c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x12143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x121440: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x121440u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x121444: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x121444u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_121448:
    // 0x121448: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x121448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12144c: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x12144cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_121450:
    // 0x121450: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x121450u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x121454: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x121454u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x121458: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121458u;
    {
        const bool branch_taken_0x121458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x121458) {
            ctx->pc = 0x12145Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121458u;
            // 0x12145c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x121460u;
            goto label_121460;
        }
    }
    ctx->pc = 0x121460u;
label_121460:
    // 0x121460: 0x1012  mflo        $v0
    ctx->pc = 0x121460u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x121464: 0x1810  mfhi        $v1
    ctx->pc = 0x121464u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x121468: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x121468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x12146c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x121470: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x121470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x121474: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x121474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121478: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x121478u;
    {
        const bool branch_taken_0x121478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121478) {
            ctx->pc = 0x12147Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121478u;
            // 0x12147c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1214A4u;
            goto label_1214a4;
        }
    }
    ctx->pc = 0x121480u;
    // 0x121480: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x121480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x121484: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x121484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x121488: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x121488u;
    {
        const bool branch_taken_0x121488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121488) {
            ctx->pc = 0x12148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121488u;
            // 0x12148c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1214A4u;
            goto label_1214a4;
        }
    }
    ctx->pc = 0x121490u;
    // 0x121490: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x121490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121494: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x121494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x121498: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x121498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x12149c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x12149cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1214a0: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1214a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1214a4:
    // 0x1214a4: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1214a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1214a8: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1214a8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1214ac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1214ACu;
    {
        const bool branch_taken_0x1214ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214ac) {
            ctx->pc = 0x1214B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1214ACu;
            // 0x1214b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1214B4u;
            goto label_1214b4;
        }
    }
    ctx->pc = 0x1214B4u;
label_1214b4:
    // 0x1214b4: 0x1012  mflo        $v0
    ctx->pc = 0x1214b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1214b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1214b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1214bc: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1214bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1214c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1214c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1214c4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1214c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1214c8: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1214c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1214cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1214CCu;
    {
        const bool branch_taken_0x1214cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214cc) {
            ctx->pc = 0x1214F0u;
            goto label_1214f0;
        }
    }
    ctx->pc = 0x1214D4u;
    // 0x1214d4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1214d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1214d8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1214d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1214dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1214DCu;
    {
        const bool branch_taken_0x1214dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1214E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214DCu;
        // 0x1214e0: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214dc) {
            ctx->pc = 0x1214F0u;
            goto label_1214f0;
        }
    }
    ctx->pc = 0x1214E4u;
    // 0x1214e4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1214e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1214e8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1214e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1214ec: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1214ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1214f0:
    // 0x1214f0: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
    ctx->pc = 0x1214F0u;
    {
        const bool branch_taken_0x1214f0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214F0u;
        // 0x1214f4: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214f0) {
            ctx->pc = 0x1217A4u;
            goto label_1217a4;
        }
    }
    ctx->pc = 0x1214F8u;
    // 0x1214f8: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1214fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121500: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x121500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x121504: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121508: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x121508u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x12150c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121510: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x121510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x121514: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x121514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x121518: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x121518u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x12151c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x12151Cu;
    {
        const bool branch_taken_0x12151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12151Cu;
        // 0x121520: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12151c) {
            ctx->pc = 0x1217A0u;
            goto label_1217a0;
        }
    }
    ctx->pc = 0x121524u;
    // 0x121524: 0x0  nop
    ctx->pc = 0x121524u;
    // NOP
label_121528:
    // 0x121528: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x121528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12152c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12152Cu;
    {
        const bool branch_taken_0x12152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12152Cu;
        // 0x121530: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12152c) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121534u;
    // 0x121534: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121538: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x121538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12153c: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x12153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x121540: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x121540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121544: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x121544u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x121548: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x121548u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x12154c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x12154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x121550: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x121550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x121554: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x121554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x121558: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x121558u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x12155c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x12155cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x121560: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x121560u;
    {
        const bool branch_taken_0x121560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121560u;
        // 0x121564: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121560) {
            ctx->pc = 0x1217A4u;
            goto label_1217a4;
        }
    }
    ctx->pc = 0x121568u;
label_121568:
    // 0x121568: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x121568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12156c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12156Cu;
    {
        const bool branch_taken_0x12156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12156Cu;
        // 0x121570: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12156c) {
            ctx->pc = 0x121588u;
            goto label_121588;
        }
    }
    ctx->pc = 0x121574u;
    // 0x121574: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x121574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x121578: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x121578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12157c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12157Cu;
    {
        const bool branch_taken_0x12157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12157Cu;
        // 0x121580: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12157c) {
            ctx->pc = 0x12159Cu;
            goto label_12159c;
        }
    }
    ctx->pc = 0x121584u;
    // 0x121584: 0x0  nop
    ctx->pc = 0x121584u;
    // NOP
label_121588:
    // 0x121588: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x121588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12158c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x121590: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x121590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x121594: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x121594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x121598: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x121598u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_12159c:
    // 0x12159c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x12159cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1215a0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1215a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1215a4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1215a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1215a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1215a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1215ac: 0x9042f108  lbu         $v0, -0xEF8($v0)
    ctx->pc = 0x1215acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x1215b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1215b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1215b4: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1215b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1215b8: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1215B8u;
    {
        const bool branch_taken_0x1215b8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1215BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215B8u;
        // 0x1215bc: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215b8) {
            ctx->pc = 0x121620u;
            goto label_121620;
        }
    }
    ctx->pc = 0x1215C0u;
    // 0x1215c0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1215c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1215c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1215C4u;
    {
        const bool branch_taken_0x1215c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1215C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C4u;
        // 0x1215c8: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215c4) {
            ctx->pc = 0x1215D8u;
            goto label_1215d8;
        }
    }
    ctx->pc = 0x1215CCu;
    // 0x1215cc: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1215ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1215d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1215D0u;
    {
        const bool branch_taken_0x1215d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215D0u;
        // 0x1215d4: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215d0) {
            ctx->pc = 0x1215E8u;
            goto label_1215e8;
        }
    }
    ctx->pc = 0x1215D8u;
label_1215d8:
    // 0x1215d8: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1215d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1215dc: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1215dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1215e0: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1215e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215e4: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1215e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1215e8:
    // 0x1215e8: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
    ctx->pc = 0x1215E8u;
    {
        const bool branch_taken_0x1215e8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215E8u;
        // 0x1215ec: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215e8) {
            ctx->pc = 0x1217A4u;
            goto label_1217a4;
        }
    }
    ctx->pc = 0x1215F0u;
    // 0x1215f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1215f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1215f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1215f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1215f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1215f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1215fc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1215fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x121600: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x121600u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x121604: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x121604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x121608: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x121608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12160c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x121610: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x121610u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x121614: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x121614u;
    {
        const bool branch_taken_0x121614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121614u;
        // 0x121618: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121614) {
            ctx->pc = 0x1217A0u;
            goto label_1217a0;
        }
    }
    ctx->pc = 0x12161Cu;
    // 0x12161c: 0x0  nop
    ctx->pc = 0x12161cu;
    // NOP
label_121620:
    // 0x121620: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x121620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x121624: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x121624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x121628: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x121628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x12162c: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x12162cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x121630: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x121630u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x121634: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x121634u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x121638: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x12163c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x12163cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x121640: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x121640u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x121644: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x121644u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x121648: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x121648u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x12164c: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x12164cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x121650: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x121650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x121654: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x121654u;
    {
        const bool branch_taken_0x121654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x121654) {
            ctx->pc = 0x121658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121654u;
            // 0x121658: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12165Cu;
            goto label_12165c;
        }
    }
    ctx->pc = 0x12165Cu;
label_12165c:
    // 0x12165c: 0x1012  mflo        $v0
    ctx->pc = 0x12165cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x121660: 0x1810  mfhi        $v1
    ctx->pc = 0x121660u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x121664: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x121664u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121668: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x121668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x12166c: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x12166cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x121670: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x121670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x121674: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x121674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121678: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x121678u;
    {
        const bool branch_taken_0x121678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121678) {
            ctx->pc = 0x12167Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121678u;
            // 0x12167c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216ACu;
            goto label_1216ac;
        }
    }
    ctx->pc = 0x121680u;
    // 0x121680: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x121680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x121684: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x121684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x121688: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121688u;
    {
        const bool branch_taken_0x121688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121688u;
        // 0x12168c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121688) {
            ctx->pc = 0x1216A8u;
            goto label_1216a8;
        }
    }
    ctx->pc = 0x121690u;
    // 0x121690: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x121690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x121694: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x121694u;
    {
        const bool branch_taken_0x121694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121694) {
            ctx->pc = 0x121698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121694u;
            // 0x121698: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216ACu;
            goto label_1216ac;
        }
    }
    ctx->pc = 0x12169Cu;
    // 0x12169c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12169cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1216a0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1216a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1216a4: 0x0  nop
    ctx->pc = 0x1216a4u;
    // NOP
label_1216a8:
    // 0x1216a8: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1216a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1216ac:
    // 0x1216ac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1216ACu;
    {
        const bool branch_taken_0x1216ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216ac) {
            ctx->pc = 0x1216B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216ACu;
            // 0x1216b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1216B4u;
            goto label_1216b4;
        }
    }
    ctx->pc = 0x1216B4u;
label_1216b4:
    // 0x1216b4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1216b4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1216b8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1216b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1216bc: 0x1012  mflo        $v0
    ctx->pc = 0x1216bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1216c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1216c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1216c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1216c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1216c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1216c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1216cc: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1216ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1216d0: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1216d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1216d4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1216d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1216d8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1216D8u;
    {
        const bool branch_taken_0x1216d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216d8) {
            ctx->pc = 0x1216DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216D8u;
            // 0x1216dc: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    ctx->pc = 0x1216E0u;
    // 0x1216e0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1216e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1216e4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1216e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1216e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1216E8u;
    {
        const bool branch_taken_0x1216e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1216ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216E8u;
        // 0x1216ec: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216e8) {
            ctx->pc = 0x121704u;
            goto label_121704;
        }
    }
    ctx->pc = 0x1216F0u;
    // 0x1216f0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1216f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1216f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1216F4u;
    {
        const bool branch_taken_0x1216f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1216f4) {
            ctx->pc = 0x1216F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1216F4u;
            // 0x1216f8: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121708u;
            goto label_121708;
        }
    }
    ctx->pc = 0x1216FCu;
    // 0x1216fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1216fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x121700: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x121700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_121704:
    // 0x121704: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x121704u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_121708:
    // 0x121708: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12170c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x121710: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x121710u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121714: 0x470019  multu       $v0, $a3
    ctx->pc = 0x121714u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x121718: 0x3010  mfhi        $a2
    ctx->pc = 0x121718u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x12171c: 0x4012  mflo        $t0
    ctx->pc = 0x12171cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x121720: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x121724: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x121724u;
    {
        const bool branch_taken_0x121724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121724u;
        // 0x121728: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121724) {
            ctx->pc = 0x121740u;
            goto label_121740;
        }
    }
    ctx->pc = 0x12172Cu;
    // 0x12172c: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12172Cu;
    {
        const bool branch_taken_0x12172c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x121730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12172Cu;
        // 0x121730: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12172c) {
            ctx->pc = 0x121750u;
            goto label_121750;
        }
    }
    ctx->pc = 0x121734u;
    // 0x121734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121734u;
    {
        const bool branch_taken_0x121734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121734u;
        // 0x121738: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121734) {
            ctx->pc = 0x121750u;
            goto label_121750;
        }
    }
    ctx->pc = 0x12173Cu;
    // 0x12173c: 0x0  nop
    ctx->pc = 0x12173cu;
    // NOP
label_121740:
    // 0x121740: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x121744: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x121744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x121748: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x121748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12174c: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x12174cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_121750:
    // 0x121750: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x121750u;
    {
        const bool branch_taken_0x121750 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x121754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121750u;
        // 0x121754: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121750) {
            ctx->pc = 0x1217A4u;
            goto label_1217a4;
        }
    }
    ctx->pc = 0x121758u;
    // 0x121758: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x121758u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12175c: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x12175cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x121760: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x121760u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x121764: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x121764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x121768: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12176c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12176cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x121770: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x121770u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x121774: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x121774u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x121778: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x121778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12177c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12177cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x121780: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x121780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x121784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121788: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x121788u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12178c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x121790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x121794: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x121794u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x121798: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x121798u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x12179c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x12179cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_1217a0:
    // 0x1217a0: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x1217a0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
label_1217a4:
    // 0x1217a4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1217a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1217a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1217A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1217ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217A8u;
        // 0x1217ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1217A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1217B0u;
}
