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

// Function: sub_001FE508
// Address: 0x1fe508 - 0x1fe678
void sub_001FE508_0x1fe508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE508_0x1fe508");
#endif

    switch (ctx->pc) {
        case 0x1fe5c8u: goto label_1fe5c8;
        case 0x1fe5e0u: goto label_1fe5e0;
        default: break;
    }

    ctx->pc = 0x1fe508u;

    // 0x1fe508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fe508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe50c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1fe50cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1fe510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fe514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe518: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fe518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fe51c: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x1fe51cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1fe520: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1fe520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1fe524: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1fe524u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe52c: 0x54400  sll         $t0, $a1, 16
    ctx->pc = 0x1fe52cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fe530: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe538: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe53c: 0x83c03  sra         $a3, $t0, 16
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1fe540: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fe540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fe544: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fe544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fe548: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fe548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fe54c: 0x8e1600c4  lw          $s6, 0xC4($s0)
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fe550: 0x96150096  lhu         $s5, 0x96($s0)
    ctx->pc = 0x1fe550u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fe554: 0x96c20044  lhu         $v0, 0x44($s6)
    ctx->pc = 0x1fe554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x1fe558: 0x920401f9  lbu         $a0, 0x1F9($s0)
    ctx->pc = 0x1fe558u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x1fe55c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1fe55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1fe560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fe564: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1fe564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe568: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1fe568u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fe56c: 0x6182a  slt         $v1, $zero, $a2
    ctx->pc = 0x1fe56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fe570: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE570u;
    {
        const bool branch_taken_0x1fe570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE570u;
        // 0x1fe574: 0xa3300a  movz        $a2, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe570) {
            ctx->pc = 0x1FE580u;
            goto label_1fe580;
        }
    }
    ctx->pc = 0x1FE578u;
    // 0x1fe578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE578u;
    {
        const bool branch_taken_0x1fe578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE578u;
        // 0x1fe57c: 0x240700b6  addiu       $a3, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe578) {
            ctx->pc = 0x1FE59Cu;
            goto label_1fe59c;
        }
    }
    ctx->pc = 0x1FE580u;
label_1fe580:
    // 0x1fe580: 0x8602009c  lh          $v0, 0x9C($s0)
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1fe584: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1fe584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1fe588: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE588u;
    {
        const bool branch_taken_0x1fe588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe588) {
            ctx->pc = 0x1FE58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE588u;
            // 0x1fe58c: 0x96040078  lhu         $a0, 0x78($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE5A0u;
            goto label_1fe5a0;
        }
    }
    ctx->pc = 0x1FE590u;
    // 0x1fe590: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1fe590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1fe594: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fe594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fe598: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_1fe59c:
    // 0x1fe59c: 0x96040078  lhu         $a0, 0x78($s0)
    ctx->pc = 0x1fe59cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_1fe5a0:
    // 0x1fe5a0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1fe5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5a4: 0x9613007a  lhu         $s3, 0x7A($s0)
    ctx->pc = 0x1fe5a4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1fe5a8: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1fe5ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1fe5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fe5b0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1fe5b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1fe5b4: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x1fe5b4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fe5b8: 0x2012  mflo        $a0
    ctx->pc = 0x1fe5b8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1fe5bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1fe5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fe5c0: 0xc07f8ac  jal         func_1FE2B0
    ctx->pc = 0x1FE5C0u;
    SET_GPR_U32(ctx, 31, 0x1FE5C8u);
    ctx->pc = 0x1FE5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5C0u;
    // 0x1fe5c4: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B0u, 0x1FE5C0u, 0x1FE5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5C8u;
label_1fe5c8:
    // 0x1fe5c8: 0x9612008e  lhu         $s2, 0x8E($s0)
    ctx->pc = 0x1fe5c8u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 142)));
    // 0x1fe5cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fe5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5d0: 0x8605008e  lh          $a1, 0x8E($s0)
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 142)));
    // 0x1fe5d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fe5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5d8: 0xc07f8ba  jal         func_1FE2E8
    ctx->pc = 0x1FE5D8u;
    SET_GPR_U32(ctx, 31, 0x1FE5E0u);
    ctx->pc = 0x1FE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5D8u;
    // 0x1fe5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x1FE5D8u, 0x1FE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5E0u;
label_1fe5e0:
    // 0x1fe5e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe5e4: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fe5e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5E8u;
    {
        const bool branch_taken_0x1fe5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5E8u;
        // 0x1fe5ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5e8) {
            ctx->pc = 0x1FE5F8u;
            goto label_1fe5f8;
        }
    }
    ctx->pc = 0x1FE5F0u;
    // 0x1fe5f0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1fe5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5f4: 0xa202019b  sb          $v0, 0x19B($s0)
    ctx->pc = 0x1fe5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 2));
label_1fe5f8:
    // 0x1fe5f8: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x1fe5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1fe5fc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1fe5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x1fe600: 0xa602008e  sh          $v0, 0x8E($s0)
    ctx->pc = 0x1fe600u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe604: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE604u;
    {
        const bool branch_taken_0x1fe604 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE604u;
        // 0x1fe608: 0xa603007a  sh          $v1, 0x7A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe604) {
            ctx->pc = 0x1FE624u;
            goto label_1fe624;
        }
    }
    ctx->pc = 0x1FE60Cu;
    // 0x1fe60c: 0x920201f7  lbu         $v0, 0x1F7($s0)
    ctx->pc = 0x1fe60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 503)));
    // 0x1fe610: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE610u;
    {
        const bool branch_taken_0x1fe610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe610) {
            ctx->pc = 0x1FE614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE610u;
            // 0x1fe614: 0x96c30044  lhu         $v1, 0x44($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE628u;
            goto label_1fe628;
        }
    }
    ctx->pc = 0x1FE618u;
    // 0x1fe618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe61c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x1fe61cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fe620: 0xa20201b8  sb          $v0, 0x1B8($s0)
    ctx->pc = 0x1fe620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 440), (uint8_t)GPR_U32(ctx, 2));
label_1fe624:
    // 0x1fe624: 0x96c30044  lhu         $v1, 0x44($s6)
    ctx->pc = 0x1fe624u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 68)));
label_1fe628:
    // 0x1fe628: 0x151400  sll         $v0, $s5, 16
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x1fe62c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1fe62cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fe630: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1fe630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1fe634: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fe634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe638: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE638u;
    {
        const bool branch_taken_0x1fe638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe638) {
            ctx->pc = 0x1FE63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE638u;
            // 0x1fe63c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE64Cu;
            goto label_1fe64c;
        }
    }
    ctx->pc = 0x1FE640u;
    // 0x1fe640: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1fe640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fe644: 0xa202019b  sb          $v0, 0x19B($s0)
    ctx->pc = 0x1fe644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fe648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe64c:
    // 0x1fe64c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe64cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe654: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe654u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe658: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe658u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe65c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe65cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe660: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fe660u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe664: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1fe664u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fe668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fe668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe66c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE66Cu;
        // 0x1fe670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE674u;
    // 0x1fe674: 0x0  nop
    ctx->pc = 0x1fe674u;
    // NOP
    ctx->pc = 0x1fe678u;
}
