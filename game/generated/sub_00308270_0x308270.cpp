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

// Function: sub_00308270
// Address: 0x308270 - 0x3084c0
void sub_00308270_0x308270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308270_0x308270");
#endif

    switch (ctx->pc) {
        case 0x3082ecu: goto label_3082ec;
        case 0x308310u: goto label_308310;
        case 0x308320u: goto label_308320;
        case 0x308338u: goto label_308338;
        case 0x308348u: goto label_308348;
        case 0x308360u: goto label_308360;
        case 0x308370u: goto label_308370;
        case 0x308388u: goto label_308388;
        case 0x308398u: goto label_308398;
        case 0x3083a8u: goto label_3083a8;
        case 0x3083b4u: goto label_3083b4;
        case 0x3083c4u: goto label_3083c4;
        case 0x3083d0u: goto label_3083d0;
        case 0x3083e0u: goto label_3083e0;
        case 0x3083ecu: goto label_3083ec;
        case 0x3083fcu: goto label_3083fc;
        case 0x30840cu: goto label_30840c;
        case 0x30841cu: goto label_30841c;
        case 0x308428u: goto label_308428;
        case 0x308438u: goto label_308438;
        case 0x308444u: goto label_308444;
        case 0x308454u: goto label_308454;
        case 0x308460u: goto label_308460;
        case 0x308470u: goto label_308470;
        case 0x30847cu: goto label_30847c;
        case 0x30848cu: goto label_30848c;
        default: break;
    }

    ctx->pc = 0x308270u;

    // 0x308270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x308270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x308274: 0x2485004c  addiu       $a1, $a0, 0x4C
    ctx->pc = 0x308274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x308278: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x308278u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30827c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x308280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x308284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x308284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x308288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x308288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30828c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x308290: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x308290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x308294: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x308294u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x308298: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x308298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x30829c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x30829cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3082a0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3082a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3082a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3082A4u;
    {
        const bool branch_taken_0x3082a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082A4u;
        // 0x3082a8: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082a4) {
            ctx->pc = 0x3082BCu;
            goto label_3082bc;
        }
    }
    ctx->pc = 0x3082ACu;
    // 0x3082ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3082acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3082b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3082b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3082B4u;
    {
        const bool branch_taken_0x3082b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3082B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082B4u;
        // 0x3082b8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082b4) {
            ctx->pc = 0x3082C8u;
            goto label_3082c8;
        }
    }
    ctx->pc = 0x3082BCu;
label_3082bc:
    // 0x3082bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3082bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3082c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3082c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082c4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3082c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3082c8:
    // 0x3082c8: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x3082c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x3082cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3082ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3082d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3082d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3082d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3082d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082d8: 0x4614b501  sub.s       $f20, $f22, $f20
    ctx->pc = 0x3082d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x3082dc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x3082dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x3082e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3082e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3082e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3082E4u;
    SET_GPR_U32(ctx, 31, 0x3082ECu);
    ctx->pc = 0x3082E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082E4u;
    // 0x3082e8: 0x24a52538  addiu       $a1, $a1, 0x2538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3082E4u, 0x3082ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082ECu;
label_3082ec:
    // 0x3082ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3082ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3082f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3082f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3082f4: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x3082f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x3082f8: 0x3c01422c  lui         $at, 0x422C
    ctx->pc = 0x3082f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16940 << 16));
    // 0x3082fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3082fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x308300: 0x267326f0  addiu       $s3, $s3, 0x26F0
    ctx->pc = 0x308300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9968));
    // 0x308304: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308304u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x308308: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308308u;
    SET_GPR_U32(ctx, 31, 0x308310u);
    ctx->pc = 0x30830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308308u;
    // 0x30830c: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308308u, 0x308310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308310u;
label_308310:
    // 0x308310: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x308310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x308314: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308318: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308318u;
    SET_GPR_U32(ctx, 31, 0x308320u);
    ctx->pc = 0x30831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308318u;
    // 0x30831c: 0x24a52558  addiu       $a1, $a1, 0x2558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308318u, 0x308320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308320u;
label_308320:
    // 0x308320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308324: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308328: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308328u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30832c: 0x4615a5c0  add.s       $f23, $f20, $f21
    ctx->pc = 0x30832cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x308330: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308330u;
    SET_GPR_U32(ctx, 31, 0x308338u);
    ctx->pc = 0x308334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308330u;
    // 0x308334: 0x265226e0  addiu       $s2, $s2, 0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308330u, 0x308338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308338u;
label_308338:
    // 0x308338: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x308338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x30833c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30833cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308340: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308340u;
    SET_GPR_U32(ctx, 31, 0x308348u);
    ctx->pc = 0x308344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308340u;
    // 0x308344: 0x24a52578  addiu       $a1, $a1, 0x2578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308340u, 0x308348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308348u;
label_308348:
    // 0x308348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30834c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30834cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308350: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x308354: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x308354u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x308358: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308358u;
    SET_GPR_U32(ctx, 31, 0x308360u);
    ctx->pc = 0x30835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308358u;
    // 0x30835c: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308358u, 0x308360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308360u;
label_308360:
    // 0x308360: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x308360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x308364: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308368: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308368u;
    SET_GPR_U32(ctx, 31, 0x308370u);
    ctx->pc = 0x30836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308368u;
    // 0x30836c: 0x24a52598  addiu       $a1, $a1, 0x2598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308368u, 0x308370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308370u;
