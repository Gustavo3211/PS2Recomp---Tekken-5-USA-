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

// Function: sub_003382C0
// Address: 0x3382c0 - 0x338458
void sub_003382C0_0x3382c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003382C0_0x3382c0");
#endif

    switch (ctx->pc) {
        case 0x3382e8u: goto label_3382e8;
        case 0x338344u: goto label_338344;
        case 0x3383c4u: goto label_3383c4;
        case 0x3383f8u: goto label_3383f8;
        case 0x338408u: goto label_338408;
        case 0x338448u: goto label_338448;
        default: break;
    }

    ctx->pc = 0x3382c0u;

    // 0x3382c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3382c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3382c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3382c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3382c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3382c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3382cc: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x3382ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x3382d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3382d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3382d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3382d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3382d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3382d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3382dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3382dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3382e0: 0xc048332  jal         func_120CC8
    ctx->pc = 0x3382E0u;
    SET_GPR_U32(ctx, 31, 0x3382E8u);
    ctx->pc = 0x3382E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3382E0u;
    // 0x3382e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x3382E0u, 0x3382E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382E8u;
label_3382e8:
    // 0x3382e8: 0x3c0308ca  lui         $v1, 0x8CA
    ctx->pc = 0x3382e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
    // 0x3382ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3382ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3382f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3382f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3382f4: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x3382f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x3382f8: 0x430019  multu       $v0, $v1
    ctx->pc = 0x3382f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3382fc: 0x2012  mflo        $a0
    ctx->pc = 0x3382fcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x338300: 0x1810  mfhi        $v1
    ctx->pc = 0x338300u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x338304: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x338304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x338308: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x338308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33830c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x33830cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x338310: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x338310u;
    {
        const bool branch_taken_0x338310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338310u;
        // 0x338314: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338310) {
            ctx->pc = 0x33831Cu;
            goto label_33831c;
        }
    }
    ctx->pc = 0x338318u;
    // 0x338318: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x338318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33831c:
    // 0x33831c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x33831Cu;
    {
        const bool branch_taken_0x33831c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x338320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33831Cu;
        // 0x338320: 0x223182f  dsubu       $v1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33831c) {
            ctx->pc = 0x338350u;
            goto label_338350;
        }
    }
    ctx->pc = 0x338324u;
    // 0x338324: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x338324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x338328: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x338328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x33832c: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x33832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x338330: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x338330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x338334: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x338334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x338338: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x338338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x33833c: 0xc048332  jal         func_120CC8
    ctx->pc = 0x33833Cu;
    SET_GPR_U32(ctx, 31, 0x338344u);
    ctx->pc = 0x338340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33833Cu;
    // 0x338340: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x33833Cu, 0x338344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338344u;
label_338344:
    // 0x338344: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338348: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x338348u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x33834c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33834cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_338350:
    // 0x338350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x338358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33835c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338360: 0x3e00008  jr          $ra
    ctx->pc = 0x338360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338360u;
        // 0x338364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338368u;
    // 0x338368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33836c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33836cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338370: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x338370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x338374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338378: 0x620019  multu       $v1, $v0
    ctx->pc = 0x338378u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33837c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33837cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338380: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x338380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x338384: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x338384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x338388: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x338388u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33838c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338390: 0x3012  mflo        $a2
    ctx->pc = 0x338390u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x338394: 0x2010  mfhi        $a0
    ctx->pc = 0x338394u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x338398: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x338398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33839c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33839cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3383a0: 0x70001812  mflo1       $v1
    ctx->pc = 0x3383a0u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x3383a4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3383a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3383a8: 0x70008010  mfhi1       $s0
    ctx->pc = 0x3383a8u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x3383ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3383acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3383b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3383b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3383b4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3383b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3383b8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3383b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3383bc: 0xc048332  jal         func_120CC8
    ctx->pc = 0x3383BCu;
    SET_GPR_U32(ctx, 31, 0x3383C4u);
    ctx->pc = 0x3383C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3383BCu;
    // 0x3383c0: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120CC8u, 0x3383BCu, 0x3383C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383C4u;
label_3383c4:
    // 0x3383c4: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x3383c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3383c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3383c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3383cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3383ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3383d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3383D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383D0u;
        // 0x3383d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3383D8u;
    // 0x3383d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3383d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3383dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3383dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3383e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3383e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3383e4: 0x2287a  dsrl        $a1, $v0, 1
    ctx->pc = 0x3383e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 1);
    // 0x3383e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3383E8u;
    {
        const bool branch_taken_0x3383e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3383ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383E8u;
        // 0x3383ec: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383e8) {
            ctx->pc = 0x338400u;
            goto label_338400;
        }
    }
    ctx->pc = 0x3383F0u;
    // 0x3383f0: 0xc0485ec  jal         func_1217B0
    ctx->pc = 0x3383F0u;
    SET_GPR_U32(ctx, 31, 0x3383F8u);
    ctx->pc = 0x1217B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1217B0u, 0x3383F0u, 0x3383F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383F8u;
label_3383f8:
    // 0x3383f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3383F8u;
    {
        const bool branch_taken_0x3383f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3383FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383F8u;
        // 0x3383fc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383f8) {
            ctx->pc = 0x33840Cu;
            goto label_33840c;
        }
    }
    ctx->pc = 0x338400u;
label_338400:
    // 0x338400: 0xc0485ec  jal         func_1217B0
    ctx->pc = 0x338400u;
    SET_GPR_U32(ctx, 31, 0x338408u);
    ctx->pc = 0x338404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338400u;
    // 0x338404: 0x652025  or          $a0, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1217B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1217B0u, 0x338400u, 0x338408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338408u;
label_338408:
    // 0x338408: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x338408u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_33840c:
    // 0x33840c: 0xc7809644  lwc1        $f0, -0x69BC($gp)
    ctx->pc = 0x33840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338414: 0x0  nop
    ctx->pc = 0x338414u;
    // NOP
    // 0x338418: 0x0  nop
    ctx->pc = 0x338418u;
    // NOP
    // 0x33841c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x33841cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x338420: 0x3e00008  jr          $ra
    ctx->pc = 0x338420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338420u;
        // 0x338424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338428u;
    // 0x338428: 0xc7809648  lwc1        $f0, -0x69B8($gp)
    ctx->pc = 0x338428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33842c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33842cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338434: 0x0  nop
    ctx->pc = 0x338434u;
    // NOP
    // 0x338438: 0x0  nop
    ctx->pc = 0x338438u;
    // NOP
    // 0x33843c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x33843cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x338440: 0xc04866c  jal         func_1219B0
    ctx->pc = 0x338440u;
    SET_GPR_U32(ctx, 31, 0x338448u);
    ctx->pc = 0x1219B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1219B0u, 0x338440u, 0x338448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338448u;
label_338448:
    // 0x338448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33844c: 0x3e00008  jr          $ra
    ctx->pc = 0x33844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33844Cu;
        // 0x338450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33844Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338454u;
    // 0x338454: 0x0  nop
    ctx->pc = 0x338454u;
    // NOP
    ctx->pc = 0x338458u;
}
