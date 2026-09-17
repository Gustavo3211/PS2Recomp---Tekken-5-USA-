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

// Function: sub_002708A8
// Address: 0x2708a8 - 0x2711b8
void sub_002708A8_0x2708a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002708A8_0x2708a8");
#endif

    switch (ctx->pc) {
        case 0x2708f0u: goto label_2708f0;
        case 0x270f20u: goto label_270f20;
        case 0x270f38u: goto label_270f38;
        case 0x270f64u: goto label_270f64;
        case 0x270f78u: goto label_270f78;
        case 0x270f90u: goto label_270f90;
        case 0x270facu: goto label_270fac;
        case 0x271028u: goto label_271028;
        case 0x271078u: goto label_271078;
        case 0x2710ecu: goto label_2710ec;
        case 0x271134u: goto label_271134;
        case 0x271170u: goto label_271170;
        case 0x271180u: goto label_271180;
        case 0x27118cu: goto label_27118c;
        default: break;
    }

    ctx->pc = 0x2708a8u;

    // 0x2708a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2708a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2708ac: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x2708acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2708b0: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2708b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x2708b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2708b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708b8: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2708b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x2708bc: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2708bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x2708c0: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2708c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2708c4: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2708c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2708c8: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2708c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x2708cc: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2708ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2708d0: 0x8cc30144  lw          $v1, 0x144($a2)
    ctx->pc = 0x2708d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 324)));
    // 0x2708d4: 0x1860022e  blez        $v1, . + 4 + (0x22E << 2)
    ctx->pc = 0x2708D4u;
    {
        const bool branch_taken_0x2708d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2708D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708D4u;
        // 0x2708d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708d4) {
            ctx->pc = 0x271190u;
            goto label_271190;
        }
    }
    ctx->pc = 0x2708DCu;
    // 0x2708dc: 0x8cc20148  lw          $v0, 0x148($a2)
    ctx->pc = 0x2708dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x2708e0: 0x184001c2  blez        $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x2708E0u;
    {
        const bool branch_taken_0x2708e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2708E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708E0u;
        // 0x2708e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708e0) {
            ctx->pc = 0x270FECu;
            goto label_270fec;
        }
    }
    ctx->pc = 0x2708E8u;
    // 0x2708e8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x2708e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2708ec: 0x0  nop
    ctx->pc = 0x2708ecu;
    // NOP
