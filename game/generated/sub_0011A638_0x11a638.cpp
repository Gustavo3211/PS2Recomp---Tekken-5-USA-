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

// Function: sub_0011A638
// Address: 0x11a638 - 0x11ab30
void sub_0011A638_0x11a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A638_0x11a638");
#endif

    switch (ctx->pc) {
        case 0x11a680u: goto label_11a680;
        case 0x11a6acu: goto label_11a6ac;
        case 0x11a6c0u: goto label_11a6c0;
        case 0x11a6ecu: goto label_11a6ec;
        case 0x11a714u: goto label_11a714;
        case 0x11a71cu: goto label_11a71c;
        case 0x11a72cu: goto label_11a72c;
        case 0x11a768u: goto label_11a768;
        case 0x11a7d8u: goto label_11a7d8;
        case 0x11a81cu: goto label_11a81c;
        case 0x11a824u: goto label_11a824;
        case 0x11a858u: goto label_11a858;
        case 0x11a87cu: goto label_11a87c;
        case 0x11a8a8u: goto label_11a8a8;
        case 0x11a8c0u: goto label_11a8c0;
        case 0x11a8e4u: goto label_11a8e4;
        case 0x11a900u: goto label_11a900;
        case 0x11a944u: goto label_11a944;
        case 0x11a978u: goto label_11a978;
        case 0x11a9a0u: goto label_11a9a0;
        case 0x11a9c4u: goto label_11a9c4;
        case 0x11a9ecu: goto label_11a9ec;
        case 0x11a9fcu: goto label_11a9fc;
        case 0x11aa20u: goto label_11aa20;
        case 0x11aa94u: goto label_11aa94;
        case 0x11aab8u: goto label_11aab8;
        case 0x11aad8u: goto label_11aad8;
        default: break;
    }

    ctx->pc = 0x11a638u;

    // 0x11a638: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11a63c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11a640: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a644: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11a644u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a648: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a64c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x11a64cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a650: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11a650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11a654: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11a654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a658: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a65c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a664: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A664u;
    {
        const bool branch_taken_0x11a664 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A664u;
        // 0x11a668: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a664) {
            ctx->pc = 0x11A678u;
            goto label_11a678;
        }
    }
    ctx->pc = 0x11A66Cu;
    // 0x11a66c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a670: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11A670u;
    {
        const bool branch_taken_0x11a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A670u;
        // 0x11a674: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a670) {
            ctx->pc = 0x11A73Cu;
            goto label_11a73c;
        }
    }
    ctx->pc = 0x11A678u;
label_11a678:
    // 0x11a678: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A678u;
    SET_GPR_U32(ctx, 31, 0x11A680u);
    ctx->pc = 0x11A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A678u;
    // 0x11a67c: 0x3c12001f  lui         $s2, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A678u, 0x11A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A680u;
label_11a680:
    // 0x11a680: 0x8e50e3c0  lw          $s0, -0x1C40($s2)
    ctx->pc = 0x11a680u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960064)));
    // 0x11a684: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A684u;
    {
        const bool branch_taken_0x11a684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A684u;
        // 0x11a688: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a684) {
            ctx->pc = 0x11A694u;
            goto label_11a694;
        }
    }
    ctx->pc = 0x11A68Cu;
    // 0x11a68c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a690: 0xae42e3c0  sw          $v0, -0x1C40($s2)
    ctx->pc = 0x11a690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960064), GPR_U32(ctx, 2));
label_11a694:
    // 0x11a694: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A694u;
    {
        const bool branch_taken_0x11a694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a694) {
            ctx->pc = 0x11A6B8u;
            goto label_11a6b8;
        }
    }
    ctx->pc = 0x11A69Cu;
    // 0x11a69c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A69Cu;
    {
        const bool branch_taken_0x11a69c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a69c) {
            ctx->pc = 0x11A6ACu;
            goto label_11a6ac;
        }
    }
    ctx->pc = 0x11A6A4u;
    // 0x11a6a4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A6A4u;
    SET_GPR_U32(ctx, 31, 0x11A6ACu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A6A4u, 0x11A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6ACu;
label_11a6ac:
    // 0x11a6ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a6b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11A6B0u;
    {
        const bool branch_taken_0x11a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6B0u;
        // 0x11a6b4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6b0) {
            ctx->pc = 0x11A73Cu;
            goto label_11a73c;
        }
    }
    ctx->pc = 0x11A6B8u;
