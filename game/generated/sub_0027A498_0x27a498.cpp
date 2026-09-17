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

// Function: sub_0027A498
// Address: 0x27a498 - 0x27a610
void sub_0027A498_0x27a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A498_0x27a498");
#endif

    switch (ctx->pc) {
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a574u: goto label_27a574;
        case 0x27a588u: goto label_27a588;
        case 0x27a59cu: goto label_27a59c;
        default: break;
    }

    ctx->pc = 0x27a498u;

    // 0x27a498: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27a49c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a4a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a4ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27a4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27a4b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27a4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27a4bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27a4bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27a4c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27a4c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a4c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27a4cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x27a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27a4d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x27a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x27a4d4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x27a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x27a4d8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x27a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x27a4dc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x27a4dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a4e0: 0x1082003c  beq         $a0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x27A4E0u;
    {
        const bool branch_taken_0x27a4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4E0u;
        // 0x27a4e4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4e0) {
            ctx->pc = 0x27A5D4u;
            goto label_27a5d4;
        }
    }
    ctx->pc = 0x27A4E8u;
    // 0x27a4e8: 0x341e8005  ori         $fp, $zero, 0x8005
    ctx->pc = 0x27a4e8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x27a4ec: 0x34178006  ori         $s7, $zero, 0x8006
    ctx->pc = 0x27a4ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x27a4f0: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x27a4f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27a4f4: 0x0  nop
    ctx->pc = 0x27a4f4u;
    // NOP
label_27a4f8:
    // 0x27a4f8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x27a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x27a4fc: 0x145e000a  bne         $v0, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x27A4FCu;
    {
        const bool branch_taken_0x27a4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x27a4fc) {
            ctx->pc = 0x27A528u;
            goto label_27a528;
        }
    }
    ctx->pc = 0x27A504u;
    // 0x27a504: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x27a504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a508: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x27a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x27a50c: 0x96840008  lhu         $a0, 0x8($s4)
    ctx->pc = 0x27a50cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x27a510: 0x8c6501b0  lw          $a1, 0x1B0($v1)
    ctx->pc = 0x27a510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x27a514: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x27a514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x27a518: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27a51c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27a520: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A520u;
    {
        const bool branch_taken_0x27a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A520u;
        // 0x27a524: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a520) {
            ctx->pc = 0x27A538u;
            goto label_27a538;
        }
    }
    ctx->pc = 0x27A528u;
label_27a528:
    // 0x27a528: 0x54570004  bnel        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A528u;
    {
        const bool branch_taken_0x27a528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x27a528) {
            ctx->pc = 0x27A52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A528u;
            // 0x27a52c: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A53Cu;
            goto label_27a53c;
        }
    }
    ctx->pc = 0x27A530u;
    // 0x27a530: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27A530u;
    {
        const bool branch_taken_0x27a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A530u;
        // 0x27a534: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a530) {
            ctx->pc = 0x27A5B0u;
            goto label_27a5b0;
        }
    }
    ctx->pc = 0x27A538u;
label_27a538:
    // 0x27a538: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x27a538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_27a53c:
    // 0x27a53c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x27a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x27a540: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x27A540u;
    {
        const bool branch_taken_0x27a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a540) {
            ctx->pc = 0x27A544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A540u;
            // 0x27a544: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A5B4u;
            goto label_27a5b4;
        }
    }
    ctx->pc = 0x27A548u;
    // 0x27a548: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x27a548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27a54c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x27a54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27a550: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x27A550u;
    {
        const bool branch_taken_0x27a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a550) {
            ctx->pc = 0x27A554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A550u;
            // 0x27a554: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A5B4u;
            goto label_27a5b4;
        }
    }
    ctx->pc = 0x27A558u;
    // 0x27a558: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x27a558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x27a55c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x27a55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x27a560: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A560u;
    {
        const bool branch_taken_0x27a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a560) {
            ctx->pc = 0x27A564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A560u;
            // 0x27a564: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A5B4u;
            goto label_27a5b4;
        }
    }
    ctx->pc = 0x27A568u;
    // 0x27a568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a56c: 0xc09e32e  jal         func_278CB8
    ctx->pc = 0x27A56Cu;
    SET_GPR_U32(ctx, 31, 0x27A574u);
    ctx->pc = 0x27A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A56Cu;
    // 0x27a570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278CB8u, 0x27A56Cu, 0x27A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A574u;
label_27a574:
    // 0x27a574: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27A574u;
    {
        const bool branch_taken_0x27a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A574u;
        // 0x27a578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a574) {
            ctx->pc = 0x27A5B0u;
            goto label_27a5b0;
        }
    }
    ctx->pc = 0x27A57Cu;
    // 0x27a57c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a580: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x27A580u;
    SET_GPR_U32(ctx, 31, 0x27A588u);
    ctx->pc = 0x27A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A580u;
    // 0x27a584: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x27A580u, 0x27A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A588u;
label_27a588:
    // 0x27a588: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27A588u;
    {
        const bool branch_taken_0x27a588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A588u;
        // 0x27a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a588) {
            ctx->pc = 0x27A5B0u;
            goto label_27a5b0;
        }
    }
    ctx->pc = 0x27A590u;
    // 0x27a590: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27a590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a594: 0xc09ec0e  jal         func_27B038
    ctx->pc = 0x27A594u;
    SET_GPR_U32(ctx, 31, 0x27A59Cu);
    ctx->pc = 0x27A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A594u;
    // 0x27a598: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B038u, 0x27A594u, 0x27A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A59Cu;
label_27a59c:
    // 0x27a59c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x27a59cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x27a5a0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x27a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x27a5a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A5A4u;
    {
        const bool branch_taken_0x27a5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a5a4) {
            ctx->pc = 0x27A5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A5A4u;
            // 0x27a5a8: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A5C8u;
            goto label_27a5c8;
        }
    }
    ctx->pc = 0x27A5ACu;
    // 0x27a5ac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a5b0:
    // 0x27a5b0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x27a5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_27a5b4:
    // 0x27a5b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27a5b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a5b8: 0x1476ffcf  bne         $v1, $s6, . + 4 + (-0x31 << 2)
    ctx->pc = 0x27A5B8u;
    {
        const bool branch_taken_0x27a5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x27A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5B8u;
        // 0x27a5bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5b8) {
            ctx->pc = 0x27A4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a4f8;
        }
    }
    ctx->pc = 0x27A5C0u;
    // 0x27a5c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27A5C0u;
    {
        const bool branch_taken_0x27a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5C0u;
        // 0x27a5c4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5c0) {
            ctx->pc = 0x27A5CCu;
            goto label_27a5cc;
        }
    }
    ctx->pc = 0x27A5C8u;
label_27a5c8:
    // 0x27a5c8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x27a5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27a5cc:
    // 0x27a5cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A5CCu;
    {
        const bool branch_taken_0x27a5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5CCu;
        // 0x27a5d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5cc) {
            ctx->pc = 0x27A5E0u;
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A5D4u;
label_27a5d4:
    // 0x27a5d4: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A5D4u;
    {
        const bool branch_taken_0x27a5d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5D4u;
        // 0x27a5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5d4) {
            ctx->pc = 0x27A5E0u;
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A5DCu;
    // 0x27a5dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27a5dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a5e0:
    // 0x27a5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a5e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a5e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27a5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a5ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27a5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a5f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27a5f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a5f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27a5f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a5f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x27a5f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a5fc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x27a5fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27a600: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x27a600u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a604: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x27a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27a608: 0x3e00008  jr          $ra
    ctx->pc = 0x27A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A608u;
        // 0x27a60c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A610u;
}
