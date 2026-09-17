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

// Function: sub_00120638
// Address: 0x120638 - 0x120cc8
void sub_00120638_0x120638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120638_0x120638");
#endif

    ctx->pc = 0x120638u;

    // 0x120638: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x120638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12063c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12063cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120640: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x120640u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x120644: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120648: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x120648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x12064c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12064cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120650: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x120650u;
    {
        const bool branch_taken_0x120650 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x120654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120650u;
        // 0x120654: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120650) {
            ctx->pc = 0x1206ACu;
            goto label_1206ac;
        }
    }
    ctx->pc = 0x120658u;
    // 0x120658: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x120658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12065c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12065cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x120660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120664: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120668: 0x21023  negu        $v0, $v0
    ctx->pc = 0x120668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x12066c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x12066cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x120670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120674: 0x41823  negu        $v1, $a0
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x120678: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12067c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12067cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x120680: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x120680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x120684: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x120684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x120688: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x120688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12068c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x12068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x120690: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x120690u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x120694: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x120694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x120698: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12069c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12069cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1206a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1206a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1206a4: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x1206a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1206a8: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x1206a8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_1206ac:
    // 0x1206ac: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1206acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1206b0: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1206B0u;
    {
        const bool branch_taken_0x1206b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1206B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206B0u;
        // 0x1206b4: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206b0) {
            ctx->pc = 0x120700u;
            goto label_120700;
        }
    }
    ctx->pc = 0x1206B8u;
    // 0x1206b8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1206b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1206bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1206bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1206c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1206c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1206c4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1206c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1206c8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1206c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1206cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1206d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1206d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1206d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1206d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1206d8: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1206dc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1206dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1206e0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1206e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1206e4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1206e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1206e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1206e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1206ec: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1206ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1206f0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1206f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1206f4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1206f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1206f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1206f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1206fc: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x1206fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_120700:
    // 0x120700: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x120700u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120704: 0x8683c  dsll32      $t5, $t0, 0
    ctx->pc = 0x120704u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 0));
    // 0x120708: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x120708u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x12070c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x12070cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x120710: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x120710u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x120714: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x120714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120718: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x120718u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x12071c: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x12071Cu;
    {
        const bool branch_taken_0x12071c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x120720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12071Cu;
        // 0x120720: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12071c) {
            ctx->pc = 0x1209E0u;
            goto label_1209e0;
        }
    }
    ctx->pc = 0x120724u;
    // 0x120724: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x120724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x120728: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x120728u;
    {
        const bool branch_taken_0x120728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120728u;
        // 0x12072c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120728) {
            ctx->pc = 0x1207A8u;
            goto label_1207a8;
        }
    }
    ctx->pc = 0x120730u;
    // 0x120730: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x120730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x120734: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120734u;
    {
        const bool branch_taken_0x120734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120734u;
        // 0x120738: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120734) {
            ctx->pc = 0x120750u;
            goto label_120750;
        }
    }
    ctx->pc = 0x12073Cu;
    // 0x12073c: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x12073cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120740: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120744: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x120744u;
    {
        const bool branch_taken_0x120744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120744u;
        // 0x120748: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120744) {
            ctx->pc = 0x120764u;
            goto label_120764;
        }
    }
    ctx->pc = 0x12074Cu;
    // 0x12074c: 0x0  nop
    ctx->pc = 0x12074cu;
    // NOP
label_120750:
    // 0x120750: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x120750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x120754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120758: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x120758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12075c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x12075cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x120760: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x120760u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_120764:
    // 0x120764: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x120768: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x120768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12076c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x120770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120774: 0x9042ef08  lbu         $v0, -0x10F8($v0)
    ctx->pc = 0x120774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962952)));
    // 0x120778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12077c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x12077cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120780: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x120780u;
    {
        const bool branch_taken_0x120780 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x120784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120780u;
        // 0x120784: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120780) {
            ctx->pc = 0x12079Cu;
            goto label_12079c;
        }
    }
    ctx->pc = 0x120788u;
    // 0x120788: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x120788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12078c: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x12078cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x120790: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x120790u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x120794: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x120794u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x120798: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x120798u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_12079c:
    // 0x12079c: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x12079cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1207a0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1207A0u;
    {
        const bool branch_taken_0x1207a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A0u;
        // 0x1207a4: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207a0) {
            ctx->pc = 0x120908u;
            goto label_120908;
        }
    }
    ctx->pc = 0x1207A8u;
