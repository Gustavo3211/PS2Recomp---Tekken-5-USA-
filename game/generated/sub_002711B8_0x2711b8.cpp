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

// Function: sub_002711B8
// Address: 0x2711b8 - 0x271a80
void sub_002711B8_0x2711b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002711B8_0x2711b8");
#endif

    switch (ctx->pc) {
        case 0x271200u: goto label_271200;
        case 0x271830u: goto label_271830;
        case 0x271848u: goto label_271848;
        case 0x271874u: goto label_271874;
        case 0x271888u: goto label_271888;
        case 0x2718a0u: goto label_2718a0;
        case 0x2718bcu: goto label_2718bc;
        case 0x271920u: goto label_271920;
        case 0x271950u: goto label_271950;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719f4u: goto label_2719f4;
        case 0x271a28u: goto label_271a28;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a4cu: goto label_271a4c;
        case 0x271a58u: goto label_271a58;
        default: break;
    }

    ctx->pc = 0x2711b8u;

    // 0x2711b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2711b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2711bc: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x2711bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2711c0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2711c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2711c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2711c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2711c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2711cc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2711ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2711d0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2711d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2711d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2711d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2711d8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2711d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2711dc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2711dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2711e0: 0x8cc30218  lw          $v1, 0x218($a2)
    ctx->pc = 0x2711e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x2711e4: 0x460021d  bltz        $v1, . + 4 + (0x21D << 2)
    ctx->pc = 0x2711E4u;
    {
        const bool branch_taken_0x2711e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2711E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711E4u;
        // 0x2711e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711e4) {
            ctx->pc = 0x271A5Cu;
            goto label_271a5c;
        }
    }
    ctx->pc = 0x2711ECu;
    // 0x2711ec: 0x8cc2021c  lw          $v0, 0x21C($a2)
    ctx->pc = 0x2711ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 540)));
    // 0x2711f0: 0x184001c2  blez        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x2711F0u;
    {
        const bool branch_taken_0x2711f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2711F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711F0u;
        // 0x2711f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711f0) {
            ctx->pc = 0x2718FCu;
            goto label_2718fc;
        }
    }
    ctx->pc = 0x2711F8u;
    // 0x2711f8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x2711f8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2711fc: 0x0  nop
    ctx->pc = 0x2711fcu;
    // NOP
