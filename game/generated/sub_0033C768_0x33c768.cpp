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

// Function: sub_0033C768
// Address: 0x33c768 - 0x33c8a8
void sub_0033C768_0x33c768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C768_0x33c768");
#endif

    switch (ctx->pc) {
        case 0x33c768u: goto label_33c768;
        case 0x33c76cu: goto label_33c76c;
        case 0x33c770u: goto label_33c770;
        case 0x33c774u: goto label_33c774;
        case 0x33c778u: goto label_33c778;
        case 0x33c77cu: goto label_33c77c;
        case 0x33c780u: goto label_33c780;
        case 0x33c784u: goto label_33c784;
        case 0x33c788u: goto label_33c788;
        case 0x33c78cu: goto label_33c78c;
        case 0x33c790u: goto label_33c790;
        case 0x33c794u: goto label_33c794;
        case 0x33c798u: goto label_33c798;
        case 0x33c79cu: goto label_33c79c;
        case 0x33c7a0u: goto label_33c7a0;
        case 0x33c7a4u: goto label_33c7a4;
        case 0x33c7a8u: goto label_33c7a8;
        case 0x33c7acu: goto label_33c7ac;
        case 0x33c7b0u: goto label_33c7b0;
        case 0x33c7b4u: goto label_33c7b4;
        case 0x33c7b8u: goto label_33c7b8;
        case 0x33c7bcu: goto label_33c7bc;
        case 0x33c7c0u: goto label_33c7c0;
        case 0x33c7c4u: goto label_33c7c4;
        case 0x33c7c8u: goto label_33c7c8;
        case 0x33c7ccu: goto label_33c7cc;
        case 0x33c7d0u: goto label_33c7d0;
        case 0x33c7d4u: goto label_33c7d4;
        case 0x33c7d8u: goto label_33c7d8;
        case 0x33c7dcu: goto label_33c7dc;
        case 0x33c7e0u: goto label_33c7e0;
        case 0x33c7e4u: goto label_33c7e4;
        case 0x33c7e8u: goto label_33c7e8;
        case 0x33c7ecu: goto label_33c7ec;
        case 0x33c7f0u: goto label_33c7f0;
        case 0x33c7f4u: goto label_33c7f4;
        case 0x33c7f8u: goto label_33c7f8;
        case 0x33c7fcu: goto label_33c7fc;
        case 0x33c800u: goto label_33c800;
        case 0x33c804u: goto label_33c804;
        case 0x33c808u: goto label_33c808;
        case 0x33c80cu: goto label_33c80c;
        case 0x33c810u: goto label_33c810;
        case 0x33c814u: goto label_33c814;
        case 0x33c818u: goto label_33c818;
        case 0x33c81cu: goto label_33c81c;
        case 0x33c820u: goto label_33c820;
        case 0x33c824u: goto label_33c824;
        case 0x33c828u: goto label_33c828;
        case 0x33c82cu: goto label_33c82c;
        case 0x33c830u: goto label_33c830;
        case 0x33c834u: goto label_33c834;
        case 0x33c838u: goto label_33c838;
        case 0x33c83cu: goto label_33c83c;
        case 0x33c840u: goto label_33c840;
        case 0x33c844u: goto label_33c844;
        case 0x33c848u: goto label_33c848;
        case 0x33c84cu: goto label_33c84c;
        case 0x33c850u: goto label_33c850;
        case 0x33c854u: goto label_33c854;
        case 0x33c858u: goto label_33c858;
        case 0x33c85cu: goto label_33c85c;
        case 0x33c860u: goto label_33c860;
        case 0x33c864u: goto label_33c864;
        case 0x33c868u: goto label_33c868;
        case 0x33c86cu: goto label_33c86c;
        case 0x33c870u: goto label_33c870;
        case 0x33c874u: goto label_33c874;
        case 0x33c878u: goto label_33c878;
        case 0x33c87cu: goto label_33c87c;
        case 0x33c880u: goto label_33c880;
        case 0x33c884u: goto label_33c884;
        case 0x33c888u: goto label_33c888;
        case 0x33c88cu: goto label_33c88c;
        case 0x33c890u: goto label_33c890;
        case 0x33c894u: goto label_33c894;
        case 0x33c898u: goto label_33c898;
        case 0x33c89cu: goto label_33c89c;
        case 0x33c8a0u: goto label_33c8a0;
        case 0x33c8a4u: goto label_33c8a4;
        default: break;
    }

    ctx->pc = 0x33c768u;

