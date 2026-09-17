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

// Function: sub_00240348
// Address: 0x240348 - 0x240480
void sub_00240348_0x240348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240348_0x240348");
#endif

    switch (ctx->pc) {
        case 0x240364u: goto label_240364;
        case 0x240374u: goto label_240374;
        case 0x2403a4u: goto label_2403a4;
        case 0x2403d4u: goto label_2403d4;
        case 0x2403ecu: goto label_2403ec;
        case 0x240400u: goto label_240400;
        case 0x240410u: goto label_240410;
        case 0x240440u: goto label_240440;
        case 0x240448u: goto label_240448;
        case 0x24045cu: goto label_24045c;
        case 0x240464u: goto label_240464;
        default: break;
    }

    ctx->pc = 0x240348u;

    // 0x240348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24034c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24035c: 0xc0c5a6a  jal         func_3169A8
    ctx->pc = 0x24035Cu;
    SET_GPR_U32(ctx, 31, 0x240364u);
    ctx->pc = 0x240360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24035Cu;
    // 0x240360: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3169A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169A8u, 0x24035Cu, 0x240364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240364u;
label_240364:
    // 0x240364: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x240364u;
    {
        const bool branch_taken_0x240364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240364) {
            ctx->pc = 0x240408u;
            goto label_240408;
        }
    }
    ctx->pc = 0x24036Cu;
    // 0x24036c: 0xc0c59b5  jal         func_3166D4
    ctx->pc = 0x24036Cu;
    SET_GPR_U32(ctx, 31, 0x240374u);
    ctx->pc = 0x3166D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3166D4u, 0x24036Cu, 0x240374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240374u;
label_240374:
    // 0x240374: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x240374u;
    {
        const bool branch_taken_0x240374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240374u;
        // 0x240378: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240374) {
            ctx->pc = 0x240408u;
            goto label_240408;
        }
    }
    ctx->pc = 0x24037Cu;
    // 0x24037c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x240380: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240384: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x240388: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x240388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24038c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x240390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24039c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x24039Cu;
    SET_GPR_U32(ctx, 31, 0x2403A4u);
    ctx->pc = 0x2403A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24039Cu;
    // 0x2403a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x24039Cu, 0x2403A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403A4u;
label_2403a4:
    // 0x2403a4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2403a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2403a8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2403A8u;
    {
        const bool branch_taken_0x2403a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403A8u;
        // 0x2403ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403a8) {
            ctx->pc = 0x2403F8u;
            goto label_2403f8;
        }
    }
    ctx->pc = 0x2403B0u;
    // 0x2403b0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2403b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x2403b4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2403b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2403b8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2403b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2403bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2403bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2403c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2403C0u;
    {
        const bool branch_taken_0x2403c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403C0u;
        // 0x2403c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403c0) {
            ctx->pc = 0x2403E0u;
            goto label_2403e0;
        }
    }
    ctx->pc = 0x2403C8u;
    // 0x2403c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2403c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2403cc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2403CCu;
    SET_GPR_U32(ctx, 31, 0x2403D4u);
    ctx->pc = 0x2403D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403CCu;
    // 0x2403d0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2403CCu, 0x2403D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403D4u;
label_2403d4:
    // 0x2403d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2403d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2403D8u;
    {
        const bool branch_taken_0x2403d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403D8u;
        // 0x2403dc: 0xac430050  sw          $v1, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403d8) {
            ctx->pc = 0x2403F0u;
            goto label_2403f0;
        }
    }
    ctx->pc = 0x2403E0u;
label_2403e0:
    // 0x2403e0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2403e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2403e4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2403E4u;
    SET_GPR_U32(ctx, 31, 0x2403ECu);
    ctx->pc = 0x2403E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403E4u;
    // 0x2403e8: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2403E4u, 0x2403ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2403ECu;
label_2403ec:
    // 0x2403ec: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2403ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2403f0:
    // 0x2403f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2403F0u;
    {
        const bool branch_taken_0x2403f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2403F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403F0u;
        // 0x2403f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403f0) {
            ctx->pc = 0x24046Cu;
            goto label_24046c;
        }
    }
    ctx->pc = 0x2403F8u;
label_2403f8:
    // 0x2403f8: 0xc090062  jal         func_240188
    ctx->pc = 0x2403F8u;
    SET_GPR_U32(ctx, 31, 0x240400u);
    ctx->pc = 0x2403FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2403F8u;
    // 0x2403fc: 0x24110007  addiu       $s1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240188u, 0x2403F8u, 0x240400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240400u;
label_240400:
    // 0x240400: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x240400u;
    {
        const bool branch_taken_0x240400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240400) {
            ctx->pc = 0x240454u;
            goto label_240454;
        }
    }
    ctx->pc = 0x240408u;
label_240408:
    // 0x240408: 0xc0900d0  jal         func_240340
    ctx->pc = 0x240408u;
    SET_GPR_U32(ctx, 31, 0x240410u);
    ctx->pc = 0x24040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240408u;
    // 0x24040c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240340u, 0x240408u, 0x240410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240410u;
label_240410:
    // 0x240410: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x240410u;
    {
        const bool branch_taken_0x240410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240410u;
        // 0x240414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240410) {
            ctx->pc = 0x240454u;
            goto label_240454;
        }
    }
    ctx->pc = 0x240418u;
    // 0x240418: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x240418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x24041c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24041cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240420: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x240420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x240424: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x240424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x240428: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x240428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24042c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x240430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240438: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x240438u;
    SET_GPR_U32(ctx, 31, 0x240440u);
    ctx->pc = 0x24043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240438u;
    // 0x24043c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x240438u, 0x240440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240440u;
label_240440:
    // 0x240440: 0xc090062  jal         func_240188
    ctx->pc = 0x240440u;
    SET_GPR_U32(ctx, 31, 0x240448u);
    ctx->pc = 0x240444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240440u;
    // 0x240444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240188u, 0x240440u, 0x240448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240448u;
label_240448:
    // 0x240448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24044c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x24044cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x240450: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x240450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240454:
    // 0x240454: 0xc0c5aab  jal         func_316AAC
    ctx->pc = 0x240454u;
    SET_GPR_U32(ctx, 31, 0x24045Cu);
    ctx->pc = 0x316AACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316AACu, 0x240454u, 0x24045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24045Cu;
label_24045c:
    // 0x24045c: 0xc0c5ac5  jal         func_316B14
    ctx->pc = 0x24045Cu;
    SET_GPR_U32(ctx, 31, 0x240464u);
    ctx->pc = 0x240460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24045Cu;
    // 0x240460: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316B14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316B14u, 0x24045Cu, 0x240464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240464u;
label_240464:
    // 0x240464: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x240464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x240468: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x240468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24046c:
    // 0x24046c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24046cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240478: 0x3e00008  jr          $ra
    ctx->pc = 0x240478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240478u;
        // 0x24047c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240480u;
}
