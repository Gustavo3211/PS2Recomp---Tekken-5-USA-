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

// Function: sub_004EA4C8
// Address: 0x4ea4c8 - 0x4ea660
void sub_004EA4C8_0x4ea4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA4C8_0x4ea4c8");
#endif

    switch (ctx->pc) {
        case 0x4ea528u: goto label_4ea528;
        case 0x4ea530u: goto label_4ea530;
        default: break;
    }

    ctx->pc = 0x4ea4c8u;

    // 0x4ea4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ea4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ea4cc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ea4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ea4d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ea4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ea4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ea4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ea4d8: 0x24451200  addiu       $a1, $v0, 0x1200
    ctx->pc = 0x4ea4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x4ea4dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ea4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ea4e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ea4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ea4e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ea4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ea4e8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4ea4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4ea4ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ea4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ea4f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4ea4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4ea4f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ea4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1200u));
    // 0x4ea4f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ea4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ea4fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ea4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ea500: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ea500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ea504: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ea504u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea508: 0x4600047  bltz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x4EA508u;
    {
        const bool branch_taken_0x4ea508 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4EA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA508u;
        // 0x4ea50c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea508) {
            ctx->pc = 0x4EA628u;
            goto label_4ea628;
        }
    }
    ctx->pc = 0x4EA510u;
    // 0x4ea510: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ea510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ea514: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4ea514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4ea518: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea51c: 0x245011e8  addiu       $s0, $v0, 0x11E8
    ctx->pc = 0x4ea51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
    // 0x4ea520: 0x247480e8  addiu       $s4, $v1, -0x7F18
    ctx->pc = 0x4ea520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934760));
    // 0x4ea524: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ea524u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_4ea528:
    // 0x4ea528: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4EA528u;
    SET_GPR_U32(ctx, 31, 0x4EA530u);
    ctx->pc = 0x4EA52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA528u;
    // 0x4ea52c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4EA528u, 0x4EA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA530u;
label_4ea530:
    // 0x4ea530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ea530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea534: 0x2402009f  addiu       $v0, $zero, 0x9F
    ctx->pc = 0x4ea534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x4ea538: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x4ea538u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea53c: 0x24a40160  addiu       $a0, $a1, 0x160
    ctx->pc = 0x4ea53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x4ea540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ea540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ea544: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ea544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea548: 0xa4a201be  sh          $v0, 0x1BE($a1)
    ctx->pc = 0x4ea548u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 446), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea54c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4ea54cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea550: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ea550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EA554u;
    {
        const bool branch_taken_0x4ea554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA554u;
        // 0x4ea558: 0x2406ff00  addiu       $a2, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea554) {
            ctx->pc = 0x4EA568u;
            goto label_4ea568;
        }
    }
    ctx->pc = 0x4EA55Cu;
    // 0x4ea55c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4EA560u;
    {
        const bool branch_taken_0x4ea560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA560u;
        // 0x4ea564: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea560) {
            ctx->pc = 0x4EA570u;
            goto label_4ea570;
        }
    }
    ctx->pc = 0x4EA568u;
label_4ea568:
    // 0x4ea568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea56c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ea56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4ea570:
    // 0x4ea570: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ea570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ea574: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4ea574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ea578: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ea578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea57c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4ea57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4ea580: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ea580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ea584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea588: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ea588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ea58c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ea58cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea590: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4ea590u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea594: 0xacb30140  sw          $s3, 0x140($a1)
    ctx->pc = 0x4ea594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 320), GPR_U32(ctx, 19));
    // 0x4ea598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ea598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea59c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ea59cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea5a0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ea5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ea5a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ea5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ea5a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ea5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ea5ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea5b0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ea5b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea5b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4ea5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4ea5b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ea5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ea5bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea5c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ea5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ea5c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ea5c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ea5c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea5cc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ea5ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ea5d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ea5d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4ea5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4ea5d8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ea5d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ea5dc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea5e0: 0xa4a30162  sh          $v1, 0x162($a1)
    ctx->pc = 0x4ea5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea5e4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4ea5e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ea5e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea5ec: 0xa4a40164  sh          $a0, 0x164($a1)
    ctx->pc = 0x4ea5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 356), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ea5f0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ea5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ea5f4: 0xa4a30166  sh          $v1, 0x166($a1)
    ctx->pc = 0x4ea5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 358), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea5f8: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4ea5f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4ea5fc: 0xa4a40168  sh          $a0, 0x168($a1)
    ctx->pc = 0x4ea5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 360), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ea600: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ea600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea604: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ea604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ea608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ea60c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ea60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ea610: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea614: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea618: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ea618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ea61c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ea61cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ea620: 0x441ffc1  bgez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x4EA620u;
    {
        const bool branch_taken_0x4ea620 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ea620) {
            ctx->pc = 0x4EA528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea528;
        }
    }
    ctx->pc = 0x4EA628u;
label_4ea628:
    // 0x4ea628: 0x266301bc  addiu       $v1, $s3, 0x1BC
    ctx->pc = 0x4ea628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
    // 0x4ea62c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ea62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea630: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ea630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ea634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea638: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ea638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea63c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea640: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ea640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea644: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ea644u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ea648: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ea648u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ea64c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4ea64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ea650: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ea650u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea654: 0x813a998  j           func_4EA660
    ctx->pc = 0x4EA654u;
    ctx->pc = 0x4EA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA654u;
    // 0x4ea658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA660u;
    sub_004EA660_0x4ea660(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA65Cu;
    // 0x4ea65c: 0x0  nop
    ctx->pc = 0x4ea65cu;
    // NOP
    ctx->pc = 0x4ea660u;
}
