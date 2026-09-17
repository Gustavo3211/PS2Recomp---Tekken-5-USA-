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

// Function: sub_0034B4A0
// Address: 0x34b4a0 - 0x34b60c
void sub_0034B4A0_0x34b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B4A0_0x34b4a0");
#endif

    switch (ctx->pc) {
        case 0x34b4a0u: goto label_34b4a0;
        case 0x34b4a4u: goto label_34b4a4;
        case 0x34b4a8u: goto label_34b4a8;
        case 0x34b4acu: goto label_34b4ac;
        case 0x34b4b0u: goto label_34b4b0;
        case 0x34b4b4u: goto label_34b4b4;
        case 0x34b4b8u: goto label_34b4b8;
        case 0x34b4bcu: goto label_34b4bc;
        case 0x34b4c0u: goto label_34b4c0;
        case 0x34b4c4u: goto label_34b4c4;
        case 0x34b4c8u: goto label_34b4c8;
        case 0x34b4ccu: goto label_34b4cc;
        case 0x34b4d0u: goto label_34b4d0;
        case 0x34b4d4u: goto label_34b4d4;
        case 0x34b4d8u: goto label_34b4d8;
        case 0x34b4dcu: goto label_34b4dc;
        case 0x34b4e0u: goto label_34b4e0;
        case 0x34b4e4u: goto label_34b4e4;
        case 0x34b4e8u: goto label_34b4e8;
        case 0x34b4ecu: goto label_34b4ec;
        case 0x34b4f0u: goto label_34b4f0;
        case 0x34b4f4u: goto label_34b4f4;
        case 0x34b4f8u: goto label_34b4f8;
        case 0x34b4fcu: goto label_34b4fc;
        case 0x34b500u: goto label_34b500;
        case 0x34b504u: goto label_34b504;
        case 0x34b508u: goto label_34b508;
        case 0x34b50cu: goto label_34b50c;
        case 0x34b510u: goto label_34b510;
        case 0x34b514u: goto label_34b514;
        case 0x34b518u: goto label_34b518;
        case 0x34b51cu: goto label_34b51c;
        case 0x34b520u: goto label_34b520;
        case 0x34b524u: goto label_34b524;
        case 0x34b528u: goto label_34b528;
        case 0x34b52cu: goto label_34b52c;
        case 0x34b530u: goto label_34b530;
        case 0x34b534u: goto label_34b534;
        case 0x34b538u: goto label_34b538;
        case 0x34b53cu: goto label_34b53c;
        case 0x34b540u: goto label_34b540;
        case 0x34b544u: goto label_34b544;
        case 0x34b548u: goto label_34b548;
        case 0x34b54cu: goto label_34b54c;
        case 0x34b550u: goto label_34b550;
        case 0x34b554u: goto label_34b554;
        case 0x34b558u: goto label_34b558;
        case 0x34b55cu: goto label_34b55c;
        case 0x34b560u: goto label_34b560;
        case 0x34b564u: goto label_34b564;
        case 0x34b568u: goto label_34b568;
        case 0x34b56cu: goto label_34b56c;
        case 0x34b570u: goto label_34b570;
        case 0x34b574u: goto label_34b574;
        case 0x34b578u: goto label_34b578;
        case 0x34b57cu: goto label_34b57c;
        case 0x34b580u: goto label_34b580;
        case 0x34b584u: goto label_34b584;
        case 0x34b588u: goto label_34b588;
        case 0x34b58cu: goto label_34b58c;
        case 0x34b590u: goto label_34b590;
        case 0x34b594u: goto label_34b594;
        case 0x34b598u: goto label_34b598;
        case 0x34b59cu: goto label_34b59c;
        case 0x34b5a0u: goto label_34b5a0;
        case 0x34b5a4u: goto label_34b5a4;
        case 0x34b5a8u: goto label_34b5a8;
        case 0x34b5acu: goto label_34b5ac;
        case 0x34b5b0u: goto label_34b5b0;
        case 0x34b5b4u: goto label_34b5b4;
        case 0x34b5b8u: goto label_34b5b8;
        case 0x34b5bcu: goto label_34b5bc;
        case 0x34b5c0u: goto label_34b5c0;
        case 0x34b5c4u: goto label_34b5c4;
        case 0x34b5c8u: goto label_34b5c8;
        case 0x34b5ccu: goto label_34b5cc;
        case 0x34b5d0u: goto label_34b5d0;
        case 0x34b5d4u: goto label_34b5d4;
        case 0x34b5d8u: goto label_34b5d8;
        case 0x34b5dcu: goto label_34b5dc;
        case 0x34b5e0u: goto label_34b5e0;
        case 0x34b5e4u: goto label_34b5e4;
        case 0x34b5e8u: goto label_34b5e8;
        case 0x34b5ecu: goto label_34b5ec;
        case 0x34b5f0u: goto label_34b5f0;
        case 0x34b5f4u: goto label_34b5f4;
        case 0x34b5f8u: goto label_34b5f8;
        case 0x34b5fcu: goto label_34b5fc;
        case 0x34b600u: goto label_34b600;
        case 0x34b604u: goto label_34b604;
        case 0x34b608u: goto label_34b608;
        default: break;
    }

    ctx->pc = 0x34b4a0u;

