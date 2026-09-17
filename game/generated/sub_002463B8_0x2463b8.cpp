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

// Function: sub_002463B8
// Address: 0x2463b8 - 0x2465a0
void sub_002463B8_0x2463b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002463B8_0x2463b8");
#endif

    switch (ctx->pc) {
        case 0x2463b8u: goto label_2463b8;
        case 0x2463bcu: goto label_2463bc;
        case 0x2463c0u: goto label_2463c0;
        case 0x2463c4u: goto label_2463c4;
        case 0x2463c8u: goto label_2463c8;
        case 0x2463ccu: goto label_2463cc;
        case 0x2463d0u: goto label_2463d0;
        case 0x2463d4u: goto label_2463d4;
        case 0x2463d8u: goto label_2463d8;
        case 0x2463dcu: goto label_2463dc;
        case 0x2463e0u: goto label_2463e0;
        case 0x2463e4u: goto label_2463e4;
        case 0x2463e8u: goto label_2463e8;
        case 0x2463ecu: goto label_2463ec;
        case 0x2463f0u: goto label_2463f0;
        case 0x2463f4u: goto label_2463f4;
        case 0x2463f8u: goto label_2463f8;
        case 0x2463fcu: goto label_2463fc;
        case 0x246400u: goto label_246400;
        case 0x246404u: goto label_246404;
        case 0x246408u: goto label_246408;
        case 0x24640cu: goto label_24640c;
        case 0x246410u: goto label_246410;
        case 0x246414u: goto label_246414;
        case 0x246418u: goto label_246418;
        case 0x24641cu: goto label_24641c;
        case 0x246420u: goto label_246420;
        case 0x246424u: goto label_246424;
        case 0x246428u: goto label_246428;
        case 0x24642cu: goto label_24642c;
        case 0x246430u: goto label_246430;
        case 0x246434u: goto label_246434;
        case 0x246438u: goto label_246438;
        case 0x24643cu: goto label_24643c;
        case 0x246440u: goto label_246440;
        case 0x246444u: goto label_246444;
        case 0x246448u: goto label_246448;
        case 0x24644cu: goto label_24644c;
        case 0x246450u: goto label_246450;
        case 0x246454u: goto label_246454;
        case 0x246458u: goto label_246458;
        case 0x24645cu: goto label_24645c;
        case 0x246460u: goto label_246460;
        case 0x246464u: goto label_246464;
        case 0x246468u: goto label_246468;
        case 0x24646cu: goto label_24646c;
        case 0x246470u: goto label_246470;
        case 0x246474u: goto label_246474;
        case 0x246478u: goto label_246478;
        case 0x24647cu: goto label_24647c;
        case 0x246480u: goto label_246480;
        case 0x246484u: goto label_246484;
        case 0x246488u: goto label_246488;
        case 0x24648cu: goto label_24648c;
        case 0x246490u: goto label_246490;
        case 0x246494u: goto label_246494;
        case 0x246498u: goto label_246498;
        case 0x24649cu: goto label_24649c;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464a4u: goto label_2464a4;
        case 0x2464a8u: goto label_2464a8;
        case 0x2464acu: goto label_2464ac;
        case 0x2464b0u: goto label_2464b0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464b8u: goto label_2464b8;
        case 0x2464bcu: goto label_2464bc;
        case 0x2464c0u: goto label_2464c0;
        case 0x2464c4u: goto label_2464c4;
        case 0x2464c8u: goto label_2464c8;
        case 0x2464ccu: goto label_2464cc;
        case 0x2464d0u: goto label_2464d0;
        case 0x2464d4u: goto label_2464d4;
        case 0x2464d8u: goto label_2464d8;
        case 0x2464dcu: goto label_2464dc;
        case 0x2464e0u: goto label_2464e0;
        case 0x2464e4u: goto label_2464e4;
        case 0x2464e8u: goto label_2464e8;
        case 0x2464ecu: goto label_2464ec;
        case 0x2464f0u: goto label_2464f0;
        case 0x2464f4u: goto label_2464f4;
        case 0x2464f8u: goto label_2464f8;
        case 0x2464fcu: goto label_2464fc;
        case 0x246500u: goto label_246500;
        case 0x246504u: goto label_246504;
        case 0x246508u: goto label_246508;
        case 0x24650cu: goto label_24650c;
        case 0x246510u: goto label_246510;
        case 0x246514u: goto label_246514;
        case 0x246518u: goto label_246518;
        case 0x24651cu: goto label_24651c;
        case 0x246520u: goto label_246520;
        case 0x246524u: goto label_246524;
        case 0x246528u: goto label_246528;
        case 0x24652cu: goto label_24652c;
        case 0x246530u: goto label_246530;
        case 0x246534u: goto label_246534;
        case 0x246538u: goto label_246538;
        case 0x24653cu: goto label_24653c;
        case 0x246540u: goto label_246540;
        case 0x246544u: goto label_246544;
        case 0x246548u: goto label_246548;
        case 0x24654cu: goto label_24654c;
        case 0x246550u: goto label_246550;
        case 0x246554u: goto label_246554;
        case 0x246558u: goto label_246558;
        case 0x24655cu: goto label_24655c;
        case 0x246560u: goto label_246560;
        case 0x246564u: goto label_246564;
        case 0x246568u: goto label_246568;
        case 0x24656cu: goto label_24656c;
        case 0x246570u: goto label_246570;
        case 0x246574u: goto label_246574;
        case 0x246578u: goto label_246578;
        case 0x24657cu: goto label_24657c;
        case 0x246580u: goto label_246580;
        case 0x246584u: goto label_246584;
        case 0x246588u: goto label_246588;
        case 0x24658cu: goto label_24658c;
        case 0x246590u: goto label_246590;
        case 0x246594u: goto label_246594;
        case 0x246598u: goto label_246598;
        case 0x24659cu: goto label_24659c;
        default: break;
    }

    ctx->pc = 0x2463b8u;