label_33c768:
    // 0x33c768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33c76c:
    // 0x33c76c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x33c76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_33c770:
    // 0x33c770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33c774:
    // 0x33c774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c778:
    // 0x33c778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33c77c:
    // 0x33c77c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c780:
    // 0x33c780: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_33c784:
    if (ctx->pc == 0x33C784u) {
        ctx->pc = 0x33C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C780u;
        // 0x33c784: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C788u;
        goto label_33c788;
    }
    ctx->pc = 0x33C780u;
    {
        const bool branch_taken_0x33c780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C780u;
        // 0x33c784: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c780) {
            ctx->pc = 0x33C868u;
            goto label_33c868;
        }
    }
    ctx->pc = 0x33C788u;
label_33c788:
    // 0x33c788: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33c788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33c78c:
    // 0x33c78c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_33c790:
    // 0x33c790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33c794:
    // 0x33c794: 0x8c6336e0  lw          $v1, 0x36E0($v1)
    ctx->pc = 0x33c794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14048)));
label_33c798:
    // 0x33c798: 0x600008  jr          $v1
label_33c79c:
    if (ctx->pc == 0x33C79Cu) {
        ctx->pc = 0x33C7A0u;
        goto label_33c7a0;
    }
    ctx->pc = 0x33C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33C7A0u: goto label_33c7a0;
            case 0x33C7E0u: goto label_33c7e0;
            case 0x33C820u: goto label_33c820;
            case 0x33C838u: goto label_33c838;
            case 0x33C850u: goto label_33c850;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C798u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33C7A0u;
label_33c7a0:
    // 0x33c7a0: 0x8f83cce4  lw          $v1, -0x331C($gp)
    ctx->pc = 0x33c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954212)));
label_33c7a4:
    // 0x33c7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c7a8:
    // 0x33c7a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_33c7ac:
    if (ctx->pc == 0x33C7ACu) {
        ctx->pc = 0x33C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7A8u;
        // 0x33c7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7B0u;
        goto label_33c7b0;
    }
    ctx->pc = 0x33C7A8u;
    {
        const bool branch_taken_0x33c7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7A8u;
        // 0x33c7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7a8) {
            ctx->pc = 0x33C7C8u;
            goto label_33c7c8;
        }
    }
    ctx->pc = 0x33C7B0u;
label_33c7b0:
    // 0x33c7b0: 0xc0cf24c  jal         func_33C930
label_33c7b4:
    if (ctx->pc == 0x33C7B4u) {
        ctx->pc = 0x33C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7B0u;
        // 0x33c7b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7B8u;
        goto label_33c7b8;
    }
    ctx->pc = 0x33C7B0u;
    SET_GPR_U32(ctx, 31, 0x33C7B8u);
    ctx->pc = 0x33C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7B0u;
    // 0x33c7b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C7B0u, 0x33C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7B8u;
label_33c7b8:
    // 0x33c7b8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c7bc:
    // 0x33c7bc: 0x10000029  b           . + 4 + (0x29 << 2)
label_33c7c0:
    if (ctx->pc == 0x33C7C0u) {
        ctx->pc = 0x33C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7BCu;
        // 0x33c7c0: 0x24632748  addiu       $v1, $v1, 0x2748 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7C4u;
        goto label_33c7c4;
    }
    ctx->pc = 0x33C7BCu;
    {
        const bool branch_taken_0x33c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7BCu;
        // 0x33c7c0: 0x24632748  addiu       $v1, $v1, 0x2748 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7bc) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C7C4u;
label_33c7c4:
    // 0x33c7c4: 0x0  nop
    ctx->pc = 0x33c7c4u;
    // NOP
label_33c7c8:
    // 0x33c7c8: 0xc0cf24c  jal         func_33C930
label_33c7cc:
    if (ctx->pc == 0x33C7CCu) {
        ctx->pc = 0x33C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7C8u;
        // 0x33c7cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7D0u;
        goto label_33c7d0;
    }
    ctx->pc = 0x33C7C8u;
    SET_GPR_U32(ctx, 31, 0x33C7D0u);
    ctx->pc = 0x33C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7C8u;
    // 0x33c7cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C7C8u, 0x33C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7D0u;
label_33c7d0:
    // 0x33c7d0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c7d4:
    // 0x33c7d4: 0x10000023  b           . + 4 + (0x23 << 2)
label_33c7d8:
    if (ctx->pc == 0x33C7D8u) {
        ctx->pc = 0x33C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7D4u;
        // 0x33c7d8: 0x246326d8  addiu       $v1, $v1, 0x26D8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7DCu;
        goto label_33c7dc;
    }
    ctx->pc = 0x33C7D4u;
    {
        const bool branch_taken_0x33c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7D4u;
        // 0x33c7d8: 0x246326d8  addiu       $v1, $v1, 0x26D8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7d4) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C7DCu;
label_33c7dc:
    // 0x33c7dc: 0x0  nop
    ctx->pc = 0x33c7dcu;
    // NOP
label_33c7e0:
    // 0x33c7e0: 0x8f83cce4  lw          $v1, -0x331C($gp)
    ctx->pc = 0x33c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954212)));
