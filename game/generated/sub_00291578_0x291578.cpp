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

// Function: sub_00291578
// Address: 0x291578 - 0x2918d8
void sub_00291578_0x291578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291578_0x291578");
#endif

    switch (ctx->pc) {
        case 0x2915b0u: goto label_2915b0;
        case 0x2915bcu: goto label_2915bc;
        case 0x29165cu: goto label_29165c;
        case 0x291678u: goto label_291678;
        case 0x2916e8u: goto label_2916e8;
        case 0x291704u: goto label_291704;
        case 0x291740u: goto label_291740;
        case 0x291798u: goto label_291798;
        case 0x2917b0u: goto label_2917b0;
        default: break;
    }

    ctx->pc = 0x291578u;

    // 0x291578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x291578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29157c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291580: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291584: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x291584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x291588: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x291588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29158c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x29158cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x291590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291594: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x291598: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29159c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2915a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2915a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2915a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2915a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2915a8: 0xc086620  jal         func_219880
    ctx->pc = 0x2915A8u;
    SET_GPR_U32(ctx, 31, 0x2915B0u);
    ctx->pc = 0x2915ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2915A8u;
    // 0x2915ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x2915A8u, 0x2915B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2915B0u;
label_2915b0:
    // 0x2915b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2915b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2915b4: 0xc08661c  jal         func_219870
    ctx->pc = 0x2915B4u;
    SET_GPR_U32(ctx, 31, 0x2915BCu);
    ctx->pc = 0x2915B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2915B4u;
    // 0x2915b8: 0x8e370000  lw          $s7, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2915B4u, 0x2915BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2915BCu;
label_2915bc:
    // 0x2915bc: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x2915bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x2915c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2915c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2915c4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2915C4u;
    {
        const bool branch_taken_0x2915c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2915c4) {
            ctx->pc = 0x2915C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2915C4u;
            // 0x2915c8: 0x8ea20090  lw          $v0, 0x90($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2915D8u;
            goto label_2915d8;
        }
    }
    ctx->pc = 0x2915CCu;
    // 0x2915cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2915ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2915d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2915D0u;
    {
        const bool branch_taken_0x2915d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2915D0u;
        // 0x2915d4: 0x8c508880  lw          $s0, -0x7780($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915d0) {
            ctx->pc = 0x291604u;
            goto label_291604;
        }
    }
    ctx->pc = 0x2915D8u;
label_2915d8:
    // 0x2915d8: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x2915d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2915dc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2915dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2915e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2915e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2915e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2915e8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2915e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2915ec: 0x56030006  bnel        $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2915ECu;
    {
        const bool branch_taken_0x2915ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2915ec) {
            ctx->pc = 0x2915F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2915ECu;
            // 0x2915f0: 0x8e340004  lw          $s4, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291608u;
            goto label_291608;
        }
    }
    ctx->pc = 0x2915F4u;
    // 0x2915f4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2915f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2915f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2915f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2915fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2915fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x291600: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_291604:
    // 0x291604: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_291608:
    // 0x291608: 0x10b080  sll         $s6, $s0, 2
    ctx->pc = 0x291608u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29160c: 0x1214005d  beq         $s0, $s4, . + 4 + (0x5D << 2)
    ctx->pc = 0x29160Cu;
    {
        const bool branch_taken_0x29160c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x291610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29160Cu;
        // 0x291610: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29160c) {
            ctx->pc = 0x291784u;
            goto label_291784;
        }
    }
    ctx->pc = 0x291614u;
    // 0x291614: 0x600001a  bltz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x291614u;
    {
        const bool branch_taken_0x291614 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x291618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291614u;
        // 0x291618: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291614) {
            ctx->pc = 0x291680u;
            goto label_291680;
        }
    }
    ctx->pc = 0x29161Cu;
    // 0x29161c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x29161cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x291620: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x291620u;
    {
        const bool branch_taken_0x291620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291620u;
        // 0x291624: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291620) {
            ctx->pc = 0x29163Cu;
            goto label_29163c;
        }
    }
    ctx->pc = 0x291628u;
    // 0x291628: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x291628u;
    {
        const bool branch_taken_0x291628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291628) {
            ctx->pc = 0x29162Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291628u;
            // 0x29162c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291640u;
            goto label_291640;
        }
    }
    ctx->pc = 0x291630u;
    // 0x291630: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x291634: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x291634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x291638: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x291638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_29163c:
    // 0x29163c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x29163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_291640:
    // 0x291640: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x291640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x291644: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x291644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x291648: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x291648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29164c: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x29164cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x291650: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x291650u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x291654: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x291654u;
    SET_GPR_U32(ctx, 31, 0x29165Cu);
    ctx->pc = 0x291658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291654u;
    // 0x291658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x291654u, 0x29165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29165Cu;