label_2463b8:
    // 0x2463b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2463b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2463bc:
    // 0x2463bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2463bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2463c0:
    // 0x2463c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2463c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2463c4:
    // 0x2463c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2463c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2463c8:
    // 0x2463c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2463c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2463cc:
    // 0x2463cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2463ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2463d0:
    // 0x2463d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2463d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2463d4:
    // 0x2463d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2463d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2463d8:
    // 0x2463d8: 0xc0916b0  jal         func_245AC0
label_2463dc:
    if (ctx->pc == 0x2463DCu) {
        ctx->pc = 0x2463DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463D8u;
        // 0x2463dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2463E0u;
        goto label_2463e0;
    }
    ctx->pc = 0x2463D8u;
    SET_GPR_U32(ctx, 31, 0x2463E0u);
    ctx->pc = 0x2463DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463D8u;
    // 0x2463dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x2463D8u, 0x2463E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463E0u;
label_2463e0:
    // 0x2463e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2463e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2463e4:
    // 0x2463e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2463e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2463e8:
    // 0x2463e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2463e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2463ec:
    // 0x2463ec: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2463ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2463f0:
    // 0x2463f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2463f4:
    // 0x2463f4: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x2463f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
label_2463f8:
    // 0x2463f8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_2463fc:
    if (ctx->pc == 0x2463FCu) {
        ctx->pc = 0x246400u;
        goto label_246400;
    }
    ctx->pc = 0x2463F8u;
    {
        const bool branch_taken_0x2463f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2463f8) {
            ctx->pc = 0x246440u;
            goto label_246440;
        }
    }
    ctx->pc = 0x246400u;
label_246400:
    // 0x246400: 0xc08afec  jal         func_22BFB0
label_246404:
    if (ctx->pc == 0x246404u) {
        ctx->pc = 0x246404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246400u;
        // 0x246404: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246408u;
        goto label_246408;
    }
    ctx->pc = 0x246400u;
    SET_GPR_U32(ctx, 31, 0x246408u);
    ctx->pc = 0x246404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246400u;
    // 0x246404: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x246400u, 0x246408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246408u;
label_246408:
    // 0x246408: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24640c:
    // 0x24640c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_246410:
    if (ctx->pc == 0x246410u) {
        ctx->pc = 0x246410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24640Cu;
        // 0x246410: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246414u;
        goto label_246414;
    }
    ctx->pc = 0x24640Cu;
    {
        const bool branch_taken_0x24640c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24640Cu;
        // 0x246410: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24640c) {
            ctx->pc = 0x246484u;
            goto label_246484;
        }
    }
    ctx->pc = 0x246414u;
label_246414:
    // 0x246414: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x246414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_246418:
    // 0x246418: 0x1642001a  bne         $s2, $v0, . + 4 + (0x1A << 2)
