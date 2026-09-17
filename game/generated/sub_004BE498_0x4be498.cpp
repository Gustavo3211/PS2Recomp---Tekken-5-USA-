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

// Function: sub_004BE498
// Address: 0x4be498 - 0x4be580
void sub_004BE498_0x4be498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE498_0x4be498");
#endif

    switch (ctx->pc) {
        case 0x4be498u: goto label_4be498;
        case 0x4be49cu: goto label_4be49c;
        case 0x4be4a0u: goto label_4be4a0;
        case 0x4be4a4u: goto label_4be4a4;
        case 0x4be4a8u: goto label_4be4a8;
        case 0x4be4acu: goto label_4be4ac;
        case 0x4be4b0u: goto label_4be4b0;
        case 0x4be4b4u: goto label_4be4b4;
        case 0x4be4b8u: goto label_4be4b8;
        case 0x4be4bcu: goto label_4be4bc;
        case 0x4be4c0u: goto label_4be4c0;
        case 0x4be4c4u: goto label_4be4c4;
        case 0x4be4c8u: goto label_4be4c8;
        case 0x4be4ccu: goto label_4be4cc;
        case 0x4be4d0u: goto label_4be4d0;
        case 0x4be4d4u: goto label_4be4d4;
        case 0x4be4d8u: goto label_4be4d8;
        case 0x4be4dcu: goto label_4be4dc;
        case 0x4be4e0u: goto label_4be4e0;
        case 0x4be4e4u: goto label_4be4e4;
        case 0x4be4e8u: goto label_4be4e8;
        case 0x4be4ecu: goto label_4be4ec;
        case 0x4be4f0u: goto label_4be4f0;
        case 0x4be4f4u: goto label_4be4f4;
        case 0x4be4f8u: goto label_4be4f8;
        case 0x4be4fcu: goto label_4be4fc;
        case 0x4be500u: goto label_4be500;
        case 0x4be504u: goto label_4be504;
        case 0x4be508u: goto label_4be508;
        case 0x4be50cu: goto label_4be50c;
        case 0x4be510u: goto label_4be510;
        case 0x4be514u: goto label_4be514;
        case 0x4be518u: goto label_4be518;
        case 0x4be51cu: goto label_4be51c;
        case 0x4be520u: goto label_4be520;
        case 0x4be524u: goto label_4be524;
        case 0x4be528u: goto label_4be528;
        case 0x4be52cu: goto label_4be52c;
        case 0x4be530u: goto label_4be530;
        case 0x4be534u: goto label_4be534;
        case 0x4be538u: goto label_4be538;
        case 0x4be53cu: goto label_4be53c;
        case 0x4be540u: goto label_4be540;
        case 0x4be544u: goto label_4be544;
        case 0x4be548u: goto label_4be548;
        case 0x4be54cu: goto label_4be54c;
        case 0x4be550u: goto label_4be550;
        case 0x4be554u: goto label_4be554;
        case 0x4be558u: goto label_4be558;
        case 0x4be55cu: goto label_4be55c;
        case 0x4be560u: goto label_4be560;
        case 0x4be564u: goto label_4be564;
        case 0x4be568u: goto label_4be568;
        case 0x4be56cu: goto label_4be56c;
        case 0x4be570u: goto label_4be570;
        case 0x4be574u: goto label_4be574;
        case 0x4be578u: goto label_4be578;
        case 0x4be57cu: goto label_4be57c;
        default: break;
    }

    ctx->pc = 0x4be498u;

label_4be498:
    // 0x4be498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4be498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4be49c:
    // 0x4be49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4be49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4be4a0:
    // 0x4be4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4be4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4be4a4:
    // 0x4be4a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4be4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4be4a8:
    // 0x4be4a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4be4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4be4ac:
    // 0x4be4ac: 0xc1232f2  jal         func_48CBC8
label_4be4b0:
    if (ctx->pc == 0x4BE4B0u) {
        ctx->pc = 0x4BE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4ACu;
        // 0x4be4b0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BE4B4u;
        goto label_4be4b4;
    }
    ctx->pc = 0x4BE4ACu;
    SET_GPR_U32(ctx, 31, 0x4BE4B4u);
    ctx->pc = 0x4BE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE4ACu;
    // 0x4be4b0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BE4ACu, 0x4BE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE4B4u;
label_4be4b4:
    // 0x4be4b4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4be4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4be4b8:
    // 0x4be4b8: 0xac620e70  sw          $v0, 0xE70($v1)
    ctx->pc = 0x4be4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3696), GPR_U32(ctx, 2));
label_4be4bc:
    // 0x4be4bc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4be4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4be4c0:
    // 0x4be4c0: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
