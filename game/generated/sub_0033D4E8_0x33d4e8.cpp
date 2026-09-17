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

// Function: sub_0033D4E8
// Address: 0x33d4e8 - 0x33d920
void sub_0033D4E8_0x33d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D4E8_0x33d4e8");
#endif

    switch (ctx->pc) {
        case 0x33d4e8u: goto label_33d4e8;
        case 0x33d4ecu: goto label_33d4ec;
        case 0x33d4f0u: goto label_33d4f0;
        case 0x33d4f4u: goto label_33d4f4;
        case 0x33d4f8u: goto label_33d4f8;
        case 0x33d4fcu: goto label_33d4fc;
        case 0x33d500u: goto label_33d500;
        case 0x33d504u: goto label_33d504;
        case 0x33d508u: goto label_33d508;
        case 0x33d50cu: goto label_33d50c;
        case 0x33d510u: goto label_33d510;
        case 0x33d514u: goto label_33d514;
        case 0x33d518u: goto label_33d518;
        case 0x33d51cu: goto label_33d51c;
        case 0x33d520u: goto label_33d520;
        case 0x33d524u: goto label_33d524;
        case 0x33d528u: goto label_33d528;
        case 0x33d52cu: goto label_33d52c;
        case 0x33d530u: goto label_33d530;
        case 0x33d534u: goto label_33d534;
        case 0x33d538u: goto label_33d538;
        case 0x33d53cu: goto label_33d53c;
        case 0x33d540u: goto label_33d540;
        case 0x33d544u: goto label_33d544;
        case 0x33d548u: goto label_33d548;
        case 0x33d54cu: goto label_33d54c;
        case 0x33d550u: goto label_33d550;
        case 0x33d554u: goto label_33d554;
        case 0x33d558u: goto label_33d558;
        case 0x33d55cu: goto label_33d55c;
        case 0x33d560u: goto label_33d560;
        case 0x33d564u: goto label_33d564;
        case 0x33d568u: goto label_33d568;
        case 0x33d56cu: goto label_33d56c;
        case 0x33d570u: goto label_33d570;
        case 0x33d574u: goto label_33d574;
        case 0x33d578u: goto label_33d578;
        case 0x33d57cu: goto label_33d57c;
        case 0x33d580u: goto label_33d580;
        case 0x33d584u: goto label_33d584;
        case 0x33d588u: goto label_33d588;
        case 0x33d58cu: goto label_33d58c;
        case 0x33d590u: goto label_33d590;
        case 0x33d594u: goto label_33d594;
        case 0x33d598u: goto label_33d598;
        case 0x33d59cu: goto label_33d59c;
        case 0x33d5a0u: goto label_33d5a0;
        case 0x33d5a4u: goto label_33d5a4;
        case 0x33d5a8u: goto label_33d5a8;
        case 0x33d5acu: goto label_33d5ac;
        case 0x33d5b0u: goto label_33d5b0;
        case 0x33d5b4u: goto label_33d5b4;
        case 0x33d5b8u: goto label_33d5b8;
        case 0x33d5bcu: goto label_33d5bc;
        case 0x33d5c0u: goto label_33d5c0;
        case 0x33d5c4u: goto label_33d5c4;
        case 0x33d5c8u: goto label_33d5c8;
        case 0x33d5ccu: goto label_33d5cc;
        case 0x33d5d0u: goto label_33d5d0;
        case 0x33d5d4u: goto label_33d5d4;
        case 0x33d5d8u: goto label_33d5d8;
        case 0x33d5dcu: goto label_33d5dc;
        case 0x33d5e0u: goto label_33d5e0;
        case 0x33d5e4u: goto label_33d5e4;
        case 0x33d5e8u: goto label_33d5e8;
        case 0x33d5ecu: goto label_33d5ec;
        case 0x33d5f0u: goto label_33d5f0;
        case 0x33d5f4u: goto label_33d5f4;
        case 0x33d5f8u: goto label_33d5f8;
        case 0x33d5fcu: goto label_33d5fc;
        case 0x33d600u: goto label_33d600;
        case 0x33d604u: goto label_33d604;
        case 0x33d608u: goto label_33d608;
        case 0x33d60cu: goto label_33d60c;
        case 0x33d610u: goto label_33d610;
        case 0x33d614u: goto label_33d614;
        case 0x33d618u: goto label_33d618;
        case 0x33d61cu: goto label_33d61c;
        case 0x33d620u: goto label_33d620;
        case 0x33d624u: goto label_33d624;
        case 0x33d628u: goto label_33d628;
        case 0x33d62cu: goto label_33d62c;
        case 0x33d630u: goto label_33d630;
        case 0x33d634u: goto label_33d634;
        case 0x33d638u: goto label_33d638;
        case 0x33d63cu: goto label_33d63c;
        case 0x33d640u: goto label_33d640;
        case 0x33d644u: goto label_33d644;
        case 0x33d648u: goto label_33d648;
        case 0x33d64cu: goto label_33d64c;
        case 0x33d650u: goto label_33d650;
        case 0x33d654u: goto label_33d654;
        case 0x33d658u: goto label_33d658;
        case 0x33d65cu: goto label_33d65c;
        case 0x33d660u: goto label_33d660;
        case 0x33d664u: goto label_33d664;
        case 0x33d668u: goto label_33d668;
        case 0x33d66cu: goto label_33d66c;
        case 0x33d670u: goto label_33d670;
        case 0x33d674u: goto label_33d674;
        case 0x33d678u: goto label_33d678;
        case 0x33d67cu: goto label_33d67c;
        case 0x33d680u: goto label_33d680;
        case 0x33d684u: goto label_33d684;
        case 0x33d688u: goto label_33d688;
        case 0x33d68cu: goto label_33d68c;
        case 0x33d690u: goto label_33d690;
        case 0x33d694u: goto label_33d694;
        case 0x33d698u: goto label_33d698;
        case 0x33d69cu: goto label_33d69c;
        case 0x33d6a0u: goto label_33d6a0;
        case 0x33d6a4u: goto label_33d6a4;
        case 0x33d6a8u: goto label_33d6a8;
        case 0x33d6acu: goto label_33d6ac;
        case 0x33d6b0u: goto label_33d6b0;
        case 0x33d6b4u: goto label_33d6b4;
        case 0x33d6b8u: goto label_33d6b8;
        case 0x33d6bcu: goto label_33d6bc;
        case 0x33d6c0u: goto label_33d6c0;
        case 0x33d6c4u: goto label_33d6c4;
        case 0x33d6c8u: goto label_33d6c8;
        case 0x33d6ccu: goto label_33d6cc;
        case 0x33d6d0u: goto label_33d6d0;
        case 0x33d6d4u: goto label_33d6d4;
        case 0x33d6d8u: goto label_33d6d8;
        case 0x33d6dcu: goto label_33d6dc;
        case 0x33d6e0u: goto label_33d6e0;
        case 0x33d6e4u: goto label_33d6e4;
        case 0x33d6e8u: goto label_33d6e8;
        case 0x33d6ecu: goto label_33d6ec;
        case 0x33d6f0u: goto label_33d6f0;
        case 0x33d6f4u: goto label_33d6f4;
        case 0x33d6f8u: goto label_33d6f8;
        case 0x33d6fcu: goto label_33d6fc;
        case 0x33d700u: goto label_33d700;
        case 0x33d704u: goto label_33d704;
        case 0x33d708u: goto label_33d708;
        case 0x33d70cu: goto label_33d70c;
        case 0x33d710u: goto label_33d710;
        case 0x33d714u: goto label_33d714;
        case 0x33d718u: goto label_33d718;
        case 0x33d71cu: goto label_33d71c;
        case 0x33d720u: goto label_33d720;
        case 0x33d724u: goto label_33d724;
        case 0x33d728u: goto label_33d728;
        case 0x33d72cu: goto label_33d72c;
        case 0x33d730u: goto label_33d730;
        case 0x33d734u: goto label_33d734;
        case 0x33d738u: goto label_33d738;
        case 0x33d73cu: goto label_33d73c;
        case 0x33d740u: goto label_33d740;
        case 0x33d744u: goto label_33d744;
        case 0x33d748u: goto label_33d748;
        case 0x33d74cu: goto label_33d74c;
        case 0x33d750u: goto label_33d750;
        case 0x33d754u: goto label_33d754;
        case 0x33d758u: goto label_33d758;
        case 0x33d75cu: goto label_33d75c;
        case 0x33d760u: goto label_33d760;
        case 0x33d764u: goto label_33d764;
        case 0x33d768u: goto label_33d768;
        case 0x33d76cu: goto label_33d76c;
        case 0x33d770u: goto label_33d770;
        case 0x33d774u: goto label_33d774;
        case 0x33d778u: goto label_33d778;
        case 0x33d77cu: goto label_33d77c;
        case 0x33d780u: goto label_33d780;
        case 0x33d784u: goto label_33d784;
        case 0x33d788u: goto label_33d788;
        case 0x33d78cu: goto label_33d78c;
        case 0x33d790u: goto label_33d790;
        case 0x33d794u: goto label_33d794;
        case 0x33d798u: goto label_33d798;
        case 0x33d79cu: goto label_33d79c;
        case 0x33d7a0u: goto label_33d7a0;
        case 0x33d7a4u: goto label_33d7a4;
        case 0x33d7a8u: goto label_33d7a8;
        case 0x33d7acu: goto label_33d7ac;
        case 0x33d7b0u: goto label_33d7b0;
        case 0x33d7b4u: goto label_33d7b4;
        case 0x33d7b8u: goto label_33d7b8;
        case 0x33d7bcu: goto label_33d7bc;
        case 0x33d7c0u: goto label_33d7c0;
        case 0x33d7c4u: goto label_33d7c4;
        case 0x33d7c8u: goto label_33d7c8;
        case 0x33d7ccu: goto label_33d7cc;
        case 0x33d7d0u: goto label_33d7d0;
        case 0x33d7d4u: goto label_33d7d4;
        case 0x33d7d8u: goto label_33d7d8;
        case 0x33d7dcu: goto label_33d7dc;
        case 0x33d7e0u: goto label_33d7e0;
        case 0x33d7e4u: goto label_33d7e4;
        case 0x33d7e8u: goto label_33d7e8;
        case 0x33d7ecu: goto label_33d7ec;
        case 0x33d7f0u: goto label_33d7f0;
        case 0x33d7f4u: goto label_33d7f4;
        case 0x33d7f8u: goto label_33d7f8;
        case 0x33d7fcu: goto label_33d7fc;
        case 0x33d800u: goto label_33d800;
        case 0x33d804u: goto label_33d804;
        case 0x33d808u: goto label_33d808;
        case 0x33d80cu: goto label_33d80c;
        case 0x33d810u: goto label_33d810;
        case 0x33d814u: goto label_33d814;
        case 0x33d818u: goto label_33d818;
        case 0x33d81cu: goto label_33d81c;
        case 0x33d820u: goto label_33d820;
        case 0x33d824u: goto label_33d824;
        case 0x33d828u: goto label_33d828;
        case 0x33d82cu: goto label_33d82c;
        case 0x33d830u: goto label_33d830;
        case 0x33d834u: goto label_33d834;
        case 0x33d838u: goto label_33d838;
        case 0x33d83cu: goto label_33d83c;
        case 0x33d840u: goto label_33d840;
        case 0x33d844u: goto label_33d844;
        case 0x33d848u: goto label_33d848;
        case 0x33d84cu: goto label_33d84c;
        case 0x33d850u: goto label_33d850;
        case 0x33d854u: goto label_33d854;
        case 0x33d858u: goto label_33d858;
        case 0x33d85cu: goto label_33d85c;
        case 0x33d860u: goto label_33d860;
        case 0x33d864u: goto label_33d864;
        case 0x33d868u: goto label_33d868;
        case 0x33d86cu: goto label_33d86c;
        case 0x33d870u: goto label_33d870;
        case 0x33d874u: goto label_33d874;
        case 0x33d878u: goto label_33d878;
        case 0x33d87cu: goto label_33d87c;
        case 0x33d880u: goto label_33d880;
        case 0x33d884u: goto label_33d884;
        case 0x33d888u: goto label_33d888;
        case 0x33d88cu: goto label_33d88c;
        case 0x33d890u: goto label_33d890;
        case 0x33d894u: goto label_33d894;
        case 0x33d898u: goto label_33d898;
        case 0x33d89cu: goto label_33d89c;
        case 0x33d8a0u: goto label_33d8a0;
        case 0x33d8a4u: goto label_33d8a4;
        case 0x33d8a8u: goto label_33d8a8;
        case 0x33d8acu: goto label_33d8ac;
        case 0x33d8b0u: goto label_33d8b0;
        case 0x33d8b4u: goto label_33d8b4;
        case 0x33d8b8u: goto label_33d8b8;
        case 0x33d8bcu: goto label_33d8bc;
        case 0x33d8c0u: goto label_33d8c0;
        case 0x33d8c4u: goto label_33d8c4;
        case 0x33d8c8u: goto label_33d8c8;
        case 0x33d8ccu: goto label_33d8cc;
        case 0x33d8d0u: goto label_33d8d0;
        case 0x33d8d4u: goto label_33d8d4;
        case 0x33d8d8u: goto label_33d8d8;
        case 0x33d8dcu: goto label_33d8dc;
        case 0x33d8e0u: goto label_33d8e0;
        case 0x33d8e4u: goto label_33d8e4;
        case 0x33d8e8u: goto label_33d8e8;
        case 0x33d8ecu: goto label_33d8ec;
        case 0x33d8f0u: goto label_33d8f0;
        case 0x33d8f4u: goto label_33d8f4;
        case 0x33d8f8u: goto label_33d8f8;
        case 0x33d8fcu: goto label_33d8fc;
        case 0x33d900u: goto label_33d900;
        case 0x33d904u: goto label_33d904;
        case 0x33d908u: goto label_33d908;
        case 0x33d90cu: goto label_33d90c;
        case 0x33d910u: goto label_33d910;
        case 0x33d914u: goto label_33d914;
        case 0x33d918u: goto label_33d918;
        case 0x33d91cu: goto label_33d91c;
        default: break;
    }

    ctx->pc = 0x33d4e8u;