label_1207a8:
    // 0x1207a8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1207A8u;
    {
        const bool branch_taken_0x1207a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A8u;
        // 0x1207ac: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207a8) {
            ctx->pc = 0x1207D0u;
            goto label_1207d0;
        }
    }
    ctx->pc = 0x1207B0u;
    // 0x1207b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1207b4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1207B4u;
    {
        const bool branch_taken_0x1207b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1207b4) {
            ctx->pc = 0x1207B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207B4u;
            // 0x1207b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1207BCu;
            goto label_1207bc;
        }
    }
    ctx->pc = 0x1207BCu;
label_1207bc:
    // 0x1207bc: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1207bcu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1207c0: 0x1012  mflo        $v0
    ctx->pc = 0x1207c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1207c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1207c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1207c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1207cc: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1207ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1207d0:
    // 0x1207d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1207D0u;
    {
        const bool branch_taken_0x1207d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207D0u;
        // 0x1207d4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207d0) {
            ctx->pc = 0x1207E8u;
            goto label_1207e8;
        }
    }
    ctx->pc = 0x1207D8u;
    // 0x1207d8: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1207d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1207dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1207dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1207e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1207E0u;
    {
        const bool branch_taken_0x1207e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207E0u;
        // 0x1207e4: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207e0) {
            ctx->pc = 0x1207FCu;
            goto label_1207fc;
        }
    }
    ctx->pc = 0x1207E8u;
label_1207e8:
    // 0x1207e8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1207e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1207ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1207ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1207f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1207f4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1207f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1207f8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1207f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1207fc:
    // 0x1207fc: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1207fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x120800: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x120800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120804: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x120808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12080c: 0x9042ef08  lbu         $v0, -0x10F8($v0)
    ctx->pc = 0x12080cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962952)));
    // 0x120810: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x120814: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x120814u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120818: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x120818u;
    {
        const bool branch_taken_0x120818 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x12081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120818u;
        // 0x12081c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120818) {
            ctx->pc = 0x120830u;
            goto label_120830;
        }
    }
    ctx->pc = 0x120820u;
    // 0x120820: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x120820u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x120824: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x120824u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x120828: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x120828u;
    {
        const bool branch_taken_0x120828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120828u;
        // 0x12082c: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120828) {
            ctx->pc = 0x120900u;
            goto label_120900;
        }
    }
    ctx->pc = 0x120830u;
label_120830:
    // 0x120830: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x120830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x120834: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x120834u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x120838: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x12083c: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x12083cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x120840: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x120840u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x120844: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x120848: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x120848u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x12084c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x12084cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x120850: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x120850u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x120854: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x120854u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x120858: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x120858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12085c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12085Cu;
    {
        const bool branch_taken_0x12085c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x12085c) {
            ctx->pc = 0x120860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12085Cu;
            // 0x120860: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120864u;
            goto label_120864;
        }
    }
    ctx->pc = 0x120864u;
label_120864:
    // 0x120864: 0x1012  mflo        $v0
    ctx->pc = 0x120864u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120868: 0x1810  mfhi        $v1
    ctx->pc = 0x120868u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12086c: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x12086cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x120870: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120874: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x120874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120878: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x120878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12087c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12087Cu;
    {
        const bool branch_taken_0x12087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12087Cu;
        // 0x120880: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12087c) {
            ctx->pc = 0x1208A8u;
            goto label_1208a8;
        }
    }
    ctx->pc = 0x120884u;
    // 0x120884: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x120884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x120888: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x120888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12088c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12088Cu;
    {
        const bool branch_taken_0x12088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12088c) {
            ctx->pc = 0x120890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12088Cu;
            // 0x120890: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1208ACu;
            goto label_1208ac;
        }
    }
    ctx->pc = 0x120894u;
    // 0x120894: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x120894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120898: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12089c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x12089cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1208a0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1208a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1208a4: 0x0  nop
    ctx->pc = 0x1208a4u;
    // NOP