label_34b4a0:
    // 0x34b4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34b4a4:
    // 0x34b4a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_34b4a8:
    // 0x34b4a8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34b4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34b4ac:
    // 0x34b4ac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_34b4b0:
    // 0x34b4b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34b4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34b4b4:
    // 0x34b4b4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x34b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_34b4b8:
    // 0x34b4b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x34b4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34b4bc:
    // 0x34b4bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34b4c0:
    // 0x34b4c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34b4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34b4c4:
    // 0x34b4c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_34b4c8:
    // 0x34b4c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34b4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_34b4cc:
    // 0x34b4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34b4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34b4d0:
    // 0x34b4d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34b4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_34b4d4:
    // 0x34b4d4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_34b4d8:
    // 0x34b4d8: 0xc0d2c40  jal         func_34B100
label_34b4dc:
    if (ctx->pc == 0x34B4DCu) {
        ctx->pc = 0x34B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B4D8u;
        // 0x34b4dc: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B4E0u;
        goto label_34b4e0;
    }
    ctx->pc = 0x34B4D8u;
    SET_GPR_U32(ctx, 31, 0x34B4E0u);
    ctx->pc = 0x34B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4D8u;
    // 0x34b4dc: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B100u, 0x34B4D8u, 0x34B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4E0u;
label_34b4e0:
    // 0x34b4e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_34b4e4:
    // 0x34b4e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34b4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b4e8:
    // 0x34b4e8: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x34b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_34b4ec:
    // 0x34b4ec: 0x246300d4  addiu       $v1, $v1, 0xD4
    ctx->pc = 0x34b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
label_34b4f0:
    // 0x34b4f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34b4f4:
    // 0x34b4f4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x34b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_34b4f8:
    // 0x34b4f8: 0xc0c8864  jal         func_322190
label_34b4fc:
    if (ctx->pc == 0x34B4FCu) {
        ctx->pc = 0x34B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B4F8u;
        // 0x34b4fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B500u;
        goto label_34b500;
    }
    ctx->pc = 0x34B4F8u;
    SET_GPR_U32(ctx, 31, 0x34B500u);
    ctx->pc = 0x34B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4F8u;
    // 0x34b4fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x34B4F8u, 0x34B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B500u;
label_34b500:
    // 0x34b500: 0x8e4500e8  lw          $a1, 0xE8($s2)
    ctx->pc = 0x34b500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_34b504:
    // 0x34b504: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34b504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b508:
    // 0x34b508: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x34b508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_34b50c:
    // 0x34b50c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x34b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_34b510:
    // 0x34b510: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x34b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_34b514:
    // 0x34b514: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34b514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_34b518:
    // 0x34b518: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x34b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34b51c:
    // 0x34b51c: 0x40f809  jalr        $v0
label_34b520:
    if (ctx->pc == 0x34B520u) {
        ctx->pc = 0x34B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B51Cu;
        // 0x34b520: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B524u;
        goto label_34b524;
    }
    ctx->pc = 0x34B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34B524u);
        ctx->pc = 0x34B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B51Cu;
        // 0x34b520: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B51Cu, 0x34B524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B524u;
label_34b524:
    // 0x34b524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34b528:
    // 0x34b528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34b528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b52c:
    // 0x34b52c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34b52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34b530:
    // 0x34b530: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x34b530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34b534:
    // 0x34b534: 0xc0d2c68  jal         func_34B1A0
label_34b538:
    if (ctx->pc == 0x34B538u) {
        ctx->pc = 0x34B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B534u;
        // 0x34b538: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B53Cu;
        goto label_34b53c;
    }
    ctx->pc = 0x34B534u;
    SET_GPR_U32(ctx, 31, 0x34B53Cu);
    ctx->pc = 0x34B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B534u;
    // 0x34b538: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B1A0u, 0x34B534u, 0x34B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B53Cu;