label_33d4e8:
    // 0x33d4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33d4ec:
    // 0x33d4ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33d4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_33d4f0:
    // 0x33d4f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33d4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33d4f4:
    // 0x33d4f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33d4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33d4f8:
    // 0x33d4f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33d4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d4fc:
    // 0x33d4fc: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x33d4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_33d500:
    // 0x33d500: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33d500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33d504:
    // 0x33d504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33d504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d508:
    // 0x33d508: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33d50c:
    // 0x33d50c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33d50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_33d510:
    // 0x33d510: 0xc0cf6ee  jal         func_33DBB8
label_33d514:
    if (ctx->pc == 0x33D514u) {
        ctx->pc = 0x33D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D510u;
        // 0x33d514: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D518u;
        goto label_33d518;
    }
    ctx->pc = 0x33D510u;
    SET_GPR_U32(ctx, 31, 0x33D518u);
    ctx->pc = 0x33D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D510u;
    // 0x33d514: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DBB8u, 0x33D510u, 0x33D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D518u;
label_33d518:
    // 0x33d518: 0x2e29003b  sltiu       $t1, $s1, 0x3B
    ctx->pc = 0x33d518u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_33d51c:
    // 0x33d51c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x33d51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33d520:
    // 0x33d520: 0x112000cb  beqz        $t1, . + 4 + (0xCB << 2)