label_29165c:
    // 0x29165c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x29165Cu;
    {
        const bool branch_taken_0x29165c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29165c) {
            ctx->pc = 0x291660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29165Cu;
            // 0x291660: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29169Cu;
            goto label_29169c;
        }
    }
    ctx->pc = 0x291664u;
    // 0x291664: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x291664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x291668: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x291668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29166c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29166cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291670: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x291670u;
    SET_GPR_U32(ctx, 31, 0x291678u);
    ctx->pc = 0x291674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291670u;
    // 0x291674: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x291670u, 0x291678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291678u;
label_291678:
    // 0x291678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291678u;
    {
        const bool branch_taken_0x291678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291678u;
        // 0x29167c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291678) {
            ctx->pc = 0x29169Cu;
            goto label_29169c;
        }
    }
    ctx->pc = 0x291680u;
label_291680:
    // 0x291680: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x291680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x291684: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x291684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x291688: 0x10b080  sll         $s6, $s0, 2
    ctx->pc = 0x291688u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29168c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x291690: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x291694: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x291694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x291698: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x291698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_29169c:
    // 0x29169c: 0x680001c  bltz        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x29169Cu;
    {
        const bool branch_taken_0x29169c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2916A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29169Cu;
        // 0x2916a0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29169c) {
            ctx->pc = 0x291710u;
            goto label_291710;
        }
    }
    ctx->pc = 0x2916A4u;
    // 0x2916a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2916a8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2916a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2916ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2916ACu;
    {
        const bool branch_taken_0x2916ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2916B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2916ACu;
        // 0x2916b0: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916ac) {
            ctx->pc = 0x2916C8u;
            goto label_2916c8;
        }
    }
    ctx->pc = 0x2916B4u;
    // 0x2916b4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2916B4u;
    {
        const bool branch_taken_0x2916b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2916b4) {
            ctx->pc = 0x2916B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2916B4u;
            // 0x2916b8: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2916CCu;
            goto label_2916cc;
        }
    }
    ctx->pc = 0x2916BCu;
    // 0x2916bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2916bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2916c0: 0xac440078  sw          $a0, 0x78($v0)
    ctx->pc = 0x2916c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 4));
    // 0x2916c4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2916c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2916c8:
    // 0x2916c8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2916c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2916cc:
    // 0x2916cc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2916ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2916d0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2916d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2916d4: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2916d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2916d8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2916d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2916dc: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x2916dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2916e0: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x2916E0u;
    SET_GPR_U32(ctx, 31, 0x2916E8u);
    ctx->pc = 0x2916E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916E0u;
    // 0x2916e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x2916E0u, 0x2916E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916E8u;
label_2916e8:
    // 0x2916e8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2916E8u;
    {
        const bool branch_taken_0x2916e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2916e8) {
            ctx->pc = 0x2916ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2916E8u;
            // 0x2916ec: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29172Cu;
            goto label_29172c;
        }
    }
    ctx->pc = 0x2916F0u;
    // 0x2916f0: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x2916f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2916f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2916f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2916f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2916fc: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x2916FCu;
    SET_GPR_U32(ctx, 31, 0x291704u);
    ctx->pc = 0x291700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2916FCu;
    // 0x291700: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x2916FCu, 0x291704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291704u;
