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

// Function: sub_0050D448
// Address: 0x50d448 - 0x50d838
void sub_0050D448_0x50d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D448_0x50d448");
#endif

    switch (ctx->pc) {
        case 0x50d5a8u: goto label_50d5a8;
        case 0x50d5acu: goto label_50d5ac;
        case 0x50d5d4u: goto label_50d5d4;
        case 0x50d5f8u: goto label_50d5f8;
        case 0x50d6a0u: goto label_50d6a0;
        case 0x50d738u: goto label_50d738;
        case 0x50d810u: goto label_50d810;
        default: break;
    }

    ctx->pc = 0x50d448u;

    // 0x50d448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50d448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50d44c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50d450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50d450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50d454: 0x24a5c668  addiu       $a1, $a1, -0x3998
    ctx->pc = 0x50d454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952552));
    // 0x50d458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50d45c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50d460: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50d460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50d464: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50d464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50d468: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50d468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50d46c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50d46cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50d470: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50d470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50d474: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x50d474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x50d478: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50d478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x50d47c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x50d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50d480: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50d480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x50d484: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x50d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x50d488: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x50d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x50d48c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50d490: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d494: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50d494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50d498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50d498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50d49c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d4a0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50d4a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50d4a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50d4a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50d4ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d4b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50d4b4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50d4b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50d4b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50d4bc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50d4bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50d4c0: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x50d4c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x50d4c4: 0x5060002f  beql        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x50D4C4u;
    {
        const bool branch_taken_0x50d4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d4c4) {
            ctx->pc = 0x50D4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50D4C4u;
            // 0x50d4c8: 0x3c05008f  lui         $a1, 0x8F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50D584u;
            goto label_50d584;
        }
    }
    ctx->pc = 0x50D4CCu;
    // 0x50d4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x50d4d0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x50d4d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50d4d8: 0x8c63d2c0  lw          $v1, -0x2D40($v1)
    ctx->pc = 0x50d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955712)));
    // 0x50d4dc: 0x600008  jr          $v1
    ctx->pc = 0x50D4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x50D4E8u: goto label_50d4e8;
            case 0x50D4F8u: goto label_50d4f8;
            case 0x50D508u: goto label_50d508;
            case 0x50D518u: goto label_50d518;
            case 0x50D528u: goto label_50d528;
            case 0x50D538u: goto label_50d538;
            case 0x50D548u: goto label_50d548;
            case 0x50D558u: goto label_50d558;
            case 0x50D568u: goto label_50d568;
            case 0x50D578u: goto label_50d578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D4DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x50D4E4u;
    // 0x50d4e4: 0x0  nop
    ctx->pc = 0x50d4e4u;
    // NOP
