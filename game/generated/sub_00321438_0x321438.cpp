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

// Function: sub_00321438
// Address: 0x321438 - 0x321570
void sub_00321438_0x321438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321438_0x321438");
#endif

    switch (ctx->pc) {
        case 0x321438u: goto label_321438;
        case 0x32143cu: goto label_32143c;
        case 0x321440u: goto label_321440;
        case 0x321444u: goto label_321444;
        case 0x321448u: goto label_321448;
        case 0x32144cu: goto label_32144c;
        case 0x321450u: goto label_321450;
        case 0x321454u: goto label_321454;
        case 0x321458u: goto label_321458;
        case 0x32145cu: goto label_32145c;
        case 0x321460u: goto label_321460;
        case 0x321464u: goto label_321464;
        case 0x321468u: goto label_321468;
        case 0x32146cu: goto label_32146c;
        case 0x321470u: goto label_321470;
        case 0x321474u: goto label_321474;
        case 0x321478u: goto label_321478;
        case 0x32147cu: goto label_32147c;
        case 0x321480u: goto label_321480;
        case 0x321484u: goto label_321484;
        case 0x321488u: goto label_321488;
        case 0x32148cu: goto label_32148c;
        case 0x321490u: goto label_321490;
        case 0x321494u: goto label_321494;
        case 0x321498u: goto label_321498;
        case 0x32149cu: goto label_32149c;
        case 0x3214a0u: goto label_3214a0;
        case 0x3214a4u: goto label_3214a4;
        case 0x3214a8u: goto label_3214a8;
        case 0x3214acu: goto label_3214ac;
        case 0x3214b0u: goto label_3214b0;
        case 0x3214b4u: goto label_3214b4;
        case 0x3214b8u: goto label_3214b8;
        case 0x3214bcu: goto label_3214bc;
        case 0x3214c0u: goto label_3214c0;
        case 0x3214c4u: goto label_3214c4;
        case 0x3214c8u: goto label_3214c8;
        case 0x3214ccu: goto label_3214cc;
        case 0x3214d0u: goto label_3214d0;
        case 0x3214d4u: goto label_3214d4;
        case 0x3214d8u: goto label_3214d8;
        case 0x3214dcu: goto label_3214dc;
        case 0x3214e0u: goto label_3214e0;
        case 0x3214e4u: goto label_3214e4;
        case 0x3214e8u: goto label_3214e8;
        case 0x3214ecu: goto label_3214ec;
        case 0x3214f0u: goto label_3214f0;
        case 0x3214f4u: goto label_3214f4;
        case 0x3214f8u: goto label_3214f8;
        case 0x3214fcu: goto label_3214fc;
        case 0x321500u: goto label_321500;
        case 0x321504u: goto label_321504;
        case 0x321508u: goto label_321508;
        case 0x32150cu: goto label_32150c;
        case 0x321510u: goto label_321510;
        case 0x321514u: goto label_321514;
        case 0x321518u: goto label_321518;
        case 0x32151cu: goto label_32151c;
        case 0x321520u: goto label_321520;
        case 0x321524u: goto label_321524;
        case 0x321528u: goto label_321528;
        case 0x32152cu: goto label_32152c;
        case 0x321530u: goto label_321530;
        case 0x321534u: goto label_321534;
        case 0x321538u: goto label_321538;
        case 0x32153cu: goto label_32153c;
        case 0x321540u: goto label_321540;
        case 0x321544u: goto label_321544;
        case 0x321548u: goto label_321548;
        case 0x32154cu: goto label_32154c;
        case 0x321550u: goto label_321550;
        case 0x321554u: goto label_321554;
        case 0x321558u: goto label_321558;
        case 0x32155cu: goto label_32155c;
        case 0x321560u: goto label_321560;
        case 0x321564u: goto label_321564;
        case 0x321568u: goto label_321568;
        case 0x32156cu: goto label_32156c;
        default: break;
    }

    ctx->pc = 0x321438u;

label_321438:
    // 0x321438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32143c:
    // 0x32143c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_321440:
    // 0x321440: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x321440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_321444:
    // 0x321444: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x321444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_321448:
    // 0x321448: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x321448u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32144c:
    // 0x32144c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_321450:
    // 0x321450: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x321450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321454:
    // 0x321454: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x321454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_321458:
    // 0x321458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32145c:
    // 0x32145c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_321460:
    // 0x321460: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x321460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321464:
    // 0x321464: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x321464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_321468:
    // 0x321468: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x321468u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32146c:
    // 0x32146c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x32146cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_321470:
    // 0x321470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x321470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_321474:
    // 0x321474: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x321474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_321478:
    // 0x321478: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x321478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_32147c:
    // 0x32147c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x32147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_321480:
    // 0x321480: 0xc0c76aa  jal         func_31DAA8
