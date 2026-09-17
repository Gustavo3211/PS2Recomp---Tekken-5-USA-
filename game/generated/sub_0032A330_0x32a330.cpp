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

// Function: sub_0032A330
// Address: 0x32a330 - 0x32a460
void sub_0032A330_0x32a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A330_0x32a330");
#endif

    switch (ctx->pc) {
        case 0x32a330u: goto label_32a330;
        case 0x32a334u: goto label_32a334;
        case 0x32a338u: goto label_32a338;
        case 0x32a33cu: goto label_32a33c;
        case 0x32a340u: goto label_32a340;
        case 0x32a344u: goto label_32a344;
        case 0x32a348u: goto label_32a348;
        case 0x32a34cu: goto label_32a34c;
        case 0x32a350u: goto label_32a350;
        case 0x32a354u: goto label_32a354;
        case 0x32a358u: goto label_32a358;
        case 0x32a35cu: goto label_32a35c;
        case 0x32a360u: goto label_32a360;
        case 0x32a364u: goto label_32a364;
        case 0x32a368u: goto label_32a368;
        case 0x32a36cu: goto label_32a36c;
        case 0x32a370u: goto label_32a370;
        case 0x32a374u: goto label_32a374;
        case 0x32a378u: goto label_32a378;
        case 0x32a37cu: goto label_32a37c;
        case 0x32a380u: goto label_32a380;
        case 0x32a384u: goto label_32a384;
        case 0x32a388u: goto label_32a388;
        case 0x32a38cu: goto label_32a38c;
        case 0x32a390u: goto label_32a390;
        case 0x32a394u: goto label_32a394;
        case 0x32a398u: goto label_32a398;
        case 0x32a39cu: goto label_32a39c;
        case 0x32a3a0u: goto label_32a3a0;
        case 0x32a3a4u: goto label_32a3a4;
        case 0x32a3a8u: goto label_32a3a8;
        case 0x32a3acu: goto label_32a3ac;
        case 0x32a3b0u: goto label_32a3b0;
        case 0x32a3b4u: goto label_32a3b4;
        case 0x32a3b8u: goto label_32a3b8;
        case 0x32a3bcu: goto label_32a3bc;
        case 0x32a3c0u: goto label_32a3c0;
        case 0x32a3c4u: goto label_32a3c4;
        case 0x32a3c8u: goto label_32a3c8;
        case 0x32a3ccu: goto label_32a3cc;
        case 0x32a3d0u: goto label_32a3d0;
        case 0x32a3d4u: goto label_32a3d4;
        case 0x32a3d8u: goto label_32a3d8;
        case 0x32a3dcu: goto label_32a3dc;
        case 0x32a3e0u: goto label_32a3e0;
        case 0x32a3e4u: goto label_32a3e4;
        case 0x32a3e8u: goto label_32a3e8;
        case 0x32a3ecu: goto label_32a3ec;
        case 0x32a3f0u: goto label_32a3f0;
        case 0x32a3f4u: goto label_32a3f4;
        case 0x32a3f8u: goto label_32a3f8;
        case 0x32a3fcu: goto label_32a3fc;
        case 0x32a400u: goto label_32a400;
        case 0x32a404u: goto label_32a404;
        case 0x32a408u: goto label_32a408;
        case 0x32a40cu: goto label_32a40c;
        case 0x32a410u: goto label_32a410;
        case 0x32a414u: goto label_32a414;
        case 0x32a418u: goto label_32a418;
        case 0x32a41cu: goto label_32a41c;
        case 0x32a420u: goto label_32a420;
        case 0x32a424u: goto label_32a424;
        case 0x32a428u: goto label_32a428;
        case 0x32a42cu: goto label_32a42c;
        case 0x32a430u: goto label_32a430;
        case 0x32a434u: goto label_32a434;
        case 0x32a438u: goto label_32a438;
        case 0x32a43cu: goto label_32a43c;
        case 0x32a440u: goto label_32a440;
        case 0x32a444u: goto label_32a444;
        case 0x32a448u: goto label_32a448;
        case 0x32a44cu: goto label_32a44c;
        case 0x32a450u: goto label_32a450;
        case 0x32a454u: goto label_32a454;
        case 0x32a458u: goto label_32a458;
        case 0x32a45cu: goto label_32a45c;
        default: break;
    }

    ctx->pc = 0x32a330u;

label_32a330:
    // 0x32a330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32a334:
    // 0x32a334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32a338:
    // 0x32a338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32a33c:
    // 0x32a33c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32a340:
    // 0x32a340: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32a340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32a344:
    // 0x32a344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32a348:
    // 0x32a348: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_32a34c:
    // 0x32a34c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x32a34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32a350:
    // 0x32a350: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x32a350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32a354:
    // 0x32a354: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x32a354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32a358:
    // 0x32a358: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_32a35c:
    if (ctx->pc == 0x32A35Cu) {
        ctx->pc = 0x32A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A358u;
        // 0x32a35c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A360u;
        goto label_32a360;
    }
    ctx->pc = 0x32A358u;
    {
        const bool branch_taken_0x32a358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a358) {
            ctx->pc = 0x32A35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A358u;
            // 0x32a35c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A414u;
            goto label_32a414;
        }
    }
    ctx->pc = 0x32A360u;
label_32a360:
    // 0x32a360: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x32a360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_32a364:
    // 0x32a364: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a368:
    // 0x32a368: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32a368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32a36c:
    // 0x32a36c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a370:
    // 0x32a370: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a374:
    // 0x32a374: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x32a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_32a378:
    // 0x32a378: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a37c:
    // 0x32a37c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a380:
    // 0x32a380: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x32a380u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_32a384:
    // 0x32a384: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a388:
    // 0x32a388: 0x60f809  jalr        $v1