label_24641c:
    if (ctx->pc == 0x24641Cu) {
        ctx->pc = 0x24641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246418u;
        // 0x24641c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246420u;
        goto label_246420;
    }
    ctx->pc = 0x246418u;
    {
        const bool branch_taken_0x246418 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246418u;
        // 0x24641c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246418) {
            ctx->pc = 0x246484u;
            goto label_246484;
        }
    }
    ctx->pc = 0x246420u;
label_246420:
    // 0x246420: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x246420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_246424:
    // 0x246424: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_246428:
    if (ctx->pc == 0x246428u) {
        ctx->pc = 0x246428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246424u;
        // 0x246428: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24642Cu;
        goto label_24642c;
    }
    ctx->pc = 0x246424u;
    {
        const bool branch_taken_0x246424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246424u;
        // 0x246428: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246424) {
            ctx->pc = 0x246480u;
            goto label_246480;
        }
    }
    ctx->pc = 0x24642Cu;
label_24642c:
    // 0x24642c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x24642cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_246430:
    // 0x246430: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x246430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_246434:
    // 0x246434: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x246434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246438:
    // 0x246438: 0x10000011  b           . + 4 + (0x11 << 2)
label_24643c:
    if (ctx->pc == 0x24643Cu) {
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0x8c53006c  lw          $s3, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246440u;
        goto label_246440;
    }
    ctx->pc = 0x246438u;
    {
        const bool branch_taken_0x246438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246438u;
        // 0x24643c: 0x8c53006c  lw          $s3, 0x6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246438) {
            ctx->pc = 0x246480u;
            goto label_246480;
        }
    }
    ctx->pc = 0x246440u;
label_246440:
    // 0x246440: 0xc0916b8  jal         func_245AE0
label_246444:
    if (ctx->pc == 0x246444u) {
        ctx->pc = 0x246444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246440u;
        // 0x246444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246448u;
        goto label_246448;
    }
    ctx->pc = 0x246440u;
    SET_GPR_U32(ctx, 31, 0x246448u);
    ctx->pc = 0x246444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246440u;
    // 0x246444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x246440u, 0x246448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246448u;
label_246448:
    // 0x246448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24644c:
    // 0x24644c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_246450:
    // 0x246450: 0xc0916e6  jal         func_245B98
label_246454:
    if (ctx->pc == 0x246454u) {
        ctx->pc = 0x246454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246450u;
        // 0x246454: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246458u;
        goto label_246458;
    }
    ctx->pc = 0x246450u;
    SET_GPR_U32(ctx, 31, 0x246458u);
    ctx->pc = 0x246454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246450u;
    // 0x246454: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x246450u, 0x246458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246458u;
label_246458:
    // 0x246458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24645c:
    // 0x24645c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246460:
    // 0x246460: 0xc091704  jal         func_245C10
label_246464:
    if (ctx->pc == 0x246464u) {
        ctx->pc = 0x246464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246460u;
        // 0x246464: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246468u;
        goto label_246468;
    }
    ctx->pc = 0x246460u;
    SET_GPR_U32(ctx, 31, 0x246468u);
    ctx->pc = 0x246464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246460u;
    // 0x246464: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x246460u, 0x246468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246468u;
label_246468:
    // 0x246468: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24646c:
    // 0x24646c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_246470:
    if (ctx->pc == 0x246470u) {
        ctx->pc = 0x246470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24646Cu;
        // 0x246470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246474u;
        goto label_246474;
    }
    ctx->pc = 0x24646Cu;
    {
        const bool branch_taken_0x24646c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24646Cu;
        // 0x246470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24646c) {
            ctx->pc = 0x246488u;
            goto label_246488;
        }
    }
    ctx->pc = 0x246474u;
label_246474:
    // 0x246474: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x246474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_246478:
    // 0x246478: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
label_24647c:
    if (ctx->pc == 0x24647Cu) {
        ctx->pc = 0x24647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246478u;
        // 0x24647c: 0x8c73006c  lw          $s3, 0x6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246480u;
        goto label_246480;
    }
    ctx->pc = 0x246478u;
    {
        const bool branch_taken_0x246478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x246478) {
            ctx->pc = 0x24647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246478u;
            // 0x24647c: 0x8c73006c  lw          $s3, 0x6C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246480u;
            goto label_246480;
        }
    }
    ctx->pc = 0x246480u;
label_246480:
    // 0x246480: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x246480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246484:
    // 0x246484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246488:
    // 0x246488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24648c:
    // 0x24648c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24648cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_246490:
    // 0x246490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x246490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_246494:
    // 0x246494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x246494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_246498:
    // 0x246498: 0x3e00008  jr          $ra