label_1208a8:
    // 0x1208a8: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1208ac:
    // 0x1208ac: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1208acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1208b0: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1208b0u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1208b4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1208B4u;
    {
        const bool branch_taken_0x1208b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1208b4) {
            ctx->pc = 0x1208B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1208B4u;
            // 0x1208b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1208BCu;
            goto label_1208bc;
        }
    }
    ctx->pc = 0x1208BCu;
label_1208bc:
    // 0x1208bc: 0x1012  mflo        $v0
    ctx->pc = 0x1208bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1208c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1208c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1208c4: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1208c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1208c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1208c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1208cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1208ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1208d0: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1208d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1208d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1208D4u;
    {
        const bool branch_taken_0x1208d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208D4u;
        // 0x1208d8: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208d4) {
            ctx->pc = 0x120900u;
            goto label_120900;
        }
    }
    ctx->pc = 0x1208DCu;
    // 0x1208dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1208dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1208e0: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1208e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1208e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1208E4u;
    {
        const bool branch_taken_0x1208e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1208E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208E4u;
        // 0x1208e8: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208e4) {
            ctx->pc = 0x120900u;
            goto label_120900;
        }
    }
    ctx->pc = 0x1208ECu;
    // 0x1208ec: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1208ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1208f0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1208f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1208f4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1208f8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1208f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1208fc: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1208fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_120900:
    // 0x120900: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x120900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120904: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x120904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_120908:
    // 0x120908: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x120908u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x12090c: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x12090cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x120910: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120910u;
    {
        const bool branch_taken_0x120910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120910) {
            ctx->pc = 0x120914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120910u;
            // 0x120914: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120918u;
            goto label_120918;
        }
    }
    ctx->pc = 0x120918u;
label_120918:
    // 0x120918: 0x1012  mflo        $v0
    ctx->pc = 0x120918u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12091c: 0x1810  mfhi        $v1
    ctx->pc = 0x12091cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120920: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x120920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x120924: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120928: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x120928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12092c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120930: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x120930u;
    {
        const bool branch_taken_0x120930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120930) {
            ctx->pc = 0x120934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120930u;
            // 0x120934: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12095Cu;
            goto label_12095c;
        }
    }
    ctx->pc = 0x120938u;
    // 0x120938: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x120938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x12093c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x12093cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x120940: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x120940u;
    {
        const bool branch_taken_0x120940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120940) {
            ctx->pc = 0x120944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120940u;
            // 0x120944: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12095Cu;
            goto label_12095c;
        }
    }
    ctx->pc = 0x120948u;
    // 0x120948: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x120948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12094c: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x120950: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x120950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x120954: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x120954u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x120958: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x120958u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_12095c:
    // 0x12095c: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x12095cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x120960: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x120960u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x120964: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120964u;
    {
        const bool branch_taken_0x120964 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120964) {
            ctx->pc = 0x120968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120964u;
            // 0x120968: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12096Cu;
            goto label_12096c;
        }
    }
    ctx->pc = 0x12096Cu;