label_32a38c:
    if (ctx->pc == 0x32A38Cu) {
        ctx->pc = 0x32A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A388u;
        // 0x32a38c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A390u;
        goto label_32a390;
    }
    ctx->pc = 0x32A388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A390u);
        ctx->pc = 0x32A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A388u;
        // 0x32a38c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A388u, 0x32A390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A390u;
label_32a390:
    // 0x32a390: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a394:
    // 0x32a394: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a398:
    // 0x32a398: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a398u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a39c:
    // 0x32a39c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x32a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_32a3a0:
    // 0x32a3a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a3a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a3a4:
    // 0x32a3a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a3a8:
    // 0x32a3a8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x32a3a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_32a3ac:
    // 0x32a3ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a3b0:
    // 0x32a3b0: 0x60f809  jalr        $v1
label_32a3b4:
    if (ctx->pc == 0x32A3B4u) {
        ctx->pc = 0x32A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B0u;
        // 0x32a3b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3B8u;
        goto label_32a3b8;
    }
    ctx->pc = 0x32A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A3B8u);
        ctx->pc = 0x32A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B0u;
        // 0x32a3b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A3B0u, 0x32A3B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A3B8u;
label_32a3b8:
    // 0x32a3b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a3bc:
    // 0x32a3bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a3c0:
    // 0x32a3c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a3c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a3c4:
    // 0x32a3c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x32a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_32a3c8:
    // 0x32a3c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a3c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a3cc:
    // 0x32a3cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a3d0:
    // 0x32a3d0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x32a3d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_32a3d4:
    // 0x32a3d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a3d8:
    // 0x32a3d8: 0x60f809  jalr        $v1
label_32a3dc:
    if (ctx->pc == 0x32A3DCu) {
        ctx->pc = 0x32A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3D8u;
        // 0x32a3dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A3E0u;
        goto label_32a3e0;
    }
    ctx->pc = 0x32A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A3E0u);
        ctx->pc = 0x32A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3D8u;
        // 0x32a3dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A3D8u, 0x32A3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A3E0u;
label_32a3e0:
    // 0x32a3e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_32a3e4:
    // 0x32a3e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32a3e8:
    // 0x32a3e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32a3e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_32a3ec:
    // 0x32a3ec: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x32a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_32a3f0:
    // 0x32a3f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x32a3f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_32a3f4:
    // 0x32a3f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x32a3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_32a3f8:
    // 0x32a3f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x32a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_32a3fc:
    // 0x32a3fc: 0x60f809  jalr        $v1
label_32a400:
    if (ctx->pc == 0x32A400u) {
        ctx->pc = 0x32A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3FCu;
        // 0x32a400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A404u;
        goto label_32a404;
    }
    ctx->pc = 0x32A3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32A404u);
        ctx->pc = 0x32A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3FCu;
        // 0x32a400: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A3FCu, 0x32A404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32A404u;
label_32a404:
    // 0x32a404: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x32a404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32a408:
    // 0x32a408: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_32a40c:
    if (ctx->pc == 0x32A40Cu) {
        ctx->pc = 0x32A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A408u;
        // 0x32a40c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A410u;
        goto label_32a410;
    }
    ctx->pc = 0x32A408u;
    {
        const bool branch_taken_0x32a408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a408) {
            ctx->pc = 0x32A40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A408u;
            // 0x32a40c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a368;
        }
    }
    ctx->pc = 0x32A410u;
label_32a410:
    // 0x32a410: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x32a410u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32a414:
    // 0x32a414: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x32a414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_32a418:
    // 0x32a418: 0xc0c8b4c  jal         func_322D30
label_32a41c:
    if (ctx->pc == 0x32A41Cu) {
        ctx->pc = 0x32A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A418u;
        // 0x32a41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A420u;
        goto label_32a420;
    }
    ctx->pc = 0x32A418u;
    SET_GPR_U32(ctx, 31, 0x32A420u);
    ctx->pc = 0x32A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A418u;
    // 0x32a41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D30u, 0x32A418u, 0x32A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A420u;
label_32a420:
    // 0x32a420: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x32a420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_32a424:
    // 0x32a424: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x32a424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32a428:
    // 0x32a428: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32a42c:
    // 0x32a42c: 0x34a20031  ori         $v0, $a1, 0x31
    ctx->pc = 0x32a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49);
label_32a430:
    // 0x32a430: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_32a434:
    if (ctx->pc == 0x32A434u) {
        ctx->pc = 0x32A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A430u;
        // 0x32a434: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A438u;
        goto label_32a438;
    }
    ctx->pc = 0x32A430u;
    {
        const bool branch_taken_0x32a430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A430u;
        // 0x32a434: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a430) {
            ctx->pc = 0x32A440u;
            goto label_32a440;
        }
    }
    ctx->pc = 0x32A438u;
label_32a438:
    // 0x32a438: 0x34a20035  ori         $v0, $a1, 0x35
    ctx->pc = 0x32a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53);
label_32a43c:
    // 0x32a43c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x32a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_32a440:
    // 0x32a440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32a444:
    // 0x32a444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32a448:
    // 0x32a448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32a44c:
    // 0x32a44c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32a450:
    // 0x32a450: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32a450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32a454:
    // 0x32a454: 0x3e00008  jr          $ra
label_32a458:
    if (ctx->pc == 0x32A458u) {
        ctx->pc = 0x32A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A454u;
        // 0x32a458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32A45Cu;
        goto label_32a45c;
    }
    ctx->pc = 0x32A454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A454u;
        // 0x32a458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A45Cu;
label_32a45c:
    // 0x32a45c: 0x0  nop
    ctx->pc = 0x32a45cu;
    // NOP
    ctx->pc = 0x32a460u;
}