label_308370:
    // 0x308370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308374: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308378: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30837c: 0x263126d0  addiu       $s1, $s1, 0x26D0
    ctx->pc = 0x30837cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9936));
    // 0x308380: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308380u;
    SET_GPR_U32(ctx, 31, 0x308388u);
    ctx->pc = 0x308384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308380u;
    // 0x308384: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308380u, 0x308388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308388u;
label_308388:
    // 0x308388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30838c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308390: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308390u;
    SET_GPR_U32(ctx, 31, 0x308398u);
    ctx->pc = 0x308394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308390u;
    // 0x308394: 0x26102700  addiu       $s0, $s0, 0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308390u, 0x308398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308398u;
label_308398:
    // 0x308398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30839c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30839cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3083a0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x3083A0u;
    SET_GPR_U32(ctx, 31, 0x3083A8u);
    ctx->pc = 0x3083A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083A0u;
    // 0x3083a4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x3083A0u, 0x3083A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083A8u;
label_3083a8:
    // 0x3083a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3083a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083ac: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3083ACu;
    SET_GPR_U32(ctx, 31, 0x3083B4u);
    ctx->pc = 0x3083B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083ACu;
    // 0x3083b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3083ACu, 0x3083B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083B4u;
label_3083b4:
    // 0x3083b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3083b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3083b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3083bc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x3083BCu;
    SET_GPR_U32(ctx, 31, 0x3083C4u);
    ctx->pc = 0x3083C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083BCu;
    // 0x3083c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x3083BCu, 0x3083C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083C4u;
label_3083c4:
    // 0x3083c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3083c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083c8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3083C8u;
    SET_GPR_U32(ctx, 31, 0x3083D0u);
    ctx->pc = 0x3083CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083C8u;
    // 0x3083cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3083C8u, 0x3083D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083D0u;
label_3083d0:
    // 0x3083d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3083d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3083d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3083d8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x3083D8u;
    SET_GPR_U32(ctx, 31, 0x3083E0u);
    ctx->pc = 0x3083DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083D8u;
    // 0x3083dc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x3083D8u, 0x3083E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083E0u;
label_3083e0:
    // 0x3083e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3083e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3083E4u;
    SET_GPR_U32(ctx, 31, 0x3083ECu);
    ctx->pc = 0x3083E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083E4u;
    // 0x3083e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3083E4u, 0x3083ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083ECu;
label_3083ec:
    // 0x3083ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3083ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3083f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3083f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3083f4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x3083F4u;
    SET_GPR_U32(ctx, 31, 0x3083FCu);
    ctx->pc = 0x3083F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3083F4u;
    // 0x3083f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x3083F4u, 0x3083FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3083FCu;
label_3083fc:
    // 0x3083fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3083fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x308400: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308404: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308404u;
    SET_GPR_U32(ctx, 31, 0x30840Cu);
    ctx->pc = 0x308408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308404u;
    // 0x308408: 0x24a525b8  addiu       $a1, $a1, 0x25B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308404u, 0x30840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30840Cu;
label_30840c:
    // 0x30840c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308410: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308414: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308414u;
    SET_GPR_U32(ctx, 31, 0x30841Cu);
    ctx->pc = 0x308418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308414u;
    // 0x308418: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308414u, 0x30841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30841Cu;
label_30841c:
    // 0x30841c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308420: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308420u;
    SET_GPR_U32(ctx, 31, 0x308428u);
    ctx->pc = 0x308424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308420u;
    // 0x308424: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308420u, 0x308428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308428u;
label_308428:
    // 0x308428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30842c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30842cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308430: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308430u;
    SET_GPR_U32(ctx, 31, 0x308438u);
    ctx->pc = 0x308434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308430u;
    // 0x308434: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308430u, 0x308438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308438u;
label_308438:
    // 0x308438: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30843c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x30843Cu;
    SET_GPR_U32(ctx, 31, 0x308444u);
    ctx->pc = 0x308440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30843Cu;
    // 0x308440: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x30843Cu, 0x308444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308444u;
label_308444:
    // 0x308444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308448: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30844c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x30844Cu;
    SET_GPR_U32(ctx, 31, 0x308454u);
    ctx->pc = 0x308450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30844Cu;
    // 0x308450: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x30844Cu, 0x308454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308454u;
label_308454:
    // 0x308454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308458: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308458u;
    SET_GPR_U32(ctx, 31, 0x308460u);
    ctx->pc = 0x30845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308458u;
    // 0x30845c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308458u, 0x308460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308460u;
label_308460:
    // 0x308460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308464: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308468: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308468u;
    SET_GPR_U32(ctx, 31, 0x308470u);
    ctx->pc = 0x30846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308468u;
    // 0x30846c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308468u, 0x308470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308470u;
label_308470:
    // 0x308470: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308474: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x308474u;
    SET_GPR_U32(ctx, 31, 0x30847Cu);
    ctx->pc = 0x308478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308474u;
    // 0x308478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x308474u, 0x30847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30847Cu;
label_30847c:
    // 0x30847c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308480: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x308480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x308484: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x308484u;
    SET_GPR_U32(ctx, 31, 0x30848Cu);
    ctx->pc = 0x308488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308484u;
    // 0x308488: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x308484u, 0x30848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30848Cu;
label_30848c:
    // 0x30848c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x308494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308498: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x308498u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30849c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30849cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3084a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3084a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3084a4: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x3084a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3084a8: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x3084a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3084ac: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3084acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3084b0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3084b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3084b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3084B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3084B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084B4u;
        // 0x3084b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3084BCu;
    // 0x3084bc: 0x0  nop
    ctx->pc = 0x3084bcu;
    // NOP
    ctx->pc = 0x3084c0u;
}