label_291704:
    // 0x291704: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x291704u;
    {
        const bool branch_taken_0x291704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291704u;
        // 0x291708: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291704) {
            ctx->pc = 0x29172Cu;
            goto label_29172c;
        }
    }
    ctx->pc = 0x29170Cu;
    // 0x29170c: 0x0  nop
    ctx->pc = 0x29170cu;
    // NOP
label_291710:
    // 0x291710: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x291710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x291714: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x291714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x291718: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x291718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29171c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291720: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x291720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x291724: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x291728: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x291728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_29172c:
    // 0x29172c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29172cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291730: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x291730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291734: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x291734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x291738: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x291738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29173c: 0x0  nop
    ctx->pc = 0x29173cu;
    // NOP
label_291740:
    // 0x291740: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x291740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x291744: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x291744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x291748: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x291748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x29174c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29174Cu;
    {
        const bool branch_taken_0x29174c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29174Cu;
        // 0x291750: 0x28a40011  slti        $a0, $a1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29174c) {
            ctx->pc = 0x291760u;
            goto label_291760;
        }
    }
    ctx->pc = 0x291754u;
    // 0x291754: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x291754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x291758: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x291758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x29175c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29175cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_291760:
    // 0x291760: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x291760u;
    {
        const bool branch_taken_0x291760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x291764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291760u;
        // 0x291764: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291760) {
            ctx->pc = 0x291740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291740;
        }
    }
    ctx->pc = 0x291768u;
    // 0x291768: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x291768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29176c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x29176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x291770: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x291770u;
    {
        const bool branch_taken_0x291770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x291770) {
            ctx->pc = 0x291774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291770u;
            // 0x291774: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291788u;
            goto label_291788;
        }
    }
    ctx->pc = 0x291778u;
    // 0x291778: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x291778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29177c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x291780: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x291780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_291784:
    // 0x291784: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x291784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_291788:
    // 0x291788: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x291788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29178c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29178cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x291790: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x291790u;
    SET_GPR_U32(ctx, 31, 0x291798u);
    ctx->pc = 0x291794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291790u;
    // 0x291794: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x291790u, 0x291798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291798u;
label_291798:
    // 0x291798: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x291798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x29179c: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x29179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2917a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2917A0u;
    {
        const bool branch_taken_0x2917a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917A0u;
        // 0x2917a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917a0) {
            ctx->pc = 0x2917B0u;
            goto label_2917b0;
        }
    }
    ctx->pc = 0x2917A8u;
    // 0x2917a8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2917A8u;
    SET_GPR_U32(ctx, 31, 0x2917B0u);
    ctx->pc = 0x2917ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2917A8u;
    // 0x2917ac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2917A8u, 0x2917B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2917B0u;
label_2917b0:
    // 0x2917b0: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x2917b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x2917b4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2917b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2917b8: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2917b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2917bc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2917BCu;
    {
        const bool branch_taken_0x2917bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917BCu;
        // 0x2917c0: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917bc) {
            ctx->pc = 0x2917D0u;
            goto label_2917d0;
        }
    }
    ctx->pc = 0x2917C4u;
    // 0x2917c4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2917c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2917c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2917C8u;
    {
        const bool branch_taken_0x2917c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917C8u;
        // 0x2917cc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917c8) {
            ctx->pc = 0x2917DCu;
            goto label_2917dc;
        }
    }
    ctx->pc = 0x2917D0u;