label_12096c:
    // 0x12096c: 0x1012  mflo        $v0
    ctx->pc = 0x12096cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120970: 0x1810  mfhi        $v1
    ctx->pc = 0x120970u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120974: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x120974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x120978: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x12097c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x12097cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120980: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x120980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120984: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120984u;
    {
        const bool branch_taken_0x120984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120984) {
            ctx->pc = 0x1209A8u;
            goto label_1209a8;
        }
    }
    ctx->pc = 0x12098Cu;
    // 0x12098c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x12098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x120990: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x120990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x120994: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120994u;
    {
        const bool branch_taken_0x120994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120994u;
        // 0x120998: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120994) {
            ctx->pc = 0x1209A8u;
            goto label_1209a8;
        }
    }
    ctx->pc = 0x12099Cu;
    // 0x12099c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x12099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1209a0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1209a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1209a4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1209a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1209a8:
    // 0x1209a8: 0x132000ac  beqz        $t9, . + 4 + (0xAC << 2)
    ctx->pc = 0x1209A8u;
    {
        const bool branch_taken_0x1209a8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209A8u;
        // 0x1209ac: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209a8) {
            ctx->pc = 0x120C5Cu;
            goto label_120c5c;
        }
    }
    ctx->pc = 0x1209B0u;
    // 0x1209b0: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1209b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1209b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1209b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1209b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1209bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1209bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1209c0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1209c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1209c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1209c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1209c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1209c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1209cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1209ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1209d0: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1209d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1209d4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1209D4u;
    {
        const bool branch_taken_0x1209d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209D4u;
        // 0x1209d8: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209d4) {
            ctx->pc = 0x120C58u;
            goto label_120c58;
        }
    }
    ctx->pc = 0x1209DCu;
    // 0x1209dc: 0x0  nop
    ctx->pc = 0x1209dcu;
    // NOP
label_1209e0:
    // 0x1209e0: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1209e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1209e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1209E4u;
    {
        const bool branch_taken_0x1209e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209E4u;
        // 0x1209e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209e4) {
            ctx->pc = 0x120A20u;
            goto label_120a20;
        }
    }
    ctx->pc = 0x1209ECu;
    // 0x1209ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1209ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1209f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1209f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1209f4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1209f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1209f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1209f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1209fc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1209fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x120a00: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x120a00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x120a04: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x120a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x120a08: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x120a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x120a0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x120a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x120a10: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x120a10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x120a14: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x120a14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x120a18: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x120A18u;
    {
        const bool branch_taken_0x120a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A18u;
        // 0x120a1c: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a18) {
            ctx->pc = 0x120C5Cu;
            goto label_120c5c;
        }
    }
    ctx->pc = 0x120A20u;
label_120a20:
    // 0x120a20: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x120a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120a24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120A24u;
    {
        const bool branch_taken_0x120a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A24u;
        // 0x120a28: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a24) {
            ctx->pc = 0x120A40u;
            goto label_120a40;
        }
    }
    ctx->pc = 0x120A2Cu;
    // 0x120a2c: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x120a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x120a30: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x120a34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x120A34u;
    {
        const bool branch_taken_0x120a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A34u;
        // 0x120a38: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a34) {
            ctx->pc = 0x120A54u;
            goto label_120a54;
        }
    }
    ctx->pc = 0x120A3Cu;
    // 0x120a3c: 0x0  nop
    ctx->pc = 0x120a3cu;
    // NOP
label_120a40:
    // 0x120a40: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x120a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x120a44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x120a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x120a48: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x120a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x120a4c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x120a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120a50: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x120a50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_120a54:
    // 0x120a54: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x120a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x120a58: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x120a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120a5c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x120a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x120a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x120a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x120a64: 0x9042ef08  lbu         $v0, -0x10F8($v0)
    ctx->pc = 0x120a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962952)));
    // 0x120a68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x120a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x120a6c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x120a6cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x120a70: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x120A70u;
    {
        const bool branch_taken_0x120a70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A70u;
        // 0x120a74: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a70) {
            ctx->pc = 0x120AD8u;
            goto label_120ad8;
        }
    }
    ctx->pc = 0x120A78u;
    // 0x120a78: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x120a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x120a7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120A7Cu;
    {
        const bool branch_taken_0x120a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A7Cu;
        // 0x120a80: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a7c) {
            ctx->pc = 0x120A90u;
            goto label_120a90;
        }
    }
    ctx->pc = 0x120A84u;
    // 0x120a84: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x120a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x120a88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120A88u;
    {
        const bool branch_taken_0x120a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A88u;
        // 0x120a8c: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a88) {
            ctx->pc = 0x120AA0u;
            goto label_120aa0;
        }
    }
    ctx->pc = 0x120A90u;