label_33d524:
    if (ctx->pc == 0x33D524u) {
        ctx->pc = 0x33D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D520u;
        // 0x33d524: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D528u;
        goto label_33d528;
    }
    ctx->pc = 0x33D520u;
    {
        const bool branch_taken_0x33d520 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D520u;
        // 0x33d524: 0x8fa80004  lw          $t0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d520) {
            ctx->pc = 0x33D850u;
            goto label_33d850;
        }
    }
    ctx->pc = 0x33D528u;
label_33d528:
    // 0x33d528: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33d528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33d52c:
    // 0x33d52c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d530:
    // 0x33d530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d534:
    // 0x33d534: 0x8c423f70  lw          $v0, 0x3F70($v0)
    ctx->pc = 0x33d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16240)));
label_33d538:
    // 0x33d538: 0x400008  jr          $v0
label_33d53c:
    if (ctx->pc == 0x33D53Cu) {
        ctx->pc = 0x33D540u;
        goto label_33d540;
    }
    ctx->pc = 0x33D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33D540u: goto label_33d540;
            case 0x33D5C0u: goto label_33d5c0;
            case 0x33D640u: goto label_33d640;
            case 0x33D6C0u: goto label_33d6c0;
            case 0x33D740u: goto label_33d740;
            case 0x33D7C8u: goto label_33d7c8;
            case 0x33D850u: goto label_33d850;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D540u;
label_33d540:
    // 0x33d540: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x33d540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_33d544:
    // 0x33d544: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33d548:
    if (ctx->pc == 0x33D548u) {
        ctx->pc = 0x33D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D544u;
        // 0x33d548: 0x2d020020  sltiu       $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D54Cu;
        goto label_33d54c;
    }
    ctx->pc = 0x33D544u;
    {
        const bool branch_taken_0x33d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D544u;
        // 0x33d548: 0x2d020020  sltiu       $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d544) {
            ctx->pc = 0x33D590u;
            goto label_33d590;
        }
    }
    ctx->pc = 0x33D54Cu;
label_33d54c:
    // 0x33d54c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33d550:
    if (ctx->pc == 0x33D550u) {
        ctx->pc = 0x33D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D54Cu;
        // 0x33d550: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D554u;
        goto label_33d554;
    }
    ctx->pc = 0x33D54Cu;
    {
        const bool branch_taken_0x33d54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D54Cu;
        // 0x33d550: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d54c) {
            ctx->pc = 0x33D590u;
            goto label_33d590;
        }
    }
    ctx->pc = 0x33D554u;
label_33d554:
    // 0x33d554: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x33d554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_33d558:
    // 0x33d558: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x33d558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33d55c:
    // 0x33d55c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x33d55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33d560:
    // 0x33d560: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x33d560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33d564:
    // 0x33d564: 0x30a50008  andi        $a1, $a1, 0x8
    ctx->pc = 0x33d564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_33d568:
    // 0x33d568: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33d568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33d56c:
    // 0x33d56c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x33d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_33d570:
    // 0x33d570: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x33d570u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_33d574:
    // 0x33d574: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x33d574u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_33d578:
    // 0x33d578: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x33d578u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_33d57c:
    // 0x33d57c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33d57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33d580:
    // 0x33d580: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33d584:
    // 0x33d584: 0x10000080  b           . + 4 + (0x80 << 2)
