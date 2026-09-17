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

// Function: sub_00274610
// Address: 0x274610 - 0x274dc0
void sub_00274610_0x274610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274610_0x274610");
#endif

    switch (ctx->pc) {
        case 0x274c68u: goto label_274c68;
        case 0x274c80u: goto label_274c80;
        case 0x274cacu: goto label_274cac;
        case 0x274cc0u: goto label_274cc0;
        case 0x274cd8u: goto label_274cd8;
        case 0x274cf4u: goto label_274cf4;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d8cu: goto label_274d8c;
        case 0x274d9cu: goto label_274d9c;
        default: break;
    }

    ctx->pc = 0x274610u;

    // 0x274610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274614: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x274614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27461c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27461cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x274620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x274624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x274624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x274628: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x274628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27462c: 0x8ca30258  lw          $v1, 0x258($a1)
    ctx->pc = 0x27462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 600)));
    // 0x274630: 0x186001dd  blez        $v1, . + 4 + (0x1DD << 2)
    ctx->pc = 0x274630u;
    {
        const bool branch_taken_0x274630 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x274634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274630u;
        // 0x274634: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274630) {
            ctx->pc = 0x274DA8u;
            goto label_274da8;
        }
    }
    ctx->pc = 0x274638u;
    // 0x274638: 0x8cb0025c  lw          $s0, 0x25C($a1)
    ctx->pc = 0x274638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 604)));
    // 0x27463c: 0x8f91aa7c  lw          $s1, -0x5584($gp)
    ctx->pc = 0x27463cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274640: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x274640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x274644: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x274644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x274648: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x274648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27464c: 0x144001ad  bnez        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x27464Cu;
    {
        const bool branch_taken_0x27464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27464Cu;
        // 0x274650: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27464c) {
            ctx->pc = 0x274D04u;
            goto label_274d04;
        }
    }
    ctx->pc = 0x274654u;
    // 0x274654: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x274654u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x274658: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x274658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27465c: 0x144001a9  bnez        $v0, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x27465Cu;
    {
        const bool branch_taken_0x27465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27465c) {
            ctx->pc = 0x274D04u;
            goto label_274d04;
        }
    }
    ctx->pc = 0x274664u;
    // 0x274664: 0x8623003e  lh          $v1, 0x3E($s1)
    ctx->pc = 0x274664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x274668: 0x24053ff8  addiu       $a1, $zero, 0x3FF8
    ctx->pc = 0x274668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
    // 0x27466c: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x27466cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x274670: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x274670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x274674: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x274674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x274678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27467c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274680: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x274684: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x274684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274688: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x274688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27468c: 0x10850182  beq         $a0, $a1, . + 4 + (0x182 << 2)
    ctx->pc = 0x27468Cu;
    {
        const bool branch_taken_0x27468c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x274690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27468Cu;
        // 0x274690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27468c) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274694u;
    // 0x274694: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x274694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x274698: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x274698u;
    {
        const bool branch_taken_0x274698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274698u;
        // 0x27469c: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274698) {
            ctx->pc = 0x274990u;
            goto label_274990;
        }
    }
    ctx->pc = 0x2746A0u;
    // 0x2746a0: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x2746a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x2746a4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2746A4u;
    {
        const bool branch_taken_0x2746a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746A4u;
        // 0x2746a8: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746a4) {
            ctx->pc = 0x274828u;
            goto label_274828;
        }
    }
    ctx->pc = 0x2746ACu;
    // 0x2746ac: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x2746acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x2746b0: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x2746B0u;
    {
        const bool branch_taken_0x2746b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746B0u;
        // 0x2746b4: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746b0) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2746B8u;
    // 0x2746b8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2746B8u;
    {
        const bool branch_taken_0x2746b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746B8u;
        // 0x2746bc: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746b8) {
            ctx->pc = 0x274768u;
            goto label_274768;
        }
    }
    ctx->pc = 0x2746C0u;
    // 0x2746c0: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x2746c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x2746c4: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x2746C4u;
    {
        const bool branch_taken_0x2746c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746C4u;
        // 0x2746c8: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746c4) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2746CCu;
    // 0x2746cc: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x2746CCu;
    {
        const bool branch_taken_0x2746cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2746D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746CCu;
        // 0x2746d0: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746cc) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x2746D4u;
    // 0x2746d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2746D4u;
    {
        const bool branch_taken_0x2746d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746D4u;
        // 0x2746d8: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746d4) {
            ctx->pc = 0x274720u;
            goto label_274720;
        }
    }
    ctx->pc = 0x2746DCu;
    // 0x2746dc: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x2746dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x2746e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2746E0u;
    {
        const bool branch_taken_0x2746e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746E0u;
        // 0x2746e4: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746e0) {
            ctx->pc = 0x274708u;
            goto label_274708;
        }
    }
    ctx->pc = 0x2746E8u;
    // 0x2746e8: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x2746e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x2746ec: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2746ECu;
    {
        const bool branch_taken_0x2746ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2746ECu;
        // 0x2746f0: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746ec) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2746F4u;
    // 0x2746f4: 0x10820176  beq         $a0, $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x2746F4u;
    {
        const bool branch_taken_0x2746f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2746f4) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x2746FCu;
    // 0x2746fc: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x2746FCu;
    {
        const bool branch_taken_0x2746fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746fc) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274704u;
    // 0x274704: 0x0  nop
    ctx->pc = 0x274704u;
    // NOP
label_274708:
    // 0x274708: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x274708u;
    {
        const bool branch_taken_0x274708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274708u;
        // 0x27470c: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274708) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274710u;
    // 0x274710: 0x14400173  bnez        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x274710u;
    {
        const bool branch_taken_0x274710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274710) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274718u;
    // 0x274718: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x274718u;
    {
        const bool branch_taken_0x274718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274718) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x274720u;
label_274720:
    // 0x274720: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x274720u;
    {
        const bool branch_taken_0x274720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274720u;
        // 0x274724: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274720) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274728u;
    // 0x274728: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274728u;
    {
        const bool branch_taken_0x274728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274728u;
        // 0x27472c: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274728) {
            ctx->pc = 0x274750u;
            goto label_274750;
        }
    }
    ctx->pc = 0x274730u;
    // 0x274730: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x274730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x274734: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x274734u;
    {
        const bool branch_taken_0x274734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274734u;
        // 0x274738: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274734) {
            ctx->pc = 0x274C90u;
            goto label_274c90;
        }
    }
    ctx->pc = 0x27473Cu;
    // 0x27473c: 0x50820157  beql        $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x27473Cu;
    {
        const bool branch_taken_0x27473c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27473c) {
            ctx->pc = 0x274740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27473Cu;
            // 0x274740: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274744u;
    // 0x274744: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x274744u;
    {
        const bool branch_taken_0x274744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274744) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x27474Cu;
    // 0x27474c: 0x0  nop
    ctx->pc = 0x27474cu;
    // NOP
label_274750:
    // 0x274750: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x274750u;
    {
        const bool branch_taken_0x274750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274750u;
        // 0x274754: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274750) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x274758u;
    // 0x274758: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x274758u;
    {
        const bool branch_taken_0x274758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274758) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274760u;
    // 0x274760: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x274760u;
    {
        const bool branch_taken_0x274760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274760) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274768u;
label_274768:
    // 0x274768: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x274768u;
    {
        const bool branch_taken_0x274768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274768u;
        // 0x27476c: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274768) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274770u;
    // 0x274770: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x274770u;
    {
        const bool branch_taken_0x274770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274770u;
        // 0x274774: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274770) {
            ctx->pc = 0x2747C8u;
            goto label_2747c8;
        }
    }
    ctx->pc = 0x274778u;
    // 0x274778: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x274778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x27477c: 0x10820154  beq         $a0, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x27477Cu;
    {
        const bool branch_taken_0x27477c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27477Cu;
        // 0x274780: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27477c) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274784u;
    // 0x274784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274784u;
    {
        const bool branch_taken_0x274784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274784u;
        // 0x274788: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274784) {
            ctx->pc = 0x2747A8u;
            goto label_2747a8;
        }
    }
    ctx->pc = 0x27478Cu;
    // 0x27478c: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x27478cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x274790: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x274790u;
    {
        const bool branch_taken_0x274790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274790u;
        // 0x274794: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274790) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274798u;
    // 0x274798: 0x50820140  beql        $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x274798u;
    {
        const bool branch_taken_0x274798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274798) {
            ctx->pc = 0x27479Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274798u;
            // 0x27479c: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x2747A0u;
    // 0x2747a0: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x2747A0u;
    {
        const bool branch_taken_0x2747a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2747a0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2747A8u;
label_2747a8:
    // 0x2747a8: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x2747A8u;
    {
        const bool branch_taken_0x2747a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2747ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747A8u;
        // 0x2747ac: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747a8) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2747B0u;
    // 0x2747b0: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2747B0u;
    {
        const bool branch_taken_0x2747b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2747B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747B0u;
        // 0x2747b4: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747b0) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2747B8u;
    // 0x2747b8: 0x50820138  beql        $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2747B8u;
    {
        const bool branch_taken_0x2747b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2747b8) {
            ctx->pc = 0x2747BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2747B8u;
            // 0x2747bc: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x2747C0u;
    // 0x2747c0: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x2747C0u;
    {
        const bool branch_taken_0x2747c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2747c0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2747C8u;
label_2747c8:
    // 0x2747c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2747C8u;
    {
        const bool branch_taken_0x2747c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747C8u;
        // 0x2747cc: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747c8) {
            ctx->pc = 0x2747F0u;
            goto label_2747f0;
        }
    }
    ctx->pc = 0x2747D0u;
    // 0x2747d0: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x2747d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x2747d4: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x2747D4u;
    {
        const bool branch_taken_0x2747d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747D4u;
        // 0x2747d8: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747d4) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2747DCu;
    // 0x2747dc: 0x1082013c  beq         $a0, $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x2747DCu;
    {
        const bool branch_taken_0x2747dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2747dc) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x2747E4u;
    // 0x2747e4: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x2747E4u;
    {
        const bool branch_taken_0x2747e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2747e4) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2747ECu;
    // 0x2747ec: 0x0  nop
    ctx->pc = 0x2747ecu;
    // NOP
label_2747f0:
    // 0x2747f0: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2747F0u;
    {
        const bool branch_taken_0x2747f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2747F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747F0u;
        // 0x2747f4: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747f0) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x2747F8u;
    // 0x2747f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2747F8u;
    {
        const bool branch_taken_0x2747f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747F8u;
        // 0x2747fc: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747f8) {
            ctx->pc = 0x274818u;
            goto label_274818;
        }
    }
    ctx->pc = 0x274800u;
    // 0x274800: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x274800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x274804: 0x50820125  beql        $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x274804u;
    {
        const bool branch_taken_0x274804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274804) {
            ctx->pc = 0x274808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274804u;
            // 0x274808: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x27480Cu;
    // 0x27480c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x27480Cu;
    {
        const bool branch_taken_0x27480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27480c) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274814u;
    // 0x274814: 0x0  nop
    ctx->pc = 0x274814u;
    // NOP
label_274818:
    // 0x274818: 0x10820127  beq         $a0, $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x274818u;
    {
        const bool branch_taken_0x274818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274818) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274820u;
    // 0x274820: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x274820u;
    {
        const bool branch_taken_0x274820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274820) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274828u;
label_274828:
    // 0x274828: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x274828u;
    {
        const bool branch_taken_0x274828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274828u;
        // 0x27482c: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274828) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274830u;
    // 0x274830: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x274830u;
    {
        const bool branch_taken_0x274830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274830u;
        // 0x274834: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274830) {
            ctx->pc = 0x2748F0u;
            goto label_2748f0;
        }
    }
    ctx->pc = 0x274838u;
    // 0x274838: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x274838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x27483c: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x27483Cu;
    {
        const bool branch_taken_0x27483c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27483Cu;
        // 0x274840: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27483c) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274844u;
    // 0x274844: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x274844u;
    {
        const bool branch_taken_0x274844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274844u;
        // 0x274848: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274844) {
            ctx->pc = 0x274890u;
            goto label_274890;
        }
    }
    ctx->pc = 0x27484Cu;
    // 0x27484c: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x27484cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x274850: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274850u;
    {
        const bool branch_taken_0x274850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274850u;
        // 0x274854: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274850) {
            ctx->pc = 0x274878u;
            goto label_274878;
        }
    }
    ctx->pc = 0x274858u;
    // 0x274858: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x274858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x27485c: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x27485Cu;
    {
        const bool branch_taken_0x27485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27485Cu;
        // 0x274860: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27485c) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274864u;
    // 0x274864: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x274864u;
    {
        const bool branch_taken_0x274864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274864) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x27486Cu;
    // 0x27486c: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x27486Cu;
    {
        const bool branch_taken_0x27486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27486c) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274874u;
    // 0x274874: 0x0  nop
    ctx->pc = 0x274874u;
    // NOP
label_274878:
    // 0x274878: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x274878u;
    {
        const bool branch_taken_0x274878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274878u;
        // 0x27487c: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274878) {
            ctx->pc = 0x274C60u;
            goto label_274c60;
        }
    }
    ctx->pc = 0x274880u;
    // 0x274880: 0x50820106  beql        $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x274880u;
    {
        const bool branch_taken_0x274880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274880) {
            ctx->pc = 0x274884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274880u;
            // 0x274884: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274888u;
    // 0x274888: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x274888u;
    {
        const bool branch_taken_0x274888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274888) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274890u;
label_274890:
    // 0x274890: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274890u;
    {
        const bool branch_taken_0x274890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274890u;
        // 0x274894: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274890) {
            ctx->pc = 0x2748B8u;
            goto label_2748b8;
        }
    }
    ctx->pc = 0x274898u;
    // 0x274898: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x274898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x27489c: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x27489Cu;
    {
        const bool branch_taken_0x27489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27489Cu;
        // 0x2748a0: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27489c) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2748A4u;
    // 0x2748a4: 0x1082010a  beq         $a0, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x2748A4u;
    {
        const bool branch_taken_0x2748a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2748a4) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x2748ACu;
    // 0x2748ac: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x2748ACu;
    {
        const bool branch_taken_0x2748ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2748ac) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2748B4u;
    // 0x2748b4: 0x0  nop
    ctx->pc = 0x2748b4u;
    // NOP
label_2748b8:
    // 0x2748b8: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x2748B8u;
    {
        const bool branch_taken_0x2748b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2748BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748B8u;
        // 0x2748bc: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748b8) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x2748C0u;
    // 0x2748c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2748C0u;
    {
        const bool branch_taken_0x2748c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748C0u;
        // 0x2748c4: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748c0) {
            ctx->pc = 0x2748E0u;
            goto label_2748e0;
        }
    }
    ctx->pc = 0x2748C8u;
    // 0x2748c8: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x2748c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x2748cc: 0x508200f3  beql        $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2748CCu;
    {
        const bool branch_taken_0x2748cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2748cc) {
            ctx->pc = 0x2748D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2748CCu;
            // 0x2748d0: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x2748D4u;
    // 0x2748d4: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2748D4u;
    {
        const bool branch_taken_0x2748d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2748d4) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2748DCu;
    // 0x2748dc: 0x0  nop
    ctx->pc = 0x2748dcu;
    // NOP
label_2748e0:
    // 0x2748e0: 0x508200ff  beql        $a0, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x2748E0u;
    {
        const bool branch_taken_0x2748e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2748e0) {
            ctx->pc = 0x2748E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2748E0u;
            // 0x2748e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2748E8u;
    // 0x2748e8: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2748E8u;
    {
        const bool branch_taken_0x2748e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2748e8) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2748F0u;
label_2748f0:
    // 0x2748f0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2748F0u;
    {
        const bool branch_taken_0x2748f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748F0u;
        // 0x2748f4: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748f0) {
            ctx->pc = 0x274948u;
            goto label_274948;
        }
    }
    ctx->pc = 0x2748F8u;
    // 0x2748f8: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x2748f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x2748fc: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x2748FCu;
    {
        const bool branch_taken_0x2748fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748FCu;
        // 0x274900: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748fc) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274904u;
    // 0x274904: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x274904u;
    {
        const bool branch_taken_0x274904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274904u;
        // 0x274908: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274904) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x27490Cu;
    // 0x27490c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27490Cu;
    {
        const bool branch_taken_0x27490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27490Cu;
        // 0x274910: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27490c) {
            ctx->pc = 0x274930u;
            goto label_274930;
        }
    }
    ctx->pc = 0x274914u;
    // 0x274914: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x274914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x274918: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x274918u;
    {
        const bool branch_taken_0x274918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274918u;
        // 0x27491c: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274918) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274920u;
    // 0x274920: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x274920u;
    {
        const bool branch_taken_0x274920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274920) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274928u;
    // 0x274928: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x274928u;
    {
        const bool branch_taken_0x274928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274928) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274930u;
label_274930:
    // 0x274930: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x274930u;
    {
        const bool branch_taken_0x274930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274930u;
        // 0x274934: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274930) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274938u;
    // 0x274938: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x274938u;
    {
        const bool branch_taken_0x274938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274938) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274940u;
    // 0x274940: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x274940u;
    {
        const bool branch_taken_0x274940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274940) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274948u;
label_274948:
    // 0x274948: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x274948u;
    {
        const bool branch_taken_0x274948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274948u;
        // 0x27494c: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274948) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274950u;
    // 0x274950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274950u;
    {
        const bool branch_taken_0x274950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274950u;
        // 0x274954: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274950) {
            ctx->pc = 0x274978u;
            goto label_274978;
        }
    }
    ctx->pc = 0x274958u;
    // 0x274958: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x274958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x27495c: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x27495Cu;
    {
        const bool branch_taken_0x27495c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27495Cu;
        // 0x274960: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27495c) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274964u;
    // 0x274964: 0x508200cd  beql        $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x274964u;
    {
        const bool branch_taken_0x274964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274964) {
            ctx->pc = 0x274968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274964u;
            // 0x274968: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x27496Cu;
    // 0x27496c: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x27496Cu;
    {
        const bool branch_taken_0x27496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27496c) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274974u;
    // 0x274974: 0x0  nop
    ctx->pc = 0x274974u;
    // NOP
label_274978:
    // 0x274978: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x274978u;
    {
        const bool branch_taken_0x274978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274978u;
        // 0x27497c: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274978) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274980u;
    // 0x274980: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x274980u;
    {
        const bool branch_taken_0x274980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274980) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274988u;
    // 0x274988: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x274988u;
    {
        const bool branch_taken_0x274988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274988) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274990u;
label_274990:
    // 0x274990: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x274990u;
    {
        const bool branch_taken_0x274990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274990u;
        // 0x274994: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274990) {
            ctx->pc = 0x274C90u;
            goto label_274c90;
        }
    }
    ctx->pc = 0x274998u;
    // 0x274998: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x274998u;
    {
        const bool branch_taken_0x274998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274998u;
        // 0x27499c: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274998) {
            ctx->pc = 0x274AF0u;
            goto label_274af0;
        }
    }
    ctx->pc = 0x2749A0u;
    // 0x2749a0: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x2749a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x2749a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2749A4u;
    {
        const bool branch_taken_0x2749a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749A4u;
        // 0x2749a8: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749a4) {
            ctx->pc = 0x274A48u;
            goto label_274a48;
        }
    }
    ctx->pc = 0x2749ACu;
    // 0x2749ac: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x2749acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x2749b0: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2749B0u;
    {
        const bool branch_taken_0x2749b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749B0u;
        // 0x2749b4: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749b0) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2749B8u;
    // 0x2749b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2749B8u;
    {
        const bool branch_taken_0x2749b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749B8u;
        // 0x2749bc: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749b8) {
            ctx->pc = 0x274A00u;
            goto label_274a00;
        }
    }
    ctx->pc = 0x2749C0u;
    // 0x2749c0: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x2749c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x2749c4: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x2749C4u;
    {
        const bool branch_taken_0x2749c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749C4u;
        // 0x2749c8: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749c4) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x2749CCu;
    // 0x2749cc: 0x108200c0  beq         $a0, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2749CCu;
    {
        const bool branch_taken_0x2749cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2749D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749CCu;
        // 0x2749d0: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749cc) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x2749D4u;
    // 0x2749d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2749D4u;
    {
        const bool branch_taken_0x2749d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749D4u;
        // 0x2749d8: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749d4) {
            ctx->pc = 0x2749F0u;
            goto label_2749f0;
        }
    }
    ctx->pc = 0x2749DCu;
    // 0x2749dc: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x2749e0: 0x508200ae  beql        $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x2749E0u;
    {
        const bool branch_taken_0x2749e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2749e0) {
            ctx->pc = 0x2749E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2749E0u;
            // 0x2749e4: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x2749E8u;
    // 0x2749e8: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2749E8u;
    {
        const bool branch_taken_0x2749e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749e8) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2749F0u;
label_2749f0:
    // 0x2749f0: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x2749F0u;
    {
        const bool branch_taken_0x2749f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2749f0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x2749F8u;
    // 0x2749f8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2749F8u;
    {
        const bool branch_taken_0x2749f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749f8) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274A00u;
label_274a00:
    // 0x274a00: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x274A00u;
    {
        const bool branch_taken_0x274a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A00u;
        // 0x274a04: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a00) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274A08u;
    // 0x274a08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274A08u;
    {
        const bool branch_taken_0x274a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A08u;
        // 0x274a0c: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a08) {
            ctx->pc = 0x274A30u;
            goto label_274a30;
        }
    }
    ctx->pc = 0x274A10u;
    // 0x274a10: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x274a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x274a14: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x274A14u;
    {
        const bool branch_taken_0x274a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A14u;
        // 0x274a18: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a14) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274A1Cu;
    // 0x274a1c: 0x5082009f  beql        $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x274A1Cu;
    {
        const bool branch_taken_0x274a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274a1c) {
            ctx->pc = 0x274A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274A1Cu;
            // 0x274a20: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274A24u;
    // 0x274a24: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x274A24u;
    {
        const bool branch_taken_0x274a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a24) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274A2Cu;
    // 0x274a2c: 0x0  nop
    ctx->pc = 0x274a2cu;
    // NOP
label_274a30:
    // 0x274a30: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x274A30u;
    {
        const bool branch_taken_0x274a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A30u;
        // 0x274a34: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a30) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274A38u;
    // 0x274a38: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x274A38u;
    {
        const bool branch_taken_0x274a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274a38) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274A40u;
    // 0x274a40: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x274A40u;
    {
        const bool branch_taken_0x274a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a40) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274A48u;
label_274a48:
    // 0x274a48: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x274A48u;
    {
        const bool branch_taken_0x274a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A48u;
        // 0x274a4c: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a48) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274A50u;
    // 0x274a50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x274A50u;
    {
        const bool branch_taken_0x274a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A50u;
        // 0x274a54: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a50) {
            ctx->pc = 0x274AA8u;
            goto label_274aa8;
        }
    }
    ctx->pc = 0x274A58u;
    // 0x274a58: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x274a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x274a5c: 0x1082009c  beq         $a0, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x274A5Cu;
    {
        const bool branch_taken_0x274a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A5Cu;
        // 0x274a60: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a5c) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274A64u;
    // 0x274a64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x274A64u;
    {
        const bool branch_taken_0x274a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A64u;
        // 0x274a68: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a64) {
            ctx->pc = 0x274A88u;
            goto label_274a88;
        }
    }
    ctx->pc = 0x274A6Cu;
    // 0x274a6c: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x274a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x274a70: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x274A70u;
    {
        const bool branch_taken_0x274a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A70u;
        // 0x274a74: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a70) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274A78u;
    // 0x274a78: 0x50820088  beql        $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x274A78u;
    {
        const bool branch_taken_0x274a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274a78) {
            ctx->pc = 0x274A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274A78u;
            // 0x274a7c: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274A80u;
    // 0x274a80: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x274A80u;
    {
        const bool branch_taken_0x274a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a80) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274A88u;
label_274a88:
    // 0x274a88: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x274A88u;
    {
        const bool branch_taken_0x274a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A88u;
        // 0x274a8c: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a88) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274A90u;
    // 0x274a90: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x274A90u;
    {
        const bool branch_taken_0x274a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A90u;
        // 0x274a94: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a90) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274A98u;
    // 0x274a98: 0x50820080  beql        $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x274A98u;
    {
        const bool branch_taken_0x274a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274a98) {
            ctx->pc = 0x274A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274A98u;
            // 0x274a9c: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274AA0u;
    // 0x274aa0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x274AA0u;
    {
        const bool branch_taken_0x274aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274aa0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274AA8u;
label_274aa8:
    // 0x274aa8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274AA8u;
    {
        const bool branch_taken_0x274aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AA8u;
        // 0x274aac: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aa8) {
            ctx->pc = 0x274AD0u;
            goto label_274ad0;
        }
    }
    ctx->pc = 0x274AB0u;
    // 0x274ab0: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x274ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x274ab4: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x274AB4u;
    {
        const bool branch_taken_0x274ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AB4u;
        // 0x274ab8: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ab4) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274ABCu;
    // 0x274abc: 0x10820084  beq         $a0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x274ABCu;
    {
        const bool branch_taken_0x274abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274abc) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274AC4u;
    // 0x274ac4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x274AC4u;
    {
        const bool branch_taken_0x274ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ac4) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274ACCu;
    // 0x274acc: 0x0  nop
    ctx->pc = 0x274accu;
    // NOP
label_274ad0:
    // 0x274ad0: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x274AD0u;
    {
        const bool branch_taken_0x274ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AD0u;
        // 0x274ad4: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ad0) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x274AD8u;
    // 0x274ad8: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x274AD8u;
    {
        const bool branch_taken_0x274ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AD8u;
        // 0x274adc: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ad8) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274AE0u;
    // 0x274ae0: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x274AE0u;
    {
        const bool branch_taken_0x274ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274ae0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274AE8u;
    // 0x274ae8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x274AE8u;
    {
        const bool branch_taken_0x274ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ae8) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x274AF0u;
label_274af0:
    // 0x274af0: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x274AF0u;
    {
        const bool branch_taken_0x274af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AF0u;
        // 0x274af4: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274af0) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274AF8u;
    // 0x274af8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x274AF8u;
    {
        const bool branch_taken_0x274af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AF8u;
        // 0x274afc: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274af8) {
            ctx->pc = 0x274BB0u;
            goto label_274bb0;
        }
    }
    ctx->pc = 0x274B00u;
    // 0x274b00: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x274b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x274b04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x274B04u;
    {
        const bool branch_taken_0x274b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B04u;
        // 0x274b08: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b04) {
            ctx->pc = 0x274B58u;
            goto label_274b58;
        }
    }
    ctx->pc = 0x274B0Cu;
    // 0x274b0c: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x274b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x274b10: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x274B10u;
    {
        const bool branch_taken_0x274b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B10u;
        // 0x274b14: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b10) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274B18u;
    // 0x274b18: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x274B18u;
    {
        const bool branch_taken_0x274b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B18u;
        // 0x274b1c: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b18) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274B20u;
    // 0x274b20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274B20u;
    {
        const bool branch_taken_0x274b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B20u;
        // 0x274b24: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b20) {
            ctx->pc = 0x274B40u;
            goto label_274b40;
        }
    }
    ctx->pc = 0x274B28u;
    // 0x274b28: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x274b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x274b2c: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x274B2Cu;
    {
        const bool branch_taken_0x274b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274b2c) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x274B34u;
    // 0x274b34: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x274B34u;
    {
        const bool branch_taken_0x274b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b34) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274B3Cu;
    // 0x274b3c: 0x0  nop
    ctx->pc = 0x274b3cu;
    // NOP
label_274b40:
    // 0x274b40: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x274B40u;
    {
        const bool branch_taken_0x274b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B40u;
        // 0x274b44: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b40) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274B48u;
    // 0x274b48: 0x10820061  beq         $a0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x274B48u;
    {
        const bool branch_taken_0x274b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274b48) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274B50u;
    // 0x274b50: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x274B50u;
    {
        const bool branch_taken_0x274b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b50) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274B58u;
label_274b58:
    // 0x274b58: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x274B58u;
    {
        const bool branch_taken_0x274b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B58u;
        // 0x274b5c: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b58) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274B60u;
    // 0x274b60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274B60u;
    {
        const bool branch_taken_0x274b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B60u;
        // 0x274b64: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b60) {
            ctx->pc = 0x274B88u;
            goto label_274b88;
        }
    }
    ctx->pc = 0x274B68u;
    // 0x274b68: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x274b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x274b6c: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x274B6Cu;
    {
        const bool branch_taken_0x274b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B6Cu;
        // 0x274b70: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b6c) {
            ctx->pc = 0x274C78u;
            goto label_274c78;
        }
    }
    ctx->pc = 0x274B74u;
    // 0x274b74: 0x50820049  beql        $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x274B74u;
    {
        const bool branch_taken_0x274b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274b74) {
            ctx->pc = 0x274B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274B74u;
            // 0x274b78: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274B7Cu;
    // 0x274b7c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x274B7Cu;
    {
        const bool branch_taken_0x274b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274b7c) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274B84u;
    // 0x274b84: 0x0  nop
    ctx->pc = 0x274b84u;
    // NOP
label_274b88:
    // 0x274b88: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x274B88u;
    {
        const bool branch_taken_0x274b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B88u;
        // 0x274b8c: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b88) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274B90u;
    // 0x274b90: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x274B90u;
    {
        const bool branch_taken_0x274b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B90u;
        // 0x274b94: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b90) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274B98u;
    // 0x274b98: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x274B98u;
    {
        const bool branch_taken_0x274b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B98u;
        // 0x274b9c: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b98) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274BA0u;
    // 0x274ba0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x274BA0u;
    {
        const bool branch_taken_0x274ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274ba0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274BA8u;
    // 0x274ba8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x274BA8u;
    {
        const bool branch_taken_0x274ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274ba8) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274BB0u;
label_274bb0:
    // 0x274bb0: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x274BB0u;
    {
        const bool branch_taken_0x274bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BB0u;
        // 0x274bb4: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bb0) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274BB8u;
    // 0x274bb8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x274BB8u;
    {
        const bool branch_taken_0x274bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BB8u;
        // 0x274bbc: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bb8) {
            ctx->pc = 0x274C08u;
            goto label_274c08;
        }
    }
    ctx->pc = 0x274BC0u;
    // 0x274bc0: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x274bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x274bc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274BC4u;
    {
        const bool branch_taken_0x274bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BC4u;
        // 0x274bc8: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bc4) {
            ctx->pc = 0x274BF0u;
            goto label_274bf0;
        }
    }
    ctx->pc = 0x274BCCu;
    // 0x274bcc: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x274bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x274bd0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x274BD0u;
    {
        const bool branch_taken_0x274bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BD0u;
        // 0x274bd4: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bd0) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274BD8u;
    // 0x274bd8: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x274BD8u;
    {
        const bool branch_taken_0x274bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BD8u;
        // 0x274bdc: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bd8) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274BE0u;
    // 0x274be0: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x274BE0u;
    {
        const bool branch_taken_0x274be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274be0) {
            ctx->pc = 0x274CD0u;
            goto label_274cd0;
        }
    }
    ctx->pc = 0x274BE8u;
    // 0x274be8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x274BE8u;
    {
        const bool branch_taken_0x274be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274be8) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274BF0u;
label_274bf0:
    // 0x274bf0: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x274BF0u;
    {
        const bool branch_taken_0x274bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF0u;
        // 0x274bf4: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bf0) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274BF8u;
    // 0x274bf8: 0x50820028  beql        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x274BF8u;
    {
        const bool branch_taken_0x274bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274bf8) {
            ctx->pc = 0x274BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274BF8u;
            // 0x274bfc: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274C00u;
    // 0x274c00: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x274C00u;
    {
        const bool branch_taken_0x274c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c00) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C08u;
label_274c08:
    // 0x274c08: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x274c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x274c0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x274C0Cu;
    {
        const bool branch_taken_0x274c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C0Cu;
        // 0x274c10: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c0c) {
            ctx->pc = 0x274C48u;
            goto label_274c48;
        }
    }
    ctx->pc = 0x274C14u;
    // 0x274c14: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x274c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x274c18: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x274c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x274c1c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x274C1Cu;
    {
        const bool branch_taken_0x274c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C1Cu;
        // 0x274c20: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c1c) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274C24u;
    // 0x274c24: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x274c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x274c28: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x274C28u;
    {
        const bool branch_taken_0x274c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C28u;
        // 0x274c2c: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c28) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C30u;
    // 0x274c30: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x274c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x274c34: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x274C34u;
    {
        const bool branch_taken_0x274c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274c34) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C3Cu;
    // 0x274c3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x274C3Cu;
    {
        const bool branch_taken_0x274c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c3c) {
            ctx->pc = 0x274CB8u;
            goto label_274cb8;
        }
    }
    ctx->pc = 0x274C44u;
    // 0x274c44: 0x0  nop
    ctx->pc = 0x274c44u;
    // NOP
label_274c48:
    // 0x274c48: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x274C48u;
    {
        const bool branch_taken_0x274c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x274C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C48u;
        // 0x274c4c: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c48) {
            ctx->pc = 0x274C98u;
            goto label_274c98;
        }
    }
    ctx->pc = 0x274C50u;
    // 0x274c50: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x274C50u;
    {
        const bool branch_taken_0x274c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x274c50) {
            ctx->pc = 0x274C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274C50u;
            // 0x274c54: 0x8ce203c8  lw          $v0, 0x3C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x274C58u;
    // 0x274c58: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x274C58u;
    {
        const bool branch_taken_0x274c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c58) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C60u;
label_274c60:
    // 0x274c60: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x274C60u;
    SET_GPR_U32(ctx, 31, 0x274C68u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274C60u, 0x274C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C68u;
label_274c68:
    // 0x274c68: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x274c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x274c6c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x274C6Cu;
    {
        const bool branch_taken_0x274c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C6Cu;
        // 0x274c70: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c6c) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C74u;
    // 0x274c74: 0x0  nop
    ctx->pc = 0x274c74u;
    // NOP
label_274c78:
    // 0x274c78: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x274C78u;
    SET_GPR_U32(ctx, 31, 0x274C80u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274C78u, 0x274C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C80u;
label_274c80:
    // 0x274c80: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x274c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x274c84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x274C84u;
    {
        const bool branch_taken_0x274c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C84u;
        // 0x274c88: 0x2c460001  sltiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c84) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C8Cu;
    // 0x274c8c: 0x0  nop
    ctx->pc = 0x274c8cu;
    // NOP
label_274c90:
    // 0x274c90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x274C90u;
    {
        const bool branch_taken_0x274c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C90u;
        // 0x274c94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c90) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274C98u;
label_274c98:
    // 0x274c98: 0x8ce203c8  lw          $v0, 0x3C8($a3)
    ctx->pc = 0x274c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 968)));
label_274c9c:
    // 0x274c9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x274C9Cu;
    {
        const bool branch_taken_0x274c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C9Cu;
        // 0x274ca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c9c) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274CA4u;
    // 0x274ca4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x274CA4u;
    SET_GPR_U32(ctx, 31, 0x274CACu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274CA4u, 0x274CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CACu;
label_274cac:
    // 0x274cac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x274cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x274cb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274CB0u;
    {
        const bool branch_taken_0x274cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CB0u;
        // 0x274cb4: 0x28460400  slti        $a2, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cb0) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274CB8u;
label_274cb8:
    // 0x274cb8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x274CB8u;
    SET_GPR_U32(ctx, 31, 0x274CC0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274CB8u, 0x274CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CC0u;
label_274cc0:
    // 0x274cc0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x274cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x274cc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274CC4u;
    {
        const bool branch_taken_0x274cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CC4u;
        // 0x274cc8: 0x284600cc  slti        $a2, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cc4) {
            ctx->pc = 0x274CE0u;
            goto label_274ce0;
        }
    }
    ctx->pc = 0x274CCCu;
    // 0x274ccc: 0x0  nop
    ctx->pc = 0x274cccu;
    // NOP
label_274cd0:
    // 0x274cd0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x274CD0u;
    SET_GPR_U32(ctx, 31, 0x274CD8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x274CD0u, 0x274CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CD8u;
label_274cd8:
    // 0x274cd8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x274cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x274cdc: 0x28460199  slti        $a2, $v0, 0x199
    ctx->pc = 0x274cdcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_274ce0:
    // 0x274ce0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x274CE0u;
    {
        const bool branch_taken_0x274ce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CE0u;
        // 0x274ce4: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ce0) {
            ctx->pc = 0x274D00u;
            goto label_274d00;
        }
    }
    ctx->pc = 0x274CE8u;
    // 0x274ce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x274ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cec: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x274CECu;
    SET_GPR_U32(ctx, 31, 0x274CF4u);
    ctx->pc = 0x274CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274CECu;
    // 0x274cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x274CECu, 0x274CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274CF4u;
label_274cf4:
    // 0x274cf4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x274cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274cf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274CF8u;
    {
        const bool branch_taken_0x274cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CF8u;
        // 0x274cfc: 0x2902b  sltu        $s2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cf8) {
            ctx->pc = 0x274D04u;
            goto label_274d04;
        }
    }
    ctx->pc = 0x274D00u;
label_274d00:
    // 0x274d00: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_274d04:
    // 0x274d04: 0x52400013  beql        $s2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x274D04u;
    {
        const bool branch_taken_0x274d04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d04) {
            ctx->pc = 0x274D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274D04u;
            // 0x274d08: 0xaca00258  sw          $zero, 0x258($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 600), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274D54u;
            goto label_274d54;
        }
    }
    ctx->pc = 0x274D0Cu;
    // 0x274d0c: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x274d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x274d10: 0x84820080  lh          $v0, 0x80($a0)
    ctx->pc = 0x274d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x274d14: 0x28422000  slti        $v0, $v0, 0x2000
    ctx->pc = 0x274d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x274d18: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x274D18u;
    {
        const bool branch_taken_0x274d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d18) {
            ctx->pc = 0x274D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274D18u;
            // 0x274d1c: 0xaca00258  sw          $zero, 0x258($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 600), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274D54u;
            goto label_274d54;
        }
    }
    ctx->pc = 0x274D20u;
    // 0x274d20: 0x8ca2025c  lw          $v0, 0x25C($a1)
    ctx->pc = 0x274d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 604)));
    // 0x274d24: 0xc09905e  jal         func_264178
    ctx->pc = 0x274D24u;
    SET_GPR_U32(ctx, 31, 0x274D2Cu);
    ctx->pc = 0x274D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D24u;
    // 0x274d28: 0x94450008  lhu         $a1, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x274D24u, 0x274D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D2Cu;
label_274d2c:
    // 0x274d2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d30: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x274d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x274d34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x274D34u;
    {
        const bool branch_taken_0x274d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D34u;
        // 0x274d38: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d34) {
            ctx->pc = 0x274D60u;
            goto label_274d60;
        }
    }
    ctx->pc = 0x274D3Cu;
    // 0x274d3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x274d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d40: 0x8ca20298  lw          $v0, 0x298($a1)
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 664)));
    // 0x274d44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x274d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x274d48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x274D48u;
    {
        const bool branch_taken_0x274d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d48) {
            ctx->pc = 0x274D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274D48u;
            // 0x274d4c: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274D64u;
            goto label_274d64;
        }
    }
    ctx->pc = 0x274D50u;
    // 0x274d50: 0xaca00258  sw          $zero, 0x258($a1)
    ctx->pc = 0x274d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 600), GPR_U32(ctx, 0));
label_274d54:
    // 0x274d54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x274D54u;
    {
        const bool branch_taken_0x274d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D54u;
        // 0x274d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d54) {
            ctx->pc = 0x274DA8u;
            goto label_274da8;
        }
    }
    ctx->pc = 0x274D5Cu;
    // 0x274d5c: 0x0  nop
    ctx->pc = 0x274d5cu;
    // NOP
label_274d60:
    // 0x274d60: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x274d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_274d64:
    // 0x274d64: 0x8ca40264  lw          $a0, 0x264($a1)
    ctx->pc = 0x274d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 612)));
    // 0x274d68: 0x84430096  lh          $v1, 0x96($v0)
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
    // 0x274d6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x274d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x274d70: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x274D70u;
    {
        const bool branch_taken_0x274d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D70u;
        // 0x274d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d70) {
            ctx->pc = 0x274DA8u;
            goto label_274da8;
        }
    }
    ctx->pc = 0x274D78u;
    // 0x274d78: 0x8ca2025c  lw          $v0, 0x25C($a1)
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 604)));
    // 0x274d7c: 0x8ca60260  lw          $a2, 0x260($a1)
    ctx->pc = 0x274d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 608)));
    // 0x274d80: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x274d80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274d84: 0xc09981c  jal         func_266070
    ctx->pc = 0x274D84u;
    SET_GPR_U32(ctx, 31, 0x274D8Cu);
    ctx->pc = 0x274D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D84u;
    // 0x274d88: 0x94450002  lhu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x274D84u, 0x274D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D8Cu;
label_274d8c:
    // 0x274d8c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x274d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274d94: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x274D94u;
    SET_GPR_U32(ctx, 31, 0x274D9Cu);
    ctx->pc = 0x274D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D94u;
    // 0x274d98: 0x8c640260  lw          $a0, 0x260($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 608)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x274D94u, 0x274D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D9Cu;
label_274d9c:
    // 0x274d9c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x274d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274da0: 0xac400258  sw          $zero, 0x258($v0)
    ctx->pc = 0x274da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 600), GPR_U32(ctx, 0));
    // 0x274da4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274da8:
    // 0x274da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x274dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274db0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x274db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274db4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x274db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x274db8: 0x3e00008  jr          $ra
    ctx->pc = 0x274DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DB8u;
        // 0x274dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274DC0u;
}