label_11a6b8:
    // 0x11a6b8: 0xc046710  jal         func_119C40
    ctx->pc = 0x11A6B8u;
    SET_GPR_U32(ctx, 31, 0x11A6C0u);
    ctx->pc = 0x119C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C40u, 0x11A6B8u, 0x11A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6C0u;
label_11a6c0:
    // 0x11a6c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a6c4: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x11A6C4u;
    {
        const bool branch_taken_0x11a6c4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x11a6c4) {
            ctx->pc = 0x11A6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A6C4u;
            // 0x11a6c8: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A6F4u;
            goto label_11a6f4;
        }
    }
    ctx->pc = 0x11A6CCu;
    // 0x11a6cc: 0x8e42e3c0  lw          $v0, -0x1C40($s2)
    ctx->pc = 0x11a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960064)));
    // 0x11a6d0: 0xae50e3c0  sw          $s0, -0x1C40($s2)
    ctx->pc = 0x11a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960064), GPR_U32(ctx, 16));
    // 0x11a6d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11a6d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11a6dc: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x11A6DCu;
    {
        const bool branch_taken_0x11a6dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6DCu;
        // 0x11a6e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6dc) {
            ctx->pc = 0x11A73Cu;
            goto label_11a73c;
        }
    }
    ctx->pc = 0x11A6E4u;
    // 0x11a6e4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A6E4u;
    SET_GPR_U32(ctx, 31, 0x11A6ECu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A6E4u, 0x11A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6ECu;
label_11a6ec:
    // 0x11a6ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11A6ECu;
    {
        const bool branch_taken_0x11a6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A6ECu;
        // 0x11a6f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a6ec) {
            ctx->pc = 0x11A73Cu;
            goto label_11a73c;
        }
    }
    ctx->pc = 0x11A6F4u;
label_11a6f4:
    // 0x11a6f4: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11a6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11a6f8: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x11a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x11a6fc: 0x24c6a5d8  addiu       $a2, $a2, -0x5A28
    ctx->pc = 0x11a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944216));
    // 0x11a700: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x11a700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x11a704: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11a704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a70c: 0xc0468d8  jal         func_11A360
    ctx->pc = 0x11A70Cu;
    SET_GPR_U32(ctx, 31, 0x11A714u);
    ctx->pc = 0x11A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A70Cu;
    // 0x11a710: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A360u, 0x11A70Cu, 0x11A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A714u;
label_11a714:
    // 0x11a714: 0xc0467b6  jal         func_119ED8
    ctx->pc = 0x11A714u;
    SET_GPR_U32(ctx, 31, 0x11A71Cu);
    ctx->pc = 0x11A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A714u;
    // 0x11a718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119ED8u, 0x11A714u, 0x11A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A71Cu;
label_11a71c:
    // 0x11a71c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A71Cu;
    {
        const bool branch_taken_0x11a71c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A71Cu;
        // 0x11a720: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a71c) {
            ctx->pc = 0x11A730u;
            goto label_11a730;
        }
    }
    ctx->pc = 0x11A724u;
    // 0x11a724: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A724u;
    SET_GPR_U32(ctx, 31, 0x11A72Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A724u, 0x11A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A72Cu;
label_11a72c:
    // 0x11a72c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x11a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_11a730:
    // 0x11a730: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x11a730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x11a734: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a738: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x11a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_11a73c:
    // 0x11a73c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a740: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11a740u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a744: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11a744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a748: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a74c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a74cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a750: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a754: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A75Cu;
        // 0x11a760: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A764u;
    // 0x11a764: 0x0  nop
    ctx->pc = 0x11a764u;
    // NOP
label_11a768:
    // 0x11a768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11a76c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11a770: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a774: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11a774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a778: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a77c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11a77cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a780: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11a784: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a788: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a78c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a790: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A790u;
    {
        const bool branch_taken_0x11a790 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A790u;
        // 0x11a794: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a790) {
            ctx->pc = 0x11A7A4u;
            goto label_11a7a4;
        }
    }
    ctx->pc = 0x11A798u;
    // 0x11a798: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a79c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11A79Cu;
    {
        const bool branch_taken_0x11a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A79Cu;
        // 0x11a7a0: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a79c) {
            ctx->pc = 0x11A834u;
            goto label_11a834;
        }
    }
    ctx->pc = 0x11A7A4u;
