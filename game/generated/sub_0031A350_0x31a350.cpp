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

// Function: sub_0031A350
// Address: 0x31a350 - 0x31a4a8
void sub_0031A350_0x31a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A350_0x31a350");
#endif

    switch (ctx->pc) {
        case 0x31a378u: goto label_31a378;
        case 0x31a484u: goto label_31a484;
        default: break;
    }

    ctx->pc = 0x31a350u;

    // 0x31a350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31a358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a35c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31a360: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31a364: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x31A364u;
    {
        const bool branch_taken_0x31a364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a364) {
            ctx->pc = 0x31A368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A364u;
            // 0x31a368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A49Cu;
            goto label_31a49c;
        }
    }
    ctx->pc = 0x31A36Cu;
    // 0x31a36c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a370: 0xc0c823a  jal         func_3208E8
    ctx->pc = 0x31A370u;
    SET_GPR_U32(ctx, 31, 0x31A378u);
    ctx->pc = 0x31A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A370u;
    // 0x31a374: 0x24841180  addiu       $a0, $a0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3208E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3208E8u, 0x31A370u, 0x31A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A378u;
label_31a378:
    // 0x31a378: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31a37c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x31a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x31a380: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x31a380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x31a384: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x31a384u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x400414u));
    // 0x31a388: 0x2449002c  addiu       $t1, $v0, 0x2C
    ctx->pc = 0x31a388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x31a38c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x31a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x40042Cu));
    // 0x31a390: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x31a390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x31a394: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x31a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x31a398: 0x1072824  and         $a1, $t0, $a3
    ctx->pc = 0x31a398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x31a39c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x31a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x31a3a0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x31a3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x31a3a4: 0x14a70006  bne         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A3A4u;
    {
        const bool branch_taken_0x31a3a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x31A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3A4u;
        // 0x31a3a8: 0x250a0010  addiu       $t2, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3a4) {
            ctx->pc = 0x31A3C0u;
            goto label_31a3c0;
        }
    }
    ctx->pc = 0x31A3ACu;
    // 0x31a3ac: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31a3b0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31a3b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A3B4u;
    {
        const bool branch_taken_0x31a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3B4u;
        // 0x31a3b8: 0x1021025  or          $v0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3b4) {
            ctx->pc = 0x31A3D0u;
            goto label_31a3d0;
        }
    }
    ctx->pc = 0x31A3BCu;
    // 0x31a3bc: 0x0  nop
    ctx->pc = 0x31a3bcu;
    // NOP
label_31a3c0:
    // 0x31a3c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31a3c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31a3c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a3cc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x31a3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_31a3d0:
    // 0x31a3d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a3d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31a3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31a3d8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31a3dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31a3e0: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x31a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x31a3e4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31a3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31a3e8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A3E8u;
    {
        const bool branch_taken_0x31a3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31a3e8) {
            ctx->pc = 0x31A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A3E8u;
            // 0x31a3ec: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A400u;
            goto label_31a400;
        }
    }
    ctx->pc = 0x31A3F0u;
    // 0x31a3f0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31a3f4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31a3f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A3F8u;
    {
        const bool branch_taken_0x31a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3F8u;
        // 0x31a3fc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3f8) {
            ctx->pc = 0x31A40Cu;
            goto label_31a40c;
        }
    }
    ctx->pc = 0x31A400u;
label_31a400:
    // 0x31a400: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31a400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31a404: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31a404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a408: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31a40c:
    // 0x31a40c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a410: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31a410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31a414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a418: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31a418u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31a41c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x31a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x31a420: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x31a420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x31a424: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31a424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31a428: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x31a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x31a42c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31a430: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x31a430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x31a434: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x31a434u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x31a438: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x31a438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x31a43c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x31a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x31a440: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A440u;
    {
        const bool branch_taken_0x31a440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x31A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A440u;
        // 0x31a444: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a440) {
            ctx->pc = 0x31A458u;
            goto label_31a458;
        }
    }
    ctx->pc = 0x31A448u;
    // 0x31a448: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31a448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31a44c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31a450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31A450u;
    {
        const bool branch_taken_0x31a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A450u;
        // 0x31a454: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a450) {
            ctx->pc = 0x31A468u;
            goto label_31a468;
        }
    }
    ctx->pc = 0x31A458u;
label_31a458:
    // 0x31a458: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31a45c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31a460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31a464: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x31a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31a468:
    // 0x31a468: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31a46c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x31a46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31a470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a474: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x31a474u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x31a478: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31a478u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31a47c: 0xc0cd58e  jal         func_335638
    ctx->pc = 0x31A47Cu;
    SET_GPR_U32(ctx, 31, 0x31A484u);
    ctx->pc = 0x335638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335638u, 0x31A47Cu, 0x31A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A484u;
label_31a484:
    // 0x31a484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31a488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a48c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31a490: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x31a490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x31a494: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31a494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31a498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31a498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a49c:
    // 0x31a49c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31a4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4A0u;
        // 0x31a4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A4A8u;
}
