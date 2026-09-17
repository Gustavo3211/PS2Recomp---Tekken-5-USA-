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

// Function: sub_0050A520
// Address: 0x50a520 - 0x50a5f0
void sub_0050A520_0x50a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A520_0x50a520");
#endif

    switch (ctx->pc) {
        case 0x50a520u: goto label_50a520;
        case 0x50a524u: goto label_50a524;
        case 0x50a528u: goto label_50a528;
        case 0x50a52cu: goto label_50a52c;
        case 0x50a530u: goto label_50a530;
        case 0x50a534u: goto label_50a534;
        case 0x50a538u: goto label_50a538;
        case 0x50a53cu: goto label_50a53c;
        case 0x50a540u: goto label_50a540;
        case 0x50a544u: goto label_50a544;
        case 0x50a548u: goto label_50a548;
        case 0x50a54cu: goto label_50a54c;
        case 0x50a550u: goto label_50a550;
        case 0x50a554u: goto label_50a554;
        case 0x50a558u: goto label_50a558;
        case 0x50a55cu: goto label_50a55c;
        case 0x50a560u: goto label_50a560;
        case 0x50a564u: goto label_50a564;
        case 0x50a568u: goto label_50a568;
        case 0x50a56cu: goto label_50a56c;
        case 0x50a570u: goto label_50a570;
        case 0x50a574u: goto label_50a574;
        case 0x50a578u: goto label_50a578;
        case 0x50a57cu: goto label_50a57c;
        case 0x50a580u: goto label_50a580;
        case 0x50a584u: goto label_50a584;
        case 0x50a588u: goto label_50a588;
        case 0x50a58cu: goto label_50a58c;
        case 0x50a590u: goto label_50a590;
        case 0x50a594u: goto label_50a594;
        case 0x50a598u: goto label_50a598;
        case 0x50a59cu: goto label_50a59c;
        case 0x50a5a0u: goto label_50a5a0;
        case 0x50a5a4u: goto label_50a5a4;
        case 0x50a5a8u: goto label_50a5a8;
        case 0x50a5acu: goto label_50a5ac;
        case 0x50a5b0u: goto label_50a5b0;
        case 0x50a5b4u: goto label_50a5b4;
        case 0x50a5b8u: goto label_50a5b8;
        case 0x50a5bcu: goto label_50a5bc;
        case 0x50a5c0u: goto label_50a5c0;
        case 0x50a5c4u: goto label_50a5c4;
        case 0x50a5c8u: goto label_50a5c8;
        case 0x50a5ccu: goto label_50a5cc;
        case 0x50a5d0u: goto label_50a5d0;
        case 0x50a5d4u: goto label_50a5d4;
        case 0x50a5d8u: goto label_50a5d8;
        case 0x50a5dcu: goto label_50a5dc;
        case 0x50a5e0u: goto label_50a5e0;
        case 0x50a5e4u: goto label_50a5e4;
        case 0x50a5e8u: goto label_50a5e8;
        case 0x50a5ecu: goto label_50a5ec;
        default: break;
    }

    ctx->pc = 0x50a520u;

label_50a520:
    // 0x50a520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_50a524:
    // 0x50a524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_50a528:
    // 0x50a528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_50a52c:
    // 0x50a52c: 0xc124620  jal         func_491880
label_50a530:
    if (ctx->pc == 0x50A530u) {
        ctx->pc = 0x50A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A52Cu;
        // 0x50a530: 0x3c100090  lui         $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50A534u;
        goto label_50a534;
    }
    ctx->pc = 0x50A52Cu;
    SET_GPR_U32(ctx, 31, 0x50A534u);
    ctx->pc = 0x50A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A52Cu;
    // 0x50a530: 0x3c100090  lui         $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50A52Cu, 0x50A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A534u;
label_50a534:
    // 0x50a534: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x50a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_50a538:
    // 0x50a538: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50a53c:
    // 0x50a53c: 0x8463e820  lh          $v1, -0x17E0($v1)
    ctx->pc = 0x50a53cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961184)));
label_50a540:
    // 0x50a540: 0x2605f080  addiu       $a1, $s0, -0xF80
    ctx->pc = 0x50a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
label_50a544:
    // 0x50a544: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_50a548:
    if (ctx->pc == 0x50A548u) {
        ctx->pc = 0x50A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A544u;
        // 0x50a548: 0x24a70016  addiu       $a3, $a1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50A54Cu;
        goto label_50a54c;
    }
    ctx->pc = 0x50A544u;
    {
        const bool branch_taken_0x50a544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A544u;
        // 0x50a548: 0x24a70016  addiu       $a3, $a1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a544) {
            ctx->pc = 0x50A570u;
            goto label_50a570;
        }
    }
    ctx->pc = 0x50A54Cu;