label_33d588:
    if (ctx->pc == 0x33D588u) {
        ctx->pc = 0x33D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D584u;
        // 0x33d588: 0x52882  srl         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D58Cu;
        goto label_33d58c;
    }
    ctx->pc = 0x33D584u;
    {
        const bool branch_taken_0x33d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D584u;
        // 0x33d588: 0x52882  srl         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d584) {
            ctx->pc = 0x33D788u;
            goto label_33d788;
        }
    }
    ctx->pc = 0x33D58Cu;
label_33d58c:
    // 0x33d58c: 0x0  nop
    ctx->pc = 0x33d58cu;
    // NOP
label_33d590:
    // 0x33d590: 0x512000ac  beql        $t1, $zero, . + 4 + (0xAC << 2)
label_33d594:
    if (ctx->pc == 0x33D594u) {
        ctx->pc = 0x33D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D590u;
        // 0x33d594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D598u;
        goto label_33d598;
    }
    ctx->pc = 0x33D590u;
    {
        const bool branch_taken_0x33d590 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d590) {
            ctx->pc = 0x33D594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D590u;
            // 0x33d594: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D598u;
label_33d598:
    // 0x33d598: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d59c:
    // 0x33d59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d5a0:
    // 0x33d5a0: 0x8c424060  lw          $v0, 0x4060($v0)
    ctx->pc = 0x33d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16480)));
label_33d5a4:
    // 0x33d5a4: 0x400008  jr          $v0
label_33d5a8:
    if (ctx->pc == 0x33D5A8u) {
        ctx->pc = 0x33D5ACu;
        goto label_33d5ac;
    }
    ctx->pc = 0x33D5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D5A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D5ACu;
label_33d5ac:
    // 0x33d5ac: 0x0  nop
    ctx->pc = 0x33d5acu;
    // NOP
label_33d5b0:
    // 0x33d5b0: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d5b4:
    // 0x33d5b4: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d5b8:
    // 0x33d5b8: 0x10000098  b           . + 4 + (0x98 << 2)
label_33d5bc:
    if (ctx->pc == 0x33D5BCu) {
        ctx->pc = 0x33D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5B8u;
        // 0x33d5bc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5C0u;
        goto label_33d5c0;
    }
    ctx->pc = 0x33D5B8u;
    {
        const bool branch_taken_0x33d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5B8u;
        // 0x33d5bc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5b8) {
            ctx->pc = 0x33D81Cu;
            goto label_33d81c;
        }
    }
    ctx->pc = 0x33D5C0u;
label_33d5c0:
    // 0x33d5c0: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x33d5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_33d5c4:
    // 0x33d5c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33d5c8:
    if (ctx->pc == 0x33D5C8u) {
        ctx->pc = 0x33D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5C4u;
        // 0x33d5c8: 0x2d020040  sltiu       $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5CCu;
        goto label_33d5cc;
    }
    ctx->pc = 0x33D5C4u;
    {
        const bool branch_taken_0x33d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5C4u;
        // 0x33d5c8: 0x2d020040  sltiu       $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5c4) {
            ctx->pc = 0x33D610u;
            goto label_33d610;
        }
    }
    ctx->pc = 0x33D5CCu;
label_33d5cc:
    // 0x33d5cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33d5d0:
    if (ctx->pc == 0x33D5D0u) {
        ctx->pc = 0x33D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5CCu;
        // 0x33d5d0: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5D4u;
        goto label_33d5d4;
    }
    ctx->pc = 0x33D5CCu;
    {
        const bool branch_taken_0x33d5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5CCu;
        // 0x33d5d0: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5cc) {
            ctx->pc = 0x33D610u;
            goto label_33d610;
        }
    }
    ctx->pc = 0x33D5D4u;
label_33d5d4:
    // 0x33d5d4: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x33d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33d5d8:
    // 0x33d5d8: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x33d5d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33d5dc:
    // 0x33d5dc: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x33d5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33d5e0:
    // 0x33d5e0: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x33d5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33d5e4:
    // 0x33d5e4: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x33d5e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33d5e8:
    // 0x33d5e8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33d5ec:
    // 0x33d5ec: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x33d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_33d5f0:
    // 0x33d5f0: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x33d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_33d5f4:
    // 0x33d5f4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x33d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_33d5f8:
    // 0x33d5f8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x33d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_33d5fc:
    // 0x33d5fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33d5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33d600:
    // 0x33d600: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33d600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33d604:
    // 0x33d604: 0x10000060  b           . + 4 + (0x60 << 2)
label_33d608:
    if (ctx->pc == 0x33D608u) {
        ctx->pc = 0x33D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D604u;
        // 0x33d608: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D60Cu;
        goto label_33d60c;
    }
    ctx->pc = 0x33D604u;
    {
        const bool branch_taken_0x33d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D604u;
        // 0x33d608: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d604) {
            ctx->pc = 0x33D788u;
            goto label_33d788;
        }
    }
    ctx->pc = 0x33D60Cu;
label_33d60c:
    // 0x33d60c: 0x0  nop
    ctx->pc = 0x33d60cu;
    // NOP
label_33d610:
    // 0x33d610: 0x5120008c  beql        $t1, $zero, . + 4 + (0x8C << 2)
label_33d614:
    if (ctx->pc == 0x33D614u) {
        ctx->pc = 0x33D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D610u;
        // 0x33d614: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D618u;
        goto label_33d618;
    }
    ctx->pc = 0x33D610u;
    {
        const bool branch_taken_0x33d610 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d610) {
            ctx->pc = 0x33D614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D610u;
            // 0x33d614: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D618u;
label_33d618:
    // 0x33d618: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d61c:
    // 0x33d61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d620:
    // 0x33d620: 0x8c424150  lw          $v0, 0x4150($v0)
    ctx->pc = 0x33d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16720)));
label_33d624:
    // 0x33d624: 0x400008  jr          $v0
label_33d628:
    if (ctx->pc == 0x33D628u) {
        ctx->pc = 0x33D62Cu;
        goto label_33d62c;
    }
    ctx->pc = 0x33D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D624u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D62Cu;
label_33d62c:
    // 0x33d62c: 0x0  nop
    ctx->pc = 0x33d62cu;
    // NOP
label_33d630:
    // 0x33d630: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d634:
    // 0x33d634: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d638:
    // 0x33d638: 0x10000078  b           . + 4 + (0x78 << 2)
label_33d63c:
    if (ctx->pc == 0x33D63Cu) {
        ctx->pc = 0x33D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D638u;
        // 0x33d63c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D640u;
        goto label_33d640;
    }
    ctx->pc = 0x33D638u;
    {
        const bool branch_taken_0x33d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D638u;
        // 0x33d63c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d638) {
            ctx->pc = 0x33D81Cu;
            goto label_33d81c;
        }
    }
    ctx->pc = 0x33D640u;
