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

// Function: sub_004B5360
// Address: 0x4b5360 - 0x4b5690
void sub_004B5360_0x4b5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5360_0x4b5360");
#endif

    ctx->pc = 0x4b5360u;

    // 0x4b5360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b5364: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x4b5364u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b5368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b536c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b536cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b5370: 0x25840d30  addiu       $a0, $t4, 0xD30
    ctx->pc = 0x4b5370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
    // 0x4b5374: 0x25ae0136  addiu       $t6, $t5, 0x136
    ctx->pc = 0x4b5374u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 310));
    // 0x4b5378: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b5378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b537c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b537cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5380: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4b5380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b5384: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4b5384u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4b5388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b538c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b5390: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5394: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b5394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b5398: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b5398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b539c: 0x3401ff80  ori         $at, $zero, 0xFF80
    ctx->pc = 0x4b539cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b53a0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b53a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b53a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B53A8u;
    {
        const bool branch_taken_0x4b53a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B53A8u;
        // 0x4b53ac: 0x25e50d34  addiu       $a1, $t7, 0xD34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 3380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b53a8) {
            ctx->pc = 0x4B53C0u;
            goto label_4b53c0;
        }
    }
    ctx->pc = 0x4B53B0u;
    // 0x4b53b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b53b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B53B4u;
    {
        const bool branch_taken_0x4b53b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B53B4u;
        // 0x4b53b8: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b53b4) {
            ctx->pc = 0x4B53C8u;
            goto label_4b53c8;
        }
    }
    ctx->pc = 0x4B53BCu;
    // 0x4b53bc: 0x0  nop
    ctx->pc = 0x4b53bcu;
    // NOP
label_4b53c0:
    // 0x4b53c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b53c4: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4b53c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4b53c8:
    // 0x4b53c8: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x4b53c8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x4b53cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b53d0: 0x270a0d38  addiu       $t2, $t8, 0xD38
    ctx->pc = 0x4b53d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 3384));
    // 0x4b53d4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x4b53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x4b53d8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4b53d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D38u));
    // 0x4b53dc: 0x25880d30  addiu       $t0, $t4, 0xD30
    ctx->pc = 0x4b53dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
    // 0x4b53e0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4b53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4b53e4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b53e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b53e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b53e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b53ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b53ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b53f0: 0x95e70d34  lhu         $a3, 0xD34($t7)
    ctx->pc = 0x4b53f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3380)));
    // 0x4b53f4: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4b53f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b53f8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b53fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b53fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5400: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4b5400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b5404: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4b5404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5408: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b5408u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b540c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4b540cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5410: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4b5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4b5414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5418: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b5418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b541c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b541cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b5420: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b5420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b5424: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5428: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b5428u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b542c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b542cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5430: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b5430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5434: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b5434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b5438: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b5438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b543c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5440: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b5440u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b5444: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b5444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5448: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b5448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b544c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4b544cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4b5450: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b5450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b5454: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b5454u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4b5458: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b5458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b545c: 0x3401ff80  ori         $at, $zero, 0xFF80
    ctx->pc = 0x4b545cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b5460: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b5464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5468: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B5468u;
    {
        const bool branch_taken_0x4b5468 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5468u;
        // 0x4b546c: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5468) {
            ctx->pc = 0x4B5478u;
            goto label_4b5478;
        }
    }
    ctx->pc = 0x4B5470u;
    // 0x4b5470: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b5470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b5474: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4b5474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b5478:
    // 0x4b5478: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4b5478u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4b547c: 0x27040d38  addiu       $a0, $t8, 0xD38
    ctx->pc = 0x4b547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 3384));
    // 0x4b5480: 0x25e70d34  addiu       $a3, $t7, 0xD34
    ctx->pc = 0x4b5480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 3380));
    // 0x4b5484: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4b5484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b5488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b5488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b548c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4b548cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5490: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4b5490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b5494: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4b5494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4b5498: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4b5498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4b549c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b54a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b54a4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4b54a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b54a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B54A8u;
    {
        const bool branch_taken_0x4b54a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B54A8u;
        // 0x4b54ac: 0x25840d30  addiu       $a0, $t4, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b54a8) {
            ctx->pc = 0x4B54C8u;
            goto label_4b54c8;
        }
    }
    ctx->pc = 0x4B54B0u;
    // 0x4b54b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b54b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b54b8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x4b54b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x4b54bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b54bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b54c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b54c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b54c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b54c8:
    // 0x4b54c8: 0x25840d30  addiu       $a0, $t4, 0xD30
    ctx->pc = 0x4b54c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
    // 0x4b54cc: 0x25ab0138  addiu       $t3, $t5, 0x138
    ctx->pc = 0x4b54ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 312));
    // 0x4b54d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b54d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b54d4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b54d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b54d8: 0xa5c20000  sh          $v0, 0x0($t6)
    ctx->pc = 0x4b54d8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b54dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b54e0: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b54e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b54e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b54e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b54e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b54ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b54f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b54f4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b54f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b54f8: 0x3401fff8  ori         $at, $zero, 0xFFF8
    ctx->pc = 0x4b54f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x4b54fc: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b5500: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5504: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B5504u;
    {
        const bool branch_taken_0x4b5504 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5504u;
        // 0x4b5508: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5504) {
            ctx->pc = 0x4B5518u;
            goto label_4b5518;
        }
    }
    ctx->pc = 0x4B550Cu;
    // 0x4b550c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B550Cu;
    {
        const bool branch_taken_0x4b550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B550Cu;
        // 0x4b5510: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b550c) {
            ctx->pc = 0x4B551Cu;
            goto label_4b551c;
        }
    }
    ctx->pc = 0x4B5514u;
    // 0x4b5514: 0x0  nop
    ctx->pc = 0x4b5514u;
    // NOP