label_321484:
    if (ctx->pc == 0x321484u) {
        ctx->pc = 0x321484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321480u;
        // 0x321484: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321488u;
        goto label_321488;
    }
    ctx->pc = 0x321480u;
    SET_GPR_U32(ctx, 31, 0x321488u);
    ctx->pc = 0x321484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321480u;
    // 0x321484: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DAA8u, 0x321480u, 0x321488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321488u;
label_321488:
    // 0x321488: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_32148c:
    if (ctx->pc == 0x32148Cu) {
        ctx->pc = 0x32148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321488u;
        // 0x32148c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321490u;
        goto label_321490;
    }
    ctx->pc = 0x321488u;
    {
        const bool branch_taken_0x321488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321488u;
        // 0x32148c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321488) {
            ctx->pc = 0x321498u;
            goto label_321498;
        }
    }
    ctx->pc = 0x321490u;
label_321490:
    // 0x321490: 0x1000002a  b           . + 4 + (0x2A << 2)
label_321494:
    if (ctx->pc == 0x321494u) {
        ctx->pc = 0x321494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321490u;
        // 0x321494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321498u;
        goto label_321498;
    }
    ctx->pc = 0x321490u;
    {
        const bool branch_taken_0x321490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321490u;
        // 0x321494: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321490) {
            ctx->pc = 0x32153Cu;
            goto label_32153c;
        }
    }
    ctx->pc = 0x321498u;
label_321498:
    // 0x321498: 0xc0c76ca  jal         func_31DB28
label_32149c:
    if (ctx->pc == 0x32149Cu) {
        ctx->pc = 0x32149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321498u;
        // 0x32149c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214A0u;
        goto label_3214a0;
    }
    ctx->pc = 0x321498u;
    SET_GPR_U32(ctx, 31, 0x3214A0u);
    ctx->pc = 0x32149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321498u;
    // 0x32149c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB28u, 0x321498u, 0x3214A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214A0u;
label_3214a0:
    // 0x3214a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3214a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3214a4:
    // 0x3214a4: 0xc0c76cc  jal         func_31DB30
label_3214a8:
    if (ctx->pc == 0x3214A8u) {
        ctx->pc = 0x3214A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214A4u;
        // 0x3214a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214ACu;
        goto label_3214ac;
    }
    ctx->pc = 0x3214A4u;
    SET_GPR_U32(ctx, 31, 0x3214ACu);
    ctx->pc = 0x3214A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3214A4u;
    // 0x3214a8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB30u, 0x3214A4u, 0x3214ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214ACu;
label_3214ac:
    // 0x3214ac: 0x1a800020  blez        $s4, . + 4 + (0x20 << 2)
label_3214b0:
    if (ctx->pc == 0x3214B0u) {
        ctx->pc = 0x3214B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214ACu;
        // 0x3214b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214B4u;
        goto label_3214b4;
    }
    ctx->pc = 0x3214ACu;
    {
        const bool branch_taken_0x3214ac = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3214B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214ACu;
        // 0x3214b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214ac) {
            ctx->pc = 0x321530u;
            goto label_321530;
        }
    }
    ctx->pc = 0x3214B4u;
label_3214b4:
    // 0x3214b4: 0x32b60001  andi        $s6, $s5, 0x1
    ctx->pc = 0x3214b4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3214b8:
    // 0x3214b8: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x3214b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3214bc:
    // 0x3214bc: 0x0  nop
    ctx->pc = 0x3214bcu;
    // NOP
label_3214c0:
    // 0x3214c0: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_3214c4:
    if (ctx->pc == 0x3214C4u) {
        ctx->pc = 0x3214C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C0u;
        // 0x3214c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214C8u;
        goto label_3214c8;
    }
    ctx->pc = 0x3214C0u;
    {
        const bool branch_taken_0x3214c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3214C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C0u;
        // 0x3214c4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214c0) {
            ctx->pc = 0x3214D0u;
            goto label_3214d0;
        }
    }
    ctx->pc = 0x3214C8u;
label_3214c8:
    // 0x3214c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3214cc:
    if (ctx->pc == 0x3214CCu) {
        ctx->pc = 0x3214CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C8u;
        // 0x3214cc: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214D0u;
        goto label_3214d0;
    }
    ctx->pc = 0x3214C8u;
    {
        const bool branch_taken_0x3214c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3214CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C8u;
        // 0x3214cc: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3214c8) {
            ctx->pc = 0x3214E0u;
            goto label_3214e0;
        }
    }
    ctx->pc = 0x3214D0u;
label_3214d0:
    // 0x3214d0: 0xc0c770e  jal         func_31DC38