label_11a7a4:
    // 0x11a7a4: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x11a7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x11a7a8: 0x8e50e3c0  lw          $s0, -0x1C40($s2)
    ctx->pc = 0x11a7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1EE3C0u));
    // 0x11a7ac: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A7ACu;
    {
        const bool branch_taken_0x11a7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a7ac) {
            ctx->pc = 0x11A7BCu;
            goto label_11a7bc;
        }
    }
    ctx->pc = 0x11A7B4u;
    // 0x11a7b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a7b8: 0xae42e3c0  sw          $v0, -0x1C40($s2)
    ctx->pc = 0x11a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960064), GPR_U32(ctx, 2));
label_11a7bc:
    // 0x11a7bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A7BCu;
    {
        const bool branch_taken_0x11a7bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a7bc) {
            ctx->pc = 0x11A7D0u;
            goto label_11a7d0;
        }
    }
    ctx->pc = 0x11A7C4u;
    // 0x11a7c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a7c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11A7C8u;
    {
        const bool branch_taken_0x11a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7C8u;
        // 0x11a7cc: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7c8) {
            ctx->pc = 0x11A834u;
            goto label_11a834;
        }
    }
    ctx->pc = 0x11A7D0u;
label_11a7d0:
    // 0x11a7d0: 0xc0466f4  jal         func_119BD0
    ctx->pc = 0x11A7D0u;
    SET_GPR_U32(ctx, 31, 0x11A7D8u);
    ctx->pc = 0x119BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119BD0u, 0x11A7D0u, 0x11A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A7D8u;
label_11a7d8:
    // 0x11a7d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7dc: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A7DCu;
    {
        const bool branch_taken_0x11a7dc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x11a7dc) {
            ctx->pc = 0x11A7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A7DCu;
            // 0x11a7e0: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A7FCu;
            goto label_11a7fc;
        }
    }
    ctx->pc = 0x11A7E4u;
    // 0x11a7e4: 0x8e43e3c0  lw          $v1, -0x1C40($s2)
    ctx->pc = 0x11a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960064)));
    // 0x11a7e8: 0xae50e3c0  sw          $s0, -0x1C40($s2)
    ctx->pc = 0x11a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960064), GPR_U32(ctx, 16));
    // 0x11a7ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11a7f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11a7f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11A7F4u;
    {
        const bool branch_taken_0x11a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A7F4u;
        // 0x11a7f8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7f4) {
            ctx->pc = 0x11A838u;
            goto label_11a838;
        }
    }
    ctx->pc = 0x11A7FCu;
label_11a7fc:
    // 0x11a7fc: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11a800: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x11a800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x11a804: 0x24c6a5d8  addiu       $a2, $a2, -0x5A28
    ctx->pc = 0x11a804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944216));
    // 0x11a808: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x11a808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x11a80c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a814: 0xc04689a  jal         func_11A268
    ctx->pc = 0x11A814u;
    SET_GPR_U32(ctx, 31, 0x11A81Cu);
    ctx->pc = 0x11A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A814u;
    // 0x11a818: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A268u, 0x11A814u, 0x11A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A81Cu;
label_11a81c:
    // 0x11a81c: 0xc04678a  jal         func_119E28
    ctx->pc = 0x11A81Cu;
    SET_GPR_U32(ctx, 31, 0x11A824u);
    ctx->pc = 0x11A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A81Cu;
    // 0x11a820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119E28u, 0x11A81Cu, 0x11A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A824u;
label_11a824:
    // 0x11a824: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x11a824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11a828: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x11a828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x11a82c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11a830: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x11a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_11a834:
    // 0x11a834: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11a838:
    // 0x11a838: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11a838u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a83c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a83cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a840: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a844: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a848: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a850: 0x3e00008  jr          $ra
    ctx->pc = 0x11A850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A850u;
        // 0x11a854: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A858u;
label_11a858:
    // 0x11a858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a864: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a868: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x11a868u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x11a86c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a870: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a874: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A874u;
    SET_GPR_U32(ctx, 31, 0x11A87Cu);
    ctx->pc = 0x11A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A874u;
    // 0x11a878: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A874u, 0x11A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A87Cu;