label_24649c:
    if (ctx->pc == 0x24649Cu) {
        ctx->pc = 0x24649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246498u;
        // 0x24649c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464A0u;
        goto label_2464a0;
    }
    ctx->pc = 0x246498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246498u;
        // 0x24649c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2464A0u;
label_2464a0:
    // 0x2464a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2464a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2464a4:
    // 0x2464a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2464a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2464a8:
    // 0x2464a8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2464a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2464ac:
    // 0x2464ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2464acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2464b0:
    // 0x2464b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2464b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2464b4:
    // 0x2464b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2464b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2464b8:
    // 0x2464b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2464b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2464bc:
    // 0x2464bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2464bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2464c0:
    // 0x2464c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2464c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2464c4:
    // 0x2464c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2464c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2464c8:
    // 0x2464c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2464c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2464cc:
    // 0x2464cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2464ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2464d0:
    // 0x2464d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2464d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2464d4:
    // 0x2464d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2464d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2464d8:
    // 0x2464d8: 0xc0916b8  jal         func_245AE0
label_2464dc:
    if (ctx->pc == 0x2464DCu) {
        ctx->pc = 0x2464DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464D8u;
        // 0x2464dc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464E0u;
        goto label_2464e0;
    }
    ctx->pc = 0x2464D8u;
    SET_GPR_U32(ctx, 31, 0x2464E0u);
    ctx->pc = 0x2464DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464D8u;
    // 0x2464dc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x2464D8u, 0x2464E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464E0u;
label_2464e0:
    // 0x2464e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2464e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2464e4:
    // 0x2464e4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2464e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2464e8:
    // 0x2464e8: 0xc0916e6  jal         func_245B98
label_2464ec:
    if (ctx->pc == 0x2464ECu) {
        ctx->pc = 0x2464ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464E8u;
        // 0x2464ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464F0u;
        goto label_2464f0;
    }
    ctx->pc = 0x2464E8u;
    SET_GPR_U32(ctx, 31, 0x2464F0u);
    ctx->pc = 0x2464ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464E8u;
    // 0x2464ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x2464E8u, 0x2464F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464F0u;
label_2464f0:
    // 0x2464f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2464f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2464f4:
    // 0x2464f4: 0xc091726  jal         func_245C98
label_2464f8:
    if (ctx->pc == 0x2464F8u) {
        ctx->pc = 0x2464F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464F4u;
        // 0x2464f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2464FCu;
        goto label_2464fc;
    }
    ctx->pc = 0x2464F4u;
    SET_GPR_U32(ctx, 31, 0x2464FCu);
    ctx->pc = 0x2464F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464F4u;
    // 0x2464f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x2464F4u, 0x2464FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464FCu;
label_2464fc:
    // 0x2464fc: 0x10000012  b           . + 4 + (0x12 << 2)
label_246500:
    if (ctx->pc == 0x246500u) {
        ctx->pc = 0x246500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464FCu;
        // 0x246500: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246504u;
        goto label_246504;
    }
    ctx->pc = 0x2464FCu;
    {
        const bool branch_taken_0x2464fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464FCu;
        // 0x246500: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2464fc) {
            ctx->pc = 0x246548u;
            goto label_246548;
        }
    }
    ctx->pc = 0x246504u;
label_246504:
    // 0x246504: 0x0  nop
    ctx->pc = 0x246504u;
    // NOP
label_246508:
    // 0x246508: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_24650c:
    if (ctx->pc == 0x24650Cu) {
        ctx->pc = 0x24650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246508u;
        // 0x24650c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246510u;
        goto label_246510;
    }
    ctx->pc = 0x246508u;
    {
        const bool branch_taken_0x246508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246508u;
        // 0x24650c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246508) {
            ctx->pc = 0x246534u;
            goto label_246534;
        }
    }
    ctx->pc = 0x246510u;
label_246510:
    // 0x246510: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x246510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_246514:
    // 0x246514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246518:
    // 0x246518: 0x8c6309a0  lw          $v1, 0x9A0($v1)
    ctx->pc = 0x246518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2464)));
label_24651c:
    // 0x24651c: 0x600008  jr          $v1
label_246520:
    if (ctx->pc == 0x246520u) {
        ctx->pc = 0x246524u;
        goto label_246524;
    }
    ctx->pc = 0x24651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24651Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x246524u;