label_50d4e8:
    // 0x50d4e8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d4ec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x50D4ECu;
    {
        const bool branch_taken_0x50d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D4ECu;
        // 0x50d4f0: 0x245116a0  addiu       $s1, $v0, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d4ec) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D4F4u;
    // 0x50d4f4: 0x0  nop
    ctx->pc = 0x50d4f4u;
    // NOP
label_50d4f8:
    // 0x50d4f8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d4fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x50D4FCu;
    {
        const bool branch_taken_0x50d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D4FCu;
        // 0x50d500: 0x245116b0  addiu       $s1, $v0, 0x16B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d4fc) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D504u;
    // 0x50d504: 0x0  nop
    ctx->pc = 0x50d504u;
    // NOP
label_50d508:
    // 0x50d508: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d50c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x50D50Cu;
    {
        const bool branch_taken_0x50d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D50Cu;
        // 0x50d510: 0x245116f8  addiu       $s1, $v0, 0x16F8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d50c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D514u;
    // 0x50d514: 0x0  nop
    ctx->pc = 0x50d514u;
    // NOP
label_50d518:
    // 0x50d518: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d51c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x50D51Cu;
    {
        const bool branch_taken_0x50d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D51Cu;
        // 0x50d520: 0x24511768  addiu       $s1, $v0, 0x1768 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d51c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D524u;
    // 0x50d524: 0x0  nop
    ctx->pc = 0x50d524u;
    // NOP
label_50d528:
    // 0x50d528: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d52c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x50D52Cu;
    {
        const bool branch_taken_0x50d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D52Cu;
        // 0x50d530: 0x24511778  addiu       $s1, $v0, 0x1778 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d52c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D534u;
    // 0x50d534: 0x0  nop
    ctx->pc = 0x50d534u;
    // NOP
label_50d538:
    // 0x50d538: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d53c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x50D53Cu;
    {
        const bool branch_taken_0x50d53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D53Cu;
        // 0x50d540: 0x24511798  addiu       $s1, $v0, 0x1798 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d53c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D544u;
    // 0x50d544: 0x0  nop
    ctx->pc = 0x50d544u;
    // NOP
label_50d548:
    // 0x50d548: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d54c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x50D54Cu;
    {
        const bool branch_taken_0x50d54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D54Cu;
        // 0x50d550: 0x245117a8  addiu       $s1, $v0, 0x17A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d54c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D554u;
    // 0x50d554: 0x0  nop
    ctx->pc = 0x50d554u;
    // NOP
label_50d558:
    // 0x50d558: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d55c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x50D55Cu;
    {
        const bool branch_taken_0x50d55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D55Cu;
        // 0x50d560: 0x245117b8  addiu       $s1, $v0, 0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d55c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D564u;
    // 0x50d564: 0x0  nop
    ctx->pc = 0x50d564u;
    // NOP
label_50d568:
    // 0x50d568: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d56c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50D56Cu;
    {
        const bool branch_taken_0x50d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D56Cu;
        // 0x50d570: 0x24511820  addiu       $s1, $v0, 0x1820 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d56c) {
            ctx->pc = 0x50D580u;
            goto label_50d580;
        }
    }
    ctx->pc = 0x50D574u;
    // 0x50d574: 0x0  nop
    ctx->pc = 0x50d574u;
    // NOP
label_50d578:
    // 0x50d578: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x50d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x50d57c: 0x24511830  addiu       $s1, $v0, 0x1830
    ctx->pc = 0x50d57cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
label_50d580:
    // 0x50d580: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50d580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
label_50d584:
    // 0x50d584: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d588: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50d588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50d58c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50d590: 0x2457c668  addiu       $s7, $v0, -0x3998
    ctx->pc = 0x50d590u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952552));
    // 0x50d594: 0x2476c670  addiu       $s6, $v1, -0x3990
    ctx->pc = 0x50d594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952560));
    // 0x50d598: 0x2495c664  addiu       $s5, $a0, -0x399C
    ctx->pc = 0x50d598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952548));
    // 0x50d59c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x50d59cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d5a0: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x50d5a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x50d5a4: 0x24b2c65c  addiu       $s2, $a1, -0x39A4
    ctx->pc = 0x50d5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952540));
label_50d5a8:
    // 0x50d5a8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x50d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_50d5ac:
    // 0x50d5ac: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x50d5acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d5b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d5b4: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x50d5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x50d5b8: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x50d5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50d5bc: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x50d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x50d5c0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x50d5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50d5c4: 0x4400087  bltz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x50D5C4u;
    {
        const bool branch_taken_0x50d5c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D5C4u;
        // 0x50d5c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d5c4) {
            ctx->pc = 0x50D7E4u;
            goto label_50d7e4;
        }
    }
    ctx->pc = 0x50D5CCu;
    // 0x50d5cc: 0xc1445b6  jal         func_5116D8
    ctx->pc = 0x50D5CCu;
    SET_GPR_U32(ctx, 31, 0x50D5D4u);
    ctx->pc = 0x5116D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5116D8u, 0x50D5CCu, 0x50D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D5D4u;
