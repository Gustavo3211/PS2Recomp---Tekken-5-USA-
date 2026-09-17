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

// Function: sub_004EE4C0
// Address: 0x4ee4c0 - 0x4ee680
void sub_004EE4C0_0x4ee4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE4C0_0x4ee4c0");
#endif

    switch (ctx->pc) {
        case 0x4ee538u: goto label_4ee538;
        case 0x4ee540u: goto label_4ee540;
        default: break;
    }

    ctx->pc = 0x4ee4c0u;

    // 0x4ee4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ee4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ee4c4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ee4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ee4c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ee4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ee4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee4d0: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x4ee4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x4ee4d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ee4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ee4d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ee4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee4dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ee4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ee4e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4ee4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4ee4e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ee4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ee4e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ee4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ee4ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ee4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ee4f0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ee4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ee4f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ee4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ee4f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ee4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1200u));
    // 0x4ee4fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ee4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ee500: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ee500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ee504: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ee504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ee508: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ee508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee50c: 0x4600049  bltz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x4EE50Cu;
    {
        const bool branch_taken_0x4ee50c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE50Cu;
        // 0x4ee510: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee50c) {
            ctx->pc = 0x4EE634u;
            goto label_4ee634;
        }
    }
    ctx->pc = 0x4EE514u;
    // 0x4ee514: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ee514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ee518: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ee518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ee51c: 0x24577f88  addiu       $s7, $v0, 0x7F88
    ctx->pc = 0x4ee51cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 32648));
    // 0x4ee520: 0x247011e8  addiu       $s0, $v1, 0x11E8
    ctx->pc = 0x4ee520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4584));
    // 0x4ee524: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ee524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee528: 0x26560014  addiu       $s6, $s2, 0x14
    ctx->pc = 0x4ee528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4ee52c: 0x26550010  addiu       $s5, $s2, 0x10
    ctx->pc = 0x4ee52cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4ee530: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x4ee530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4ee534: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4ee534u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4ee538:
    // 0x4ee538: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4EE538u;
    SET_GPR_U32(ctx, 31, 0x4EE540u);
    ctx->pc = 0x4EE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE538u;
    // 0x4ee53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4EE538u, 0x4EE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE540u;
label_4ee540:
    // 0x4ee540: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x4ee540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x4ee544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ee544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ee548: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ee548u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee54c: 0xa44401be  sh          $a0, 0x1BE($v0)
    ctx->pc = 0x4ee54cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ee550: 0x24460014  addiu       $a2, $v0, 0x14
    ctx->pc = 0x4ee550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4ee554: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4ee554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ee558: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4ee558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4ee55c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ee55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ee560: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ee560u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ee564: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4ee564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4ee568: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ee568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4ee56c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ee56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ee570: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ee570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ee574: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ee574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ee578: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ee578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4ee57c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4ee57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4ee580: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ee580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ee584: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ee584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ee588: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ee588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ee58c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ee58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ee590: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x4ee590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
    // 0x4ee594: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ee594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ee598: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x4ee598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x4ee59c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x4ee59cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee5a0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4ee5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4ee5a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ee5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ee5a8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4ee5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ee5ac: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4ee5acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ee5b0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ee5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ee5b4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ee5b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ee5b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4ee5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4ee5bc: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ee5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ee5c0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4ee5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4ee5c4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4ee5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4ee5c8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ee5c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ee5cc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4ee5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ee5d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ee5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ee5d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee5d8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4ee5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4ee5dc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ee5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ee5e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4ee5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4ee5e4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4ee5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ee5e8: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4ee5e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ee5ec: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ee5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ee5f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ee5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4ee5f4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4ee5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4ee5f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4ee5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ee5fc: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4ee5fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ee600: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4ee600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4ee604: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ee604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4ee608: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4ee608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4ee60c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4ee60cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ee610: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ee610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ee614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ee614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ee618: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4ee618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4ee61c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ee620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ee624: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4ee624u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4ee628: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4ee628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ee62c: 0x441ffc2  bgez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4EE62Cu;
    {
        const bool branch_taken_0x4ee62c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ee62c) {
            ctx->pc = 0x4EE538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ee538;
        }
    }
    ctx->pc = 0x4EE634u;
label_4ee634:
    // 0x4ee634: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4ee634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4ee638: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4ee638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x4ee63c: 0xa642014a  sh          $v0, 0x14A($s2)
    ctx->pc = 0x4ee63cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ee640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee648: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ee648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ee64c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ee64cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ee650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ee654: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ee658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ee65c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ee65cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ee660: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ee660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ee664: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ee664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ee668: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ee668u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ee66c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ee66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ee670: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ee670u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee674: 0x813b9d6  j           func_4EE758
    ctx->pc = 0x4EE674u;
    ctx->pc = 0x4EE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE674u;
    // 0x4ee678: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE758u;
    sub_004EE758_0x4ee758(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE67Cu;
    // 0x4ee67c: 0x0  nop
    ctx->pc = 0x4ee67cu;
    // NOP
    ctx->pc = 0x4ee680u;
}