label_4b5518:
    // 0x4b5518: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x4b5518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4b551c:
    // 0x4b551c: 0x270a0d38  addiu       $t2, $t8, 0xD38
    ctx->pc = 0x4b551cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 3384));
    // 0x4b5520: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b5520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5524: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4b5524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5528: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4b5528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4b552c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4b552cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4b5530: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b5530u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5534: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5538: 0x25880d30  addiu       $t0, $t4, 0xD30
    ctx->pc = 0x4b5538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
    // 0x4b553c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5540: 0x95e70d34  lhu         $a3, 0xD34($t7)
    ctx->pc = 0x4b5540u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3380)));
    // 0x4b5544: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b5544u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b5548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b5548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b554c: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x4b554cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b5550: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4b5550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5554: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4b5554u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b5558: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4b5558u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b555c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4b555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4b5560: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b5560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b5564: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b5564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b5568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b5568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b556c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b556cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b5570: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b5570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b5574: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b5574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5578: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b5578u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b557c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b5580: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b5580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5584: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b5584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b5588: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b5588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b558c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b558cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b5590: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4b5590u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4b5594: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b5594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b5598: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b5598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b559c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4b559cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4b55a0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4b55a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4b55a4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b55a8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b55a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b55ac: 0x3401fff8  ori         $at, $zero, 0xFFF8
    ctx->pc = 0x4b55acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x4b55b0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b55b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b55b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B55B8u;
    {
        const bool branch_taken_0x4b55b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B55B8u;
        // 0x4b55bc: 0x346500ff  ori         $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b55b8) {
            ctx->pc = 0x4B55C8u;
            goto label_4b55c8;
        }
    }
    ctx->pc = 0x4B55C0u;
    // 0x4b55c0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b55c4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4b55c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b55c8:
    // 0x4b55c8: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4b55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4b55cc: 0x27040d38  addiu       $a0, $t8, 0xD38
    ctx->pc = 0x4b55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 3384));
    // 0x4b55d0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4b55d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b55d4: 0x91e30d34  lbu         $v1, 0xD34($t7)
    ctx->pc = 0x4b55d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 3380)));
    // 0x4b55d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b55dc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4b55dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b55e0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4b55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4b55e4: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x4b55e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x4b55e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b55e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b55ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b55f0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x4b55f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b55f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B55F4u;
    {
        const bool branch_taken_0x4b55f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B55F4u;
        // 0x4b55f8: 0x25840d30  addiu       $a0, $t4, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b55f4) {
            ctx->pc = 0x4B5614u;
            goto label_4b5614;
        }
    }
    ctx->pc = 0x4B55FCu;
    // 0x4b55fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b5600: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b5604: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4b5604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x4b5608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b560c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5610: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b5610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b5614:
    // 0x4b5614: 0x25850d30  addiu       $a1, $t4, 0xD30
    ctx->pc = 0x4b5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 3376));
    // 0x4b5618: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b5618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b561c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b561cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b5620: 0x25a60118  addiu       $a2, $t5, 0x118
    ctx->pc = 0x4b5620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 280));
    // 0x4b5624: 0x25a8011c  addiu       $t0, $t5, 0x11C
    ctx->pc = 0x4b5624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 284));
    // 0x4b5628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b5628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b562c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4b562cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5630: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x4b5630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b5634: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4b5634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b5638: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b563c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4b563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4b5640: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b5644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5648: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b5648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b564c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b564cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b5650: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b5650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b5654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b5658: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4b5658u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b565c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4b565cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b5660: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b5660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b5664: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4b5664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4b5668: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b5668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b566c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b5670: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b5670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b5674: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b5674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b5678: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b5678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b567c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b5680: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4b5680u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b5684: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4B5684u;
    ctx->pc = 0x4B5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5684u;
    // 0x4b5688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4B568Cu;
    // 0x4b568c: 0x0  nop
    ctx->pc = 0x4b568cu;
    // NOP
    ctx->pc = 0x4b5690u;
}