label_33d640:
    // 0x33d640: 0x2ce20040  sltiu       $v0, $a3, 0x40
    ctx->pc = 0x33d640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_33d644:
    // 0x33d644: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33d648:
    if (ctx->pc == 0x33D648u) {
        ctx->pc = 0x33D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D644u;
        // 0x33d648: 0x2d020040  sltiu       $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D64Cu;
        goto label_33d64c;
    }
    ctx->pc = 0x33D644u;
    {
        const bool branch_taken_0x33d644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D644u;
        // 0x33d648: 0x2d020040  sltiu       $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d644) {
            ctx->pc = 0x33D690u;
            goto label_33d690;
        }
    }
    ctx->pc = 0x33D64Cu;
label_33d64c:
    // 0x33d64c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33d650:
    if (ctx->pc == 0x33D650u) {
        ctx->pc = 0x33D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D64Cu;
        // 0x33d650: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D654u;
        goto label_33d654;
    }
    ctx->pc = 0x33D64Cu;
    {
        const bool branch_taken_0x33d64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D64Cu;
        // 0x33d650: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d64c) {
            ctx->pc = 0x33D690u;
            goto label_33d690;
        }
    }
    ctx->pc = 0x33D654u;
label_33d654:
    // 0x33d654: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33d658:
    // 0x33d658: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x33d658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33d65c:
    // 0x33d65c: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x33d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_33d660:
    // 0x33d660: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x33d660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33d664:
    // 0x33d664: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x33d664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33d668:
    // 0x33d668: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33d66c:
    // 0x33d66c: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_33d670:
    // 0x33d670: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x33d670u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_33d674:
    // 0x33d674: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x33d674u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_33d678:
    // 0x33d678: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x33d678u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_33d67c:
    // 0x33d67c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33d67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33d680:
    // 0x33d680: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33d684:
    // 0x33d684: 0x10000040  b           . + 4 + (0x40 << 2)
label_33d688:
    if (ctx->pc == 0x33D688u) {
        ctx->pc = 0x33D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D684u;
        // 0x33d688: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D68Cu;
        goto label_33d68c;
    }
    ctx->pc = 0x33D684u;
    {
        const bool branch_taken_0x33d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D684u;
        // 0x33d688: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d684) {
            ctx->pc = 0x33D788u;
            goto label_33d788;
        }
    }
    ctx->pc = 0x33D68Cu;
label_33d68c:
    // 0x33d68c: 0x0  nop
    ctx->pc = 0x33d68cu;
    // NOP
label_33d690:
    // 0x33d690: 0x5120006c  beql        $t1, $zero, . + 4 + (0x6C << 2)
label_33d694:
    if (ctx->pc == 0x33D694u) {
        ctx->pc = 0x33D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D690u;
        // 0x33d694: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D698u;
        goto label_33d698;
    }
    ctx->pc = 0x33D690u;
    {
        const bool branch_taken_0x33d690 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d690) {
            ctx->pc = 0x33D694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D690u;
            // 0x33d694: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D698u;
label_33d698:
    // 0x33d698: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d69c:
    // 0x33d69c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d6a0:
    // 0x33d6a0: 0x8c424240  lw          $v0, 0x4240($v0)
    ctx->pc = 0x33d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16960)));
label_33d6a4:
    // 0x33d6a4: 0x400008  jr          $v0
label_33d6a8:
    if (ctx->pc == 0x33D6A8u) {
        ctx->pc = 0x33D6ACu;
        goto label_33d6ac;
    }
    ctx->pc = 0x33D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D6A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D6ACu;
label_33d6ac:
    // 0x33d6ac: 0x0  nop
    ctx->pc = 0x33d6acu;
    // NOP
label_33d6b0:
    // 0x33d6b0: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d6b4:
    // 0x33d6b4: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d6b8:
    // 0x33d6b8: 0x10000058  b           . + 4 + (0x58 << 2)
label_33d6bc:
    if (ctx->pc == 0x33D6BCu) {
        ctx->pc = 0x33D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6B8u;
        // 0x33d6bc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6C0u;
        goto label_33d6c0;
    }
    ctx->pc = 0x33D6B8u;
    {
        const bool branch_taken_0x33d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6B8u;
        // 0x33d6bc: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6b8) {
            ctx->pc = 0x33D81Cu;
            goto label_33d81c;
        }
    }
    ctx->pc = 0x33D6C0u;
label_33d6c0:
    // 0x33d6c0: 0x2ce20080  sltiu       $v0, $a3, 0x80
    ctx->pc = 0x33d6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_33d6c4:
    // 0x33d6c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33d6c8:
    if (ctx->pc == 0x33D6C8u) {
        ctx->pc = 0x33D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6C4u;
        // 0x33d6c8: 0x2d020040  sltiu       $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6CCu;
        goto label_33d6cc;
    }
    ctx->pc = 0x33D6C4u;
    {
        const bool branch_taken_0x33d6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6C4u;
        // 0x33d6c8: 0x2d020040  sltiu       $v0, $t0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6c4) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D6CCu;
label_33d6cc:
    // 0x33d6cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33d6d0:
    if (ctx->pc == 0x33D6D0u) {
        ctx->pc = 0x33D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6CCu;
        // 0x33d6d0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6D4u;
        goto label_33d6d4;
    }
    ctx->pc = 0x33D6CCu;
    {
        const bool branch_taken_0x33d6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6CCu;
        // 0x33d6d0: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6cc) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D6D4u;
label_33d6d4:
    // 0x33d6d4: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x33d6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_33d6d8:
    // 0x33d6d8: 0x30460020  andi        $a2, $v0, 0x20
    ctx->pc = 0x33d6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33d6dc:
    // 0x33d6dc: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x33d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33d6e0:
    // 0x33d6e0: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x33d6e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33d6e4:
    // 0x33d6e4: 0x30a50010  andi        $a1, $a1, 0x10
    ctx->pc = 0x33d6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_33d6e8:
    // 0x33d6e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33d6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33d6ec:
    // 0x33d6ec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x33d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_33d6f0:
    // 0x33d6f0: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x33d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_33d6f4:
    // 0x33d6f4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x33d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_33d6f8:
    // 0x33d6f8: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x33d6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_33d6fc:
    // 0x33d6fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33d6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33d700:
    // 0x33d700: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33d704:
    // 0x33d704: 0x10000020  b           . + 4 + (0x20 << 2)
label_33d708:
    if (ctx->pc == 0x33D708u) {
        ctx->pc = 0x33D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D704u;
        // 0x33d708: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D70Cu;
        goto label_33d70c;
    }
    ctx->pc = 0x33D704u;
    {
        const bool branch_taken_0x33d704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D704u;
        // 0x33d708: 0x528c2  srl         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d704) {
            ctx->pc = 0x33D788u;
            goto label_33d788;
        }
    }
    ctx->pc = 0x33D70Cu;
label_33d70c:
    // 0x33d70c: 0x0  nop
    ctx->pc = 0x33d70cu;
    // NOP
label_33d710:
    // 0x33d710: 0x5120004c  beql        $t1, $zero, . + 4 + (0x4C << 2)
label_33d714:
    if (ctx->pc == 0x33D714u) {
        ctx->pc = 0x33D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D710u;
        // 0x33d714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D718u;
        goto label_33d718;
    }
    ctx->pc = 0x33D710u;
    {
        const bool branch_taken_0x33d710 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d710) {
            ctx->pc = 0x33D714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D710u;
            // 0x33d714: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D718u;
label_33d718:
    // 0x33d718: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d71c:
    // 0x33d71c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d720:
    // 0x33d720: 0x8c424330  lw          $v0, 0x4330($v0)
    ctx->pc = 0x33d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17200)));