label_50d5d4:
    // 0x50d5d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x50d5d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d5d8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d5dc: 0x2450c670  addiu       $s0, $v0, -0x3990
    ctx->pc = 0x50d5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952560));
    // 0x50d5e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50d5e4: 0x1062007e  beq         $v1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x50D5E4u;
    {
        const bool branch_taken_0x50d5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D5E4u;
        // 0x50d5e8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d5e4) {
            ctx->pc = 0x50D7E0u;
            goto label_50d7e0;
        }
    }
    ctx->pc = 0x50D5ECu;
    // 0x50d5ec: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x50d5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x50d5f0: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x50D5F0u;
    SET_GPR_U32(ctx, 31, 0x50D5F8u);
    ctx->pc = 0x50D5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D5F0u;
    // 0x50d5f4: 0xae63c674  sw          $v1, -0x398C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952564), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x50D5F0u, 0x50D5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50D5F8u;
label_50d5f8:
    // 0x50d5f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x50d5f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50d5fc: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x50D5FCu;
    {
        const bool branch_taken_0x50d5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D5FCu;
        // 0x50d600: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d5fc) {
            ctx->pc = 0x50D7E0u;
            goto label_50d7e0;
        }
    }
    ctx->pc = 0x50D604u;
    // 0x50d604: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x50d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x50d608: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x50d608u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50d60c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x50d60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d610: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x50d610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x50d614: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50d614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d618: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x50d618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x50d61c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50d61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50d620: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d624: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50d628: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50d628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50d62c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d630: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50d630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d634: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50d634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50d638: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x50d638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x50d63c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d640: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50d640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50d644: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x50d644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d648: 0xa4a200fc  sh          $v0, 0xFC($a1)
    ctx->pc = 0x50d648u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 252), (uint16_t)GPR_U32(ctx, 2));
    // 0x50d64c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x50d64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d650: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d654: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x50d654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x50d658: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d65c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50d660: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50d660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50d664: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d668: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50d668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d66c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50d670: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x50d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x50d674: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d678: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50d678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50d67c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50d67cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d680: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x50D680u;
    {
        const bool branch_taken_0x50d680 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D680u;
        // 0x50d684: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d680) {
            ctx->pc = 0x50D6CCu;
            goto label_50d6cc;
        }
    }
    ctx->pc = 0x50D688u;
    // 0x50d688: 0x2667c674  addiu       $a3, $s3, -0x398C
    ctx->pc = 0x50d688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952564));
    // 0x50d68c: 0x27c6c65c  addiu       $a2, $fp, -0x39A4
    ctx->pc = 0x50d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952540));
    // 0x50d690: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x50d690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x50d694: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50d694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50d698: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50d69c: 0x0  nop
    ctx->pc = 0x50d69cu;
    // NOP
label_50d6a0:
    // 0x50d6a0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x50d6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50d6a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50d6a8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x50d6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x50d6ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d6b0: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x50d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x50d6b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d6b8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50d6bc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x50d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x50d6c0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50d6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50d6c4: 0x443fff6  bgezl       $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x50D6C4u;
    {
        const bool branch_taken_0x50d6c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50d6c4) {
            ctx->pc = 0x50D6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50D6C4u;
            // 0x50d6c8: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50D6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50d6a0;
        }
    }
    ctx->pc = 0x50D6CCu;