label_33c7e4:
    // 0x33c7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c7e8:
    // 0x33c7e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_33c7ec:
    if (ctx->pc == 0x33C7ECu) {
        ctx->pc = 0x33C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7E8u;
        // 0x33c7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7F0u;
        goto label_33c7f0;
    }
    ctx->pc = 0x33C7E8u;
    {
        const bool branch_taken_0x33c7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7E8u;
        // 0x33c7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7e8) {
            ctx->pc = 0x33C808u;
            goto label_33c808;
        }
    }
    ctx->pc = 0x33C7F0u;
label_33c7f0:
    // 0x33c7f0: 0xc0cf24c  jal         func_33C930
label_33c7f4:
    if (ctx->pc == 0x33C7F4u) {
        ctx->pc = 0x33C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7F0u;
        // 0x33c7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C7F8u;
        goto label_33c7f8;
    }
    ctx->pc = 0x33C7F0u;
    SET_GPR_U32(ctx, 31, 0x33C7F8u);
    ctx->pc = 0x33C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C7F0u;
    // 0x33c7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C7F0u, 0x33C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C7F8u;
label_33c7f8:
    // 0x33c7f8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c7fc:
    // 0x33c7fc: 0x10000019  b           . + 4 + (0x19 << 2)
label_33c800:
    if (ctx->pc == 0x33C800u) {
        ctx->pc = 0x33C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7FCu;
        // 0x33c800: 0x24632898  addiu       $v1, $v1, 0x2898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C804u;
        goto label_33c804;
    }
    ctx->pc = 0x33C7FCu;
    {
        const bool branch_taken_0x33c7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7FCu;
        // 0x33c800: 0x24632898  addiu       $v1, $v1, 0x2898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c7fc) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C804u;
label_33c804:
    // 0x33c804: 0x0  nop
    ctx->pc = 0x33c804u;
    // NOP
label_33c808:
    // 0x33c808: 0xc0cf24c  jal         func_33C930
label_33c80c:
    if (ctx->pc == 0x33C80Cu) {
        ctx->pc = 0x33C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C808u;
        // 0x33c80c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C810u;
        goto label_33c810;
    }
    ctx->pc = 0x33C808u;
    SET_GPR_U32(ctx, 31, 0x33C810u);
    ctx->pc = 0x33C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C808u;
    // 0x33c80c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C808u, 0x33C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C810u;
label_33c810:
    // 0x33c810: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c814:
    // 0x33c814: 0x10000013  b           . + 4 + (0x13 << 2)
label_33c818:
    if (ctx->pc == 0x33C818u) {
        ctx->pc = 0x33C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C814u;
        // 0x33c818: 0x24632828  addiu       $v1, $v1, 0x2828 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C81Cu;
        goto label_33c81c;
    }
    ctx->pc = 0x33C814u;
    {
        const bool branch_taken_0x33c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C814u;
        // 0x33c818: 0x24632828  addiu       $v1, $v1, 0x2828 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c814) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C81Cu;
label_33c81c:
    // 0x33c81c: 0x0  nop
    ctx->pc = 0x33c81cu;
    // NOP
label_33c820:
    // 0x33c820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c824:
    // 0x33c824: 0xc0cf24c  jal         func_33C930
label_33c828:
    if (ctx->pc == 0x33C828u) {
        ctx->pc = 0x33C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C824u;
        // 0x33c828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C82Cu;
        goto label_33c82c;
    }
    ctx->pc = 0x33C824u;
    SET_GPR_U32(ctx, 31, 0x33C82Cu);
    ctx->pc = 0x33C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C824u;
    // 0x33c828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C824u, 0x33C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C82Cu;
label_33c82c:
    // 0x33c82c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c830:
    // 0x33c830: 0x1000000c  b           . + 4 + (0xC << 2)
label_33c834:
    if (ctx->pc == 0x33C834u) {
        ctx->pc = 0x33C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C830u;
        // 0x33c834: 0x24632950  addiu       $v1, $v1, 0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C838u;
        goto label_33c838;
    }
    ctx->pc = 0x33C830u;
    {
        const bool branch_taken_0x33c830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C830u;
        // 0x33c834: 0x24632950  addiu       $v1, $v1, 0x2950 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c830) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C838u;
label_33c838:
    // 0x33c838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c83c:
    // 0x33c83c: 0xc0cf24c  jal         func_33C930
label_33c840:
    if (ctx->pc == 0x33C840u) {
        ctx->pc = 0x33C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C83Cu;
        // 0x33c840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C844u;
        goto label_33c844;
    }
    ctx->pc = 0x33C83Cu;
    SET_GPR_U32(ctx, 31, 0x33C844u);
    ctx->pc = 0x33C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C83Cu;
    // 0x33c840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C83Cu, 0x33C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C844u;
label_33c844:
    // 0x33c844: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c848:
    // 0x33c848: 0x10000006  b           . + 4 + (0x6 << 2)
label_33c84c:
    if (ctx->pc == 0x33C84Cu) {
        ctx->pc = 0x33C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C848u;
        // 0x33c84c: 0x24632998  addiu       $v1, $v1, 0x2998 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C850u;
        goto label_33c850;
    }
    ctx->pc = 0x33C848u;
    {
        const bool branch_taken_0x33c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C848u;
        // 0x33c84c: 0x24632998  addiu       $v1, $v1, 0x2998 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c848) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C850u;
label_33c850:
    // 0x33c850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c854:
    // 0x33c854: 0xc0cf24c  jal         func_33C930
label_33c858:
    if (ctx->pc == 0x33C858u) {
        ctx->pc = 0x33C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C854u;
        // 0x33c858: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C85Cu;
        goto label_33c85c;
    }
    ctx->pc = 0x33C854u;
    SET_GPR_U32(ctx, 31, 0x33C85Cu);
    ctx->pc = 0x33C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C854u;
    // 0x33c858: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C930u, 0x33C854u, 0x33C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C85Cu;
label_33c85c:
    // 0x33c85c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_33c860:
    // 0x33c860: 0x24632908  addiu       $v1, $v1, 0x2908
    ctx->pc = 0x33c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10504));
label_33c864:
    // 0x33c864: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x33c864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_33c868:
    // 0x33c868: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33c868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33c86c:
    // 0x33c86c: 0x96270008  lhu         $a3, 0x8($s1)
    ctx->pc = 0x33c86cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_33c870:
    // 0x33c870: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_33c874:
    // 0x33c874: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x33c874u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_33c878:
    // 0x33c878: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33c878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33c87c:
    // 0x33c87c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33c880:
    // 0x33c880: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x33c880u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_33c884:
    // 0x33c884: 0x60f809  jalr        $v1
label_33c888:
    if (ctx->pc == 0x33C888u) {
        ctx->pc = 0x33C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C884u;
        // 0x33c888: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C88Cu;
        goto label_33c88c;
    }
    ctx->pc = 0x33C884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C88Cu);
        ctx->pc = 0x33C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C884u;
        // 0x33c888: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C884u, 0x33C88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C88Cu;
label_33c88c:
    // 0x33c88c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c890:
    // 0x33c890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c894:
    // 0x33c894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c898:
    // 0x33c898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33c898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c89c:
    // 0x33c89c: 0x3e00008  jr          $ra
label_33c8a0:
    if (ctx->pc == 0x33C8A0u) {
        ctx->pc = 0x33C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C89Cu;
        // 0x33c8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C8A4u;
        goto label_33c8a4;
    }
    ctx->pc = 0x33C89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C89Cu;
        // 0x33c8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C8A4u;
label_33c8a4:
    // 0x33c8a4: 0x0  nop
    ctx->pc = 0x33c8a4u;
    // NOP
    ctx->pc = 0x33c8a8u;
}