label_33d724:
    // 0x33d724: 0x400008  jr          $v0
label_33d728:
    if (ctx->pc == 0x33D728u) {
        ctx->pc = 0x33D72Cu;
        goto label_33d72c;
    }
    ctx->pc = 0x33D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D724u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D72Cu;
label_33d72c:
    // 0x33d72c: 0x0  nop
    ctx->pc = 0x33d72cu;
    // NOP
label_33d730:
    // 0x33d730: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d734:
    // 0x33d734: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d738:
    // 0x33d738: 0x10000038  b           . + 4 + (0x38 << 2)
label_33d73c:
    if (ctx->pc == 0x33D73Cu) {
        ctx->pc = 0x33D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D738u;
        // 0x33d73c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D740u;
        goto label_33d740;
    }
    ctx->pc = 0x33D738u;
    {
        const bool branch_taken_0x33d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D738u;
        // 0x33d73c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d738) {
            ctx->pc = 0x33D81Cu;
            goto label_33d81c;
        }
    }
    ctx->pc = 0x33D740u;
label_33d740:
    // 0x33d740: 0x2ce20080  sltiu       $v0, $a3, 0x80
    ctx->pc = 0x33d740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_33d744:
    // 0x33d744: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_33d748:
    if (ctx->pc == 0x33D748u) {
        ctx->pc = 0x33D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D744u;
        // 0x33d748: 0x2d020080  sltiu       $v0, $t0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D74Cu;
        goto label_33d74c;
    }
    ctx->pc = 0x33D744u;
    {
        const bool branch_taken_0x33d744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D744u;
        // 0x33d748: 0x2d020080  sltiu       $v0, $t0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d744) {
            ctx->pc = 0x33D798u;
            goto label_33d798;
        }
    }
    ctx->pc = 0x33D74Cu;
label_33d74c:
    // 0x33d74c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33d750:
    if (ctx->pc == 0x33D750u) {
        ctx->pc = 0x33D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D74Cu;
        // 0x33d750: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D754u;
        goto label_33d754;
    }
    ctx->pc = 0x33D74Cu;
    {
        const bool branch_taken_0x33d74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D74Cu;
        // 0x33d750: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d74c) {
            ctx->pc = 0x33D798u;
            goto label_33d798;
        }
    }
    ctx->pc = 0x33D754u;
label_33d754:
    // 0x33d754: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x33d754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_33d758:
    // 0x33d758: 0x30460020  andi        $a2, $v0, 0x20
    ctx->pc = 0x33d758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_33d75c:
    // 0x33d75c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x33d75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_33d760:
    // 0x33d760: 0x30a40040  andi        $a0, $a1, 0x40
    ctx->pc = 0x33d760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_33d764:
    // 0x33d764: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x33d764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_33d768:
    // 0x33d768: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33d768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33d76c:
    // 0x33d76c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x33d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_33d770:
    // 0x33d770: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x33d770u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_33d774:
    // 0x33d774: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x33d774u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_33d778:
    // 0x33d778: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x33d778u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
label_33d77c:
    // 0x33d77c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33d780:
    // 0x33d780: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33d780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_33d784:
    // 0x33d784: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x33d784u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_33d788:
    // 0x33d788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33d78c:
    // 0x33d78c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x33d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_33d790:
    // 0x33d790: 0x10000030  b           . + 4 + (0x30 << 2)
label_33d794:
    if (ctx->pc == 0x33D794u) {
        ctx->pc = 0x33D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D790u;
        // 0x33d794: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D798u;
        goto label_33d798;
    }
    ctx->pc = 0x33D790u;
    {
        const bool branch_taken_0x33d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D790u;
        // 0x33d794: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d790) {
            ctx->pc = 0x33D854u;
            goto label_33d854;
        }
    }
    ctx->pc = 0x33D798u;
label_33d798:
    // 0x33d798: 0x5120002a  beql        $t1, $zero, . + 4 + (0x2A << 2)
label_33d79c:
    if (ctx->pc == 0x33D79Cu) {
        ctx->pc = 0x33D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D798u;
        // 0x33d79c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7A0u;
        goto label_33d7a0;
    }
    ctx->pc = 0x33D798u;
    {
        const bool branch_taken_0x33d798 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d798) {
            ctx->pc = 0x33D79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D798u;
            // 0x33d79c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D7A0u;
label_33d7a0:
    // 0x33d7a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d7a4:
    // 0x33d7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d7a8:
    // 0x33d7a8: 0x8c424420  lw          $v0, 0x4420($v0)
    ctx->pc = 0x33d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17440)));
label_33d7ac:
    // 0x33d7ac: 0x400008  jr          $v0
label_33d7b0:
    if (ctx->pc == 0x33D7B0u) {
        ctx->pc = 0x33D7B4u;
        goto label_33d7b4;
    }
    ctx->pc = 0x33D7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D7ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D7B4u;
label_33d7b4:
    // 0x33d7b4: 0x0  nop
    ctx->pc = 0x33d7b4u;
    // NOP
