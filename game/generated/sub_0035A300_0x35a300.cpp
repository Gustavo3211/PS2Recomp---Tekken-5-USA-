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

// Function: sub_0035A300
// Address: 0x35a300 - 0x35a770
void sub_0035A300_0x35a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A300_0x35a300");
#endif

    switch (ctx->pc) {
        case 0x35a330u: goto label_35a330;
        case 0x35a388u: goto label_35a388;
        case 0x35a3e0u: goto label_35a3e0;
        case 0x35a418u: goto label_35a418;
        case 0x35a438u: goto label_35a438;
        case 0x35a478u: goto label_35a478;
        case 0x35a4d0u: goto label_35a4d0;
        case 0x35a4dcu: goto label_35a4dc;
        case 0x35a4e8u: goto label_35a4e8;
        case 0x35a550u: goto label_35a550;
        case 0x35a5a8u: goto label_35a5a8;
        case 0x35a600u: goto label_35a600;
        case 0x35a658u: goto label_35a658;
        case 0x35a6b0u: goto label_35a6b0;
        case 0x35a700u: goto label_35a700;
        case 0x35a748u: goto label_35a748;
        default: break;
    }

    ctx->pc = 0x35a300u;

    // 0x35a300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35a304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a308: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x35a308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35a30c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35a30cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x35a310: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x35a310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a31c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x35A31Cu;
    {
        const bool branch_taken_0x35a31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A31Cu;
        // 0x35a320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a31c) {
            ctx->pc = 0x35A328u;
            goto label_35a328;
        }
    }
    ctx->pc = 0x35A324u;
    // 0x35a324: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35a324u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_35a328:
    // 0x35a328: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A328u;
    SET_GPR_U32(ctx, 31, 0x35A330u);
    ctx->pc = 0x35A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A328u;
    // 0x35a32c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A328u, 0x35A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A330u;
label_35a330:
    // 0x35a330: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a334: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a338: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a33c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a344: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a348: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x35a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a34c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a354: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a358: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a35c: 0x80d94c8  j           func_365320
    ctx->pc = 0x35A35Cu;
    ctx->pc = 0x35A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A35Cu;
    // 0x35a360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365320u, 0x35A35Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A364u;
    // 0x35a364: 0x0  nop
    ctx->pc = 0x35a364u;
    // NOP
    // 0x35a368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a378: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a37c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a380: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A380u;
    SET_GPR_U32(ctx, 31, 0x35A388u);
    ctx->pc = 0x35A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A380u;
    // 0x35a384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A380u, 0x35A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A388u;
label_35a388:
    // 0x35a388: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a38c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a390: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a394: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a39c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a3a4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a3a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a3a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a3b0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a3b4: 0x80d94cc  j           func_365330
    ctx->pc = 0x35A3B4u;
    ctx->pc = 0x35A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3B4u;
    // 0x35a3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365330u, 0x35A3B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A3BCu;
    // 0x35a3bc: 0x0  nop
    ctx->pc = 0x35a3bcu;
    // NOP
    // 0x35a3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a3cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a3d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a3d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a3d8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A3D8u;
    SET_GPR_U32(ctx, 31, 0x35A3E0u);
    ctx->pc = 0x35A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A3D8u;
    // 0x35a3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A3D8u, 0x35A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A3E0u;
label_35a3e0:
    // 0x35a3e0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a3e4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a3e8: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a3ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a3f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a3f4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a3fc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a408: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a40c: 0x80d9552  j           func_365548
    ctx->pc = 0x35A40Cu;
    ctx->pc = 0x35A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A40Cu;
    // 0x35a410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365548u;
    sub_00365548_0x365548(rdram, ctx, runtime); return;
    ctx->pc = 0x35A414u;
    // 0x35a414: 0x0  nop
    ctx->pc = 0x35a414u;
    // NOP
label_35a418:
    // 0x35a418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a41c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a420: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a42c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a430: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A430u;
    SET_GPR_U32(ctx, 31, 0x35A438u);
    ctx->pc = 0x35A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A430u;
    // 0x35a434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A430u, 0x35A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A438u;