label_4be4c4:
    if (ctx->pc == 0x4BE4C4u) {
        ctx->pc = 0x4BE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4C0u;
        // 0x4be4c4: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BE4C8u;
        goto label_4be4c8;
    }
    ctx->pc = 0x4BE4C0u;
    {
        const bool branch_taken_0x4be4c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4be4c0) {
            ctx->pc = 0x4BE4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BE4C0u;
            // 0x4be4c4: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BE4F4u;
            goto label_4be4f4;
        }
    }
    ctx->pc = 0x4BE4C8u;
label_4be4c8:
    // 0x4be4c8: 0xc12b642  jal         func_4AD908
label_4be4cc:
    if (ctx->pc == 0x4BE4CCu) {
        ctx->pc = 0x4BE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4C8u;
        // 0x4be4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BE4D0u;
        goto label_4be4d0;
    }
    ctx->pc = 0x4BE4C8u;
    SET_GPR_U32(ctx, 31, 0x4BE4D0u);
    ctx->pc = 0x4BE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE4C8u;
    // 0x4be4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BE4C8u, 0x4BE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE4D0u;
label_4be4d0:
    // 0x4be4d0: 0xc12b5b0  jal         func_4AD6C0
label_4be4d4:
    if (ctx->pc == 0x4BE4D4u) {
        ctx->pc = 0x4BE4D8u;
        goto label_4be4d8;
    }
    ctx->pc = 0x4BE4D0u;
    SET_GPR_U32(ctx, 31, 0x4BE4D8u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4BE4D0u, 0x4BE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE4D8u;
label_4be4d8:
    // 0x4be4d8: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4be4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
label_4be4dc:
    // 0x4be4dc: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4be4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4be4e0:
    // 0x4be4e0: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4be4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4be4e4:
    // 0x4be4e4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4be4e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4be4e8:
    // 0x4be4e8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4be4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4be4ec:
    // 0x4be4ec: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4be4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4be4f0:
    // 0x4be4f0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4be4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4be4f4:
    // 0x4be4f4: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4be4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4be4f8:
    // 0x4be4f8: 0x24840e58  addiu       $a0, $a0, 0xE58
    ctx->pc = 0x4be4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3672));
label_4be4fc:
    // 0x4be4fc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4be4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4be500:
    // 0x4be500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4be500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4be504:
    // 0x4be504: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x4be504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
label_4be508:
    // 0x4be508: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4be508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4be50c:
    // 0x4be50c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4be50cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4be510:
    // 0x4be510: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4be514:
    // 0x4be514: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4be518:
    // 0x4be518: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4be518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4be51c:
    // 0x4be51c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4be51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4be520:
    // 0x4be520: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4be520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4be524:
    // 0x4be524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4be524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4be528:
    // 0x4be528: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4be528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4be52c:
    // 0x4be52c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4be52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4be530:
    // 0x4be530: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4be530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4be534:
    // 0x4be534: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4be534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4be538:
    // 0x4be538: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4be538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4be53c:
    // 0x4be53c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4be53cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4be540:
    // 0x4be540: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4be540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4be544:
    // 0x4be544: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4be544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4be548:
    // 0x4be548: 0x24217020  addiu       $at, $at, 0x7020
    ctx->pc = 0x4be548u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28704));
label_4be54c:
    // 0x4be54c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4be54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4be550:
    // 0x4be550: 0xacc20e6c  sw          $v0, 0xE6C($a2)
    ctx->pc = 0x4be550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3692), GPR_U32(ctx, 2));
label_4be554:
    // 0x4be554: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4be554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4be558:
    // 0x4be558: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x4be558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_4be55c:
    // 0x4be55c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_4be560:
    if (ctx->pc == 0x4BE560u) {
        ctx->pc = 0x4BE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE55Cu;
        // 0x4be560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BE564u;
        goto label_4be564;
    }
    ctx->pc = 0x4BE55Cu;
    {
        const bool branch_taken_0x4be55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4be55c) {
            ctx->pc = 0x4BE560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BE55Cu;
            // 0x4be560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BE5FCu;
            return;
        }
    }
    ctx->pc = 0x4BE564u;
label_4be564:
    // 0x4be564: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4be564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4be568:
    // 0x4be568: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4be568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4be56c:
    // 0x4be56c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4be56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4be570:
    // 0x4be570: 0x8c63b3c0  lw          $v1, -0x4C40($v1)
    ctx->pc = 0x4be570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947776)));
label_4be574:
    // 0x4be574: 0x600008  jr          $v1
label_4be578:
    if (ctx->pc == 0x4BE578u) {
        ctx->pc = 0x4BE57Cu;
        goto label_4be57c;
    }
    ctx->pc = 0x4BE574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE574u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4BE57Cu;
label_4be57c:
    // 0x4be57c: 0x0  nop
    ctx->pc = 0x4be57cu;
    // NOP
    ctx->pc = 0x4be580u;
}