label_50a54c:
    // 0x50a54c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x50a54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_50a550:
    // 0x50a550: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x50a550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_50a554:
    // 0x50a554: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x50a554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_50a558:
    // 0x50a558: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50a558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_50a55c:
    // 0x50a55c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_50a560:
    // 0x50a560: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x50a560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_50a564:
    // 0x50a564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50a564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_50a568:
    // 0x50a568: 0x10000013  b           . + 4 + (0x13 << 2)
label_50a56c:
    if (ctx->pc == 0x50A56Cu) {
        ctx->pc = 0x50A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A568u;
        // 0x50a56c: 0x643024  and         $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50A570u;
        goto label_50a570;
    }
    ctx->pc = 0x50A568u;
    {
        const bool branch_taken_0x50a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A568u;
        // 0x50a56c: 0x643024  and         $a2, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a568) {
            ctx->pc = 0x50A5B8u;
            goto label_50a5b8;
        }
    }
    ctx->pc = 0x50A570u;
label_50a570:
    // 0x50a570: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x50a570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_50a574:
    // 0x50a574: 0x84a40010  lh          $a0, 0x10($a1)
    ctx->pc = 0x50a574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_50a578:
    // 0x50a578: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x50a578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_50a57c:
    // 0x50a57c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_50a580:
    // 0x50a580: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x50a580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_50a584:
    // 0x50a584: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50a584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_50a588:
    // 0x50a588: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50a588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_50a58c:
    // 0x50a58c: 0x84a50012  lh          $a1, 0x12($a1)
    ctx->pc = 0x50a58cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
label_50a590:
    // 0x50a590: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x50a590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_50a594:
    // 0x50a594: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x50a594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_50a598:
    // 0x50a598: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x50a598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_50a59c:
    // 0x50a59c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x50a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_50a5a0:
    // 0x50a5a0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x50a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_50a5a4:
    // 0x50a5a4: 0x84c3fffc  lh          $v1, -0x4($a2)
    ctx->pc = 0x50a5a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_50a5a8:
    // 0x50a5a8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_50a5ac:
    if (ctx->pc == 0x50A5ACu) {
        ctx->pc = 0x50A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A5A8u;
        // 0x50a5ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50A5B0u;
        goto label_50a5b0;
    }
    ctx->pc = 0x50A5A8u;
    {
        const bool branch_taken_0x50a5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x50A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A5A8u;
        // 0x50a5ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a5a8) {
            ctx->pc = 0x50A5B8u;
            goto label_50a5b8;
        }
    }
    ctx->pc = 0x50A5B0u;
label_50a5b0:
    // 0x50a5b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_50a5b4:
    if (ctx->pc == 0x50A5B4u) {
        ctx->pc = 0x50A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A5B0u;
        // 0x50a5b4: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50A5B8u;
        goto label_50a5b8;
    }
    ctx->pc = 0x50A5B0u;
    {
        const bool branch_taken_0x50a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A5B0u;
        // 0x50a5b4: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a5b0) {
            ctx->pc = 0x50A5DCu;
            goto label_50a5dc;
        }
    }
    ctx->pc = 0x50A5B8u;
label_50a5b8:
    // 0x50a5b8: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x50a5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
label_50a5bc:
    // 0x50a5bc: 0x26040012  addiu       $a0, $s0, 0x12
    ctx->pc = 0x50a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
label_50a5c0:
    // 0x50a5c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50a5c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_50a5c4:
    // 0x50a5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_50a5c8:
    // 0x50a5c8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50a5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_50a5cc:
    // 0x50a5cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_50a5d0:
    // 0x50a5d0: 0x60f809  jalr        $v1
label_50a5d4:
    if (ctx->pc == 0x50A5D4u) {
        ctx->pc = 0x50A5D8u;
        goto label_50a5d8;
    }
    ctx->pc = 0x50A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x50A5D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50A5D0u, 0x50A5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x50A5D8u;
label_50a5d8:
    // 0x50a5d8: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x50a5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
label_50a5dc:
    // 0x50a5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50a5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50a5e0:
    // 0x50a5e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50a5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_50a5e4:
    // 0x50a5e4: 0x3e00008  jr          $ra
label_50a5e8:
    if (ctx->pc == 0x50A5E8u) {
        ctx->pc = 0x50A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A5E4u;
        // 0x50a5e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50A5ECu;
        goto label_50a5ec;
    }
    ctx->pc = 0x50A5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A5E4u;
        // 0x50a5e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50A5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50A5ECu;
label_50a5ec:
    // 0x50a5ec: 0x0  nop
    ctx->pc = 0x50a5ecu;
    // NOP
    ctx->pc = 0x50a5f0u;
}