label_35a438:
    // 0x35a438: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a43c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a444: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35a444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a450: 0x80d9b54  j           func_366D50
    ctx->pc = 0x35A450u;
    ctx->pc = 0x35A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A450u;
    // 0x35a454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366D50u, 0x35A450u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A458u;
    // 0x35a458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a46c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a470: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A470u;
    SET_GPR_U32(ctx, 31, 0x35A478u);
    ctx->pc = 0x35A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A470u;
    // 0x35a474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A470u, 0x35A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A478u;
label_35a478:
    // 0x35a478: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a47c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a480: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a484: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a48c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a494: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a4a0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a4a4: 0x80d946c  j           func_3651B0
    ctx->pc = 0x35A4A4u;
    ctx->pc = 0x35A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4A4u;
    // 0x35a4a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3651B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3651B0u, 0x35A4A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A4ACu;
    // 0x35a4ac: 0x0  nop
    ctx->pc = 0x35a4acu;
    // NOP
    // 0x35a4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a4b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35a4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x35a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a4c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a4c8: 0xc0d6724  jal         func_359C90
    ctx->pc = 0x35A4C8u;
    SET_GPR_U32(ctx, 31, 0x35A4D0u);
    ctx->pc = 0x35A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4C8u;
    // 0x35a4cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C90u, 0x35A4C8u, 0x35A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4D0u;
label_35a4d0:
    // 0x35a4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4d4: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A4D4u;
    SET_GPR_U32(ctx, 31, 0x35A4DCu);
    ctx->pc = 0x35A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4D4u;
    // 0x35a4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A4D4u, 0x35A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4DCu;
label_35a4dc:
    // 0x35a4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4e0: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A4E0u;
    SET_GPR_U32(ctx, 31, 0x35A4E8u);
    ctx->pc = 0x35A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4E0u;
    // 0x35a4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A4E0u, 0x35A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4E8u;
label_35a4e8:
    // 0x35a4e8: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a4ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a4f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35a4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a500: 0x80d9c32  j           func_3670C8
    ctx->pc = 0x35A500u;
    ctx->pc = 0x35A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A500u;
    // 0x35a504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3670C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3670C8u, 0x35A500u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A508u;
    // 0x35a508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a50c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35a50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a514: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35a514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a518: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a51c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35a51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a524: 0x80d9c46  j           func_367118
    ctx->pc = 0x35A524u;
    ctx->pc = 0x35A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A524u;
    // 0x35a528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367118u, 0x35A524u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A52Cu;
    // 0x35a52c: 0x0  nop
    ctx->pc = 0x35a52cu;
    // NOP
    // 0x35a530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a53c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a540: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a548: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A548u;
    SET_GPR_U32(ctx, 31, 0x35A550u);
    ctx->pc = 0x35A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A548u;
    // 0x35a54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A548u, 0x35A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A550u;
label_35a550:
    // 0x35a550: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a554: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a558: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a55c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a564: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a56c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a578: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a57c: 0x80d9470  j           func_3651C0
    ctx->pc = 0x35A57Cu;
    ctx->pc = 0x35A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A57Cu;
    // 0x35a580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3651C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3651C0u, 0x35A57Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A584u;
    // 0x35a584: 0x0  nop
    ctx->pc = 0x35a584u;
    // NOP
    // 0x35a588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a598: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a59c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a5a0: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A5A0u;
    SET_GPR_U32(ctx, 31, 0x35A5A8u);
    ctx->pc = 0x35A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5A0u;
    // 0x35a5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A5A0u, 0x35A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5A8u;
label_35a5a8:
    // 0x35a5a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a5ac: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a5b0: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a5b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a5b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5bc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a5c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a5c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a5c4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a5c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a5cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a5d0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a5d4: 0x80d9474  j           func_3651D0
    ctx->pc = 0x35A5D4u;
    ctx->pc = 0x35A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5D4u;
    // 0x35a5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3651D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3651D0u, 0x35A5D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A5DCu;
    // 0x35a5dc: 0x0  nop
    ctx->pc = 0x35a5dcu;
    // NOP
    // 0x35a5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a5f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a5f8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A5F8u;
    SET_GPR_U32(ctx, 31, 0x35A600u);
    ctx->pc = 0x35A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5F8u;
    // 0x35a5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A5F8u, 0x35A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A600u;