label_3214d4:
    if (ctx->pc == 0x3214D4u) {
        ctx->pc = 0x3214D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214D0u;
        // 0x3214d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214D8u;
        goto label_3214d8;
    }
    ctx->pc = 0x3214D0u;
    SET_GPR_U32(ctx, 31, 0x3214D8u);
    ctx->pc = 0x3214D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3214D0u;
    // 0x3214d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC38u, 0x3214D0u, 0x3214D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214D8u;
label_3214d8:
    // 0x3214d8: 0x4420018  bltzl       $v0, . + 4 + (0x18 << 2)
label_3214dc:
    if (ctx->pc == 0x3214DCu) {
        ctx->pc = 0x3214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214D8u;
        // 0x3214dc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214E0u;
        goto label_3214e0;
    }
    ctx->pc = 0x3214D8u;
    {
        const bool branch_taken_0x3214d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3214d8) {
            ctx->pc = 0x3214DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3214D8u;
            // 0x3214dc: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32153Cu;
            goto label_32153c;
        }
    }
    ctx->pc = 0x3214E0u;
label_3214e0:
    // 0x3214e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3214e4:
    // 0x3214e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3214e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3214e8:
    // 0x3214e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3214e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3214ec:
    // 0x3214ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3214ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_3214f0:
    // 0x3214f0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3214f4:
    // 0x3214f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3214f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3214f8:
    // 0x3214f8: 0x40f809  jalr        $v0
label_3214fc:
    if (ctx->pc == 0x3214FCu) {
        ctx->pc = 0x3214FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214F8u;
        // 0x3214fc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321500u;
        goto label_321500;
    }
    ctx->pc = 0x3214F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321500u);
        ctx->pc = 0x3214FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214F8u;
        // 0x3214fc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214F8u, 0x321500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321500u;
label_321500:
    // 0x321500: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_321504:
    // 0x321504: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x321504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321508:
    // 0x321508: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x321508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32150c:
    // 0x32150c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x32150cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_321510:
    // 0x321510: 0xc0ce92a  jal         func_33A4A8
label_321514:
    if (ctx->pc == 0x321514u) {
        ctx->pc = 0x321514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321510u;
        // 0x321514: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321518u;
        goto label_321518;
    }
    ctx->pc = 0x321510u;
    SET_GPR_U32(ctx, 31, 0x321518u);
    ctx->pc = 0x321514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321510u;
    // 0x321514: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A4A8u, 0x321510u, 0x321518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321518u;
label_321518:
    // 0x321518: 0xc0c7758  jal         func_31DD60
label_32151c:
    if (ctx->pc == 0x32151Cu) {
        ctx->pc = 0x32151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321518u;
        // 0x32151c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321520u;
        goto label_321520;
    }
    ctx->pc = 0x321518u;
    SET_GPR_U32(ctx, 31, 0x321520u);
    ctx->pc = 0x32151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321518u;
    // 0x32151c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD60u, 0x321518u, 0x321520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321520u;
label_321520:
    // 0x321520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321524:
    // 0x321524: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x321524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_321528:
    // 0x321528: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_32152c:
    if (ctx->pc == 0x32152Cu) {
        ctx->pc = 0x321530u;
        goto label_321530;
    }
    ctx->pc = 0x321528u;
    {
        const bool branch_taken_0x321528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321528) {
            ctx->pc = 0x3214C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3214c0;
        }
    }
    ctx->pc = 0x321530u;
label_321530:
    // 0x321530: 0xc0c8dde  jal         func_323778
label_321534:
    if (ctx->pc == 0x321534u) {
        ctx->pc = 0x321538u;
        goto label_321538;
    }
    ctx->pc = 0x321530u;
    SET_GPR_U32(ctx, 31, 0x321538u);
    ctx->pc = 0x323778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323778u, 0x321530u, 0x321538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321538u;
label_321538:
    // 0x321538: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32153c:
    // 0x32153c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32153cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321540:
    // 0x321540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x321540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_321544:
    // 0x321544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x321544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321548:
    // 0x321548: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x321548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32154c:
    // 0x32154c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32154cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_321550:
    // 0x321550: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x321550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_321554:
    // 0x321554: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x321554u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_321558:
    // 0x321558: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x321558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_32155c:
    // 0x32155c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x32155cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_321560:
    // 0x321560: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x321560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_321564:
    // 0x321564: 0x3e00008  jr          $ra
label_321568:
    if (ctx->pc == 0x321568u) {
        ctx->pc = 0x321568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321564u;
        // 0x321568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32156Cu;
        goto label_32156c;
    }
    ctx->pc = 0x321564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321564u;
        // 0x321568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32156Cu;
label_32156c:
    // 0x32156c: 0x0  nop
    ctx->pc = 0x32156cu;
    // NOP
    ctx->pc = 0x321570u;
}