label_50d6cc:
    // 0x50d6cc: 0x8e64c674  lw          $a0, -0x398C($s3)
    ctx->pc = 0x50d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294952564)));
    // 0x50d6d0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50d6d4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x50d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50d6d8: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x50d6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x50d6dc: 0xac440104  sw          $a0, 0x104($v0)
    ctx->pc = 0x50d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 4));
    // 0x50d6e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x50d6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d6e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x50d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d6e8: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x50d6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x50d6ec: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x50d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50d6f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d6f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50d6f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x50d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x50d6fc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x50d6fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50d700: 0xac830100  sw          $v1, 0x100($a0)
    ctx->pc = 0x50d700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
    // 0x50d704: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x50d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50d708: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x50d708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50d70c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d710: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x50d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x50d714: 0x24650108  addiu       $a1, $v1, 0x108
    ctx->pc = 0x50d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
    // 0x50d718: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x50d718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x50d71c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x50d71cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50d720: 0x460ffa1  bltz        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x50D720u;
    {
        const bool branch_taken_0x50d720 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D720u;
        // 0x50d724: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d720) {
            ctx->pc = 0x50D5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50d5a8;
        }
    }
    ctx->pc = 0x50D728u;
    // 0x50d728: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d72c: 0x27c7c65c  addiu       $a3, $fp, -0x39A4
    ctx->pc = 0x50d72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952540));
    // 0x50d730: 0x2448c664  addiu       $t0, $v0, -0x399C
    ctx->pc = 0x50d730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952548));
    // 0x50d734: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50d734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_50d738:
    // 0x50d738: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50d738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50d73c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x50d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50d740: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50d740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50d744: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50d744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50d748: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x50d748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50d74c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50d750: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x50d750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x50d754: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d758: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50d758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x50d75c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d760: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50d760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50d764: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x50d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x50d768: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50d768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50d76c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d770: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x50D770u;
    {
        const bool branch_taken_0x50d770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D770u;
        // 0x50d774: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d770) {
            ctx->pc = 0x50D7B0u;
            goto label_50d7b0;
        }
    }
    ctx->pc = 0x50D778u;
    // 0x50d778: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x50d778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d77c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x50d77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x50d780: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50d780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50d784: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50d784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50d788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50d78c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50d790: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d794: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50d794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50d798: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d79c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50d79cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50d7a0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x50d7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x50d7a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50d7a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d7ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_50d7b0:
    // 0x50d7b0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50d7b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50d7b4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50d7b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50d7bc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50d7c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d7c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50d7c8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50d7cc: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x50d7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50d7d0: 0x441ffd9  bgez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x50D7D0u;
    {
        const bool branch_taken_0x50d7d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x50D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D7D0u;
        // 0x50d7d4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d7d0) {
            ctx->pc = 0x50D738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50d738;
        }
    }
    ctx->pc = 0x50D7D8u;
    // 0x50d7d8: 0x1000ff74  b           . + 4 + (-0x8C << 2)
    ctx->pc = 0x50D7D8u;
    {
        const bool branch_taken_0x50d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D7D8u;
        // 0x50d7dc: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d7d8) {
            ctx->pc = 0x50D5ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50d5ac;
        }
    }
    ctx->pc = 0x50D7E0u;
label_50d7e0:
    // 0x50d7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50d7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50d7e4:
    // 0x50d7e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50d7e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50d7e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50d7e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50d7ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50d7ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50d7f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50d7f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50d7f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x50d7f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50d7f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x50d7f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50d7fc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x50d7fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50d800: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x50d800u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50d804: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x50d804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50d808: 0x3e00008  jr          $ra
    ctx->pc = 0x50D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D808u;
        // 0x50d80c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D810u;
label_50d810:
    // 0x50d810: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50d810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50d814: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50D814u;
    {
        const bool branch_taken_0x50d814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D814u;
        // 0x50d818: 0x3c030090  lui         $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d814) {
            ctx->pc = 0x50D828u;
            goto label_50d828;
        }
    }
    ctx->pc = 0x50D81Cu;
    // 0x50d81c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50d820: 0x3e00008  jr          $ra
    ctx->pc = 0x50D820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D820u;
        // 0x50d824: 0xa4623e84  sh          $v0, 0x3E84($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16004), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D828u;
label_50d828:
    // 0x50d828: 0x2402f00f  addiu       $v0, $zero, -0xFF1
    ctx->pc = 0x50d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x50d82c: 0x3e00008  jr          $ra
    ctx->pc = 0x50D82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D82Cu;
        // 0x50d830: 0xa4623e84  sh          $v0, 0x3E84($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16004), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D834u;
    // 0x50d834: 0x0  nop
    ctx->pc = 0x50d834u;
    // NOP
    ctx->pc = 0x50d838u;
}