label_34b53c:
    // 0x34b53c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x34b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_34b540:
    // 0x34b540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34b540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b544:
    // 0x34b544: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_34b548:
    // 0x34b548: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34b548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_34b54c:
    // 0x34b54c: 0x2442cc28  addiu       $v0, $v0, -0x33D8
    ctx->pc = 0x34b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954024));
label_34b550:
    // 0x34b550: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x34b550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_34b554:
    // 0x34b554: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x34b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_34b558:
    // 0x34b558: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34b558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34b55c:
    // 0x34b55c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x34b55cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_34b560:
    // 0x34b560: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x34b560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_34b564:
    // 0x34b564: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34b568:
    // 0x34b568: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x34b568u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
label_34b56c:
    // 0x34b56c: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x34b56cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
label_34b570:
    // 0x34b570: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x34b570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_34b574:
    // 0x34b574: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34b574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_34b578:
    // 0x34b578: 0x96270014  lhu         $a3, 0x14($s1)
    ctx->pc = 0x34b578u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_34b57c:
    // 0x34b57c: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x34b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
label_34b580:
    // 0x34b580: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x34b580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_34b584:
    // 0x34b584: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34b588:
    // 0x34b588: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x34b588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_34b58c:
    // 0x34b58c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x34b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_34b590:
    // 0x34b590: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x34b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_34b594:
    // 0x34b594: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x34b594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_34b598:
    // 0x34b598: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x34b598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_34b59c:
    // 0x34b59c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x34b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_34b5a0:
    // 0x34b5a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34b5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_34b5a4:
    // 0x34b5a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b5a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b5a8:
    // 0x34b5a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34b5ac:
    // 0x34b5ac: 0x10a60002  beq         $a1, $a2, . + 4 + (0x2 << 2)
label_34b5b0:
    if (ctx->pc == 0x34B5B0u) {
        ctx->pc = 0x34B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5ACu;
        // 0x34b5b0: 0x831825  or          $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B5B4u;
        goto label_34b5b4;
    }
    ctx->pc = 0x34B5ACu;
    {
        const bool branch_taken_0x34b5ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x34B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5ACu;
        // 0x34b5b0: 0x831825  or          $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b5ac) {
            ctx->pc = 0x34B5B8u;
            goto label_34b5b8;
        }
    }
    ctx->pc = 0x34B5B4u;
label_34b5b4:
    // 0x34b5b4: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x34b5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_34b5b8:
    // 0x34b5b8: 0x71031b89  pcpyld      $v1, $t0, $v1
    ctx->pc = 0x34b5b8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
label_34b5bc:
    // 0x34b5bc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x34b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_34b5c0:
    // 0x34b5c0: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x34b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_34b5c4:
    // 0x34b5c4: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x34b5c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
label_34b5c8:
    // 0x34b5c8: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x34b5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_34b5cc:
    // 0x34b5cc: 0x8e4900e4  lw          $t1, 0xE4($s2)
    ctx->pc = 0x34b5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_34b5d0:
    // 0x34b5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34b5d4:
    // 0x34b5d4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x34b5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_34b5d8:
    // 0x34b5d8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x34b5d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34b5dc:
    // 0x34b5dc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x34b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_34b5e0:
    // 0x34b5e0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x34b5e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34b5e4:
    // 0x34b5e4: 0xc0d2cb4  jal         func_34B2D0
label_34b5e8:
    if (ctx->pc == 0x34B5E8u) {
        ctx->pc = 0x34B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5E4u;
        // 0x34b5e8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B5ECu;
        goto label_34b5ec;
    }
    ctx->pc = 0x34B5E4u;
    SET_GPR_U32(ctx, 31, 0x34B5ECu);
    ctx->pc = 0x34B5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5E4u;
    // 0x34b5e8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B2D0u, 0x34B5E4u, 0x34B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5ECu;
label_34b5ec:
    // 0x34b5ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34b5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b5f0:
    // 0x34b5f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34b5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34b5f4:
    // 0x34b5f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34b5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34b5f8:
    // 0x34b5f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34b5f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34b5fc:
    // 0x34b5fc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34b5fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34b600:
    // 0x34b600: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34b600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34b604:
    // 0x34b604: 0x3e00008  jr          $ra
label_34b608:
    if (ctx->pc == 0x34B608u) {
        ctx->pc = 0x34B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B604u;
        // 0x34b608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B60Cu;
        goto label_fallthrough_0x34b604;
    }
    ctx->pc = 0x34B604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B604u;
        // 0x34b608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34b604:
    ctx->pc = 0x34B60Cu;
}
