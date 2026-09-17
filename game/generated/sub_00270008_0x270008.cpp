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

// Function: sub_00270008
// Address: 0x270008 - 0x2708a8
void sub_00270008_0x270008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270008_0x270008");
#endif

    switch (ctx->pc) {
        case 0x270030u: goto label_270030;
        case 0x270660u: goto label_270660;
        case 0x270678u: goto label_270678;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706ecu: goto label_2706ec;
        case 0x270750u: goto label_270750;
        case 0x270780u: goto label_270780;
        case 0x2707d0u: goto label_2707d0;
        case 0x270850u: goto label_270850;
        case 0x270864u: goto label_270864;
        case 0x270874u: goto label_270874;
        case 0x270880u: goto label_270880;
        default: break;
    }

    ctx->pc = 0x270008u;

    // 0x270008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x270008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27000c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x27000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x270010: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x270010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x270014: 0x8cc30124  lw          $v1, 0x124($a2)
    ctx->pc = 0x270014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 292)));
    // 0x270018: 0x1860021a  blez        $v1, . + 4 + (0x21A << 2)
    ctx->pc = 0x270018u;
    {
        const bool branch_taken_0x270018 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270018u;
        // 0x27001c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270018) {
            ctx->pc = 0x270884u;
            goto label_270884;
        }
    }
    ctx->pc = 0x270020u;
    // 0x270020: 0x8cc20128  lw          $v0, 0x128($a2)
    ctx->pc = 0x270020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x270024: 0x184001bf  blez        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x270024u;
    {
        const bool branch_taken_0x270024 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x270028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270024u;
        // 0x270028: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270024) {
            ctx->pc = 0x270724u;
            goto label_270724;
        }
    }
    ctx->pc = 0x27002Cu;
    // 0x27002c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x27002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_270030:
    // 0x270030: 0x8f91aa7c  lw          $s1, -0x5584($gp)
    ctx->pc = 0x270030u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x270034: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x270034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x270038: 0x8c50012c  lw          $s0, 0x12C($v0)
    ctx->pc = 0x270038u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x27003c: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x27003cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x270040: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x270040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x270044: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x270044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270048: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x270048u;
    {
        const bool branch_taken_0x270048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270048u;
        // 0x27004c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270048) {
            ctx->pc = 0x2706FCu;
            goto label_2706fc;
        }
    }
    ctx->pc = 0x270050u;
    // 0x270050: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x270050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x270054: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270058: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x270058u;
    {
        const bool branch_taken_0x270058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270058u;
        // 0x27005c: 0x24053ff8  addiu       $a1, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270058) {
            ctx->pc = 0x2706FCu;
            goto label_2706fc;
        }
    }
    ctx->pc = 0x270060u;
    // 0x270060: 0x8623003e  lh          $v1, 0x3E($s1)
    ctx->pc = 0x270060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x270064: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x270064u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270068: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x270068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x27006c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27006cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270074: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x270074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270078: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x270078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27007c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x270080: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x270084: 0x10850182  beq         $a0, $a1, . + 4 + (0x182 << 2)
    ctx->pc = 0x270084u;
    {
        const bool branch_taken_0x270084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x270088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270084u;
        // 0x270088: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270084) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x27008Cu;
    // 0x27008c: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x27008cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x270090: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x270090u;
    {
        const bool branch_taken_0x270090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270090u;
        // 0x270094: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270090) {
            ctx->pc = 0x270388u;
            goto label_270388;
        }
    }
    ctx->pc = 0x270098u;
    // 0x270098: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x270098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x27009c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x27009Cu;
    {
        const bool branch_taken_0x27009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27009Cu;
        // 0x2700a0: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27009c) {
            ctx->pc = 0x270220u;
            goto label_270220;
        }
    }
    ctx->pc = 0x2700A4u;
    // 0x2700a4: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x2700a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x2700a8: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x2700A8u;
    {
        const bool branch_taken_0x2700a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700A8u;
        // 0x2700ac: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700a8) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2700B0u;
    // 0x2700b0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2700B0u;
    {
        const bool branch_taken_0x2700b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700B0u;
        // 0x2700b4: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700b0) {
            ctx->pc = 0x270160u;
            goto label_270160;
        }
    }
    ctx->pc = 0x2700B8u;
    // 0x2700b8: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x2700b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x2700bc: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x2700BCu;
    {
        const bool branch_taken_0x2700bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700BCu;
        // 0x2700c0: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700bc) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2700C4u;
    // 0x2700c4: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x2700C4u;
    {
        const bool branch_taken_0x2700c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2700C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700C4u;
        // 0x2700c8: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700c4) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x2700CCu;
    // 0x2700cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2700CCu;
    {
        const bool branch_taken_0x2700cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700CCu;
        // 0x2700d0: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700cc) {
            ctx->pc = 0x270118u;
            goto label_270118;
        }
    }
    ctx->pc = 0x2700D4u;
    // 0x2700d4: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x2700d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x2700d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2700D8u;
    {
        const bool branch_taken_0x2700d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700D8u;
        // 0x2700dc: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700d8) {
            ctx->pc = 0x270100u;
            goto label_270100;
        }
    }
    ctx->pc = 0x2700E0u;
    // 0x2700e0: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x2700e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x2700e4: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2700E4u;
    {
        const bool branch_taken_0x2700e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700E4u;
        // 0x2700e8: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700e4) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2700ECu;
    // 0x2700ec: 0x10820176  beq         $a0, $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x2700ECu;
    {
        const bool branch_taken_0x2700ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2700ec) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2700F4u;
    // 0x2700f4: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x2700F4u;
    {
        const bool branch_taken_0x2700f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700f4) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2700FCu;
    // 0x2700fc: 0x0  nop
    ctx->pc = 0x2700fcu;
    // NOP
label_270100:
    // 0x270100: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x270100u;
    {
        const bool branch_taken_0x270100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270100u;
        // 0x270104: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270100) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270108u;
    // 0x270108: 0x14400173  bnez        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x270108u;
    {
        const bool branch_taken_0x270108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270108) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270110u;
    // 0x270110: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x270110u;
    {
        const bool branch_taken_0x270110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270110) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x270118u;
label_270118:
    // 0x270118: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x270118u;
    {
        const bool branch_taken_0x270118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270118u;
        // 0x27011c: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270118) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270120u;
    // 0x270120: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270120u;
    {
        const bool branch_taken_0x270120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270120u;
        // 0x270124: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270120) {
            ctx->pc = 0x270148u;
            goto label_270148;
        }
    }
    ctx->pc = 0x270128u;
    // 0x270128: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x270128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x27012c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x27012Cu;
    {
        const bool branch_taken_0x27012c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27012Cu;
        // 0x270130: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27012c) {
            ctx->pc = 0x270688u;
            goto label_270688;
        }
    }
    ctx->pc = 0x270134u;
    // 0x270134: 0x50820157  beql        $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x270134u;
    {
        const bool branch_taken_0x270134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270134) {
            ctx->pc = 0x270138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270134u;
            // 0x270138: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x27013Cu;
    // 0x27013c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x27013Cu;
    {
        const bool branch_taken_0x27013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27013c) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270144u;
    // 0x270144: 0x0  nop
    ctx->pc = 0x270144u;
    // NOP
label_270148:
    // 0x270148: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x270148u;
    {
        const bool branch_taken_0x270148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270148u;
        // 0x27014c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270148) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x270150u;
    // 0x270150: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x270150u;
    {
        const bool branch_taken_0x270150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270150) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270158u;
    // 0x270158: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x270158u;
    {
        const bool branch_taken_0x270158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270158) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270160u;
label_270160:
    // 0x270160: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x270160u;
    {
        const bool branch_taken_0x270160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270160u;
        // 0x270164: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270160) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270168u;
    // 0x270168: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270168u;
    {
        const bool branch_taken_0x270168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270168u;
        // 0x27016c: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270168) {
            ctx->pc = 0x2701C0u;
            goto label_2701c0;
        }
    }
    ctx->pc = 0x270170u;
    // 0x270170: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x270170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x270174: 0x10820154  beq         $a0, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x270174u;
    {
        const bool branch_taken_0x270174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270174u;
        // 0x270178: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270174) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x27017Cu;
    // 0x27017c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27017Cu;
    {
        const bool branch_taken_0x27017c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27017Cu;
        // 0x270180: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27017c) {
            ctx->pc = 0x2701A0u;
            goto label_2701a0;
        }
    }
    ctx->pc = 0x270184u;
    // 0x270184: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x270184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x270188: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x270188u;
    {
        const bool branch_taken_0x270188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270188u;
        // 0x27018c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270188) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270190u;
    // 0x270190: 0x50820140  beql        $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x270190u;
    {
        const bool branch_taken_0x270190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270190) {
            ctx->pc = 0x270194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270190u;
            // 0x270194: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270198u;
    // 0x270198: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x270198u;
    {
        const bool branch_taken_0x270198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270198) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2701A0u;
label_2701a0:
    // 0x2701a0: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x2701A0u;
    {
        const bool branch_taken_0x2701a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2701A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701A0u;
        // 0x2701a4: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701a0) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2701A8u;
    // 0x2701a8: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2701A8u;
    {
        const bool branch_taken_0x2701a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2701ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701A8u;
        // 0x2701ac: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701a8) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2701B0u;
    // 0x2701b0: 0x50820138  beql        $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2701B0u;
    {
        const bool branch_taken_0x2701b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2701b0) {
            ctx->pc = 0x2701B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2701B0u;
            // 0x2701b4: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x2701B8u;
    // 0x2701b8: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x2701B8u;
    {
        const bool branch_taken_0x2701b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2701b8) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2701C0u;
label_2701c0:
    // 0x2701c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2701C0u;
    {
        const bool branch_taken_0x2701c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701C0u;
        // 0x2701c4: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701c0) {
            ctx->pc = 0x2701E8u;
            goto label_2701e8;
        }
    }
    ctx->pc = 0x2701C8u;
    // 0x2701c8: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x2701c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x2701cc: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2701CCu;
    {
        const bool branch_taken_0x2701cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701CCu;
        // 0x2701d0: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701cc) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2701D4u;
    // 0x2701d4: 0x1082013c  beq         $a0, $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x2701D4u;
    {
        const bool branch_taken_0x2701d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2701d4) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2701DCu;
    // 0x2701dc: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x2701DCu;
    {
        const bool branch_taken_0x2701dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2701dc) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2701E4u;
    // 0x2701e4: 0x0  nop
    ctx->pc = 0x2701e4u;
    // NOP
label_2701e8:
    // 0x2701e8: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2701E8u;
    {
        const bool branch_taken_0x2701e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2701ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701E8u;
        // 0x2701ec: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701e8) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x2701F0u;
    // 0x2701f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2701F0u;
    {
        const bool branch_taken_0x2701f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701F0u;
        // 0x2701f4: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701f0) {
            ctx->pc = 0x270210u;
            goto label_270210;
        }
    }
    ctx->pc = 0x2701F8u;
    // 0x2701f8: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x2701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x2701fc: 0x50820125  beql        $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x2701FCu;
    {
        const bool branch_taken_0x2701fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2701fc) {
            ctx->pc = 0x270200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2701FCu;
            // 0x270200: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270204u;
    // 0x270204: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x270204u;
    {
        const bool branch_taken_0x270204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270204) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x27020Cu;
    // 0x27020c: 0x0  nop
    ctx->pc = 0x27020cu;
    // NOP
label_270210:
    // 0x270210: 0x10820127  beq         $a0, $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x270210u;
    {
        const bool branch_taken_0x270210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270210) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x270218u;
    // 0x270218: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x270218u;
    {
        const bool branch_taken_0x270218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270218) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270220u;
label_270220:
    // 0x270220: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x270220u;
    {
        const bool branch_taken_0x270220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270220u;
        // 0x270224: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270220) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270228u;
    // 0x270228: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x270228u;
    {
        const bool branch_taken_0x270228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270228u;
        // 0x27022c: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270228) {
            ctx->pc = 0x2702E8u;
            goto label_2702e8;
        }
    }
    ctx->pc = 0x270230u;
    // 0x270230: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x270230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x270234: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x270234u;
    {
        const bool branch_taken_0x270234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270234u;
        // 0x270238: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270234) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x27023Cu;
    // 0x27023c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27023Cu;
    {
        const bool branch_taken_0x27023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27023Cu;
        // 0x270240: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27023c) {
            ctx->pc = 0x270288u;
            goto label_270288;
        }
    }
    ctx->pc = 0x270244u;
    // 0x270244: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x270244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x270248: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270248u;
    {
        const bool branch_taken_0x270248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270248u;
        // 0x27024c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270248) {
            ctx->pc = 0x270270u;
            goto label_270270;
        }
    }
    ctx->pc = 0x270250u;
    // 0x270250: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x270250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x270254: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x270254u;
    {
        const bool branch_taken_0x270254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270254u;
        // 0x270258: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270254) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x27025Cu;
    // 0x27025c: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x27025Cu;
    {
        const bool branch_taken_0x27025c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27025c) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270264u;
    // 0x270264: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x270264u;
    {
        const bool branch_taken_0x270264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270264) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x27026Cu;
    // 0x27026c: 0x0  nop
    ctx->pc = 0x27026cu;
    // NOP
label_270270:
    // 0x270270: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x270270u;
    {
        const bool branch_taken_0x270270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270270u;
        // 0x270274: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270270) {
            ctx->pc = 0x270658u;
            goto label_270658;
        }
    }
    ctx->pc = 0x270278u;
    // 0x270278: 0x50820106  beql        $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x270278u;
    {
        const bool branch_taken_0x270278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270278) {
            ctx->pc = 0x27027Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270278u;
            // 0x27027c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270280u;
    // 0x270280: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x270280u;
    {
        const bool branch_taken_0x270280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270280) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270288u;
label_270288:
    // 0x270288: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270288u;
    {
        const bool branch_taken_0x270288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270288u;
        // 0x27028c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270288) {
            ctx->pc = 0x2702B0u;
            goto label_2702b0;
        }
    }
    ctx->pc = 0x270290u;
    // 0x270290: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x270290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x270294: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x270294u;
    {
        const bool branch_taken_0x270294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270294u;
        // 0x270298: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270294) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x27029Cu;
    // 0x27029c: 0x1082010a  beq         $a0, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x27029Cu;
    {
        const bool branch_taken_0x27029c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27029c) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2702A4u;
    // 0x2702a4: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x2702A4u;
    {
        const bool branch_taken_0x2702a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2702a4) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2702ACu;
    // 0x2702ac: 0x0  nop
    ctx->pc = 0x2702acu;
    // NOP
label_2702b0:
    // 0x2702b0: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x2702B0u;
    {
        const bool branch_taken_0x2702b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2702B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702B0u;
        // 0x2702b4: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702b0) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x2702B8u;
    // 0x2702b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2702B8u;
    {
        const bool branch_taken_0x2702b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702B8u;
        // 0x2702bc: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702b8) {
            ctx->pc = 0x2702D8u;
            goto label_2702d8;
        }
    }
    ctx->pc = 0x2702C0u;
    // 0x2702c0: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x2702c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x2702c4: 0x508200f3  beql        $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2702C4u;
    {
        const bool branch_taken_0x2702c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2702c4) {
            ctx->pc = 0x2702C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702C4u;
            // 0x2702c8: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x2702CCu;
    // 0x2702cc: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2702CCu;
    {
        const bool branch_taken_0x2702cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2702cc) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2702D4u;
    // 0x2702d4: 0x0  nop
    ctx->pc = 0x2702d4u;
    // NOP
label_2702d8:
    // 0x2702d8: 0x508200ff  beql        $a0, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x2702D8u;
    {
        const bool branch_taken_0x2702d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2702d8) {
            ctx->pc = 0x2702DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2702D8u;
            // 0x2702dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2702E0u;
    // 0x2702e0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2702E0u;
    {
        const bool branch_taken_0x2702e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2702e0) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2702E8u;
label_2702e8:
    // 0x2702e8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2702E8u;
    {
        const bool branch_taken_0x2702e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702E8u;
        // 0x2702ec: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702e8) {
            ctx->pc = 0x270340u;
            goto label_270340;
        }
    }
    ctx->pc = 0x2702F0u;
    // 0x2702f0: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x2702f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x2702f4: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x2702F4u;
    {
        const bool branch_taken_0x2702f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2702F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702F4u;
        // 0x2702f8: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702f4) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2702FCu;
    // 0x2702fc: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2702FCu;
    {
        const bool branch_taken_0x2702fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2702FCu;
        // 0x270300: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2702fc) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270304u;
    // 0x270304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270304u;
    {
        const bool branch_taken_0x270304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270304u;
        // 0x270308: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270304) {
            ctx->pc = 0x270328u;
            goto label_270328;
        }
    }
    ctx->pc = 0x27030Cu;
    // 0x27030c: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x27030cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x270310: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x270310u;
    {
        const bool branch_taken_0x270310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270310u;
        // 0x270314: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270310) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270318u;
    // 0x270318: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x270318u;
    {
        const bool branch_taken_0x270318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270318) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270320u;
    // 0x270320: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x270320u;
    {
        const bool branch_taken_0x270320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270320) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x270328u;
label_270328:
    // 0x270328: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x270328u;
    {
        const bool branch_taken_0x270328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270328u;
        // 0x27032c: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270328) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270330u;
    // 0x270330: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x270330u;
    {
        const bool branch_taken_0x270330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270330) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270338u;
    // 0x270338: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x270338u;
    {
        const bool branch_taken_0x270338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270338) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270340u;
label_270340:
    // 0x270340: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x270340u;
    {
        const bool branch_taken_0x270340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270340u;
        // 0x270344: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270340) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270348u;
    // 0x270348: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270348u;
    {
        const bool branch_taken_0x270348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270348u;
        // 0x27034c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270348) {
            ctx->pc = 0x270370u;
            goto label_270370;
        }
    }
    ctx->pc = 0x270350u;
    // 0x270350: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x270350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x270354: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x270354u;
    {
        const bool branch_taken_0x270354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270354u;
        // 0x270358: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270354) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x27035Cu;
    // 0x27035c: 0x508200cd  beql        $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x27035Cu;
    {
        const bool branch_taken_0x27035c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27035c) {
            ctx->pc = 0x270360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27035Cu;
            // 0x270360: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270364u;
    // 0x270364: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x270364u;
    {
        const bool branch_taken_0x270364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270364) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x27036Cu;
    // 0x27036c: 0x0  nop
    ctx->pc = 0x27036cu;
    // NOP
label_270370:
    // 0x270370: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x270370u;
    {
        const bool branch_taken_0x270370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270370u;
        // 0x270374: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270370) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270378u;
    // 0x270378: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x270378u;
    {
        const bool branch_taken_0x270378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270378) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270380u;
    // 0x270380: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x270380u;
    {
        const bool branch_taken_0x270380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270380) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x270388u;
label_270388:
    // 0x270388: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x270388u;
    {
        const bool branch_taken_0x270388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270388u;
        // 0x27038c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270388) {
            ctx->pc = 0x270688u;
            goto label_270688;
        }
    }
    ctx->pc = 0x270390u;
    // 0x270390: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x270390u;
    {
        const bool branch_taken_0x270390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270390u;
        // 0x270394: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270390) {
            ctx->pc = 0x2704E8u;
            goto label_2704e8;
        }
    }
    ctx->pc = 0x270398u;
    // 0x270398: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x270398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x27039c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x27039Cu;
    {
        const bool branch_taken_0x27039c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27039Cu;
        // 0x2703a0: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27039c) {
            ctx->pc = 0x270440u;
            goto label_270440;
        }
    }
    ctx->pc = 0x2703A4u;
    // 0x2703a4: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x2703a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x2703a8: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2703A8u;
    {
        const bool branch_taken_0x2703a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A8u;
        // 0x2703ac: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703a8) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2703B0u;
    // 0x2703b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2703B0u;
    {
        const bool branch_taken_0x2703b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703B0u;
        // 0x2703b4: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703b0) {
            ctx->pc = 0x2703F8u;
            goto label_2703f8;
        }
    }
    ctx->pc = 0x2703B8u;
    // 0x2703b8: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x2703b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x2703bc: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2703BCu;
    {
        const bool branch_taken_0x2703bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703BCu;
        // 0x2703c0: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703bc) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2703C4u;
    // 0x2703c4: 0x108200c0  beq         $a0, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2703C4u;
    {
        const bool branch_taken_0x2703c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C4u;
        // 0x2703c8: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703c4) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2703CCu;
    // 0x2703cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2703CCu;
    {
        const bool branch_taken_0x2703cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703CCu;
        // 0x2703d0: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703cc) {
            ctx->pc = 0x2703E8u;
            goto label_2703e8;
        }
    }
    ctx->pc = 0x2703D4u;
    // 0x2703d4: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x2703d8: 0x508200ae  beql        $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2703D8u;
    {
        const bool branch_taken_0x2703d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2703d8) {
            ctx->pc = 0x2703DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2703D8u;
            // 0x2703dc: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x2703E0u;
    // 0x2703e0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2703E0u;
    {
        const bool branch_taken_0x2703e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2703e0) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2703E8u;
label_2703e8:
    // 0x2703e8: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x2703E8u;
    {
        const bool branch_taken_0x2703e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2703e8) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2703F0u;
    // 0x2703f0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2703F0u;
    {
        const bool branch_taken_0x2703f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2703f0) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2703F8u;
label_2703f8:
    // 0x2703f8: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2703F8u;
    {
        const bool branch_taken_0x2703f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F8u;
        // 0x2703fc: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703f8) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270400u;
    // 0x270400: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270400u;
    {
        const bool branch_taken_0x270400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270400u;
        // 0x270404: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270400) {
            ctx->pc = 0x270428u;
            goto label_270428;
        }
    }
    ctx->pc = 0x270408u;
    // 0x270408: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x270408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x27040c: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x27040Cu;
    {
        const bool branch_taken_0x27040c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27040Cu;
        // 0x270410: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27040c) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270414u;
    // 0x270414: 0x5082009f  beql        $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x270414u;
    {
        const bool branch_taken_0x270414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270414) {
            ctx->pc = 0x270418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270414u;
            // 0x270418: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x27041Cu;
    // 0x27041c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x27041Cu;
    {
        const bool branch_taken_0x27041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27041c) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270424u;
    // 0x270424: 0x0  nop
    ctx->pc = 0x270424u;
    // NOP
label_270428:
    // 0x270428: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x270428u;
    {
        const bool branch_taken_0x270428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270428u;
        // 0x27042c: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270428) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270430u;
    // 0x270430: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x270430u;
    {
        const bool branch_taken_0x270430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270430) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270438u;
    // 0x270438: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x270438u;
    {
        const bool branch_taken_0x270438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270438) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270440u;
label_270440:
    // 0x270440: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x270440u;
    {
        const bool branch_taken_0x270440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270440u;
        // 0x270444: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270440) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270448u;
    // 0x270448: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270448u;
    {
        const bool branch_taken_0x270448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270448u;
        // 0x27044c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270448) {
            ctx->pc = 0x2704A0u;
            goto label_2704a0;
        }
    }
    ctx->pc = 0x270450u;
    // 0x270450: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x270450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x270454: 0x1082009c  beq         $a0, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x270454u;
    {
        const bool branch_taken_0x270454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270454u;
        // 0x270458: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270454) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x27045Cu;
    // 0x27045c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27045Cu;
    {
        const bool branch_taken_0x27045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27045Cu;
        // 0x270460: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27045c) {
            ctx->pc = 0x270480u;
            goto label_270480;
        }
    }
    ctx->pc = 0x270464u;
    // 0x270464: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x270464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x270468: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x270468u;
    {
        const bool branch_taken_0x270468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270468u;
        // 0x27046c: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270468) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270470u;
    // 0x270470: 0x50820088  beql        $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x270470u;
    {
        const bool branch_taken_0x270470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270470) {
            ctx->pc = 0x270474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270470u;
            // 0x270474: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270478u;
    // 0x270478: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x270478u;
    {
        const bool branch_taken_0x270478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270478) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270480u;
label_270480:
    // 0x270480: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x270480u;
    {
        const bool branch_taken_0x270480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270480u;
        // 0x270484: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270480) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270488u;
    // 0x270488: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x270488u;
    {
        const bool branch_taken_0x270488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270488u;
        // 0x27048c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270488) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x270490u;
    // 0x270490: 0x50820080  beql        $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x270490u;
    {
        const bool branch_taken_0x270490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270490) {
            ctx->pc = 0x270494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270490u;
            // 0x270494: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270498u;
    // 0x270498: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x270498u;
    {
        const bool branch_taken_0x270498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270498) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2704A0u;
label_2704a0:
    // 0x2704a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2704A0u;
    {
        const bool branch_taken_0x2704a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704A0u;
        // 0x2704a4: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704a0) {
            ctx->pc = 0x2704C8u;
            goto label_2704c8;
        }
    }
    ctx->pc = 0x2704A8u;
    // 0x2704a8: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x2704a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x2704ac: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2704ACu;
    {
        const bool branch_taken_0x2704ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704ACu;
        // 0x2704b0: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704ac) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2704B4u;
    // 0x2704b4: 0x10820084  beq         $a0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2704B4u;
    {
        const bool branch_taken_0x2704b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2704b4) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2704BCu;
    // 0x2704bc: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2704BCu;
    {
        const bool branch_taken_0x2704bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704bc) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2704C4u;
    // 0x2704c4: 0x0  nop
    ctx->pc = 0x2704c4u;
    // NOP
label_2704c8:
    // 0x2704c8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2704C8u;
    {
        const bool branch_taken_0x2704c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2704CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704C8u;
        // 0x2704cc: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704c8) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x2704D0u;
    // 0x2704d0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2704D0u;
    {
        const bool branch_taken_0x2704d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2704D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704D0u;
        // 0x2704d4: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704d0) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2704D8u;
    // 0x2704d8: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2704D8u;
    {
        const bool branch_taken_0x2704d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2704d8) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2704E0u;
    // 0x2704e0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2704E0u;
    {
        const bool branch_taken_0x2704e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704e0) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x2704E8u;
label_2704e8:
    // 0x2704e8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2704E8u;
    {
        const bool branch_taken_0x2704e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2704ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704E8u;
        // 0x2704ec: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704e8) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x2704F0u;
    // 0x2704f0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2704F0u;
    {
        const bool branch_taken_0x2704f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704F0u;
        // 0x2704f4: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704f0) {
            ctx->pc = 0x2705A8u;
            goto label_2705a8;
        }
    }
    ctx->pc = 0x2704F8u;
    // 0x2704f8: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x2704f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x2704fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2704FCu;
    {
        const bool branch_taken_0x2704fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704FCu;
        // 0x270500: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704fc) {
            ctx->pc = 0x270550u;
            goto label_270550;
        }
    }
    ctx->pc = 0x270504u;
    // 0x270504: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x270504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x270508: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x270508u;
    {
        const bool branch_taken_0x270508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270508u;
        // 0x27050c: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270508) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x270510u;
    // 0x270510: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x270510u;
    {
        const bool branch_taken_0x270510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270510u;
        // 0x270514: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270510) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270518u;
    // 0x270518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270518u;
    {
        const bool branch_taken_0x270518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270518u;
        // 0x27051c: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270518) {
            ctx->pc = 0x270538u;
            goto label_270538;
        }
    }
    ctx->pc = 0x270520u;
    // 0x270520: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x270520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x270524: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x270524u;
    {
        const bool branch_taken_0x270524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270524) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x27052Cu;
    // 0x27052c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x27052Cu;
    {
        const bool branch_taken_0x27052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27052c) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270534u;
    // 0x270534: 0x0  nop
    ctx->pc = 0x270534u;
    // NOP
label_270538:
    // 0x270538: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x270538u;
    {
        const bool branch_taken_0x270538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270538u;
        // 0x27053c: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270538) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270540u;
    // 0x270540: 0x10820061  beq         $a0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x270540u;
    {
        const bool branch_taken_0x270540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270540) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270548u;
    // 0x270548: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x270548u;
    {
        const bool branch_taken_0x270548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270548) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270550u;
label_270550:
    // 0x270550: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x270550u;
    {
        const bool branch_taken_0x270550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270550u;
        // 0x270554: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270550) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270558u;
    // 0x270558: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270558u;
    {
        const bool branch_taken_0x270558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270558u;
        // 0x27055c: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270558) {
            ctx->pc = 0x270580u;
            goto label_270580;
        }
    }
    ctx->pc = 0x270560u;
    // 0x270560: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x270560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x270564: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x270564u;
    {
        const bool branch_taken_0x270564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270564u;
        // 0x270568: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270564) {
            ctx->pc = 0x270670u;
            goto label_270670;
        }
    }
    ctx->pc = 0x27056Cu;
    // 0x27056c: 0x50820049  beql        $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x27056Cu;
    {
        const bool branch_taken_0x27056c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27056c) {
            ctx->pc = 0x270570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27056Cu;
            // 0x270570: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270574u;
    // 0x270574: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x270574u;
    {
        const bool branch_taken_0x270574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270574) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x27057Cu;
    // 0x27057c: 0x0  nop
    ctx->pc = 0x27057cu;
    // NOP
label_270580:
    // 0x270580: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x270580u;
    {
        const bool branch_taken_0x270580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270580u;
        // 0x270584: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270580) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x270588u;
    // 0x270588: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x270588u;
    {
        const bool branch_taken_0x270588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270588u;
        // 0x27058c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270588) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270590u;
    // 0x270590: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x270590u;
    {
        const bool branch_taken_0x270590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270590u;
        // 0x270594: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270590) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270598u;
    // 0x270598: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x270598u;
    {
        const bool branch_taken_0x270598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270598) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2705A0u;
    // 0x2705a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2705A0u;
    {
        const bool branch_taken_0x2705a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2705a0) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2705A8u;
label_2705a8:
    // 0x2705a8: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2705A8u;
    {
        const bool branch_taken_0x2705a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2705ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705A8u;
        // 0x2705ac: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705a8) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2705B0u;
    // 0x2705b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2705B0u;
    {
        const bool branch_taken_0x2705b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2705B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705B0u;
        // 0x2705b4: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705b0) {
            ctx->pc = 0x270600u;
            goto label_270600;
        }
    }
    ctx->pc = 0x2705B8u;
    // 0x2705b8: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x2705b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x2705bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2705BCu;
    {
        const bool branch_taken_0x2705bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705BCu;
        // 0x2705c0: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705bc) {
            ctx->pc = 0x2705E8u;
            goto label_2705e8;
        }
    }
    ctx->pc = 0x2705C4u;
    // 0x2705c4: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x2705c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x2705c8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2705C8u;
    {
        const bool branch_taken_0x2705c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705C8u;
        // 0x2705cc: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705c8) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x2705D0u;
    // 0x2705d0: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2705D0u;
    {
        const bool branch_taken_0x2705d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705D0u;
        // 0x2705d4: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705d0) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x2705D8u;
    // 0x2705d8: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2705D8u;
    {
        const bool branch_taken_0x2705d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2705d8) {
            ctx->pc = 0x2706C8u;
            goto label_2706c8;
        }
    }
    ctx->pc = 0x2705E0u;
    // 0x2705e0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2705E0u;
    {
        const bool branch_taken_0x2705e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2705e0) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2705E8u;
label_2705e8:
    // 0x2705e8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2705E8u;
    {
        const bool branch_taken_0x2705e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2705ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705E8u;
        // 0x2705ec: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705e8) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x2705F0u;
    // 0x2705f0: 0x50820028  beql        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2705F0u;
    {
        const bool branch_taken_0x2705f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2705f0) {
            ctx->pc = 0x2705F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2705F0u;
            // 0x2705f4: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x2705F8u;
    // 0x2705f8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2705F8u;
    {
        const bool branch_taken_0x2705f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2705f8) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270600u;
label_270600:
    // 0x270600: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x270600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x270604: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x270604u;
    {
        const bool branch_taken_0x270604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270604u;
        // 0x270608: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270604) {
            ctx->pc = 0x270640u;
            goto label_270640;
        }
    }
    ctx->pc = 0x27060Cu;
    // 0x27060c: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x27060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x270610: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x270610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x270614: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x270614u;
    {
        const bool branch_taken_0x270614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270614u;
        // 0x270618: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270614) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x27061Cu;
    // 0x27061c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x27061cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x270620: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x270620u;
    {
        const bool branch_taken_0x270620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270620u;
        // 0x270624: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270620) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270628u;
    // 0x270628: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x270628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27062c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x27062Cu;
    {
        const bool branch_taken_0x27062c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27062c) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270634u;
    // 0x270634: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x270634u;
    {
        const bool branch_taken_0x270634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270634) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x27063Cu;
    // 0x27063c: 0x0  nop
    ctx->pc = 0x27063cu;
    // NOP
label_270640:
    // 0x270640: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x270640u;
    {
        const bool branch_taken_0x270640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270640u;
        // 0x270644: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270640) {
            ctx->pc = 0x270690u;
            goto label_270690;
        }
    }
    ctx->pc = 0x270648u;
    // 0x270648: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x270648u;
    {
        const bool branch_taken_0x270648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270648) {
            ctx->pc = 0x27064Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270648u;
            // 0x27064c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270650u;
    // 0x270650: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x270650u;
    {
        const bool branch_taken_0x270650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270650) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270658u;
label_270658:
    // 0x270658: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270658u;
    SET_GPR_U32(ctx, 31, 0x270660u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270658u, 0x270660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270660u;
label_270660:
    // 0x270660: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x270660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x270664: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x270664u;
    {
        const bool branch_taken_0x270664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270664u;
        // 0x270668: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270664) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x27066Cu;
    // 0x27066c: 0x0  nop
    ctx->pc = 0x27066cu;
    // NOP
label_270670:
    // 0x270670: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270670u;
    SET_GPR_U32(ctx, 31, 0x270678u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270670u, 0x270678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270678u;
label_270678:
    // 0x270678: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x270678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x27067c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27067Cu;
    {
        const bool branch_taken_0x27067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27067Cu;
        // 0x270680: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27067c) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270684u;
    // 0x270684: 0x0  nop
    ctx->pc = 0x270684u;
    // NOP
label_270688:
    // 0x270688: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x270688u;
    {
        const bool branch_taken_0x270688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270688u;
        // 0x27068c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270688) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x270690u;
label_270690:
    // 0x270690: 0x8cc203c8  lw          $v0, 0x3C8($a2)
    ctx->pc = 0x270690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
label_270694:
    // 0x270694: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x270694u;
    {
        const bool branch_taken_0x270694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270694u;
        // 0x270698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270694) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x27069Cu;
    // 0x27069c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27069Cu;
    SET_GPR_U32(ctx, 31, 0x2706A4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27069Cu, 0x2706A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706A4u;
label_2706a4:
    // 0x2706a4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2706a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2706a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2706A8u;
    {
        const bool branch_taken_0x2706a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706A8u;
        // 0x2706ac: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706a8) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2706B0u;
label_2706b0:
    // 0x2706b0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2706B0u;
    SET_GPR_U32(ctx, 31, 0x2706B8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2706B0u, 0x2706B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706B8u;
label_2706b8:
    // 0x2706b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2706b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2706bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2706BCu;
    {
        const bool branch_taken_0x2706bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706BCu;
        // 0x2706c0: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706bc) {
            ctx->pc = 0x2706D8u;
            goto label_2706d8;
        }
    }
    ctx->pc = 0x2706C4u;
    // 0x2706c4: 0x0  nop
    ctx->pc = 0x2706c4u;
    // NOP
label_2706c8:
    // 0x2706c8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2706C8u;
    SET_GPR_U32(ctx, 31, 0x2706D0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2706C8u, 0x2706D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706D0u;
label_2706d0:
    // 0x2706d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2706d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2706d4: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x2706d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_2706d8:
    // 0x2706d8: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2706D8u;
    {
        const bool branch_taken_0x2706d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706D8u;
        // 0x2706dc: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706d8) {
            ctx->pc = 0x2706F8u;
            goto label_2706f8;
        }
    }
    ctx->pc = 0x2706E0u;
    // 0x2706e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2706e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2706e4: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x2706E4u;
    SET_GPR_U32(ctx, 31, 0x2706ECu);
    ctx->pc = 0x2706E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706E4u;
    // 0x2706e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x2706E4u, 0x2706ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706ECu;
label_2706ec:
    // 0x2706ec: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x2706ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2706f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2706F0u;
    {
        const bool branch_taken_0x2706f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706F0u;
        // 0x2706f4: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706f0) {
            ctx->pc = 0x2706FCu;
            goto label_2706fc;
        }
    }
    ctx->pc = 0x2706F8u;
label_2706f8:
    // 0x2706f8: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2706fc:
    // 0x2706fc: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2706FCu;
    {
        const bool branch_taken_0x2706fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x270700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706FCu;
        // 0x270700: 0x131880  sll         $v1, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706fc) {
            ctx->pc = 0x270710u;
            goto label_270710;
        }
    }
    ctx->pc = 0x270704u;
    // 0x270704: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x270704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x270708: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x270708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x27070c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x27070cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_270710:
    // 0x270710: 0x8cc20128  lw          $v0, 0x128($a2)
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
    // 0x270714: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x270714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x270718: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x270718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27071c: 0x1440fe44  bnez        $v0, . + 4 + (-0x1BC << 2)
    ctx->pc = 0x27071Cu;
    {
        const bool branch_taken_0x27071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27071Cu;
        // 0x270720: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27071c) {
            ctx->pc = 0x270030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270030;
        }
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x5a60003c  blezl       $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x270724u;
    {
        const bool branch_taken_0x270724 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x270724) {
            ctx->pc = 0x270728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270724u;
            // 0x270728: 0xacc00124  sw          $zero, 0x124($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270818u;
            goto label_270818;
        }
    }
    ctx->pc = 0x27072Cu;
    // 0x27072c: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x27072cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x270730: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x270730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x270734: 0x28422000  slti        $v0, $v0, 0x2000
    ctx->pc = 0x270734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x270738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270738u;
    {
        const bool branch_taken_0x270738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270738) {
            ctx->pc = 0x270748u;
            goto label_270748;
        }
    }
    ctx->pc = 0x270740u;
    // 0x270740: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x270740u;
    {
        const bool branch_taken_0x270740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270740u;
        // 0x270744: 0xacc00124  sw          $zero, 0x124($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270740) {
            ctx->pc = 0x270818u;
            goto label_270818;
        }
    }
    ctx->pc = 0x270748u;
label_270748:
    // 0x270748: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270748u;
    SET_GPR_U32(ctx, 31, 0x270750u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270748u, 0x270750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270750u;
label_270750:
    // 0x270750: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x270750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x270754: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x270754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x270758: 0x8483036a  lh          $v1, 0x36A($a0)
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 874)));
    // 0x27075c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27075cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270760: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270760u;
    {
        const bool branch_taken_0x270760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270760u;
        // 0x270764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270760) {
            ctx->pc = 0x270778u;
            goto label_270778;
        }
    }
    ctx->pc = 0x270768u;
    // 0x270768: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x270768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27076c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x27076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x270770: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x270770u;
    {
        const bool branch_taken_0x270770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270770u;
        // 0x270774: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270770) {
            ctx->pc = 0x270884u;
            goto label_270884;
        }
    }
    ctx->pc = 0x270778u;
label_270778:
    // 0x270778: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270778u;
    SET_GPR_U32(ctx, 31, 0x270780u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270778u, 0x270780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270780u;
label_270780:
    // 0x270780: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x270780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x270784: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x270784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x270788: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x270788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x27078c: 0x8cc50064  lw          $a1, 0x64($a2)
    ctx->pc = 0x27078cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x270790: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x270790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x270794: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x270794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x270798: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x270798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x27079c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2707a0: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x2707a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2707a4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2707a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2707a8: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x2707a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x2707ac: 0x24457fff  addiu       $a1, $v0, 0x7FFF
    ctx->pc = 0x2707acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x2707b0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2707b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2707b4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2707b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2707b8: 0x283c3  sra         $s0, $v0, 15
    ctx->pc = 0x2707b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 15));
    // 0x2707bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2707c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2707c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2707c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2707c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2707c8: 0xc09905e  jal         func_264178
    ctx->pc = 0x2707C8u;
    SET_GPR_U32(ctx, 31, 0x2707D0u);
    ctx->pc = 0x2707CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707C8u;
    // 0x2707cc: 0x94c50008  lhu         $a1, 0x8($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2707C8u, 0x2707D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707D0u;
label_2707d0:
    // 0x2707d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2707d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2707d4: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x2707d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2707d8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2707D8u;
    {
        const bool branch_taken_0x2707d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707D8u;
        // 0x2707dc: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707d8) {
            ctx->pc = 0x270838u;
            goto label_270838;
        }
    }
    ctx->pc = 0x2707E0u;
    // 0x2707e0: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x2707e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x2707e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2707e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2707e8: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x2707e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x2707ec: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2707ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2707f0: 0x84820368  lh          $v0, 0x368($a0)
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x2707f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2707f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2707f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2707F8u;
    {
        const bool branch_taken_0x2707f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2707f8) {
            ctx->pc = 0x2707FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2707F8u;
            // 0x2707fc: 0xac800124  sw          $zero, 0x124($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270818u;
            goto label_270818;
        }
    }
    ctx->pc = 0x270800u;
    // 0x270800: 0x94a30044  lhu         $v1, 0x44($a1)
    ctx->pc = 0x270800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x270804: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x270804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x270808: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27080c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27080Cu;
    {
        const bool branch_taken_0x27080c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27080Cu;
        // 0x270810: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27080c) {
            ctx->pc = 0x27083Cu;
            goto label_27083c;
        }
    }
    ctx->pc = 0x270814u;
    // 0x270814: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x270814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
label_270818:
    // 0x270818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27081c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27081cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270820: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x270820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x270824: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x270824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x270828: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x270828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27082c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27082Cu;
    {
        const bool branch_taken_0x27082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27082Cu;
        // 0x270830: 0xaca3013c  sw          $v1, 0x13C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27082c) {
            ctx->pc = 0x270884u;
            goto label_270884;
        }
    }
    ctx->pc = 0x270834u;
    // 0x270834: 0x0  nop
    ctx->pc = 0x270834u;
    // NOP
label_270838:
    // 0x270838: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x270838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_27083c:
    // 0x27083c: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x27083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x270840: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x270844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x270848: 0xc09905e  jal         func_264178
    ctx->pc = 0x270848u;
    SET_GPR_U32(ctx, 31, 0x270850u);
    ctx->pc = 0x27084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270848u;
    // 0x27084c: 0x94450008  lhu         $a1, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x270848u, 0x270850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270850u;
label_270850:
    // 0x270850: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x270850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x270854: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x270854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270858: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x270858u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x27085c: 0xc09981c  jal         func_266070
    ctx->pc = 0x27085Cu;
    SET_GPR_U32(ctx, 31, 0x270864u);
    ctx->pc = 0x270860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27085Cu;
    // 0x270860: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x27085Cu, 0x270864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270864u;
label_270864:
    // 0x270864: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x270868: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x270868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x27086c: 0xc09905e  jal         func_264178
    ctx->pc = 0x27086Cu;
    SET_GPR_U32(ctx, 31, 0x270874u);
    ctx->pc = 0x270870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27086Cu;
    // 0x270870: 0x94650008  lhu         $a1, 0x8($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27086Cu, 0x270874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270874u;
label_270874:
    // 0x270874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x270874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270878: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x270878u;
    SET_GPR_U32(ctx, 31, 0x270880u);
    ctx->pc = 0x27087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270878u;
    // 0x27087c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x270878u, 0x270880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270880u;
label_270880:
    // 0x270880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270884:
    // 0x270884: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x270884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270888: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x270888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27088c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27088cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270890: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x270890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270894: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x270894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270898: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x270898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27089c: 0x3e00008  jr          $ra
    ctx->pc = 0x27089Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2708A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27089Cu;
        // 0x2708a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27089Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2708A4u;
    // 0x2708a4: 0x0  nop
    ctx->pc = 0x2708a4u;
    // NOP
    ctx->pc = 0x2708a8u;
}