label_2708f0:
    // 0x2708f0: 0x8f91aa7c  lw          $s1, -0x5584($gp)
    ctx->pc = 0x2708f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2708f4: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2708f8: 0x8c50014c  lw          $s0, 0x14C($v0)
    ctx->pc = 0x2708f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2708fc: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x2708fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x270900: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x270900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x270904: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x270904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270908: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x270908u;
    {
        const bool branch_taken_0x270908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270908u;
        // 0x27090c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270908) {
            ctx->pc = 0x270FBCu;
            goto label_270fbc;
        }
    }
    ctx->pc = 0x270910u;
    // 0x270910: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x270910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x270914: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270918: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x270918u;
    {
        const bool branch_taken_0x270918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270918u;
        // 0x27091c: 0x24053ff8  addiu       $a1, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270918) {
            ctx->pc = 0x270FBCu;
            goto label_270fbc;
        }
    }
    ctx->pc = 0x270920u;
    // 0x270920: 0x8623003e  lh          $v1, 0x3E($s1)
    ctx->pc = 0x270920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x270924: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x270924u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270928: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x270928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x27092c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x270934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270938: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x270938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27093c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x270940: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x270940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x270944: 0x10850182  beq         $a0, $a1, . + 4 + (0x182 << 2)
    ctx->pc = 0x270944u;
    {
        const bool branch_taken_0x270944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x270948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270944u;
        // 0x270948: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270944) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x27094Cu;
    // 0x27094c: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x27094cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x270950: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x270950u;
    {
        const bool branch_taken_0x270950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270950u;
        // 0x270954: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270950) {
            ctx->pc = 0x270C48u;
            goto label_270c48;
        }
    }
    ctx->pc = 0x270958u;
    // 0x270958: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x270958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x27095c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x27095Cu;
    {
        const bool branch_taken_0x27095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27095Cu;
        // 0x270960: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27095c) {
            ctx->pc = 0x270AE0u;
            goto label_270ae0;
        }
    }
    ctx->pc = 0x270964u;
    // 0x270964: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x270964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x270968: 0x10400181  beqz        $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x270968u;
    {
        const bool branch_taken_0x270968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270968u;
        // 0x27096c: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270968) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270970u;
    // 0x270970: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x270970u;
    {
        const bool branch_taken_0x270970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270970u;
        // 0x270974: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270970) {
            ctx->pc = 0x270A20u;
            goto label_270a20;
        }
    }
    ctx->pc = 0x270978u;
    // 0x270978: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x270978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x27097c: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x27097Cu;
    {
        const bool branch_taken_0x27097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27097Cu;
        // 0x270980: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27097c) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270984u;
    // 0x270984: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x270984u;
    {
        const bool branch_taken_0x270984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270984u;
        // 0x270988: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270984) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x27098Cu;
    // 0x27098c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27098Cu;
    {
        const bool branch_taken_0x27098c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27098Cu;
        // 0x270990: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27098c) {
            ctx->pc = 0x2709D8u;
            goto label_2709d8;
        }
    }
    ctx->pc = 0x270994u;
    // 0x270994: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x270994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x270998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270998u;
    {
        const bool branch_taken_0x270998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270998u;
        // 0x27099c: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270998) {
            ctx->pc = 0x2709C0u;
            goto label_2709c0;
        }
    }
    ctx->pc = 0x2709A0u;
    // 0x2709a0: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x2709a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x2709a4: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2709A4u;
    {
        const bool branch_taken_0x2709a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709A4u;
        // 0x2709a8: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709a4) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x2709ACu;
    // 0x2709ac: 0x10820176  beq         $a0, $v0, . + 4 + (0x176 << 2)
    ctx->pc = 0x2709ACu;
    {
        const bool branch_taken_0x2709ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2709ac) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x2709B4u;
    // 0x2709b4: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x2709B4u;
    {
        const bool branch_taken_0x2709b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709b4) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x2709BCu;
    // 0x2709bc: 0x0  nop
    ctx->pc = 0x2709bcu;
    // NOP
label_2709c0:
    // 0x2709c0: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x2709C0u;
    {
        const bool branch_taken_0x2709c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709C0u;
        // 0x2709c4: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709c0) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x2709C8u;
    // 0x2709c8: 0x14400173  bnez        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x2709C8u;
    {
        const bool branch_taken_0x2709c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2709c8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x2709D0u;
    // 0x2709d0: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x2709D0u;
    {
        const bool branch_taken_0x2709d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709d0) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x2709D8u;
label_2709d8:
    // 0x2709d8: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x2709D8u;
    {
        const bool branch_taken_0x2709d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x2709E0u;
    // 0x2709e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2709E0u;
    {
        const bool branch_taken_0x2709e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709E0u;
        // 0x2709e4: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709e0) {
            ctx->pc = 0x270A08u;
            goto label_270a08;
        }
    }
    ctx->pc = 0x2709E8u;
    // 0x2709e8: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x2709e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2709ec: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x2709ECu;
    {
        const bool branch_taken_0x2709ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2709F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709ECu;
        // 0x2709f0: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709ec) {
            ctx->pc = 0x270F48u;
            goto label_270f48;
        }
    }
    ctx->pc = 0x2709F4u;
    // 0x2709f4: 0x50820157  beql        $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x2709F4u;
    {
        const bool branch_taken_0x2709f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2709f4) {
            ctx->pc = 0x2709F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709F4u;
            // 0x2709f8: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x2709FCu;
    // 0x2709fc: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2709FCu;
    {
        const bool branch_taken_0x2709fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709fc) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270A04u;
    // 0x270a04: 0x0  nop
    ctx->pc = 0x270a04u;
    // NOP
label_270a08:
    // 0x270a08: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x270A08u;
    {
        const bool branch_taken_0x270a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A08u;
        // 0x270a0c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a08) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x270A10u;
    // 0x270a10: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x270A10u;
    {
        const bool branch_taken_0x270a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270a10) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270A18u;
    // 0x270a18: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x270A18u;
    {
        const bool branch_taken_0x270a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a18) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270A20u;
label_270a20:
    // 0x270a20: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x270A20u;
    {
        const bool branch_taken_0x270a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A20u;
        // 0x270a24: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a20) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270A28u;
    // 0x270a28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270A28u;
    {
        const bool branch_taken_0x270a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A28u;
        // 0x270a2c: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a28) {
            ctx->pc = 0x270A80u;
            goto label_270a80;
        }
    }
    ctx->pc = 0x270A30u;
    // 0x270a30: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x270a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x270a34: 0x10820154  beq         $a0, $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x270A34u;
    {
        const bool branch_taken_0x270a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A34u;
        // 0x270a38: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a34) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270A3Cu;
    // 0x270a3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270A3Cu;
    {
        const bool branch_taken_0x270a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A3Cu;
        // 0x270a40: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a3c) {
            ctx->pc = 0x270A60u;
            goto label_270a60;
        }
    }
    ctx->pc = 0x270A44u;
    // 0x270a44: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x270a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x270a48: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x270A48u;
    {
        const bool branch_taken_0x270a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A48u;
        // 0x270a4c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a48) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270A50u;
    // 0x270a50: 0x50820140  beql        $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x270A50u;
    {
        const bool branch_taken_0x270a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270a50) {
            ctx->pc = 0x270A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A50u;
            // 0x270a54: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270A58u;
    // 0x270a58: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x270A58u;
    {
        const bool branch_taken_0x270a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a58) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270A60u;
label_270a60:
    // 0x270a60: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x270A60u;
    {
        const bool branch_taken_0x270a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A60u;
        // 0x270a64: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a60) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270A68u;
    // 0x270a68: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x270A68u;
    {
        const bool branch_taken_0x270a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A68u;
        // 0x270a6c: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a68) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270A70u;
    // 0x270a70: 0x50820138  beql        $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x270A70u;
    {
        const bool branch_taken_0x270a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270a70) {
            ctx->pc = 0x270A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A70u;
            // 0x270a74: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270A78u;
    // 0x270a78: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x270A78u;
    {
        const bool branch_taken_0x270a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a78) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270A80u;
label_270a80:
    // 0x270a80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270A80u;
    {
        const bool branch_taken_0x270a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A80u;
        // 0x270a84: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a80) {
            ctx->pc = 0x270AA8u;
            goto label_270aa8;
        }
    }
    ctx->pc = 0x270A88u;
    // 0x270a88: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x270a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x270a8c: 0x10400138  beqz        $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x270A8Cu;
    {
        const bool branch_taken_0x270a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A8Cu;
        // 0x270a90: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a8c) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270A94u;
    // 0x270a94: 0x1082013c  beq         $a0, $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x270A94u;
    {
        const bool branch_taken_0x270a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270a94) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270A9Cu;
    // 0x270a9c: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x270A9Cu;
    {
        const bool branch_taken_0x270a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a9c) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270AA4u;
    // 0x270aa4: 0x0  nop
    ctx->pc = 0x270aa4u;
    // NOP
label_270aa8:
    // 0x270aa8: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x270AA8u;
    {
        const bool branch_taken_0x270aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AA8u;
        // 0x270aac: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270aa8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270AB0u;
    // 0x270ab0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270AB0u;
    {
        const bool branch_taken_0x270ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AB0u;
        // 0x270ab4: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ab0) {
            ctx->pc = 0x270AD0u;
            goto label_270ad0;
        }
    }
    ctx->pc = 0x270AB8u;
    // 0x270ab8: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x270ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x270abc: 0x50820125  beql        $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x270ABCu;
    {
        const bool branch_taken_0x270abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270abc) {
            ctx->pc = 0x270AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270ABCu;
            // 0x270ac0: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270AC4u;
    // 0x270ac4: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x270AC4u;
    {
        const bool branch_taken_0x270ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ac4) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270ACCu;
    // 0x270acc: 0x0  nop
    ctx->pc = 0x270accu;
    // NOP
label_270ad0:
    // 0x270ad0: 0x10820127  beq         $a0, $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x270AD0u;
    {
        const bool branch_taken_0x270ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270ad0) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270AD8u;
    // 0x270ad8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x270AD8u;
    {
        const bool branch_taken_0x270ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ad8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270AE0u;
label_270ae0:
    // 0x270ae0: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x270AE0u;
    {
        const bool branch_taken_0x270ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AE0u;
        // 0x270ae4: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ae0) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270AE8u;
    // 0x270ae8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x270AE8u;
    {
        const bool branch_taken_0x270ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AE8u;
        // 0x270aec: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ae8) {
            ctx->pc = 0x270BA8u;
            goto label_270ba8;
        }
    }
    ctx->pc = 0x270AF0u;
    // 0x270af0: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x270af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x270af4: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x270AF4u;
    {
        const bool branch_taken_0x270af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AF4u;
        // 0x270af8: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270af4) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270AFCu;
    // 0x270afc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x270AFCu;
    {
        const bool branch_taken_0x270afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AFCu;
        // 0x270b00: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270afc) {
            ctx->pc = 0x270B48u;
            goto label_270b48;
        }
    }
    ctx->pc = 0x270B04u;
    // 0x270b04: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x270b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x270b08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270B08u;
    {
        const bool branch_taken_0x270b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B08u;
        // 0x270b0c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b08) {
            ctx->pc = 0x270B30u;
            goto label_270b30;
        }
    }
    ctx->pc = 0x270B10u;
    // 0x270b10: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x270b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x270b14: 0x10400116  beqz        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x270B14u;
    {
        const bool branch_taken_0x270b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B14u;
        // 0x270b18: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b14) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270B1Cu;
    // 0x270b1c: 0x1082011a  beq         $a0, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x270B1Cu;
    {
        const bool branch_taken_0x270b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270b1c) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270B24u;
    // 0x270b24: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x270B24u;
    {
        const bool branch_taken_0x270b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b24) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270B2Cu;
    // 0x270b2c: 0x0  nop
    ctx->pc = 0x270b2cu;
    // NOP
label_270b30:
    // 0x270b30: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x270B30u;
    {
        const bool branch_taken_0x270b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B30u;
        // 0x270b34: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b30) {
            ctx->pc = 0x270F18u;
            goto label_270f18;
        }
    }
    ctx->pc = 0x270B38u;
    // 0x270b38: 0x50820106  beql        $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x270B38u;
    {
        const bool branch_taken_0x270b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270b38) {
            ctx->pc = 0x270B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B38u;
            // 0x270b3c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270B40u;
    // 0x270b40: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x270B40u;
    {
        const bool branch_taken_0x270b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b40) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270B48u;
label_270b48:
    // 0x270b48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270B48u;
    {
        const bool branch_taken_0x270b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B48u;
        // 0x270b4c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b48) {
            ctx->pc = 0x270B70u;
            goto label_270b70;
        }
    }
    ctx->pc = 0x270B50u;
    // 0x270b50: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x270b54: 0x10400106  beqz        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x270B54u;
    {
        const bool branch_taken_0x270b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B54u;
        // 0x270b58: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b54) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270B5Cu;
    // 0x270b5c: 0x1082010a  beq         $a0, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x270B5Cu;
    {
        const bool branch_taken_0x270b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270b5c) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270B64u;
    // 0x270b64: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x270B64u;
    {
        const bool branch_taken_0x270b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b64) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270B6Cu;
    // 0x270b6c: 0x0  nop
    ctx->pc = 0x270b6cu;
    // NOP
label_270b70:
    // 0x270b70: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x270B70u;
    {
        const bool branch_taken_0x270b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B70u;
        // 0x270b74: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b70) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270B78u;
    // 0x270b78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270B78u;
    {
        const bool branch_taken_0x270b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B78u;
        // 0x270b7c: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b78) {
            ctx->pc = 0x270B98u;
            goto label_270b98;
        }
    }
    ctx->pc = 0x270B80u;
    // 0x270b80: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x270b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x270b84: 0x508200f3  beql        $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x270B84u;
    {
        const bool branch_taken_0x270b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270b84) {
            ctx->pc = 0x270B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B84u;
            // 0x270b88: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270B8Cu;
    // 0x270b8c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x270B8Cu;
    {
        const bool branch_taken_0x270b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b8c) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270B94u;
    // 0x270b94: 0x0  nop
    ctx->pc = 0x270b94u;
    // NOP
label_270b98:
    // 0x270b98: 0x508200ff  beql        $a0, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x270B98u;
    {
        const bool branch_taken_0x270b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270b98) {
            ctx->pc = 0x270B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B98u;
            // 0x270b9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270BA0u;
    // 0x270ba0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x270BA0u;
    {
        const bool branch_taken_0x270ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ba0) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270BA8u;
label_270ba8:
    // 0x270ba8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270BA8u;
    {
        const bool branch_taken_0x270ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BA8u;
        // 0x270bac: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ba8) {
            ctx->pc = 0x270C00u;
            goto label_270c00;
        }
    }
    ctx->pc = 0x270BB0u;
    // 0x270bb0: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x270bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x270bb4: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x270BB4u;
    {
        const bool branch_taken_0x270bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BB4u;
        // 0x270bb8: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bb4) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270BBCu;
    // 0x270bbc: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x270BBCu;
    {
        const bool branch_taken_0x270bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BBCu;
        // 0x270bc0: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bbc) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270BC4u;
    // 0x270bc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270BC4u;
    {
        const bool branch_taken_0x270bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BC4u;
        // 0x270bc8: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bc4) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270BCCu;
    // 0x270bcc: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x270bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x270bd0: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x270BD0u;
    {
        const bool branch_taken_0x270bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD0u;
        // 0x270bd4: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bd0) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270BD8u;
    // 0x270bd8: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x270BD8u;
    {
        const bool branch_taken_0x270bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270bd8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270BE0u;
    // 0x270be0: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270be0) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270BE8u;
label_270be8:
    // 0x270be8: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x270BE8u;
    {
        const bool branch_taken_0x270be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BE8u;
        // 0x270bec: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270be8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270BF0u;
    // 0x270bf0: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x270BF0u;
    {
        const bool branch_taken_0x270bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270bf0) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270BF8u;
    // 0x270bf8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x270BF8u;
    {
        const bool branch_taken_0x270bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270bf8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270C00u;
label_270c00:
    // 0x270c00: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x270C00u;
    {
        const bool branch_taken_0x270c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C00u;
        // 0x270c04: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c00) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270C08u;
    // 0x270c08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270C08u;
    {
        const bool branch_taken_0x270c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C08u;
        // 0x270c0c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c08) {
            ctx->pc = 0x270C30u;
            goto label_270c30;
        }
    }
    ctx->pc = 0x270C10u;
    // 0x270c10: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x270c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x270c14: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x270C14u;
    {
        const bool branch_taken_0x270c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C14u;
        // 0x270c18: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c14) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270C1Cu;
    // 0x270c1c: 0x508200cd  beql        $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x270C1Cu;
    {
        const bool branch_taken_0x270c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270c1c) {
            ctx->pc = 0x270C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270C1Cu;
            // 0x270c20: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270C24u;
    // 0x270c24: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x270C24u;
    {
        const bool branch_taken_0x270c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c24) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270C2Cu;
    // 0x270c2c: 0x0  nop
    ctx->pc = 0x270c2cu;
    // NOP
label_270c30:
    // 0x270c30: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x270C30u;
    {
        const bool branch_taken_0x270c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C30u;
        // 0x270c34: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c30) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270C38u;
    // 0x270c38: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x270C38u;
    {
        const bool branch_taken_0x270c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270c38) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270C40u;
    // 0x270c40: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x270C40u;
    {
        const bool branch_taken_0x270c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c40) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270C48u;
label_270c48:
    // 0x270c48: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x270C48u;
    {
        const bool branch_taken_0x270c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C48u;
        // 0x270c4c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c48) {
            ctx->pc = 0x270F48u;
            goto label_270f48;
        }
    }
    ctx->pc = 0x270C50u;
    // 0x270c50: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x270C50u;
    {
        const bool branch_taken_0x270c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C50u;
        // 0x270c54: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c50) {
            ctx->pc = 0x270DA8u;
            goto label_270da8;
        }
    }
    ctx->pc = 0x270C58u;
    // 0x270c58: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x270c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x270c5c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x270C5Cu;
    {
        const bool branch_taken_0x270c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C5Cu;
        // 0x270c60: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c5c) {
            ctx->pc = 0x270D00u;
            goto label_270d00;
        }
    }
    ctx->pc = 0x270C64u;
    // 0x270c64: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x270c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x270c68: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x270C68u;
    {
        const bool branch_taken_0x270c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C68u;
        // 0x270c6c: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c68) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270C70u;
    // 0x270c70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x270C70u;
    {
        const bool branch_taken_0x270c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C70u;
        // 0x270c74: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c70) {
            ctx->pc = 0x270CB8u;
            goto label_270cb8;
        }
    }
    ctx->pc = 0x270C78u;
    // 0x270c78: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x270c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x270c7c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x270C7Cu;
    {
        const bool branch_taken_0x270c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C7Cu;
        // 0x270c80: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c7c) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270C84u;
    // 0x270c84: 0x108200c0  beq         $a0, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x270C84u;
    {
        const bool branch_taken_0x270c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C84u;
        // 0x270c88: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c84) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270C8Cu;
    // 0x270c8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270C8Cu;
    {
        const bool branch_taken_0x270c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C8Cu;
        // 0x270c90: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c8c) {
            ctx->pc = 0x270CA8u;
            goto label_270ca8;
        }
    }
    ctx->pc = 0x270C94u;
    // 0x270c94: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x270c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x270c98: 0x508200ae  beql        $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x270C98u;
    {
        const bool branch_taken_0x270c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270c98) {
            ctx->pc = 0x270C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270C98u;
            // 0x270c9c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270CA0u;
    // 0x270ca0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x270CA0u;
    {
        const bool branch_taken_0x270ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ca0) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270CA8u;
label_270ca8:
    // 0x270ca8: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x270CA8u;
    {
        const bool branch_taken_0x270ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ca8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270CB0u;
    // 0x270cb0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x270CB0u;
    {
        const bool branch_taken_0x270cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270cb0) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270CB8u;
label_270cb8:
    // 0x270cb8: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x270CB8u;
    {
        const bool branch_taken_0x270cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CB8u;
        // 0x270cbc: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cb8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270CC0u;
    // 0x270cc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270CC0u;
    {
        const bool branch_taken_0x270cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CC0u;
        // 0x270cc4: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cc0) {
            ctx->pc = 0x270CE8u;
            goto label_270ce8;
        }
    }
    ctx->pc = 0x270CC8u;
    // 0x270cc8: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x270cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x270ccc: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x270CCCu;
    {
        const bool branch_taken_0x270ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CCCu;
        // 0x270cd0: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ccc) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270CD4u;
    // 0x270cd4: 0x5082009f  beql        $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x270CD4u;
    {
        const bool branch_taken_0x270cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270cd4) {
            ctx->pc = 0x270CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270CD4u;
            // 0x270cd8: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270CDCu;
    // 0x270cdc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x270CDCu;
    {
        const bool branch_taken_0x270cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270cdc) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270CE4u;
    // 0x270ce4: 0x0  nop
    ctx->pc = 0x270ce4u;
    // NOP
label_270ce8:
    // 0x270ce8: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x270CE8u;
    {
        const bool branch_taken_0x270ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CE8u;
        // 0x270cec: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ce8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270CF0u;
    // 0x270cf0: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x270CF0u;
    {
        const bool branch_taken_0x270cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270cf0) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270CF8u;
    // 0x270cf8: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x270CF8u;
    {
        const bool branch_taken_0x270cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270cf8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270D00u;
label_270d00:
    // 0x270d00: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x270D00u;
    {
        const bool branch_taken_0x270d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D00u;
        // 0x270d04: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d00) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270D08u;
    // 0x270d08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x270D08u;
    {
        const bool branch_taken_0x270d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D08u;
        // 0x270d0c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d08) {
            ctx->pc = 0x270D60u;
            goto label_270d60;
        }
    }
    ctx->pc = 0x270D10u;
    // 0x270d10: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x270d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x270d14: 0x1082009c  beq         $a0, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x270D14u;
    {
        const bool branch_taken_0x270d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D14u;
        // 0x270d18: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d14) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270D1Cu;
    // 0x270d1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270D1Cu;
    {
        const bool branch_taken_0x270d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D1Cu;
        // 0x270d20: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d1c) {
            ctx->pc = 0x270D40u;
            goto label_270d40;
        }
    }
    ctx->pc = 0x270D24u;
    // 0x270d24: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x270d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x270d28: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x270D28u;
    {
        const bool branch_taken_0x270d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D28u;
        // 0x270d2c: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d28) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270D30u;
    // 0x270d30: 0x50820088  beql        $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x270D30u;
    {
        const bool branch_taken_0x270d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270d30) {
            ctx->pc = 0x270D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270D30u;
            // 0x270d34: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270D38u;
    // 0x270d38: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x270D38u;
    {
        const bool branch_taken_0x270d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d38) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270D40u;
label_270d40:
    // 0x270d40: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x270D40u;
    {
        const bool branch_taken_0x270d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D40u;
        // 0x270d44: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d40) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270D48u;
    // 0x270d48: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x270D48u;
    {
        const bool branch_taken_0x270d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D48u;
        // 0x270d4c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d48) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270D50u;
    // 0x270d50: 0x50820080  beql        $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x270D50u;
    {
        const bool branch_taken_0x270d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270d50) {
            ctx->pc = 0x270D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270D50u;
            // 0x270d54: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270D58u;
    // 0x270d58: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x270D58u;
    {
        const bool branch_taken_0x270d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d58) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270D60u;
label_270d60:
    // 0x270d60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270D60u;
    {
        const bool branch_taken_0x270d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D60u;
        // 0x270d64: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d60) {
            ctx->pc = 0x270D88u;
            goto label_270d88;
        }
    }
    ctx->pc = 0x270D68u;
    // 0x270d68: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x270d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x270d6c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x270D6Cu;
    {
        const bool branch_taken_0x270d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D6Cu;
        // 0x270d70: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d6c) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270D74u;
    // 0x270d74: 0x10820084  beq         $a0, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x270D74u;
    {
        const bool branch_taken_0x270d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270d74) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270D7Cu;
    // 0x270d7c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x270D7Cu;
    {
        const bool branch_taken_0x270d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270d7c) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270D84u;
    // 0x270d84: 0x0  nop
    ctx->pc = 0x270d84u;
    // NOP
label_270d88:
    // 0x270d88: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x270D88u;
    {
        const bool branch_taken_0x270d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D88u;
        // 0x270d8c: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d88) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x270D90u;
    // 0x270d90: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x270D90u;
    {
        const bool branch_taken_0x270d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D90u;
        // 0x270d94: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d90) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270D98u;
    // 0x270d98: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x270D98u;
    {
        const bool branch_taken_0x270d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270d98) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270DA0u;
    // 0x270da0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x270DA0u;
    {
        const bool branch_taken_0x270da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270da0) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x270DA8u;
label_270da8:
    // 0x270da8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x270DA8u;
    {
        const bool branch_taken_0x270da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DA8u;
        // 0x270dac: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270da8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270DB0u;
    // 0x270db0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x270DB0u;
    {
        const bool branch_taken_0x270db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DB0u;
        // 0x270db4: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270db0) {
            ctx->pc = 0x270E68u;
            goto label_270e68;
        }
    }
    ctx->pc = 0x270DB8u;
    // 0x270db8: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x270db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x270dbc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x270DBCu;
    {
        const bool branch_taken_0x270dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DBCu;
        // 0x270dc0: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dbc) {
            ctx->pc = 0x270E10u;
            goto label_270e10;
        }
    }
    ctx->pc = 0x270DC4u;
    // 0x270dc4: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x270dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x270dc8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x270DC8u;
    {
        const bool branch_taken_0x270dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DC8u;
        // 0x270dcc: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dc8) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270DD0u;
    // 0x270dd0: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x270DD0u;
    {
        const bool branch_taken_0x270dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DD0u;
        // 0x270dd4: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dd0) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270DD8u;
    // 0x270dd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270DD8u;
    {
        const bool branch_taken_0x270dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DD8u;
        // 0x270ddc: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270dd8) {
            ctx->pc = 0x270DF8u;
            goto label_270df8;
        }
    }
    ctx->pc = 0x270DE0u;
    // 0x270de0: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x270de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x270de4: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x270DE4u;
    {
        const bool branch_taken_0x270de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270de4) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x270DECu;
    // 0x270dec: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x270DECu;
    {
        const bool branch_taken_0x270dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270dec) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270DF4u;
    // 0x270df4: 0x0  nop
    ctx->pc = 0x270df4u;
    // NOP
label_270df8:
    // 0x270df8: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x270DF8u;
    {
        const bool branch_taken_0x270df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DF8u;
        // 0x270dfc: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270df8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270E00u;
    // 0x270e00: 0x10820061  beq         $a0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x270E00u;
    {
        const bool branch_taken_0x270e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270e00) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270E08u;
    // 0x270e08: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x270E08u;
    {
        const bool branch_taken_0x270e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e08) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270E10u;
label_270e10:
    // 0x270e10: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x270E10u;
    {
        const bool branch_taken_0x270e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E10u;
        // 0x270e14: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e10) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270E18u;
    // 0x270e18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270E18u;
    {
        const bool branch_taken_0x270e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E18u;
        // 0x270e1c: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e18) {
            ctx->pc = 0x270E40u;
            goto label_270e40;
        }
    }
    ctx->pc = 0x270E20u;
    // 0x270e20: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x270e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x270e24: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x270E24u;
    {
        const bool branch_taken_0x270e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E24u;
        // 0x270e28: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e24) {
            ctx->pc = 0x270F30u;
            goto label_270f30;
        }
    }
    ctx->pc = 0x270E2Cu;
    // 0x270e2c: 0x50820049  beql        $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x270E2Cu;
    {
        const bool branch_taken_0x270e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270e2c) {
            ctx->pc = 0x270E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270E2Cu;
            // 0x270e30: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270E34u;
    // 0x270e34: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x270E34u;
    {
        const bool branch_taken_0x270e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e34) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270E3Cu;
    // 0x270e3c: 0x0  nop
    ctx->pc = 0x270e3cu;
    // NOP
label_270e40:
    // 0x270e40: 0x10820051  beq         $a0, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x270E40u;
    {
        const bool branch_taken_0x270e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E40u;
        // 0x270e44: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e40) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270E48u;
    // 0x270e48: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x270E48u;
    {
        const bool branch_taken_0x270e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E48u;
        // 0x270e4c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e48) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270E50u;
    // 0x270e50: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x270E50u;
    {
        const bool branch_taken_0x270e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E50u;
        // 0x270e54: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e50) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270E58u;
    // 0x270e58: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x270E58u;
    {
        const bool branch_taken_0x270e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270e58) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270E60u;
    // 0x270e60: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x270E60u;
    {
        const bool branch_taken_0x270e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270e60) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270E68u;
label_270e68:
    // 0x270e68: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x270E68u;
    {
        const bool branch_taken_0x270e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E68u;
        // 0x270e6c: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e68) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270E70u;
    // 0x270e70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x270E70u;
    {
        const bool branch_taken_0x270e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E70u;
        // 0x270e74: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e70) {
            ctx->pc = 0x270EC0u;
            goto label_270ec0;
        }
    }
    ctx->pc = 0x270E78u;
    // 0x270e78: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x270e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x270e7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x270E7Cu;
    {
        const bool branch_taken_0x270e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E7Cu;
        // 0x270e80: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e7c) {
            ctx->pc = 0x270EA8u;
            goto label_270ea8;
        }
    }
    ctx->pc = 0x270E84u;
    // 0x270e84: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x270e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x270e88: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x270E88u;
    {
        const bool branch_taken_0x270e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E88u;
        // 0x270e8c: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e88) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270E90u;
    // 0x270e90: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x270E90u;
    {
        const bool branch_taken_0x270e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E90u;
        // 0x270e94: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e90) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270E98u;
    // 0x270e98: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x270E98u;
    {
        const bool branch_taken_0x270e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270e98) {
            ctx->pc = 0x270F88u;
            goto label_270f88;
        }
    }
    ctx->pc = 0x270EA0u;
    // 0x270ea0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x270EA0u;
    {
        const bool branch_taken_0x270ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ea0) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270EA8u;
label_270ea8:
    // 0x270ea8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x270EA8u;
    {
        const bool branch_taken_0x270ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EA8u;
        // 0x270eac: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ea8) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270EB0u;
    // 0x270eb0: 0x50820028  beql        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x270EB0u;
    {
        const bool branch_taken_0x270eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270eb0) {
            ctx->pc = 0x270EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270EB0u;
            // 0x270eb4: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270EB8u;
    // 0x270eb8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x270EB8u;
    {
        const bool branch_taken_0x270eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270eb8) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270EC0u;
label_270ec0:
    // 0x270ec0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x270ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x270ec4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x270EC4u;
    {
        const bool branch_taken_0x270ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EC4u;
        // 0x270ec8: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ec4) {
            ctx->pc = 0x270F00u;
            goto label_270f00;
        }
    }
    ctx->pc = 0x270ECCu;
    // 0x270ecc: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x270eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x270ed0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x270ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x270ed4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x270ED4u;
    {
        const bool branch_taken_0x270ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270ED4u;
        // 0x270ed8: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ed4) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270EDCu;
    // 0x270edc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x270edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x270ee0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x270EE0u;
    {
        const bool branch_taken_0x270ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EE0u;
        // 0x270ee4: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ee0) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270EE8u;
    // 0x270ee8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x270ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x270eec: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x270EECu;
    {
        const bool branch_taken_0x270eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270eec) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270EF4u;
    // 0x270ef4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x270EF4u;
    {
        const bool branch_taken_0x270ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ef4) {
            ctx->pc = 0x270F70u;
            goto label_270f70;
        }
    }
    ctx->pc = 0x270EFCu;
    // 0x270efc: 0x0  nop
    ctx->pc = 0x270efcu;
    // NOP
label_270f00:
    // 0x270f00: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x270F00u;
    {
        const bool branch_taken_0x270f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F00u;
        // 0x270f04: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f00) {
            ctx->pc = 0x270F50u;
            goto label_270f50;
        }
    }
    ctx->pc = 0x270F08u;
    // 0x270f08: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x270F08u;
    {
        const bool branch_taken_0x270f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x270f08) {
            ctx->pc = 0x270F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270F08u;
            // 0x270f0c: 0x8cc203c8  lw          $v0, 0x3C8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270F54u;
            goto label_270f54;
        }
    }
    ctx->pc = 0x270F10u;
    // 0x270f10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x270F10u;
    {
        const bool branch_taken_0x270f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270f10) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F18u;
label_270f18:
    // 0x270f18: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270F18u;
    SET_GPR_U32(ctx, 31, 0x270F20u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270F18u, 0x270F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F20u;
label_270f20:
    // 0x270f20: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x270f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x270f24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x270F24u;
    {
        const bool branch_taken_0x270f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F24u;
        // 0x270f28: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f24) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F2Cu;
    // 0x270f2c: 0x0  nop
    ctx->pc = 0x270f2cu;
    // NOP
label_270f30:
    // 0x270f30: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270F30u;
    SET_GPR_U32(ctx, 31, 0x270F38u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270F30u, 0x270F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F38u;
label_270f38:
    // 0x270f38: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x270f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x270f3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x270F3Cu;
    {
        const bool branch_taken_0x270f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F3Cu;
        // 0x270f40: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f3c) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F44u;
    // 0x270f44: 0x0  nop
    ctx->pc = 0x270f44u;
    // NOP
label_270f48:
    // 0x270f48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x270F48u;
    {
        const bool branch_taken_0x270f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F48u;
        // 0x270f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f48) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F50u;
label_270f50:
    // 0x270f50: 0x8cc203c8  lw          $v0, 0x3C8($a2)
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 968)));
label_270f54:
    // 0x270f54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x270F54u;
    {
        const bool branch_taken_0x270f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F54u;
        // 0x270f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f54) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F5Cu;
    // 0x270f5c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270F5Cu;
    SET_GPR_U32(ctx, 31, 0x270F64u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270F5Cu, 0x270F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F64u;
label_270f64:
    // 0x270f64: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x270f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x270f68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270F68u;
    {
        const bool branch_taken_0x270f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F68u;
        // 0x270f6c: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f68) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F70u;
label_270f70:
    // 0x270f70: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270F70u;
    SET_GPR_U32(ctx, 31, 0x270F78u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270F70u, 0x270F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F78u;
label_270f78:
    // 0x270f78: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x270f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x270f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x270F7Cu;
    {
        const bool branch_taken_0x270f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F7Cu;
        // 0x270f80: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f7c) {
            ctx->pc = 0x270F98u;
            goto label_270f98;
        }
    }
    ctx->pc = 0x270F84u;
    // 0x270f84: 0x0  nop
    ctx->pc = 0x270f84u;
    // NOP
label_270f88:
    // 0x270f88: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x270F88u;
    SET_GPR_U32(ctx, 31, 0x270F90u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x270F88u, 0x270F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F90u;
label_270f90:
    // 0x270f90: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x270f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x270f94: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x270f94u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_270f98:
    // 0x270f98: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x270F98u;
    {
        const bool branch_taken_0x270f98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F98u;
        // 0x270f9c: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f98) {
            ctx->pc = 0x270FB8u;
            goto label_270fb8;
        }
    }
    ctx->pc = 0x270FA0u;
    // 0x270fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fa4: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x270FA4u;
    SET_GPR_U32(ctx, 31, 0x270FACu);
    ctx->pc = 0x270FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FA4u;
    // 0x270fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x270FA4u, 0x270FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FACu;
label_270fac:
    // 0x270fac: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x270facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x270fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x270FB0u;
    {
        const bool branch_taken_0x270fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FB0u;
        // 0x270fb4: 0x2a82b  sltu        $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fb0) {
            ctx->pc = 0x270FBCu;
            goto label_270fbc;
        }
    }
    ctx->pc = 0x270FB8u;
label_270fb8:
    // 0x270fb8: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x270fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_270fbc:
    // 0x270fbc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x270FBCu;
    {
        const bool branch_taken_0x270fbc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FBCu;
        // 0x270fc0: 0x2861021  addu        $v0, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fbc) {
            ctx->pc = 0x270FD8u;
            goto label_270fd8;
        }
    }
    ctx->pc = 0x270FC4u;
    // 0x270fc4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x270fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x270fc8: 0x8c45014c  lw          $a1, 0x14C($v0)
    ctx->pc = 0x270fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x270fcc: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x270fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x270fd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x270fd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x270fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_270fd8:
    // 0x270fd8: 0x8cc20148  lw          $v0, 0x148($a2)
    ctx->pc = 0x270fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x270fdc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x270fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x270fe0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x270fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270fe4: 0x5440fe42  bnel        $v0, $zero, . + 4 + (-0x1BE << 2)
    ctx->pc = 0x270FE4u;
    {
        const bool branch_taken_0x270fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270fe4) {
            ctx->pc = 0x270FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270FE4u;
            // 0x270fe8: 0x12a080  sll         $s4, $s2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2708F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2708f0;
        }
    }
    ctx->pc = 0x270FECu;
label_270fec:
    // 0x270fec: 0x5a600007  blezl       $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x270FECu;
    {
        const bool branch_taken_0x270fec = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x270fec) {
            ctx->pc = 0x270FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270FECu;
            // 0x270ff0: 0xacc00144  sw          $zero, 0x144($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27100Cu;
            goto label_27100c;
        }
    }
    ctx->pc = 0x270FF4u;
    // 0x270ff4: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x270ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x270ff8: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x270ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x270ffc: 0x28422000  slti        $v0, $v0, 0x2000
    ctx->pc = 0x270ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x271000: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271000u;
    {
        const bool branch_taken_0x271000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271000) {
            ctx->pc = 0x271020u;
            goto label_271020;
        }
    }
    ctx->pc = 0x271008u;
    // 0x271008: 0xacc00144  sw          $zero, 0x144($a2)
    ctx->pc = 0x271008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 0));
label_27100c:
    // 0x27100c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27100cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271010: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x271010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271014: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x271014u;
    {
        const bool branch_taken_0x271014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271014u;
        // 0x271018: 0xac600148  sw          $zero, 0x148($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271014) {
            ctx->pc = 0x271190u;
            goto label_271190;
        }
    }
    ctx->pc = 0x27101Cu;
    // 0x27101c: 0x0  nop
    ctx->pc = 0x27101cu;
    // NOP
label_271020:
    // 0x271020: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x271020u;
    SET_GPR_U32(ctx, 31, 0x271028u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x271020u, 0x271028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271028u;
label_271028:
    // 0x271028: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x271028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x27102c: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x27102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x271030: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271034: 0x8cc50064  lw          $a1, 0x64($a2)
    ctx->pc = 0x271034u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x271038: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x271038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27103c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x27103cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x271040: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x271040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x271044: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x271044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x271048: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x271048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27104c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x27104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x271050: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x271050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x271054: 0x24457fff  addiu       $a1, $v0, 0x7FFF
    ctx->pc = 0x271054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x271058: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x271058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27105c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x27105cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x271060: 0x28bc3  sra         $s1, $v0, 15
    ctx->pc = 0x271060u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 15));
    // 0x271064: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x271064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x271068: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x27106c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x27106cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271070: 0xc09905e  jal         func_264178
    ctx->pc = 0x271070u;
    SET_GPR_U32(ctx, 31, 0x271078u);
    ctx->pc = 0x271074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271070u;
    // 0x271074: 0x94c50008  lhu         $a1, 0x8($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x271070u, 0x271078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271078u;
label_271078:
    // 0x271078: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x271078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x27107c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27107cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271080: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x271080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x271084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x271084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x271088: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271088u;
    {
        const bool branch_taken_0x271088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271088u;
        // 0x27108c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271088) {
            ctx->pc = 0x27109Cu;
            goto label_27109c;
        }
    }
    ctx->pc = 0x271090u;
    // 0x271090: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x271090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x271094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x271094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x271098: 0xac620144  sw          $v0, 0x144($v1)
    ctx->pc = 0x271098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
label_27109c:
    // 0x27109c: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x27109cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2710a0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2710A0u;
    {
        const bool branch_taken_0x2710a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710A0u;
        // 0x2710a4: 0x8f86aa78  lw          $a2, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710a0) {
            ctx->pc = 0x271118u;
            goto label_271118;
        }
    }
    ctx->pc = 0x2710A8u;
    // 0x2710a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710ac: 0x8cc20298  lw          $v0, 0x298($a2)
    ctx->pc = 0x2710acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
    // 0x2710b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2710b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2710b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2710B4u;
    {
        const bool branch_taken_0x2710b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710b4) {
            ctx->pc = 0x2710B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2710B4u;
            // 0x2710b8: 0xacc00144  sw          $zero, 0x144($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2710F8u;
            goto label_2710f8;
        }
    }
    ctx->pc = 0x2710BCu;
    // 0x2710bc: 0x84c2036c  lh          $v0, 0x36C($a2)
    ctx->pc = 0x2710bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 876)));
    // 0x2710c0: 0x8cc30144  lw          $v1, 0x144($a2)
    ctx->pc = 0x2710c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 324)));
    // 0x2710c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2710c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2710c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2710C8u;
    {
        const bool branch_taken_0x2710c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710c8) {
            ctx->pc = 0x2710CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2710C8u;
            // 0x2710cc: 0xacc00144  sw          $zero, 0x144($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2710F8u;
            goto label_2710f8;
        }
    }
    ctx->pc = 0x2710D0u;
    // 0x2710d0: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x2710d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x2710d4: 0x8cc30254  lw          $v1, 0x254($a2)
    ctx->pc = 0x2710d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
    // 0x2710d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2710d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2710dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2710DCu;
    {
        const bool branch_taken_0x2710dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710dc) {
            ctx->pc = 0x2710E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2710DCu;
            // 0x2710e0: 0xacc00144  sw          $zero, 0x144($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2710F8u;
            goto label_2710f8;
        }
    }
    ctx->pc = 0x2710E4u;
    // 0x2710e4: 0xc09bfc2  jal         func_26FF08
    ctx->pc = 0x2710E4u;
    SET_GPR_U32(ctx, 31, 0x2710ECu);
    ctx->pc = 0x2710E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710E4u;
    // 0x2710e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FF08u, 0x2710E4u, 0x2710ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710ECu;
label_2710ec:
    // 0x2710ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2710ECu;
    {
        const bool branch_taken_0x2710ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710ECu;
        // 0x2710f0: 0x8f86aa78  lw          $a2, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710ec) {
            ctx->pc = 0x271118u;
            goto label_271118;
        }
    }
    ctx->pc = 0x2710F4u;
    // 0x2710f4: 0xacc00144  sw          $zero, 0x144($a2)
    ctx->pc = 0x2710f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 324), GPR_U32(ctx, 0));
label_2710f8:
    // 0x2710f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2710f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2710fc: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2710fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271100: 0xac600148  sw          $zero, 0x148($v1)
    ctx->pc = 0x271100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 0));
    // 0x271104: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x271104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271108: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x271108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x27110c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x27110cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x271110: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x271110u;
    {
        const bool branch_taken_0x271110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271110u;
        // 0x271114: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271110) {
            ctx->pc = 0x271190u;
            goto label_271190;
        }
    }
    ctx->pc = 0x271118u;
label_271118:
    // 0x271118: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27111c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x27111cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x271120: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x271120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x271124: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271124u;
    {
        const bool branch_taken_0x271124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271124u;
        // 0x271128: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271124) {
            ctx->pc = 0x271158u;
            goto label_271158;
        }
    }
    ctx->pc = 0x27112Cu;
    // 0x27112c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x27112Cu;
    SET_GPR_U32(ctx, 31, 0x271134u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x27112Cu, 0x271134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271134u;
label_271134:
    // 0x271134: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x271134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271138: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x271138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x27113c: 0x8483036e  lh          $v1, 0x36E($a0)
    ctx->pc = 0x27113cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 878)));
    // 0x271140: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271144: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271144u;
    {
        const bool branch_taken_0x271144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271144u;
        // 0x271148: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271144) {
            ctx->pc = 0x271158u;
            goto label_271158;
        }
    }
    ctx->pc = 0x27114Cu;
    // 0x27114c: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x27114cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x271150: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x271150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x271154: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x271154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
label_271158:
    // 0x271158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x271158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27115c: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x27115cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x271160: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x271160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271164: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x271164u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x271168: 0xc09981c  jal         func_266070
    ctx->pc = 0x271168u;
    SET_GPR_U32(ctx, 31, 0x271170u);
    ctx->pc = 0x27116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271168u;
    // 0x27116c: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x271168u, 0x271170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271170u;
label_271170:
    // 0x271170: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x271170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271174: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x271174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x271178: 0xc09905e  jal         func_264178
    ctx->pc = 0x271178u;
    SET_GPR_U32(ctx, 31, 0x271180u);
    ctx->pc = 0x27117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271178u;
    // 0x27117c: 0x94650008  lhu         $a1, 0x8($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x271178u, 0x271180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271180u;
label_271180:
    // 0x271180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271184: 0xc09b430  jal         func_26D0C0
    ctx->pc = 0x271184u;
    SET_GPR_U32(ctx, 31, 0x27118Cu);
    ctx->pc = 0x271188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271184u;
    // 0x271188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D0C0u, 0x271184u, 0x27118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27118Cu;
label_27118c:
    // 0x27118c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271190:
    // 0x271190: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x271190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x271194: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x271194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x271198: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x271198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27119c: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x27119cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2711a0: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2711a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2711a4: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x2711a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2711a8: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2711a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2711ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2711ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2711B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711ACu;
        // 0x2711b0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2711ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2711B4u;
    // 0x2711b4: 0x0  nop
    ctx->pc = 0x2711b4u;
    // NOP
    ctx->pc = 0x2711b8u;
}