label_11a87c:
    // 0x11a87c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A87Cu;
    {
        const bool branch_taken_0x11a87c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A87Cu;
        // 0x11a880: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a87c) {
            ctx->pc = 0x11A898u;
            goto label_11a898;
        }
    }
    ctx->pc = 0x11A884u;
    // 0x11a884: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11a888: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x11a888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x11a88c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a890: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A890u;
    {
        const bool branch_taken_0x11a890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a890) {
            ctx->pc = 0x11A8B4u;
            goto label_11a8b4;
        }
    }
    ctx->pc = 0x11A898u;
label_11a898:
    // 0x11a898: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A898u;
    {
        const bool branch_taken_0x11a898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a898) {
            ctx->pc = 0x11A8A8u;
            goto label_11a8a8;
        }
    }
    ctx->pc = 0x11A8A0u;
    // 0x11a8a0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A8A0u;
    SET_GPR_U32(ctx, 31, 0x11A8A8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A8A0u, 0x11A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8A8u;
label_11a8a8:
    // 0x11a8a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a8ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11A8ACu;
    {
        const bool branch_taken_0x11a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8ACu;
        // 0x11a8b0: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8ac) {
            ctx->pc = 0x11A8E8u;
            goto label_11a8e8;
        }
    }
    ctx->pc = 0x11A8B4u;
label_11a8b4:
    // 0x11a8b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11a8b8: 0xc04674a  jal         func_119D28
    ctx->pc = 0x11A8B8u;
    SET_GPR_U32(ctx, 31, 0x11A8C0u);
    ctx->pc = 0x119D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D28u, 0x11A8B8u, 0x11A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8C0u;
label_11a8c0:
    // 0x11a8c0: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11a8c4: 0x8c62e3c0  lw          $v0, -0x1C40($v1)
    ctx->pc = 0x11a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1EE3C0u));
    // 0x11a8c8: 0xac71e3c0  sw          $s1, -0x1C40($v1)
    ctx->pc = 0x11a8c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1EE3C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EE3C0u, _value); } while (0);
    // 0x11a8cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11a8d0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x11a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x11a8d4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A8D4u;
    {
        const bool branch_taken_0x11a8d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D4u;
        // 0x11a8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8d4) {
            ctx->pc = 0x11A8E8u;
            goto label_11a8e8;
        }
    }
    ctx->pc = 0x11A8DCu;
    // 0x11a8dc: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A8DCu;
    SET_GPR_U32(ctx, 31, 0x11A8E4u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A8DCu, 0x11A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8E4u;
label_11a8e4:
    // 0x11a8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a8e8:
    // 0x11a8e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a8ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a8ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a8f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F8u;
        // 0x11a8fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A900u;
label_11a900:
    // 0x11a900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a904: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x11a904u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x11a908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a90c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a910: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A910u;
    {
        const bool branch_taken_0x11a910 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A910u;
        // 0x11a914: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a910) {
            ctx->pc = 0x11A92Cu;
            goto label_11a92c;
        }
    }
    ctx->pc = 0x11A918u;
    // 0x11a918: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a91c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x11a91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x11a920: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a924: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A924u;
    {
        const bool branch_taken_0x11a924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a924) {
            ctx->pc = 0x11A938u;
            goto label_11a938;
        }
    }
    ctx->pc = 0x11A92Cu;
label_11a92c:
    // 0x11a92c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a930: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11A930u;
    {
        const bool branch_taken_0x11a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A930u;
        // 0x11a934: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a930) {
            ctx->pc = 0x11A968u;
            goto label_11a968;
        }
    }
    ctx->pc = 0x11A938u;
label_11a938:
    // 0x11a938: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a93c: 0xc046722  jal         func_119C88
    ctx->pc = 0x11A93Cu;
    SET_GPR_U32(ctx, 31, 0x11A944u);
    ctx->pc = 0x119C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C88u, 0x11A93Cu, 0x11A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A944u;