label_35a600:
    // 0x35a600: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a604: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a608: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a60c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a614: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a61c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a628: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a62c: 0x80d9488  j           func_365220
    ctx->pc = 0x35A62Cu;
    ctx->pc = 0x35A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A62Cu;
    // 0x35a630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365220u, 0x35A62Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A634u;
    // 0x35a634: 0x0  nop
    ctx->pc = 0x35a634u;
    // NOP
    // 0x35a638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a64c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x35a64cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x35a650: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A650u;
    SET_GPR_U32(ctx, 31, 0x35A658u);
    ctx->pc = 0x35A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A650u;
    // 0x35a654: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A650u, 0x35A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A658u;
label_35a658:
    // 0x35a658: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a65c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a660: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a664: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a668: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a668u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a66c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a674: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a678: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a67c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x35a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35a680: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a684: 0x80d949c  j           func_365270
    ctx->pc = 0x35A684u;
    ctx->pc = 0x35A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A684u;
    // 0x35a688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365270u, 0x35A684u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A68Cu;
    // 0x35a68c: 0x0  nop
    ctx->pc = 0x35a68cu;
    // NOP
    // 0x35a690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a69c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a6a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a6a8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A6A8u;
    SET_GPR_U32(ctx, 31, 0x35A6B0u);
    ctx->pc = 0x35A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A6A8u;
    // 0x35a6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A6A8u, 0x35A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A6B0u;
label_35a6b0:
    // 0x35a6b0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a6b4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a6b8: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a6bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35a6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6c4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a6cc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a6d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a6d8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a6dc: 0x80d95e2  j           func_365788
    ctx->pc = 0x35A6DCu;
    ctx->pc = 0x35A6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A6DCu;
    // 0x35a6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365788u, 0x35A6DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A6E4u;
    // 0x35a6e4: 0x0  nop
    ctx->pc = 0x35a6e4u;
    // NOP
    // 0x35a6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a6f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a6f8: 0xc0d674c  jal         func_359D30
    ctx->pc = 0x35A6F8u;
    SET_GPR_U32(ctx, 31, 0x35A700u);
    ctx->pc = 0x35A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A6F8u;
    // 0x35a6fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D30u, 0x35A6F8u, 0x35A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A700u;
label_35a700:
    // 0x35a700: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x35a700u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a704: 0x8f82c7ac  lw          $v0, -0x3854($gp)
    ctx->pc = 0x35a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a708: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a70c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35a70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a710: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35a710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35a714: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a71c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x35a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35a720: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x35a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35a724: 0x80d95ec  j           func_3657B0
    ctx->pc = 0x35A724u;
    ctx->pc = 0x35A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A724u;
    // 0x35a728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3657B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3657B0u, 0x35A724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A72Cu;
    // 0x35a72c: 0x0  nop
    ctx->pc = 0x35a72cu;
    // NOP
    // 0x35a730: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35a730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a734: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x35a734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x35a738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a740: 0xc0d9bfe  jal         func_366FF8
    ctx->pc = 0x35A740u;
    SET_GPR_U32(ctx, 31, 0x35A748u);
    ctx->pc = 0x366FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366FF8u, 0x35A740u, 0x35A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A748u;
label_35a748:
    // 0x35a748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a74c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a750: 0x3e00008  jr          $ra
    ctx->pc = 0x35A750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A750u;
        // 0x35a754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A758u;
    // 0x35a758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a75c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a768: 0x80d67ba  j           func_359EE8
    ctx->pc = 0x35A768u;
    ctx->pc = 0x35A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A768u;
    // 0x35a76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359EE8u, 0x35A768u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35A770u;
}