label_33d7b8:
    // 0x33d7b8: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d7bc:
    // 0x33d7bc: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d7c0:
    // 0x33d7c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_33d7c4:
    if (ctx->pc == 0x33D7C4u) {
        ctx->pc = 0x33D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7C0u;
        // 0x33d7c4: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7C8u;
        goto label_33d7c8;
    }
    ctx->pc = 0x33D7C0u;
    {
        const bool branch_taken_0x33d7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7C0u;
        // 0x33d7c4: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7c0) {
            ctx->pc = 0x33D81Cu;
            goto label_33d81c;
        }
    }
    ctx->pc = 0x33D7C8u;
label_33d7c8:
    // 0x33d7c8: 0x5120001e  beql        $t1, $zero, . + 4 + (0x1E << 2)
label_33d7cc:
    if (ctx->pc == 0x33D7CCu) {
        ctx->pc = 0x33D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7C8u;
        // 0x33d7cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7D0u;
        goto label_33d7d0;
    }
    ctx->pc = 0x33D7C8u;
    {
        const bool branch_taken_0x33d7c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d7c8) {
            ctx->pc = 0x33D7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D7C8u;
            // 0x33d7cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D7D0u;
label_33d7d0:
    // 0x33d7d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d7d4:
    // 0x33d7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d7d8:
    // 0x33d7d8: 0x8c424510  lw          $v0, 0x4510($v0)
    ctx->pc = 0x33d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17680)));
label_33d7dc:
    // 0x33d7dc: 0x400008  jr          $v0
label_33d7e0:
    if (ctx->pc == 0x33D7E0u) {
        ctx->pc = 0x33D7E4u;
        goto label_33d7e4;
    }
    ctx->pc = 0x33D7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D7DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D7E4u;
label_33d7e4:
    // 0x33d7e4: 0x0  nop
    ctx->pc = 0x33d7e4u;
    // NOP
label_33d7e8:
    // 0x33d7e8: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d7ec:
    // 0x33d7ec: 0x2502001f  addiu       $v0, $t0, 0x1F
    ctx->pc = 0x33d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 31));
label_33d7f0:
    // 0x33d7f0: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x33d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_33d7f4:
    // 0x33d7f4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x33d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_33d7f8:
    // 0x33d7f8: 0x10000012  b           . + 4 + (0x12 << 2)
label_33d7fc:
    if (ctx->pc == 0x33D7FCu) {
        ctx->pc = 0x33D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7F8u;
        // 0x33d7fc: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D800u;
        goto label_33d800;
    }
    ctx->pc = 0x33D7F8u;
    {
        const bool branch_taken_0x33d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7F8u;
        // 0x33d7fc: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7f8) {
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D800u;
label_33d800:
    // 0x33d800: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x33d800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_33d804:
    // 0x33d804: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d808:
    // 0x33d808: 0x10000004  b           . + 4 + (0x4 << 2)
label_33d80c:
    if (ctx->pc == 0x33D80Cu) {
        ctx->pc = 0x33D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D808u;
        // 0x33d80c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D810u;
        goto label_33d810;
    }
    ctx->pc = 0x33D808u;
    {
        const bool branch_taken_0x33d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D808u;
        // 0x33d80c: 0x31982  srl         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d808) {
            ctx->pc = 0x33D81Cu;
            goto label_33d81c;
        }
    }
    ctx->pc = 0x33D810u;
label_33d810:
    // 0x33d810: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x33d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
label_33d814:
    // 0x33d814: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x33d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
label_33d818:
    // 0x33d818: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x33d818u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_33d81c:
    // 0x33d81c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x33d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_33d820:
    // 0x33d820: 0x10000008  b           . + 4 + (0x8 << 2)
label_33d824:
    if (ctx->pc == 0x33D824u) {
        ctx->pc = 0x33D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D820u;
        // 0x33d824: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D828u;
        goto label_33d828;
    }
    ctx->pc = 0x33D820u;
    {
        const bool branch_taken_0x33d820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D820u;
        // 0x33d824: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d820) {
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D828u;
label_33d828:
    // 0x33d828: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x33d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
label_33d82c:
    // 0x33d82c: 0x2502007f  addiu       $v0, $t0, 0x7F
    ctx->pc = 0x33d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 127));
label_33d830:
    // 0x33d830: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x33d830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_33d834:
    // 0x33d834: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x33d834u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_33d838:
    // 0x33d838: 0x10000002  b           . + 4 + (0x2 << 2)
label_33d83c:
    if (ctx->pc == 0x33D83Cu) {
        ctx->pc = 0x33D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D838u;
        // 0x33d83c: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D840u;
        goto label_33d840;
    }
    ctx->pc = 0x33D838u;
    {
        const bool branch_taken_0x33d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D838u;
        // 0x33d83c: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d838) {
            ctx->pc = 0x33D844u;
            goto label_33d844;
        }
    }
    ctx->pc = 0x33D840u;
label_33d840:
    // 0x33d840: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d840u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d844:
    // 0x33d844: 0x10000003  b           . + 4 + (0x3 << 2)
label_33d848:
    if (ctx->pc == 0x33D848u) {
        ctx->pc = 0x33D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D844u;
        // 0x33d848: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D84Cu;
        goto label_33d84c;
    }
    ctx->pc = 0x33D844u;
    {
        const bool branch_taken_0x33d844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D844u;
        // 0x33d848: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d844) {
            ctx->pc = 0x33D854u;
            goto label_33d854;
        }
    }
    ctx->pc = 0x33D84Cu;
label_33d84c:
    // 0x33d84c: 0x0  nop
    ctx->pc = 0x33d84cu;
    // NOP
label_33d850:
    // 0x33d850: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d854:
    // 0x33d854: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x33d854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_33d858:
    // 0x33d858: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x33d858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33d85c:
    // 0x33d85c: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
label_33d860:
    if (ctx->pc == 0x33D860u) {
        ctx->pc = 0x33D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D85Cu;
        // 0x33d860: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D864u;
        goto label_33d864;
    }
    ctx->pc = 0x33D85Cu;
    {
        const bool branch_taken_0x33d85c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D85Cu;
        // 0x33d860: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d85c) {
            ctx->pc = 0x33D8C8u;
            goto label_33d8c8;
        }
    }
    ctx->pc = 0x33D864u;