label_11a944:
    // 0x11a944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a948: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A948u;
    {
        const bool branch_taken_0x11a948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A948u;
        // 0x11a94c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a948) {
            ctx->pc = 0x11A968u;
            goto label_11a968;
        }
    }
    ctx->pc = 0x11A950u;
    // 0x11a950: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11a954: 0x8c43e3c0  lw          $v1, -0x1C40($v0)
    ctx->pc = 0x11a954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1EE3C0u));
    // 0x11a958: 0xac50e3c0  sw          $s0, -0x1C40($v0)
    ctx->pc = 0x11a958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1EE3C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EE3C0u, _value); } while (0);
    // 0x11a95c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11a960: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11a964: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11a964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a968:
    // 0x11a968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a970: 0x3e00008  jr          $ra
    ctx->pc = 0x11A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A970u;
        // 0x11a974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A978u;
label_11a978:
    // 0x11a978: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11a978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11a97c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11a980: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11a980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11a984: 0xac402168  sw          $zero, 0x2168($v0)
    ctx->pc = 0x11a984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x132168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x132168u, _value); } while (0);
    // 0x11a988: 0xac60216c  sw          $zero, 0x216C($v1)
    ctx->pc = 0x11a988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x13216Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x13216Cu, _value); } while (0);
    // 0x11a98c: 0x2484e3c8  addiu       $a0, $a0, -0x1C38
    ctx->pc = 0x11a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960072));
    // 0x11a990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a994: 0x804a151  j           func_128544
    ctx->pc = 0x11A994u;
    ctx->pc = 0x11A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A994u;
    // 0x11a998: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    sub_00128544_0x128544(rdram, ctx, runtime); return;
    ctx->pc = 0x11A99Cu;
    // 0x11a99c: 0x0  nop
    ctx->pc = 0x11a99cu;
    // NOP
label_11a9a0:
    // 0x11a9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a9a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a9ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a9b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a9b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a9bc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A9BCu;
    SET_GPR_U32(ctx, 31, 0x11A9C4u);
    ctx->pc = 0x11A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9BCu;
    // 0x11a9c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A9BCu, 0x11A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9C4u;
label_11a9c4:
    // 0x11a9c4: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11a9c8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x11a9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x11a9cc: 0x8c732168  lw          $s3, 0x2168($v1)
    ctx->pc = 0x11a9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x132168u));
    // 0x11a9d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9d4: 0xacb1216c  sw          $s1, 0x216C($a1)
    ctx->pc = 0x11a9d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x13216Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x13216Cu, _value); } while (0);
    // 0x11a9d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9dc: 0xac702168  sw          $s0, 0x2168($v1)
    ctx->pc = 0x11a9dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x132168u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x132168u, _value); } while (0);
    // 0x11a9e0: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11a9e4: 0xc04a151  jal         func_128544
    ctx->pc = 0x11A9E4u;
    SET_GPR_U32(ctx, 31, 0x11A9ECu);
    ctx->pc = 0x11A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9E4u;
    // 0x11a9e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x11A9E4u, 0x11A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9ECu;
label_11a9ec:
    // 0x11a9ec: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A9ECu;
    {
        const bool branch_taken_0x11a9ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9ECu;
        // 0x11a9f0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9ec) {
            ctx->pc = 0x11AA00u;
            goto label_11aa00;
        }
    }
    ctx->pc = 0x11A9F4u;
    // 0x11a9f4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A9F4u;
    SET_GPR_U32(ctx, 31, 0x11A9FCu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A9F4u, 0x11A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9FCu;
label_11a9fc:
    // 0x11a9fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11aa00:
    // 0x11aa00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11aa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11aa04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11aa04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11aa08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11aa08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aa0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11aa0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aa10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA14u;
        // 0x11aa18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AA1Cu;
    // 0x11aa1c: 0x0  nop
    ctx->pc = 0x11aa1cu;
    // NOP
label_11aa20:
    // 0x11aa20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11aa24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11aa28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11aa2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11aa2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aa34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11aa34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11aa3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11aa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa40: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11AA40u;
    {
        const bool branch_taken_0x11aa40 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA40u;
        // 0x11aa44: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa40) {
            ctx->pc = 0x11AA64u;
            goto label_11aa64;
        }
    }
    ctx->pc = 0x11AA48u;
    // 0x11aa48: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11aa4c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11aa50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11aa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11aa54: 0x2471e3c8  addiu       $s1, $v1, -0x1C38
    ctx->pc = 0x11aa54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960072));
    // 0x11aa58: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x11aa58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x11aa5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11AA5Cu;
    {
        const bool branch_taken_0x11aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA5Cu;
        // 0x11aa60: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa5c) {
            ctx->pc = 0x11AA74u;
            goto label_11aa74;
        }
    }
    ctx->pc = 0x11AA64u;