label_120a90:
    // 0x120a90: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x120a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x120a94: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x120a94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x120a98: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x120a98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a9c: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x120a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_120aa0:
    // 0x120aa0: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
    ctx->pc = 0x120AA0u;
    {
        const bool branch_taken_0x120aa0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AA0u;
        // 0x120aa4: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aa0) {
            ctx->pc = 0x120C5Cu;
            goto label_120c5c;
        }
    }
    ctx->pc = 0x120AA8u;
    // 0x120aa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120aac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120ab0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120ab4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x120ab4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x120ab8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x120ab8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x120abc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x120abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x120ac0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x120ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x120ac4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x120ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x120ac8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x120ac8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x120acc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x120ACCu;
    {
        const bool branch_taken_0x120acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120ACCu;
        // 0x120ad0: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120acc) {
            ctx->pc = 0x120C58u;
            goto label_120c58;
        }
    }
    ctx->pc = 0x120AD4u;
    // 0x120ad4: 0x0  nop
    ctx->pc = 0x120ad4u;
    // NOP
label_120ad8:
    // 0x120ad8: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x120ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x120adc: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x120adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x120ae0: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x120ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x120ae4: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x120ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x120ae8: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x120ae8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x120aec: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x120aecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x120af0: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x120af0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x120af4: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x120af4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x120af8: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x120af8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x120afc: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x120afcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x120b00: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x120b00u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x120b04: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x120b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x120b08: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x120b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x120b0c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120B0Cu;
    {
        const bool branch_taken_0x120b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b0c) {
            ctx->pc = 0x120B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B0Cu;
            // 0x120b10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B14u;
            goto label_120b14;
        }
    }
    ctx->pc = 0x120B14u;
label_120b14:
    // 0x120b14: 0x1012  mflo        $v0
    ctx->pc = 0x120b14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120b18: 0x1810  mfhi        $v1
    ctx->pc = 0x120b18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120b1c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x120b1cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120b24: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x120b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x120b28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x120b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120b2c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x120b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120b30: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x120B30u;
    {
        const bool branch_taken_0x120b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b30) {
            ctx->pc = 0x120B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B30u;
            // 0x120b34: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B64u;
            goto label_120b64;
        }
    }
    ctx->pc = 0x120B38u;
    // 0x120b38: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120b3c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x120b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120b40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x120B40u;
    {
        const bool branch_taken_0x120b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B40u;
        // 0x120b44: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120b40) {
            ctx->pc = 0x120B60u;
            goto label_120b60;
        }
    }
    ctx->pc = 0x120B48u;
    // 0x120b48: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x120b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120b4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x120B4Cu;
    {
        const bool branch_taken_0x120b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b4c) {
            ctx->pc = 0x120B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B4Cu;
            // 0x120b50: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B64u;
            goto label_120b64;
        }
    }
    ctx->pc = 0x120B54u;
    // 0x120b54: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x120b54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x120b58: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x120b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x120b5c: 0x0  nop
    ctx->pc = 0x120b5cu;
    // NOP
label_120b60:
    // 0x120b60: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x120b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_120b64:
    // 0x120b64: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x120B64u;
    {
        const bool branch_taken_0x120b64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b64) {
            ctx->pc = 0x120B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B64u;
            // 0x120b68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x120B6Cu;
            goto label_120b6c;
        }
    }
    ctx->pc = 0x120B6Cu;