label_246524:
    // 0x246524: 0x0  nop
    ctx->pc = 0x246524u;
    // NOP
label_246528:
    // 0x246528: 0x10000002  b           . + 4 + (0x2 << 2)
label_24652c:
    if (ctx->pc == 0x24652Cu) {
        ctx->pc = 0x24652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246528u;
        // 0x24652c: 0x8c9000c0  lw          $s0, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246530u;
        goto label_246530;
    }
    ctx->pc = 0x246528u;
    {
        const bool branch_taken_0x246528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246528u;
        // 0x24652c: 0x8c9000c0  lw          $s0, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246528) {
            ctx->pc = 0x246534u;
            goto label_246534;
        }
    }
    ctx->pc = 0x246530u;
label_246530:
    // 0x246530: 0x8c900060  lw          $s0, 0x60($a0)
    ctx->pc = 0x246530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_246534:
    // 0x246534: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
label_246538:
    if (ctx->pc == 0x246538u) {
        ctx->pc = 0x246538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246534u;
        // 0x246538: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24653Cu;
        goto label_24653c;
    }
    ctx->pc = 0x246534u;
    {
        const bool branch_taken_0x246534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x246538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246534u;
        // 0x246538: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246534) {
            ctx->pc = 0x246548u;
            goto label_246548;
        }
    }
    ctx->pc = 0x24653Cu;
label_24653c:
    // 0x24653c: 0x1000000c  b           . + 4 + (0xC << 2)
label_246540:
    if (ctx->pc == 0x246540u) {
        ctx->pc = 0x246540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24653Cu;
        // 0x246540: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246544u;
        goto label_246544;
    }
    ctx->pc = 0x24653Cu;
    {
        const bool branch_taken_0x24653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24653Cu;
        // 0x246540: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24653c) {
            ctx->pc = 0x246570u;
            goto label_246570;
        }
    }
    ctx->pc = 0x246544u;
label_246544:
    // 0x246544: 0x0  nop
    ctx->pc = 0x246544u;
    // NOP
label_246548:
    // 0x246548: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x246548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_24654c:
    // 0x24654c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_246550:
    if (ctx->pc == 0x246550u) {
        ctx->pc = 0x246550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24654Cu;
        // 0x246550: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246554u;
        goto label_246554;
    }
    ctx->pc = 0x24654Cu;
    {
        const bool branch_taken_0x24654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24654c) {
            ctx->pc = 0x246550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24654Cu;
            // 0x246550: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246574u;
            goto label_246574;
        }
    }
    ctx->pc = 0x246554u;
label_246554:
    // 0x246554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246558:
    // 0x246558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24655c:
    // 0x24655c: 0xc091704  jal         func_245C10
label_246560:
    if (ctx->pc == 0x246560u) {
        ctx->pc = 0x246560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24655Cu;
        // 0x246560: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246564u;
        goto label_246564;
    }
    ctx->pc = 0x24655Cu;
    SET_GPR_U32(ctx, 31, 0x246564u);
    ctx->pc = 0x246560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24655Cu;
    // 0x246560: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C10u, 0x24655Cu, 0x246564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246564u;
label_246564:
    // 0x246564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246568:
    // 0x246568: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
label_24656c:
    if (ctx->pc == 0x24656Cu) {
        ctx->pc = 0x24656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246568u;
        // 0x24656c: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x246570u;
        goto label_246570;
    }
    ctx->pc = 0x246568u;
    {
        const bool branch_taken_0x246568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246568u;
        // 0x24656c: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x246568) {
            ctx->pc = 0x246508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246508;
        }
    }
    ctx->pc = 0x246570u;
label_246570:
    // 0x246570: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x246570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_246574:
    // 0x246574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246578:
    // 0x246578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24657c:
    // 0x24657c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24657cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_246580:
    // 0x246580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x246580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_246584:
    // 0x246584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x246584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_246588:
    // 0x246588: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x246588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24658c:
    // 0x24658c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24658cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_246590:
    // 0x246590: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x246590u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_246594:
    // 0x246594: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x246594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_246598:
    // 0x246598: 0x3e00008  jr          $ra
label_24659c:
    if (ctx->pc == 0x24659Cu) {
        ctx->pc = 0x24659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246598u;
        // 0x24659c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2465A0u;
        goto label_fallthrough_0x246598;
    }
    ctx->pc = 0x246598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246598u;
        // 0x24659c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246598:
    ctx->pc = 0x2465A0u;
}