label_11aa64:
    // 0x11aa64: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x11aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11aa68: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11aa6c: 0x8c512168  lw          $s1, 0x2168($v0)
    ctx->pc = 0x11aa6cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x132168u));
    // 0x11aa70: 0x8c62216c  lw          $v0, 0x216C($v1)
    ctx->pc = 0x11aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x13216Cu));
label_11aa74:
    // 0x11aa74: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11aa74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11aa78: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AA78u;
    {
        const bool branch_taken_0x11aa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aa78) {
            ctx->pc = 0x11AA8Cu;
            goto label_11aa8c;
        }
    }
    ctx->pc = 0x11AA80u;
    // 0x11aa80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11aa84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11AA84u;
    {
        const bool branch_taken_0x11aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA84u;
        // 0x11aa88: 0x34420069  ori         $v0, $v0, 0x69 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa84) {
            ctx->pc = 0x11AABCu;
            goto label_11aabc;
        }
    }
    ctx->pc = 0x11AA8Cu;
label_11aa8c:
    // 0x11aa8c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11AA8Cu;
    SET_GPR_U32(ctx, 31, 0x11AA94u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11AA8Cu, 0x11AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA94u;
label_11aa94:
    // 0x11aa94: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x11aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11aa98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11aa9c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x11aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x11aaa0: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x11aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x11aaa4: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x11aaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AAA8u;
    {
        const bool branch_taken_0x11aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAA8u;
        // 0x11aaac: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaa8) {
            ctx->pc = 0x11AAB8u;
            goto label_11aab8;
        }
    }
    ctx->pc = 0x11AAB0u;
    // 0x11aab0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11AAB0u;
    SET_GPR_U32(ctx, 31, 0x11AAB8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11AAB0u, 0x11AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAB8u;
label_11aab8:
    // 0x11aab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11aab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11aabc:
    // 0x11aabc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11aabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11aac0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11aac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11aac4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11aac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aac8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11aac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aacc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aaccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x11AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAD0u;
        // 0x11aad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AAD8u;
label_11aad8:
    // 0x11aad8: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11AAD8u;
    {
        const bool branch_taken_0x11aad8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11aad8) {
            ctx->pc = 0x11AADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAD8u;
            // 0x11aadc: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AAFCu;
            goto label_11aafc;
        }
    }
    ctx->pc = 0x11AAE0u;
    // 0x11aae0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11aae4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11aae8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11aae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11aaec: 0x2465e3c8  addiu       $a1, $v1, -0x1C38
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960072));
    // 0x11aaf0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11aaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11aaf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11AAF4u;
    {
        const bool branch_taken_0x11aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF4u;
        // 0x11aaf8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaf4) {
            ctx->pc = 0x11AB08u;
            goto label_11ab08;
        }
    }
    ctx->pc = 0x11AAFCu;
label_11aafc:
    // 0x11aafc: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x11aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x11ab00: 0x8c452168  lw          $a1, 0x2168($v0)
    ctx->pc = 0x11ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8552)));
    // 0x11ab04: 0x8c62216c  lw          $v0, 0x216C($v1)
    ctx->pc = 0x11ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x13216Cu));
label_11ab08:
    // 0x11ab08: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x11ab08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ab0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AB0Cu;
    {
        const bool branch_taken_0x11ab0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB0Cu;
        // 0x11ab10: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab0c) {
            ctx->pc = 0x11AB1Cu;
            goto label_11ab1c;
        }
    }
    ctx->pc = 0x11AB14u;
    // 0x11ab14: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB14u;
        // 0x11ab18: 0x2402ff97  addiu       $v0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB1Cu;
label_11ab1c:
    // 0x11ab1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ab1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB24u;
        // 0x11ab28: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB2Cu;
    // 0x11ab2c: 0x0  nop
    ctx->pc = 0x11ab2cu;
    // NOP
    ctx->pc = 0x11ab30u;
}
