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

// Function: sub_00292700
// Address: 0x292700 - 0x292800
void sub_00292700_0x292700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292700_0x292700");
#endif

    switch (ctx->pc) {
        case 0x292750u: goto label_292750;
        case 0x29276cu: goto label_29276c;
        case 0x292774u: goto label_292774;
        case 0x2927a4u: goto label_2927a4;
        case 0x2927c0u: goto label_2927c0;
        default: break;
    }

    ctx->pc = 0x292700u;

    // 0x292700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292704: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x292704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x292708: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x292708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29270c: 0x2453b478  addiu       $s3, $v0, -0x4B88
    ctx->pc = 0x29270cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947960));
    // 0x292710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x292714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x292718: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x292718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x29271c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x292720: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292724: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x292724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x292728: 0x24140036  addiu       $s4, $zero, 0x36
    ctx->pc = 0x292728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x29272c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x292730: 0x24150037  addiu       $s5, $zero, 0x37
    ctx->pc = 0x292730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x292734: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x292734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x292738: 0x2416002e  addiu       $s6, $zero, 0x2E
    ctx->pc = 0x292738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x29273c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x292740: 0x2417002f  addiu       $s7, $zero, 0x2F
    ctx->pc = 0x292740u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x292744: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x292744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x292748: 0x267e0001  addiu       $fp, $s3, 0x1
    ctx->pc = 0x292748u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29274c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x29274cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_292750:
    // 0x292750: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x292754: 0x246583c0  addiu       $a1, $v1, -0x7C40
    ctx->pc = 0x292754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x292758: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x292758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29275c: 0x246388d0  addiu       $v1, $v1, -0x7730
    ctx->pc = 0x29275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936784));
    // 0x292760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292764: 0xc0853bc  jal         func_214EF0
    ctx->pc = 0x292764u;
    SET_GPR_U32(ctx, 31, 0x29276Cu);
    ctx->pc = 0x292768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292764u;
    // 0x292768: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214EF0u, 0x292764u, 0x29276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29276Cu;
label_29276c:
    // 0x29276c: 0xc086408  jal         func_219020
    ctx->pc = 0x29276Cu;
    SET_GPR_U32(ctx, 31, 0x292774u);
    ctx->pc = 0x292770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29276Cu;
    // 0x292770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x29276Cu, 0x292774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292774u;
label_292774:
    // 0x292774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292778: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x292778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29277c: 0x2b2200b  movn        $a0, $s5, $s2
    ctx->pc = 0x29277cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
    // 0x292780: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x292780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292784: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x292784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x292788: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x292788u;
    {
        const bool branch_taken_0x292788 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292788u;
        // 0x29278c: 0x5e1021  addu        $v0, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292788) {
            ctx->pc = 0x292798u;
            goto label_292798;
        }
    }
    ctx->pc = 0x292790u;
    // 0x292790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x292790u;
    {
        const bool branch_taken_0x292790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292790u;
        // 0x292794: 0x80710000  lb          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292790) {
            ctx->pc = 0x29279Cu;
            goto label_29279c;
        }
    }
    ctx->pc = 0x292798u;
label_292798:
    // 0x292798: 0x80510000  lb          $s1, 0x0($v0)
    ctx->pc = 0x292798u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29279c:
    // 0x29279c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29279Cu;
    SET_GPR_U32(ctx, 31, 0x2927A4u);
    ctx->pc = 0x2927A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29279Cu;
    // 0x2927a0: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29279Cu, 0x2927A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927A4u;
label_2927a4:
    // 0x2927a4: 0x2f2800b  movn        $s0, $s7, $s2
    ctx->pc = 0x2927a4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
    // 0x2927a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2927ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2927acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2927b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2927b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927b8: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2927B8u;
    SET_GPR_U32(ctx, 31, 0x2927C0u);
    ctx->pc = 0x2927BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927B8u;
    // 0x2927bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2927B8u, 0x2927C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927C0u;
label_2927c0:
    // 0x2927c0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2927c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2927c4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2927C4u;
    {
        const bool branch_taken_0x2927c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2927C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927C4u;
        // 0x2927c8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2927c4) {
            ctx->pc = 0x292750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292750;
        }
    }
    ctx->pc = 0x2927CCu;
    // 0x2927cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2927ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2927d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2927d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2927d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2927d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2927d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2927d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2927dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2927dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2927e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2927e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2927e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2927e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2927e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2927e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2927ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2927ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2927f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2927f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2927f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2927F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2927F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927F4u;
        // 0x2927f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2927F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2927FCu;
    // 0x2927fc: 0x0  nop
    ctx->pc = 0x2927fcu;
    // NOP
    ctx->pc = 0x292800u;
}
