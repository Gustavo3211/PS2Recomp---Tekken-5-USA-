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

// Function: sub_0011A360
// Address: 0x11a360 - 0x11a488
void sub_0011A360_0x11a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A360_0x11a360");
#endif

    switch (ctx->pc) {
        case 0x11a390u: goto label_11a390;
        case 0x11a3a8u: goto label_11a3a8;
        case 0x11a3b8u: goto label_11a3b8;
        case 0x11a408u: goto label_11a408;
        case 0x11a464u: goto label_11a464;
        default: break;
    }

    ctx->pc = 0x11a360u;

    // 0x11a360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11a364: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a368: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a36c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11a36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a370: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a374: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11a374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a37c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11a37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a380: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11a388: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A388u;
    SET_GPR_U32(ctx, 31, 0x11A390u);
    ctx->pc = 0x11A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A388u;
    // 0x11a38c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A388u, 0x11A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A390u;
label_11a390:
    // 0x11a390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a394: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11a394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a398: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a39c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11a39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3a0: 0xc04689a  jal         func_11A268
    ctx->pc = 0x11A3A0u;
    SET_GPR_U32(ctx, 31, 0x11A3A8u);
    ctx->pc = 0x11A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3A0u;
    // 0x11a3a4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A268u, 0x11A3A0u, 0x11A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3A8u;
label_11a3a8:
    // 0x11a3a8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A3A8u;
    {
        const bool branch_taken_0x11a3a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3A8u;
        // 0x11a3ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3a8) {
            ctx->pc = 0x11A3B8u;
            goto label_11a3b8;
        }
    }
    ctx->pc = 0x11A3B0u;
    // 0x11a3b0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A3B0u;
    SET_GPR_U32(ctx, 31, 0x11A3B8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A3B0u, 0x11A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3B8u;
label_11a3b8:
    // 0x11a3b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11a3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a3c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a3c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a3c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a3c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a3c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a3cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3D4u;
        // 0x11a3d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A3DCu;
    // 0x11a3dc: 0x0  nop
    ctx->pc = 0x11a3dcu;
    // NOP
    // 0x11a3e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a3e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a3ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a3f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11a3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a3fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a400: 0xc048332  jal         func_120CC8
    ctx->pc = 0x11A400u;
    SET_GPR_U32(ctx, 31, 0x11A408u);
    ctx->pc = 0x11A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A400u;
    // 0x11a404: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x11A400u, 0x11A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A408u;
label_11a408:
    // 0x11a408: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a40c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11a40cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a410: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A410u;
    {
        const bool branch_taken_0x11a410 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a410) {
            ctx->pc = 0x11A414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A410u;
            // 0x11a414: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A418u;
            goto label_11a418;
        }
    }
    ctx->pc = 0x11A418u;
label_11a418:
    // 0x11a418: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x11A418u;
    {
        const bool branch_taken_0x11a418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A418u;
        // 0x11a41c: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a418) {
            ctx->pc = 0x11A470u;
            goto label_11a470;
        }
    }
    ctx->pc = 0x11A420u;
    // 0x11a420: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x11a420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x11a424: 0x430019  multu       $v0, $v1
    ctx->pc = 0x11a424u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a428: 0x3012  mflo        $a2
    ctx->pc = 0x11a428u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11a42c: 0x1810  mfhi        $v1
    ctx->pc = 0x11a42cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11a430: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11a430u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11a434: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11a434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11a438: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11a438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11a43c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x11a43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x11a440: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x11a440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x11a444: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x11a444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x11a448: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x11a448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x11a44c: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x11a44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x11a450: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x11a450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x11a454: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x11a454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x11a458: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x11a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11a45c: 0xc048332  jal         func_120CC8
    ctx->pc = 0x11A45Cu;
    SET_GPR_U32(ctx, 31, 0x11A464u);
    ctx->pc = 0x11A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A45Cu;
    // 0x11a460: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x11A45Cu, 0x11A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A464u;
label_11a464:
    // 0x11a464: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a468: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11a468u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a46c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_11a470:
    // 0x11a470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11a470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a474: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a478: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a47c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a480: 0x3e00008  jr          $ra
    ctx->pc = 0x11A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A480u;
        // 0x11a484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A488u;
}