label_271200:
    // 0x271200: 0x8f91aa7c  lw          $s1, -0x5584($gp)
    ctx->pc = 0x271200u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271204: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x271204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x271208: 0x8c500220  lw          $s0, 0x220($v0)
    ctx->pc = 0x271208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x27120c: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27120cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x271210: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x271210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x271214: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x271214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x271218: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x271218u;
    {
        const bool branch_taken_0x271218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271218u;
        // 0x27121c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271218) {
            ctx->pc = 0x2718CCu;
            goto label_2718cc;
        }
    }
    ctx->pc = 0x271220u;
    // 0x271220: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x271220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x271224: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271228: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x271228u;
    {
        const bool branch_taken_0x271228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271228u;
        // 0x27122c: 0x24053ff8  addiu       $a1, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271228) {
            ctx->pc = 0x2718CCu;
            goto label_2718cc;
        }
    }
    ctx->pc = 0x271230u;
    // 0x271230: 0x8623003e  lh          $v1, 0x3E($s1)
    ctx->pc = 0x271230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x271234: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x271234u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271238: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x271238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x27123c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27123cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x271240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x271248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27124c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x271250: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x271254: 0x10850182  beq         $a0, $a1, . + 4 + (0x182 << 2)
    ctx->pc = 0x271254u;
    {
        const bool branch_taken_0x271254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x271258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271254u;
        // 0x271258: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271254) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x27125Cu;
    // 0x27125c: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x27125cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x271260: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x271260u;
    {
        const bool branch_taken_0x271260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271260u;
        // 0x271264: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271260) {
            ctx->pc = 0x271558u;
            goto label_271558;
        }
    }
    ctx->pc = 0x271268u;
    // 0x271268: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x271268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x27126c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x27126Cu;
    {
        const bool branch_taken_0x27126c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27126Cu;
        // 0x271270: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27126c) {
            ctx->pc = 0x2713F0u;
            goto label_2713f0;
        }
    }
    ctx->pc = 0x271274u;
    // 0x271274: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x271274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x271278: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x271278u;
    {
        const bool branch_taken_0x271278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271278u;
        // 0x27127c: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271278) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271280u;
    // 0x271280: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x271280u;
    {
        const bool branch_taken_0x271280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271280u;
        // 0x271284: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271280) {
            ctx->pc = 0x271330u;
            goto label_271330;
        }
    }
    ctx->pc = 0x271288u;
    // 0x271288: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x271288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x27128c: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x27128Cu;
    {
        const bool branch_taken_0x27128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27128Cu;
        // 0x271290: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27128c) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271294u;
    // 0x271294: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x271294u;
    {
        const bool branch_taken_0x271294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271294u;
        // 0x271298: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271294) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x27129Cu;
    // 0x27129c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27129Cu;
    {
        const bool branch_taken_0x27129c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27129Cu;
        // 0x2712a0: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27129c) {
            ctx->pc = 0x2712E8u;
            goto label_2712e8;
        }
    }
    ctx->pc = 0x2712A4u;
    // 0x2712a4: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x2712a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x2712a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2712A8u;
    {
        const bool branch_taken_0x2712a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712A8u;
        // 0x2712ac: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712a8) {
            ctx->pc = 0x2712D0u;
            goto label_2712d0;
        }
    }
    ctx->pc = 0x2712B0u;
    // 0x2712b0: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x2712b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x2712b4: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2712B4u;
    {
        const bool branch_taken_0x2712b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712B4u;
        // 0x2712b8: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712b4) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2712BCu;
    // 0x2712bc: 0x10820176  beq         $a0, $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x2712BCu;
    {
        const bool branch_taken_0x2712bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2712bc) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x2712C4u;
    // 0x2712c4: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x2712C4u;
    {
        const bool branch_taken_0x2712c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712c4) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2712CCu;
    // 0x2712cc: 0x0  nop
    ctx->pc = 0x2712ccu;
    // NOP
label_2712d0:
    // 0x2712d0: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x2712D0u;
    {
        const bool branch_taken_0x2712d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712D0u;
        // 0x2712d4: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712d0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2712D8u;
    // 0x2712d8: 0x14400173  bnez        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x2712D8u;
    {
        const bool branch_taken_0x2712d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2712d8) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2712E0u;
    // 0x2712e0: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x2712E0u;
    {
        const bool branch_taken_0x2712e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712e0) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x2712E8u;
label_2712e8:
    // 0x2712e8: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x2712E8u;
    {
        const bool branch_taken_0x2712e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2712ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712E8u;
        // 0x2712ec: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712e8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2712F0u;
    // 0x2712f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2712F0u;
    {
        const bool branch_taken_0x2712f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712F0u;
        // 0x2712f4: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712f0) {
            ctx->pc = 0x271318u;
            goto label_271318;
        }
    }
    ctx->pc = 0x2712F8u;
    // 0x2712f8: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x2712f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2712fc: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x2712FCu;
    {
        const bool branch_taken_0x2712fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712FCu;
        // 0x271300: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712fc) {
            ctx->pc = 0x271858u;
            goto label_271858;
        }
    }
    ctx->pc = 0x271304u;
    // 0x271304: 0x50820157  beql        $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x271304u;
    {
        const bool branch_taken_0x271304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271304) {
            ctx->pc = 0x271308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271304u;
            // 0x271308: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x27130Cu;
    // 0x27130c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x27130Cu;
    {
        const bool branch_taken_0x27130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27130c) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271314u;
    // 0x271314: 0x0  nop
    ctx->pc = 0x271314u;
    // NOP
label_271318:
    // 0x271318: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x271318u;
    {
        const bool branch_taken_0x271318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271318u;
        // 0x27131c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271318) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x271320u;
    // 0x271320: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x271320u;
    {
        const bool branch_taken_0x271320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271320) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271328u;
    // 0x271328: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x271328u;
    {
        const bool branch_taken_0x271328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271328) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271330u;
label_271330:
    // 0x271330: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x271330u;
    {
        const bool branch_taken_0x271330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271330u;
        // 0x271334: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271330) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271338u;
    // 0x271338: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x271338u;
    {
        const bool branch_taken_0x271338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271338u;
        // 0x27133c: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271338) {
            ctx->pc = 0x271390u;
            goto label_271390;
        }
    }
    ctx->pc = 0x271340u;
    // 0x271340: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x271340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x271344: 0x10820154  beq         $a0, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x271344u;
    {
        const bool branch_taken_0x271344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271344u;
        // 0x271348: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271344) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x27134Cu;
    // 0x27134c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27134Cu;
    {
        const bool branch_taken_0x27134c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27134Cu;
        // 0x271350: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27134c) {
            ctx->pc = 0x271370u;
            goto label_271370;
        }
    }
    ctx->pc = 0x271354u;
    // 0x271354: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x271358: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x271358u;
    {
        const bool branch_taken_0x271358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271358u;
        // 0x27135c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271358) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271360u;
    // 0x271360: 0x50820140  beql        $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x271360u;
    {
        const bool branch_taken_0x271360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271360) {
            ctx->pc = 0x271364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271360u;
            // 0x271364: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271368u;
    // 0x271368: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x271368u;
    {
        const bool branch_taken_0x271368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271368) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271370u;
label_271370:
    // 0x271370: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x271370u;
    {
        const bool branch_taken_0x271370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271370u;
        // 0x271374: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271370) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271378u;
    // 0x271378: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x271378u;
    {
        const bool branch_taken_0x271378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271378u;
        // 0x27137c: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271378) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271380u;
    // 0x271380: 0x50820138  beql        $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x271380u;
    {
        const bool branch_taken_0x271380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271380) {
            ctx->pc = 0x271384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271380u;
            // 0x271384: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271388u;
    // 0x271388: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x271388u;
    {
        const bool branch_taken_0x271388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271388) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271390u;
label_271390:
    // 0x271390: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271390u;
    {
        const bool branch_taken_0x271390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271390u;
        // 0x271394: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271390) {
            ctx->pc = 0x2713B8u;
            goto label_2713b8;
        }
    }
    ctx->pc = 0x271398u;
    // 0x271398: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x271398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x27139c: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x27139Cu;
    {
        const bool branch_taken_0x27139c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27139Cu;
        // 0x2713a0: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27139c) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2713A4u;
    // 0x2713a4: 0x1082013c  beq         $a0, $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x2713A4u;
    {
        const bool branch_taken_0x2713a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2713a4) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x2713ACu;
    // 0x2713ac: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x2713ACu;
    {
        const bool branch_taken_0x2713ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2713ac) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2713B4u;
    // 0x2713b4: 0x0  nop
    ctx->pc = 0x2713b4u;
    // NOP
label_2713b8:
    // 0x2713b8: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2713B8u;
    {
        const bool branch_taken_0x2713b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2713BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713B8u;
        // 0x2713bc: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713b8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2713C0u;
    // 0x2713c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2713C0u;
    {
        const bool branch_taken_0x2713c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713C0u;
        // 0x2713c4: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713c0) {
            ctx->pc = 0x2713E0u;
            goto label_2713e0;
        }
    }
    ctx->pc = 0x2713C8u;
    // 0x2713c8: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x2713c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x2713cc: 0x50820125  beql        $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x2713CCu;
    {
        const bool branch_taken_0x2713cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2713cc) {
            ctx->pc = 0x2713D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2713CCu;
            // 0x2713d0: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x2713D4u;
    // 0x2713d4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2713D4u;
    {
        const bool branch_taken_0x2713d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2713d4) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2713DCu;
    // 0x2713dc: 0x0  nop
    ctx->pc = 0x2713dcu;
    // NOP
label_2713e0:
    // 0x2713e0: 0x10820127  beq         $a0, $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x2713E0u;
    {
        const bool branch_taken_0x2713e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2713e0) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2713E8u;
    // 0x2713e8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x2713E8u;
    {
        const bool branch_taken_0x2713e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2713e8) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2713F0u;
label_2713f0:
    // 0x2713f0: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2713F0u;
    {
        const bool branch_taken_0x2713f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2713F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F0u;
        // 0x2713f4: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713f0) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x2713F8u;
    // 0x2713f8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2713F8u;
    {
        const bool branch_taken_0x2713f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F8u;
        // 0x2713fc: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713f8) {
            ctx->pc = 0x2714B8u;
            goto label_2714b8;
        }
    }
    ctx->pc = 0x271400u;
    // 0x271400: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x271400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x271404: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x271404u;
    {
        const bool branch_taken_0x271404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271404u;
        // 0x271408: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271404) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x27140Cu;
    // 0x27140c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27140Cu;
    {
        const bool branch_taken_0x27140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27140Cu;
        // 0x271410: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27140c) {
            ctx->pc = 0x271458u;
            goto label_271458;
        }
    }
    ctx->pc = 0x271414u;
    // 0x271414: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x271414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x271418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271418u;
    {
        const bool branch_taken_0x271418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271418u;
        // 0x27141c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271418) {
            ctx->pc = 0x271440u;
            goto label_271440;
        }
    }
    ctx->pc = 0x271420u;
    // 0x271420: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x271420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x271424: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x271424u;
    {
        const bool branch_taken_0x271424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271424u;
        // 0x271428: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271424) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x27142Cu;
    // 0x27142c: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x27142Cu;
    {
        const bool branch_taken_0x27142c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27142c) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271434u;
    // 0x271434: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x271434u;
    {
        const bool branch_taken_0x271434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271434) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x27143Cu;
    // 0x27143c: 0x0  nop
    ctx->pc = 0x27143cu;
    // NOP
label_271440:
    // 0x271440: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x271440u;
    {
        const bool branch_taken_0x271440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271440u;
        // 0x271444: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271440) {
            ctx->pc = 0x271828u;
            goto label_271828;
        }
    }
    ctx->pc = 0x271448u;
    // 0x271448: 0x50820106  beql        $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x271448u;
    {
        const bool branch_taken_0x271448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271448) {
            ctx->pc = 0x27144Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271448u;
            // 0x27144c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271450u;
    // 0x271450: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x271450u;
    {
        const bool branch_taken_0x271450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271450) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271458u;
label_271458:
    // 0x271458: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271458u;
    {
        const bool branch_taken_0x271458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271458u;
        // 0x27145c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271458) {
            ctx->pc = 0x271480u;
            goto label_271480;
        }
    }
    ctx->pc = 0x271460u;
    // 0x271460: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x271460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x271464: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x271464u;
    {
        const bool branch_taken_0x271464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271464u;
        // 0x271468: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271464) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x27146Cu;
    // 0x27146c: 0x1082010a  beq         $a0, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x27146Cu;
    {
        const bool branch_taken_0x27146c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27146c) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271474u;
    // 0x271474: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x271474u;
    {
        const bool branch_taken_0x271474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271474) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x27147Cu;
    // 0x27147c: 0x0  nop
    ctx->pc = 0x27147cu;
    // NOP
label_271480:
    // 0x271480: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x271480u;
    {
        const bool branch_taken_0x271480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271480u;
        // 0x271484: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271480) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271488u;
    // 0x271488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271488u;
    {
        const bool branch_taken_0x271488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271488u;
        // 0x27148c: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271488) {
            ctx->pc = 0x2714A8u;
            goto label_2714a8;
        }
    }
    ctx->pc = 0x271490u;
    // 0x271490: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x271490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x271494: 0x508200f3  beql        $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x271494u;
    {
        const bool branch_taken_0x271494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271494) {
            ctx->pc = 0x271498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271494u;
            // 0x271498: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x27149Cu;
    // 0x27149c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x27149Cu;
    {
        const bool branch_taken_0x27149c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27149c) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2714A4u;
    // 0x2714a4: 0x0  nop
    ctx->pc = 0x2714a4u;
    // NOP
label_2714a8:
    // 0x2714a8: 0x508200ff  beql        $a0, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x2714A8u;
    {
        const bool branch_taken_0x2714a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2714a8) {
            ctx->pc = 0x2714ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2714A8u;
            // 0x2714ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2714B0u;
    // 0x2714b0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2714B0u;
    {
        const bool branch_taken_0x2714b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2714b0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2714B8u;
label_2714b8:
    // 0x2714b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2714B8u;
    {
        const bool branch_taken_0x2714b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714B8u;
        // 0x2714bc: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714b8) {
            ctx->pc = 0x271510u;
            goto label_271510;
        }
    }
    ctx->pc = 0x2714C0u;
    // 0x2714c0: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x2714c4: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x2714C4u;
    {
        const bool branch_taken_0x2714c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714C4u;
        // 0x2714c8: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714c4) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2714CCu;
    // 0x2714cc: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2714CCu;
    {
        const bool branch_taken_0x2714cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2714D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714CCu;
        // 0x2714d0: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714cc) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2714D4u;
    // 0x2714d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2714D4u;
    {
        const bool branch_taken_0x2714d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714D4u;
        // 0x2714d8: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714d4) {
            ctx->pc = 0x2714F8u;
            goto label_2714f8;
        }
    }
    ctx->pc = 0x2714DCu;
    // 0x2714dc: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x2714dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x2714e0: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2714E0u;
    {
        const bool branch_taken_0x2714e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2714E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714E0u;
        // 0x2714e4: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714e0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2714E8u;
    // 0x2714e8: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x2714E8u;
    {
        const bool branch_taken_0x2714e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2714e8) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2714F0u;
    // 0x2714f0: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2714F0u;
    {
        const bool branch_taken_0x2714f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2714f0) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2714F8u;
label_2714f8:
    // 0x2714f8: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2714F8u;
    {
        const bool branch_taken_0x2714f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2714FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714F8u;
        // 0x2714fc: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714f8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271500u;
    // 0x271500: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x271500u;
    {
        const bool branch_taken_0x271500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271500) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271508u;
    // 0x271508: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x271508u;
    {
        const bool branch_taken_0x271508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271508) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271510u;
label_271510:
    // 0x271510: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x271510u;
    {
        const bool branch_taken_0x271510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271510u;
        // 0x271514: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271510) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271518u;
    // 0x271518: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271518u;
    {
        const bool branch_taken_0x271518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271518u;
        // 0x27151c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271518) {
            ctx->pc = 0x271540u;
            goto label_271540;
        }
    }
    ctx->pc = 0x271520u;
    // 0x271520: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x271520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x271524: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x271524u;
    {
        const bool branch_taken_0x271524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271524u;
        // 0x271528: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271524) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x27152Cu;
    // 0x27152c: 0x508200cd  beql        $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x27152Cu;
    {
        const bool branch_taken_0x27152c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27152c) {
            ctx->pc = 0x271530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27152Cu;
            // 0x271530: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271534u;
    // 0x271534: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x271534u;
    {
        const bool branch_taken_0x271534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271534) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x27153Cu;
    // 0x27153c: 0x0  nop
    ctx->pc = 0x27153cu;
    // NOP
label_271540:
    // 0x271540: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x271540u;
    {
        const bool branch_taken_0x271540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271540u;
        // 0x271544: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271540) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271548u;
    // 0x271548: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x271548u;
    {
        const bool branch_taken_0x271548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271548) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271550u;
    // 0x271550: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x271550u;
    {
        const bool branch_taken_0x271550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271550) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271558u;
label_271558:
    // 0x271558: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x271558u;
    {
        const bool branch_taken_0x271558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271558u;
        // 0x27155c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271558) {
            ctx->pc = 0x271858u;
            goto label_271858;
        }
    }
    ctx->pc = 0x271560u;
    // 0x271560: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x271560u;
    {
        const bool branch_taken_0x271560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271560u;
        // 0x271564: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271560) {
            ctx->pc = 0x2716B8u;
            goto label_2716b8;
        }
    }
    ctx->pc = 0x271568u;
    // 0x271568: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x271568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x27156c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27156Cu;
    {
        const bool branch_taken_0x27156c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27156Cu;
        // 0x271570: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27156c) {
            ctx->pc = 0x271610u;
            goto label_271610;
        }
    }
    ctx->pc = 0x271574u;
    // 0x271574: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x271574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x271578: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x271578u;
    {
        const bool branch_taken_0x271578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271578u;
        // 0x27157c: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271578) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271580u;
    // 0x271580: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x271580u;
    {
        const bool branch_taken_0x271580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271580u;
        // 0x271584: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271580) {
            ctx->pc = 0x2715C8u;
            goto label_2715c8;
        }
    }
    ctx->pc = 0x271588u;
    // 0x271588: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x271588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x27158c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x27158Cu;
    {
        const bool branch_taken_0x27158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27158Cu;
        // 0x271590: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27158c) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271594u;
    // 0x271594: 0x108200c0  beq         $a0, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x271594u;
    {
        const bool branch_taken_0x271594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271594u;
        // 0x271598: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271594) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x27159Cu;
    // 0x27159c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27159Cu;
    {
        const bool branch_taken_0x27159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27159Cu;
        // 0x2715a0: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27159c) {
            ctx->pc = 0x2715B8u;
            goto label_2715b8;
        }
    }
    ctx->pc = 0x2715A4u;
    // 0x2715a4: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x2715a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x2715a8: 0x508200ae  beql        $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2715A8u;
    {
        const bool branch_taken_0x2715a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2715a8) {
            ctx->pc = 0x2715ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2715A8u;
            // 0x2715ac: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x2715B0u;
    // 0x2715b0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2715B0u;
    {
        const bool branch_taken_0x2715b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2715b0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2715B8u;
label_2715b8:
    // 0x2715b8: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x2715B8u;
    {
        const bool branch_taken_0x2715b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2715b8) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2715C0u;
    // 0x2715c0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2715C0u;
    {
        const bool branch_taken_0x2715c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2715c0) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2715C8u;
label_2715c8:
    // 0x2715c8: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2715C8u;
    {
        const bool branch_taken_0x2715c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2715CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715C8u;
        // 0x2715cc: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715c8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2715D0u;
    // 0x2715d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2715D0u;
    {
        const bool branch_taken_0x2715d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715D0u;
        // 0x2715d4: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715d0) {
            ctx->pc = 0x2715F8u;
            goto label_2715f8;
        }
    }
    ctx->pc = 0x2715D8u;
    // 0x2715d8: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x2715d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x2715dc: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2715DCu;
    {
        const bool branch_taken_0x2715dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2715E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715DCu;
        // 0x2715e0: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715dc) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2715E4u;
    // 0x2715e4: 0x5082009f  beql        $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2715E4u;
    {
        const bool branch_taken_0x2715e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2715e4) {
            ctx->pc = 0x2715E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2715E4u;
            // 0x2715e8: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x2715ECu;
    // 0x2715ec: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2715ECu;
    {
        const bool branch_taken_0x2715ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2715ec) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2715F4u;
    // 0x2715f4: 0x0  nop
    ctx->pc = 0x2715f4u;
    // NOP
label_2715f8:
    // 0x2715f8: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2715F8u;
    {
        const bool branch_taken_0x2715f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2715FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715F8u;
        // 0x2715fc: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715f8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271600u;
    // 0x271600: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x271600u;
    {
        const bool branch_taken_0x271600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271600) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271608u;
    // 0x271608: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x271608u;
    {
        const bool branch_taken_0x271608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271608) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271610u;
label_271610:
    // 0x271610: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x271610u;
    {
        const bool branch_taken_0x271610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271610u;
        // 0x271614: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271610) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271618u;
    // 0x271618: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x271618u;
    {
        const bool branch_taken_0x271618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271618u;
        // 0x27161c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271618) {
            ctx->pc = 0x271670u;
            goto label_271670;
        }
    }
    ctx->pc = 0x271620u;
    // 0x271620: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x271620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x271624: 0x1082009c  beq         $a0, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x271624u;
    {
        const bool branch_taken_0x271624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271624u;
        // 0x271628: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271624) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x27162Cu;
    // 0x27162c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27162Cu;
    {
        const bool branch_taken_0x27162c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27162Cu;
        // 0x271630: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27162c) {
            ctx->pc = 0x271650u;
            goto label_271650;
        }
    }
    ctx->pc = 0x271634u;
    // 0x271634: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x271634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x271638: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x271638u;
    {
        const bool branch_taken_0x271638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271638u;
        // 0x27163c: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271638) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271640u;
    // 0x271640: 0x50820088  beql        $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x271640u;
    {
        const bool branch_taken_0x271640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271640) {
            ctx->pc = 0x271644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271640u;
            // 0x271644: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271648u;
    // 0x271648: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x271648u;
    {
        const bool branch_taken_0x271648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271648) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271650u;
label_271650:
    // 0x271650: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x271650u;
    {
        const bool branch_taken_0x271650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271650u;
        // 0x271654: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271650) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271658u;
    // 0x271658: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x271658u;
    {
        const bool branch_taken_0x271658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271658u;
        // 0x27165c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271658) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271660u;
    // 0x271660: 0x50820080  beql        $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x271660u;
    {
        const bool branch_taken_0x271660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271660) {
            ctx->pc = 0x271664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271660u;
            // 0x271664: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271668u;
    // 0x271668: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x271668u;
    {
        const bool branch_taken_0x271668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271668) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271670u;
label_271670:
    // 0x271670: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271670u;
    {
        const bool branch_taken_0x271670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271670u;
        // 0x271674: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271670) {
            ctx->pc = 0x271698u;
            goto label_271698;
        }
    }
    ctx->pc = 0x271678u;
    // 0x271678: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x271678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x27167c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x27167Cu;
    {
        const bool branch_taken_0x27167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27167Cu;
        // 0x271680: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27167c) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271684u;
    // 0x271684: 0x10820084  beq         $a0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x271684u;
    {
        const bool branch_taken_0x271684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271684) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x27168Cu;
    // 0x27168c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x27168Cu;
    {
        const bool branch_taken_0x27168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27168c) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271694u;
    // 0x271694: 0x0  nop
    ctx->pc = 0x271694u;
    // NOP
label_271698:
    // 0x271698: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x271698u;
    {
        const bool branch_taken_0x271698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271698u;
        // 0x27169c: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271698) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x2716A0u;
    // 0x2716a0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2716A0u;
    {
        const bool branch_taken_0x2716a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2716A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716A0u;
        // 0x2716a4: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716a0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2716A8u;
    // 0x2716a8: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2716A8u;
    {
        const bool branch_taken_0x2716a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2716a8) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2716B0u;
    // 0x2716b0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2716B0u;
    {
        const bool branch_taken_0x2716b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716b0) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x2716B8u;
label_2716b8:
    // 0x2716b8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2716B8u;
    {
        const bool branch_taken_0x2716b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2716BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716B8u;
        // 0x2716bc: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716b8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2716C0u;
    // 0x2716c0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2716C0u;
    {
        const bool branch_taken_0x2716c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716C0u;
        // 0x2716c4: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716c0) {
            ctx->pc = 0x271778u;
            goto label_271778;
        }
    }
    ctx->pc = 0x2716C8u;
    // 0x2716c8: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x2716c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x2716cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2716CCu;
    {
        const bool branch_taken_0x2716cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716CCu;
        // 0x2716d0: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716cc) {
            ctx->pc = 0x271720u;
            goto label_271720;
        }
    }
    ctx->pc = 0x2716D4u;
    // 0x2716d4: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x2716d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x2716d8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2716D8u;
    {
        const bool branch_taken_0x2716d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716D8u;
        // 0x2716dc: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716d8) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2716E0u;
    // 0x2716e0: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2716E0u;
    {
        const bool branch_taken_0x2716e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2716E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716E0u;
        // 0x2716e4: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716e0) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2716E8u;
    // 0x2716e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2716E8u;
    {
        const bool branch_taken_0x2716e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716E8u;
        // 0x2716ec: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716e8) {
            ctx->pc = 0x271708u;
            goto label_271708;
        }
    }
    ctx->pc = 0x2716F0u;
    // 0x2716f0: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x2716f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x2716f4: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2716F4u;
    {
        const bool branch_taken_0x2716f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2716f4) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x2716FCu;
    // 0x2716fc: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2716FCu;
    {
        const bool branch_taken_0x2716fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2716fc) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271704u;
    // 0x271704: 0x0  nop
    ctx->pc = 0x271704u;
    // NOP
label_271708:
    // 0x271708: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x271708u;
    {
        const bool branch_taken_0x271708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271708u;
        // 0x27170c: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271708) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271710u;
    // 0x271710: 0x10820061  beq         $a0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x271710u;
    {
        const bool branch_taken_0x271710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271710) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271718u;
    // 0x271718: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x271718u;
    {
        const bool branch_taken_0x271718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271718) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271720u;
label_271720:
    // 0x271720: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x271720u;
    {
        const bool branch_taken_0x271720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271720u;
        // 0x271724: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271720) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271728u;
    // 0x271728: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271728u;
    {
        const bool branch_taken_0x271728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271728u;
        // 0x27172c: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271728) {
            ctx->pc = 0x271750u;
            goto label_271750;
        }
    }
    ctx->pc = 0x271730u;
    // 0x271730: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x271730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x271734: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x271734u;
    {
        const bool branch_taken_0x271734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271734u;
        // 0x271738: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271734) {
            ctx->pc = 0x271840u;
            goto label_271840;
        }
    }
    ctx->pc = 0x27173Cu;
    // 0x27173c: 0x50820049  beql        $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x27173Cu;
    {
        const bool branch_taken_0x27173c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27173c) {
            ctx->pc = 0x271740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27173Cu;
            // 0x271740: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271744u;
    // 0x271744: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x271744u;
    {
        const bool branch_taken_0x271744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271744) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x27174Cu;
    // 0x27174c: 0x0  nop
    ctx->pc = 0x27174cu;
    // NOP
label_271750:
    // 0x271750: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x271750u;
    {
        const bool branch_taken_0x271750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271750u;
        // 0x271754: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271750) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271758u;
    // 0x271758: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x271758u;
    {
        const bool branch_taken_0x271758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271758u;
        // 0x27175c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271758) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271760u;
    // 0x271760: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x271760u;
    {
        const bool branch_taken_0x271760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271760u;
        // 0x271764: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271760) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271768u;
    // 0x271768: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x271768u;
    {
        const bool branch_taken_0x271768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271768) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271770u;
    // 0x271770: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x271770u;
    {
        const bool branch_taken_0x271770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271770) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x271778u;
label_271778:
    // 0x271778: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x271778u;
    {
        const bool branch_taken_0x271778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271778u;
        // 0x27177c: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271778) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x271780u;
    // 0x271780: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x271780u;
    {
        const bool branch_taken_0x271780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271780u;
        // 0x271784: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271780) {
            ctx->pc = 0x2717D0u;
            goto label_2717d0;
        }
    }
    ctx->pc = 0x271788u;
    // 0x271788: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x271788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x27178c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27178Cu;
    {
        const bool branch_taken_0x27178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27178Cu;
        // 0x271790: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27178c) {
            ctx->pc = 0x2717B8u;
            goto label_2717b8;
        }
    }
    ctx->pc = 0x271794u;
    // 0x271794: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x271794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x271798: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x271798u;
    {
        const bool branch_taken_0x271798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271798u;
        // 0x27179c: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271798) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2717A0u;
    // 0x2717a0: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2717A0u;
    {
        const bool branch_taken_0x2717a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2717A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717A0u;
        // 0x2717a4: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717a0) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2717A8u;
    // 0x2717a8: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2717A8u;
    {
        const bool branch_taken_0x2717a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2717a8) {
            ctx->pc = 0x271898u;
            goto label_271898;
        }
    }
    ctx->pc = 0x2717B0u;
    // 0x2717b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2717B0u;
    {
        const bool branch_taken_0x2717b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2717b0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2717B8u;
label_2717b8:
    // 0x2717b8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2717B8u;
    {
        const bool branch_taken_0x2717b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2717BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717B8u;
        // 0x2717bc: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717b8) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x2717C0u;
    // 0x2717c0: 0x50820028  beql        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2717C0u;
    {
        const bool branch_taken_0x2717c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2717c0) {
            ctx->pc = 0x2717C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2717C0u;
            // 0x2717c4: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x2717C8u;
    // 0x2717c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2717C8u;
    {
        const bool branch_taken_0x2717c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2717c8) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2717D0u;
label_2717d0:
    // 0x2717d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2717d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2717d4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2717D4u;
    {
        const bool branch_taken_0x2717d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2717D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717D4u;
        // 0x2717d8: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717d4) {
            ctx->pc = 0x271810u;
            goto label_271810;
        }
    }
    ctx->pc = 0x2717DCu;
    // 0x2717dc: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x2717dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x2717e0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2717e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2717e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2717E4u;
    {
        const bool branch_taken_0x2717e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2717E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717E4u;
        // 0x2717e8: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717e4) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x2717ECu;
    // 0x2717ec: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2717ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2717f0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2717F0u;
    {
        const bool branch_taken_0x2717f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2717F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717F0u;
        // 0x2717f4: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717f0) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x2717F8u;
    // 0x2717f8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2717f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2717fc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2717FCu;
    {
        const bool branch_taken_0x2717fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2717fc) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271804u;
    // 0x271804: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x271804u;
    {
        const bool branch_taken_0x271804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271804) {
            ctx->pc = 0x271880u;
            goto label_271880;
        }
    }
    ctx->pc = 0x27180Cu;
    // 0x27180c: 0x0  nop
    ctx->pc = 0x27180cu;
    // NOP
label_271810:
    // 0x271810: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x271810u;
    {
        const bool branch_taken_0x271810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271810u;
        // 0x271814: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271810) {
            ctx->pc = 0x271860u;
            goto label_271860;
        }
    }
    ctx->pc = 0x271818u;
    // 0x271818: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x271818u;
    {
        const bool branch_taken_0x271818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x271818) {
            ctx->pc = 0x27181Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271818u;
            // 0x27181c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271864u;
            goto label_271864;
        }
    }
    ctx->pc = 0x271820u;
    // 0x271820: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x271820u;
    {
        const bool branch_taken_0x271820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271820) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271828u;
label_271828:
    // 0x271828: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271828u;
    SET_GPR_U32(ctx, 31, 0x271830u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271828u, 0x271830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271830u;
label_271830:
    // 0x271830: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x271830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x271834: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x271834u;
    {
        const bool branch_taken_0x271834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271834u;
        // 0x271838: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271834) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x27183Cu;
    // 0x27183c: 0x0  nop
    ctx->pc = 0x27183cu;
    // NOP
label_271840:
    // 0x271840: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271840u;
    SET_GPR_U32(ctx, 31, 0x271848u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271840u, 0x271848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271848u;
label_271848:
    // 0x271848: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x271848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x27184c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27184Cu;
    {
        const bool branch_taken_0x27184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27184Cu;
        // 0x271850: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27184c) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271854u;
    // 0x271854: 0x0  nop
    ctx->pc = 0x271854u;
    // NOP
label_271858:
    // 0x271858: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x271858u;
    {
        const bool branch_taken_0x271858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271858u;
        // 0x27185c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271858) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271860u;
label_271860:
    // 0x271860: 0x8cc203c8  lw          $v0, 0x3C8($a2)
    ctx->pc = 0x271860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
label_271864:
    // 0x271864: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x271864u;
    {
        const bool branch_taken_0x271864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271864u;
        // 0x271868: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271864) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x27186Cu;
    // 0x27186c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27186Cu;
    SET_GPR_U32(ctx, 31, 0x271874u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27186Cu, 0x271874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271874u;
label_271874:
    // 0x271874: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271878: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271878u;
    {
        const bool branch_taken_0x271878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271878u;
        // 0x27187c: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271878) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271880u;
label_271880:
    // 0x271880: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271880u;
    SET_GPR_U32(ctx, 31, 0x271888u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271880u, 0x271888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271888u;
label_271888:
    // 0x271888: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27188c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27188Cu;
    {
        const bool branch_taken_0x27188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27188Cu;
        // 0x271890: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27188c) {
            ctx->pc = 0x2718A8u;
            goto label_2718a8;
        }
    }
    ctx->pc = 0x271894u;
    // 0x271894: 0x0  nop
    ctx->pc = 0x271894u;
    // NOP
label_271898:
    // 0x271898: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271898u;
    SET_GPR_U32(ctx, 31, 0x2718A0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271898u, 0x2718A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718A0u;
label_2718a0:
    // 0x2718a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2718a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2718a4: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x2718a4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_2718a8:
    // 0x2718a8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2718A8u;
    {
        const bool branch_taken_0x2718a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718A8u;
        // 0x2718ac: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718a8) {
            ctx->pc = 0x2718C8u;
            goto label_2718c8;
        }
    }
    ctx->pc = 0x2718B0u;
    // 0x2718b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2718b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718b4: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x2718B4u;
    SET_GPR_U32(ctx, 31, 0x2718BCu);
    ctx->pc = 0x2718B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718B4u;
    // 0x2718b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x2718B4u, 0x2718BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718BCu;
label_2718bc:
    // 0x2718bc: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x2718bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2718c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2718C0u;
    {
        const bool branch_taken_0x2718c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718C0u;
        // 0x2718c4: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718c0) {
            ctx->pc = 0x2718CCu;
            goto label_2718cc;
        }
    }
    ctx->pc = 0x2718C8u;
label_2718c8:
    // 0x2718c8: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x2718c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2718cc:
    // 0x2718cc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2718CCu;
    {
        const bool branch_taken_0x2718cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2718CCu;
        // 0x2718d0: 0x2861021  addu        $v0, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718cc) {
            ctx->pc = 0x2718E8u;
            goto label_2718e8;
        }
    }
    ctx->pc = 0x2718D4u;
    // 0x2718d4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2718d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2718d8: 0x8c450220  lw          $a1, 0x220($v0)
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x2718dc: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x2718dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2718e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2718e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2718e4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2718e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2718e8:
    // 0x2718e8: 0x8cc2021c  lw          $v0, 0x21C($a2)
    ctx->pc = 0x2718e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 540)));
    // 0x2718ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2718ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2718f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2718f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2718f4: 0x5440fe42  bnel        $v0, $zero, . + 4 + (-0x1BE << 2)
    ctx->pc = 0x2718F4u;
    {
        const bool branch_taken_0x2718f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2718f4) {
            ctx->pc = 0x2718F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2718F4u;
            // 0x2718f8: 0x12a080  sll         $s4, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271200;
        }
    }
    ctx->pc = 0x2718FCu;
label_2718fc:
    // 0x2718fc: 0x5a600040  blezl       $s3, . + 4 + (0x40 << 2)
    ctx->pc = 0x2718FCu;
    {
        const bool branch_taken_0x2718fc = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2718fc) {
            ctx->pc = 0x271900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2718FCu;
            // 0x271900: 0xacc00218  sw          $zero, 0x218($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A00u;
            goto label_271a00;
        }
    }
    ctx->pc = 0x271904u;
    // 0x271904: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x271904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271908: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x271908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x27190c: 0x28422000  slti        $v0, $v0, 0x2000
    ctx->pc = 0x27190cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x271910: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x271910u;
    {
        const bool branch_taken_0x271910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271910) {
            ctx->pc = 0x271914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271910u;
            // 0x271914: 0xacc00218  sw          $zero, 0x218($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A00u;
            goto label_271a00;
        }
    }
    ctx->pc = 0x271918u;
    // 0x271918: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271918u;
    SET_GPR_U32(ctx, 31, 0x271920u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271918u, 0x271920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271920u;
label_271920:
    // 0x271920: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x271920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271924: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x271928: 0x84830372  lh          $v1, 0x372($a0)
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 882)));
    // 0x27192c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27192cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271930u;
    {
        const bool branch_taken_0x271930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271930u;
        // 0x271934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271930) {
            ctx->pc = 0x271948u;
            goto label_271948;
        }
    }
    ctx->pc = 0x271938u;
    // 0x271938: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x271938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27193c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x271940: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x271940u;
    {
        const bool branch_taken_0x271940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271940u;
        // 0x271944: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271940) {
            ctx->pc = 0x271A5Cu;
            goto label_271a5c;
        }
    }
    ctx->pc = 0x271948u;
label_271948:
    // 0x271948: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271948u;
    SET_GPR_U32(ctx, 31, 0x271950u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271948u, 0x271950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271950u;
label_271950:
    // 0x271950: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x271950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x271954: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x271954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x271958: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x27195c: 0x8cc50064  lw          $a1, 0x64($a2)
    ctx->pc = 0x27195cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x271960: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x271960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x271964: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x271964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x271968: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x271968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x27196c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x271970: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x271970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x271974: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x271974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x271978: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x271978u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x27197c: 0x24457fff  addiu       $a1, $v0, 0x7FFF
    ctx->pc = 0x27197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x271980: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x271980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x271984: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x271984u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x271988: 0x283c3  sra         $s0, $v0, 15
    ctx->pc = 0x271988u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 15));
    // 0x27198c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x27198cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x271990: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271994: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x271994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271998: 0xc09905e  jal         func_264178
    ctx->pc = 0x271998u;
    SET_GPR_U32(ctx, 31, 0x2719A0u);
    ctx->pc = 0x27199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271998u;
    // 0x27199c: 0x94c50008  lhu         $a1, 0x8($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x271998u, 0x2719A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719A0u;
label_2719a0:
    // 0x2719a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2719a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719a4: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x2719a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2719a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2719A8u;
    {
        const bool branch_taken_0x2719a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719A8u;
        // 0x2719ac: 0x8f86aa78  lw          $a2, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719a8) {
            ctx->pc = 0x271A10u;
            goto label_271a10;
        }
    }
    ctx->pc = 0x2719B0u;
    // 0x2719b0: 0x84c30370  lh          $v1, 0x370($a2)
    ctx->pc = 0x2719b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 880)));
    // 0x2719b4: 0x8cc20218  lw          $v0, 0x218($a2)
    ctx->pc = 0x2719b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x2719b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2719b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2719bc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2719BCu;
    {
        const bool branch_taken_0x2719bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2719bc) {
            ctx->pc = 0x2719C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2719BCu;
            // 0x2719c0: 0xacc00218  sw          $zero, 0x218($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A00u;
            goto label_271a00;
        }
    }
    ctx->pc = 0x2719C4u;
    // 0x2719c4: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x2719c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x2719c8: 0x8cc30254  lw          $v1, 0x254($a2)
    ctx->pc = 0x2719c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
    // 0x2719cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2719ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2719d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2719D0u;
    {
        const bool branch_taken_0x2719d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2719d0) {
            ctx->pc = 0x2719D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2719D0u;
            // 0x2719d4: 0xacc00218  sw          $zero, 0x218($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A00u;
            goto label_271a00;
        }
    }
    ctx->pc = 0x2719D8u;
    // 0x2719d8: 0x94830044  lhu         $v1, 0x44($a0)
    ctx->pc = 0x2719d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2719dc: 0x8cc20298  lw          $v0, 0x298($a2)
    ctx->pc = 0x2719dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
    // 0x2719e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2719e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2719e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2719E4u;
    {
        const bool branch_taken_0x2719e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2719e4) {
            ctx->pc = 0x2719E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2719E4u;
            // 0x2719e8: 0xacc00218  sw          $zero, 0x218($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271A00u;
            goto label_271a00;
        }
    }
    ctx->pc = 0x2719ECu;
    // 0x2719ec: 0xc09bfc2  jal         func_26FF08
    ctx->pc = 0x2719ECu;
    SET_GPR_U32(ctx, 31, 0x2719F4u);
    ctx->pc = 0x26FF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FF08u, 0x2719ECu, 0x2719F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719F4u;
label_2719f4:
    // 0x2719f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2719F4u;
    {
        const bool branch_taken_0x2719f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719F4u;
        // 0x2719f8: 0x8f86aa78  lw          $a2, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719f4) {
            ctx->pc = 0x271A10u;
            goto label_271a10;
        }
    }
    ctx->pc = 0x2719FCu;
    // 0x2719fc: 0xacc00218  sw          $zero, 0x218($a2)
    ctx->pc = 0x2719fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 0));
label_271a00:
    // 0x271a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a04: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x271a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271a08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x271A08u;
    {
        const bool branch_taken_0x271a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A08u;
        // 0x271a0c: 0xac60021c  sw          $zero, 0x21C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a08) {
            ctx->pc = 0x271A5Cu;
            goto label_271a5c;
        }
    }
    ctx->pc = 0x271A10u;
label_271a10:
    // 0x271a10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x271a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x271a14: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271a18: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x271a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x271a1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x271a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271a20: 0xc09905e  jal         func_264178
    ctx->pc = 0x271A20u;
    SET_GPR_U32(ctx, 31, 0x271A28u);
    ctx->pc = 0x271A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A20u;
    // 0x271a24: 0x94450008  lhu         $a1, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x271A20u, 0x271A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A28u;
label_271a28:
    // 0x271a28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x271a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271a2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x271a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a30: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x271a30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x271a34: 0xc09981c  jal         func_266070
    ctx->pc = 0x271A34u;
    SET_GPR_U32(ctx, 31, 0x271A3Cu);
    ctx->pc = 0x271A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A34u;
    // 0x271a38: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x271A34u, 0x271A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A3Cu;
label_271a3c:
    // 0x271a3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x271a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271a40: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271a44: 0xc09905e  jal         func_264178
    ctx->pc = 0x271A44u;
    SET_GPR_U32(ctx, 31, 0x271A4Cu);
    ctx->pc = 0x271A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A44u;
    // 0x271a48: 0x94650008  lhu         $a1, 0x8($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x271A44u, 0x271A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A4Cu;
label_271a4c:
    // 0x271a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271a50: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x271A50u;
    SET_GPR_U32(ctx, 31, 0x271A58u);
    ctx->pc = 0x271A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A50u;
    // 0x271a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x271A50u, 0x271A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A58u;
label_271a58:
    // 0x271a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271a5c:
    // 0x271a5c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x271a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271a60: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x271a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x271a64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x271a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271a68: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x271a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x271a6c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x271a6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271a70: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x271a70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x271a74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x271a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271a78: 0x3e00008  jr          $ra
    ctx->pc = 0x271A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A78u;
        // 0x271a7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271A80u;
}