label_2917d0:
    // 0x2917d0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2917d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2917d4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2917d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2917d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2917d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2917dc:
    // 0x2917dc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2917dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2917e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2917E0u;
    {
        const bool branch_taken_0x2917e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917E0u;
        // 0x2917e4: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917e0) {
            ctx->pc = 0x2917F8u;
            goto label_2917f8;
        }
    }
    ctx->pc = 0x2917E8u;
    // 0x2917e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2917e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2917ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2917ECu;
    {
        const bool branch_taken_0x2917ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2917F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2917ECu;
        // 0x2917f0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917ec) {
            ctx->pc = 0x291804u;
            goto label_291804;
        }
    }
    ctx->pc = 0x2917F4u;
    // 0x2917f4: 0x0  nop
    ctx->pc = 0x2917f4u;
    // NOP
label_2917f8:
    // 0x2917f8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2917f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2917fc: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2917fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x291800: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_291804:
    // 0x291804: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x291808: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x291808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x29180c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29180cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291810: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291810u;
    {
        const bool branch_taken_0x291810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291810u;
        // 0x291814: 0x171880  sll         $v1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291810) {
            ctx->pc = 0x291830u;
            goto label_291830;
        }
    }
    ctx->pc = 0x291818u;
    // 0x291818: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x291818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x29181c: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x29181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x291820: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x291820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x291824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291824u;
    {
        const bool branch_taken_0x291824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291824u;
        // 0x291828: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291824) {
            ctx->pc = 0x291834u;
            goto label_291834;
        }
    }
    ctx->pc = 0x29182Cu;
    // 0x29182c: 0x0  nop
    ctx->pc = 0x29182cu;
    // NOP
label_291830:
    // 0x291830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291834:
    // 0x291834: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x291834u;
    {
        const bool branch_taken_0x291834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x291838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291834u;
        // 0x291838: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291834) {
            ctx->pc = 0x291848u;
            goto label_291848;
        }
    }
    ctx->pc = 0x29183Cu;
    // 0x29183c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x291840u;
    {
        const bool branch_taken_0x291840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291840u;
        // 0x291844: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291840) {
            ctx->pc = 0x291854u;
            goto label_291854;
        }
    }
    ctx->pc = 0x291848u;
label_291848:
    // 0x291848: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29184c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x291850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x291850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_291854:
    // 0x291854: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x291854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x291858: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x291858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x29185c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291860: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291860u;
    {
        const bool branch_taken_0x291860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291860u;
        // 0x291864: 0x171880  sll         $v1, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291860) {
            ctx->pc = 0x291880u;
            goto label_291880;
        }
    }
    ctx->pc = 0x291868u;
    // 0x291868: 0x7c1021  addu        $v0, $v1, $gp
    ctx->pc = 0x291868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x29186c: 0x8c42a858  lw          $v0, -0x57A8($v0)
    ctx->pc = 0x29186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944856)));
    // 0x291870: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x291870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x291874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x291874u;
    {
        const bool branch_taken_0x291874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291874u;
        // 0x291878: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291874) {
            ctx->pc = 0x291884u;
            goto label_291884;
        }
    }
    ctx->pc = 0x29187Cu;
    // 0x29187c: 0x0  nop
    ctx->pc = 0x29187cu;
    // NOP
label_291880:
    // 0x291880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291884:
    // 0x291884: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x291884u;
    {
        const bool branch_taken_0x291884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x291888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291884u;
        // 0x291888: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291884) {
            ctx->pc = 0x291898u;
            goto label_291898;
        }
    }
    ctx->pc = 0x29188Cu;
    // 0x29188c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x291890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x291890u;
    {
        const bool branch_taken_0x291890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291890u;
        // 0x291894: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291890) {
            ctx->pc = 0x2918A4u;
            goto label_2918a4;
        }
    }
    ctx->pc = 0x291898u;
label_291898:
    // 0x291898: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29189c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x29189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2918a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2918a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2918a4:
    // 0x2918a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2918a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2918a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2918a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2918ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2918acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2918b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2918b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2918b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2918b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2918b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2918b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2918bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2918bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2918c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2918c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2918c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2918c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2918c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2918c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2918cc: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x2918ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2918d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2918D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2918D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918D0u;
        // 0x2918d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2918D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2918D8u;
}