label_33d864:
    // 0x33d864: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x33d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33d868:
    // 0x33d868: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33d868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_33d86c:
    // 0x33d86c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33d870:
    // 0x33d870: 0x8c634600  lw          $v1, 0x4600($v1)
    ctx->pc = 0x33d870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17920)));
label_33d874:
    // 0x33d874: 0x600008  jr          $v1
label_33d878:
    if (ctx->pc == 0x33D878u) {
        ctx->pc = 0x33D87Cu;
        goto label_33d87c;
    }
    ctx->pc = 0x33D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33D87Cu;
label_33d87c:
    // 0x33d87c: 0x0  nop
    ctx->pc = 0x33d87cu;
    // NOP
label_33d880:
    // 0x33d880: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x33d880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d884:
    // 0x33d884: 0x10000011  b           . + 4 + (0x11 << 2)
label_33d888:
    if (ctx->pc == 0x33D888u) {
        ctx->pc = 0x33D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D884u;
        // 0x33d888: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D88Cu;
        goto label_33d88c;
    }
    ctx->pc = 0x33D884u;
    {
        const bool branch_taken_0x33d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D884u;
        // 0x33d888: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d884) {
            ctx->pc = 0x33D8CCu;
            goto label_33d8cc;
        }
    }
    ctx->pc = 0x33D88Cu;
label_33d88c:
    // 0x33d88c: 0x0  nop
    ctx->pc = 0x33d88cu;
    // NOP
label_33d890:
    // 0x33d890: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x33d890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33d894:
    // 0x33d894: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33d894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_33d898:
    // 0x33d898: 0x1000000c  b           . + 4 + (0xC << 2)
label_33d89c:
    if (ctx->pc == 0x33D89Cu) {
        ctx->pc = 0x33D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D898u;
        // 0x33d89c: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D8A0u;
        goto label_33d8a0;
    }
    ctx->pc = 0x33D898u;
    {
        const bool branch_taken_0x33d898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D898u;
        // 0x33d89c: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d898) {
            ctx->pc = 0x33D8CCu;
            goto label_33d8cc;
        }
    }
    ctx->pc = 0x33D8A0u;
label_33d8a0:
    // 0x33d8a0: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x33d8a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d8a4:
    // 0x33d8a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_33d8a8:
    if (ctx->pc == 0x33D8A8u) {
        ctx->pc = 0x33D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8A4u;
        // 0x33d8a8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D8ACu;
        goto label_33d8ac;
    }
    ctx->pc = 0x33D8A4u;
    {
        const bool branch_taken_0x33d8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8A4u;
        // 0x33d8a8: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8a4) {
            ctx->pc = 0x33D8CCu;
            goto label_33d8cc;
        }
    }
    ctx->pc = 0x33D8ACu;
label_33d8ac:
    // 0x33d8ac: 0x0  nop
    ctx->pc = 0x33d8acu;
    // NOP
label_33d8b0:
    // 0x33d8b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_33d8b4:
    if (ctx->pc == 0x33D8B4u) {
        ctx->pc = 0x33D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8B0u;
        // 0x33d8b4: 0x851818  mult        $v1, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D8B8u;
        goto label_33d8b8;
    }
    ctx->pc = 0x33D8B0u;
    {
        const bool branch_taken_0x33d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8B0u;
        // 0x33d8b4: 0x851818  mult        $v1, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8b0) {
            ctx->pc = 0x33D8CCu;
            goto label_33d8cc;
        }
    }
    ctx->pc = 0x33D8B8u;
label_33d8b8:
    // 0x33d8b8: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x33d8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d8bc:
    // 0x33d8bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_33d8c0:
    if (ctx->pc == 0x33D8C0u) {
        ctx->pc = 0x33D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8BCu;
        // 0x33d8c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D8C4u;
        goto label_33d8c4;
    }
    ctx->pc = 0x33D8BCu;
    {
        const bool branch_taken_0x33d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8BCu;
        // 0x33d8c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d8bc) {
            ctx->pc = 0x33D8CCu;
            goto label_33d8cc;
        }
    }
    ctx->pc = 0x33D8C4u;
label_33d8c4:
    // 0x33d8c4: 0x0  nop
    ctx->pc = 0x33d8c4u;
    // NOP
label_33d8c8:
    // 0x33d8c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33d8c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d8cc:
    // 0x33d8cc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33d8d0:
    // 0x33d8d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33d8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d8d4:
    // 0x33d8d4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x33d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_33d8d8:
    // 0x33d8d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33d8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d8dc:
    // 0x33d8dc: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x33d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_33d8e0:
    // 0x33d8e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33d8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d8e4:
    // 0x33d8e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d8e8:
    // 0x33d8e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d8ec:
    // 0x33d8ec: 0x60f809  jalr        $v1
label_33d8f0:
    if (ctx->pc == 0x33D8F0u) {
        ctx->pc = 0x33D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8ECu;
        // 0x33d8f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D8F4u;
        goto label_33d8f4;
    }
    ctx->pc = 0x33D8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D8F4u);
        ctx->pc = 0x33D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8ECu;
        // 0x33d8f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D8ECu, 0x33D8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D8F4u;
label_33d8f4:
    // 0x33d8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d8f8:
    // 0x33d8f8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x33d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33d8fc:
    // 0x33d8fc: 0xc0cf39c  jal         func_33CE70
label_33d900:
    if (ctx->pc == 0x33D900u) {
        ctx->pc = 0x33D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D8FCu;
        // 0x33d900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D904u;
        goto label_33d904;
    }
    ctx->pc = 0x33D8FCu;
    SET_GPR_U32(ctx, 31, 0x33D904u);
    ctx->pc = 0x33D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D8FCu;
    // 0x33d900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE70u, 0x33D8FCu, 0x33D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D904u;
label_33d904:
    // 0x33d904: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33d904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33d908:
    // 0x33d908: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33d908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33d90c:
    // 0x33d90c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33d90cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33d910:
    // 0x33d910: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33d910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33d914:
    // 0x33d914: 0x3e00008  jr          $ra
label_33d918:
    if (ctx->pc == 0x33D918u) {
        ctx->pc = 0x33D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D914u;
        // 0x33d918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D91Cu;
        goto label_33d91c;
    }
    ctx->pc = 0x33D914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D914u;
        // 0x33d918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D91Cu;
label_33d91c:
    // 0x33d91c: 0x0  nop
    ctx->pc = 0x33d91cu;
    // NOP
    ctx->pc = 0x33d920u;
}