label_120b6c:
    // 0x120b6c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x120b6cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x120b70: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x120b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x120b74: 0x1012  mflo        $v0
    ctx->pc = 0x120b74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x120b78: 0x1810  mfhi        $v1
    ctx->pc = 0x120b78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x120b7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x120b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120b80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x120b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x120b84: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x120b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x120b88: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x120b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x120b8c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x120b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120b90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x120B90u;
    {
        const bool branch_taken_0x120b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120b90) {
            ctx->pc = 0x120B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120B90u;
            // 0x120b94: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120BC0u;
            goto label_120bc0;
        }
    }
    ctx->pc = 0x120B98u;
    // 0x120b98: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x120b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x120b9c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x120b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120ba0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120BA0u;
    {
        const bool branch_taken_0x120ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BA0u;
        // 0x120ba4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ba0) {
            ctx->pc = 0x120BBCu;
            goto label_120bbc;
        }
    }
    ctx->pc = 0x120BA8u;
    // 0x120ba8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x120ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x120bac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x120BACu;
    {
        const bool branch_taken_0x120bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120bac) {
            ctx->pc = 0x120BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120BACu;
            // 0x120bb0: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120BC0u;
            goto label_120bc0;
        }
    }
    ctx->pc = 0x120BB4u;
    // 0x120bb4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x120bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x120bb8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x120bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_120bbc:
    // 0x120bbc: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x120bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_120bc0:
    // 0x120bc0: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x120bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x120bc4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x120bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x120bc8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x120bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120bcc: 0x470019  multu       $v0, $a3
    ctx->pc = 0x120bccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120bd0: 0x3010  mfhi        $a2
    ctx->pc = 0x120bd0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x120bd4: 0x4012  mflo        $t0
    ctx->pc = 0x120bd4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x120bd8: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x120bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x120bdc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x120BDCu;
    {
        const bool branch_taken_0x120bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BDCu;
        // 0x120be0: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bdc) {
            ctx->pc = 0x120BF8u;
            goto label_120bf8;
        }
    }
    ctx->pc = 0x120BE4u;
    // 0x120be4: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x120BE4u;
    {
        const bool branch_taken_0x120be4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x120BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BE4u;
        // 0x120be8: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120be4) {
            ctx->pc = 0x120C08u;
            goto label_120c08;
        }
    }
    ctx->pc = 0x120BECu;
    // 0x120bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120BECu;
    {
        const bool branch_taken_0x120bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BECu;
        // 0x120bf0: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120bec) {
            ctx->pc = 0x120C08u;
            goto label_120c08;
        }
    }
    ctx->pc = 0x120BF4u;
    // 0x120bf4: 0x0  nop
    ctx->pc = 0x120bf4u;
    // NOP
label_120bf8:
    // 0x120bf8: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x120bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x120bfc: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x120bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x120c00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x120c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120c04: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x120c04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_120c08:
    // 0x120c08: 0x13200014  beqz        $t9, . + 4 + (0x14 << 2)
    ctx->pc = 0x120C08u;
    {
        const bool branch_taken_0x120c08 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C08u;
        // 0x120c0c: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c08) {
            ctx->pc = 0x120C5Cu;
            goto label_120c5c;
        }
    }
    ctx->pc = 0x120C10u;
    // 0x120c10: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x120c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x120c14: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x120c14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x120c18: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x120c18u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x120c1c: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x120c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x120c20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120c24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120c28: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x120c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x120c2c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x120c2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x120c30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x120c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x120c34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x120c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x120c38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x120c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x120c3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120c40: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x120c44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120c48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120c4c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x120c4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x120c50: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x120c50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x120c54: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x120c54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_120c58:
    // 0x120c58: 0xff2b0000  sd          $t3, 0x0($t9)
    ctx->pc = 0x120c58u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 11));
label_120c5c:
    // 0x120c5c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x120C5Cu;
    {
        const bool branch_taken_0x120c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x120C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C5Cu;
        // 0x120c60: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c5c) {
            ctx->pc = 0x120CB8u;
            goto label_120cb8;
        }
    }
    ctx->pc = 0x120C64u;
    // 0x120c64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x120c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120c68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x120c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x120c6c: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x120c6cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x120c70: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x120c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120c74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x120c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x120c78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x120c78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x120c7c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x120c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x120c80: 0x31823  negu        $v1, $v1
    ctx->pc = 0x120c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x120c84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120c88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120c8c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x120c8cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x120c90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x120c94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120c98: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x120c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x120c9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x120c9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120ca0: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x120ca0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x120ca4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x120ca4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x120ca8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x120ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x120cac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x120cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x120cb0: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x120cb0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x120cb4: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x120cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_120cb8:
    // 0x120cb8: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x120cb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120cbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x120cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x120CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120CC0u;
        // 0x120cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120CC8u;
}
