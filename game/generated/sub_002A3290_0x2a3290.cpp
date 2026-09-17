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

// Function: sub_002A3290
// Address: 0x2a3290 - 0x2a3618
void sub_002A3290_0x2a3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3290_0x2a3290");
#endif

    switch (ctx->pc) {
        case 0x2a32b8u: goto label_2a32b8;
        case 0x2a3328u: goto label_2a3328;
        case 0x2a3338u: goto label_2a3338;
        case 0x2a3344u: goto label_2a3344;
        case 0x2a3364u: goto label_2a3364;
        case 0x2a3378u: goto label_2a3378;
        case 0x2a3390u: goto label_2a3390;
        case 0x2a33c4u: goto label_2a33c4;
        case 0x2a33d0u: goto label_2a33d0;
        case 0x2a33e4u: goto label_2a33e4;
        case 0x2a33f0u: goto label_2a33f0;
        case 0x2a3418u: goto label_2a3418;
        case 0x2a3444u: goto label_2a3444;
        case 0x2a3470u: goto label_2a3470;
        case 0x2a349cu: goto label_2a349c;
        case 0x2a34e0u: goto label_2a34e0;
        case 0x2a34e8u: goto label_2a34e8;
        case 0x2a34f8u: goto label_2a34f8;
        case 0x2a3508u: goto label_2a3508;
        case 0x2a3538u: goto label_2a3538;
        case 0x2a3554u: goto label_2a3554;
        case 0x2a355cu: goto label_2a355c;
        case 0x2a3568u: goto label_2a3568;
        case 0x2a35a0u: goto label_2a35a0;
        case 0x2a35b0u: goto label_2a35b0;
        case 0x2a35b8u: goto label_2a35b8;
        case 0x2a35c0u: goto label_2a35c0;
        case 0x2a35d0u: goto label_2a35d0;
        default: break;
    }

    ctx->pc = 0x2a3290u;

    // 0x2a3290: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a3294: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a3298: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a329c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a32a0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a32a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a32a4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a32a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a32a8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a32ac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a32acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a32b0: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x2A32B0u;
    SET_GPR_U32(ctx, 31, 0x2A32B8u);
    ctx->pc = 0x2A32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32B0u;
    // 0x2a32b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x2A32B0u, 0x2A32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32B8u;
label_2a32b8:
    // 0x2a32b8: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x2a32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2a32bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a32bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a32c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A32C4u;
    {
        const bool branch_taken_0x2a32c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32C4u;
        // 0x2a32c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32c4) {
            ctx->pc = 0x2A32DCu;
            goto label_2a32dc;
        }
    }
    ctx->pc = 0x2A32CCu;
    // 0x2a32cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a32d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a32d4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A32D4u;
    {
        const bool branch_taken_0x2a32d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a32d4) {
            ctx->pc = 0x2A32D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A32D4u;
            // 0x2a32d8: 0x8e300048  lw          $s0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A32ECu;
            goto label_2a32ec;
        }
    }
    ctx->pc = 0x2A32DCu;
label_2a32dc:
    // 0x2a32dc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a32dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a32e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a32e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a32e8: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x2a32e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2a32ec:
    // 0x2a32ec: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a32ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a32f0: 0x1214001f  beq         $s0, $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A32F0u;
    {
        const bool branch_taken_0x2a32f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2A32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A32F0u;
        // 0x2a32f4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a32f0) {
            ctx->pc = 0x2A3370u;
            goto label_2a3370;
        }
    }
    ctx->pc = 0x2A32F8u;
    // 0x2a32f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A32F8u;
    {
        const bool branch_taken_0x2a32f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a32f8) {
            ctx->pc = 0x2A32FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A32F8u;
            // 0x2a32fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3310u;
            goto label_2a3310;
        }
    }
    ctx->pc = 0x2A3300u;
    // 0x2a3300: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3300u;
    {
        const bool branch_taken_0x2a3300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3300) {
            ctx->pc = 0x2A3320u;
            goto label_2a3320;
        }
    }
    ctx->pc = 0x2A3308u;
    // 0x2a3308: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2A3308u;
    {
        const bool branch_taken_0x2a3308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3308) {
            ctx->pc = 0x2A3530u;
            goto label_2a3530;
        }
    }
    ctx->pc = 0x2A3310u;
label_2a3310:
    // 0x2a3310: 0x12020071  beq         $s0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2A3310u;
    {
        const bool branch_taken_0x2a3310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3310) {
            ctx->pc = 0x2A34D8u;
            goto label_2a34d8;
        }
    }
    ctx->pc = 0x2A3318u;
    // 0x2a3318: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2A3318u;
    {
        const bool branch_taken_0x2a3318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3318) {
            ctx->pc = 0x2A3530u;
            goto label_2a3530;
        }
    }
    ctx->pc = 0x2A3320u;
label_2a3320:
    // 0x2a3320: 0xc089622  jal         func_225888
    ctx->pc = 0x2A3320u;
    SET_GPR_U32(ctx, 31, 0x2A3328u);
    ctx->pc = 0x2A3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3320u;
    // 0x2a3324: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A3320u, 0x2A3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3328u;
label_2a3328:
    // 0x2a3328: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2A3328u;
    {
        const bool branch_taken_0x2a3328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3328u;
        // 0x2a332c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3328) {
            ctx->pc = 0x2A35F4u;
            goto label_2a35f4;
        }
    }
    ctx->pc = 0x2A3330u;
    // 0x2a3330: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A3330u;
    SET_GPR_U32(ctx, 31, 0x2A3338u);
    ctx->pc = 0x2A3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3330u;
    // 0x2a3334: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A3330u, 0x2A3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3338u;
label_2a3338:
    // 0x2a3338: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x2a3338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2a333c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A333Cu;
    SET_GPR_U32(ctx, 31, 0x2A3344u);
    ctx->pc = 0x2A3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A333Cu;
    // 0x2a3340: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A333Cu, 0x2A3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3344u;
label_2a3344:
    // 0x2a3344: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2a3344u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2a3348: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a3348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a334c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a3350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3354: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2a3354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2a3358: 0x240800f2  addiu       $t0, $zero, 0xF2
    ctx->pc = 0x2a3358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2a335c: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2A335Cu;
    SET_GPR_U32(ctx, 31, 0x2A3364u);
    ctx->pc = 0x2A3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A335Cu;
    // 0x2a3360: 0x35290800  ori         $t1, $t1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2A335Cu, 0x2A3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3364u;
label_2a3364:
    // 0x2a3364: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2A3364u;
    {
        const bool branch_taken_0x2a3364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3364u;
        // 0x2a3368: 0xae340048  sw          $s4, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3364) {
            ctx->pc = 0x2A35F0u;
            goto label_2a35f0;
        }
    }
    ctx->pc = 0x2A336Cu;
    // 0x2a336c: 0x0  nop
    ctx->pc = 0x2a336cu;
    // NOP
label_2a3370:
    // 0x2a3370: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A3370u;
    SET_GPR_U32(ctx, 31, 0x2A3378u);
    ctx->pc = 0x2A3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3370u;
    // 0x2a3374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A3370u, 0x2A3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3378u;
label_2a3378:
    // 0x2a3378: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x2a3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2a337c: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2A337Cu;
    {
        const bool branch_taken_0x2a337c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A337Cu;
        // 0x2a3380: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a337c) {
            ctx->pc = 0x2A35F0u;
            goto label_2a35f0;
        }
    }
    ctx->pc = 0x2A3384u;
    // 0x2a3384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3388: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2A3388u;
    SET_GPR_U32(ctx, 31, 0x2A3390u);
    ctx->pc = 0x2A338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3388u;
    // 0x2a338c: 0x24a5d1f0  addiu       $a1, $a1, -0x2E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2A3388u, 0x2A3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3390u;
label_2a3390:
    // 0x2a3390: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3390u;
    {
        const bool branch_taken_0x2a3390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3390u;
        // 0x2a3394: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3390) {
            ctx->pc = 0x2A33B4u;
            goto label_2a33b4;
        }
    }
    ctx->pc = 0x2A3398u;
    // 0x2a3398: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a3398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a339c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A339Cu;
    {
        const bool branch_taken_0x2a339c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A339Cu;
        // 0x2a33a0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a339c) {
            ctx->pc = 0x2A33B4u;
            goto label_2a33b4;
        }
    }
    ctx->pc = 0x2A33A4u;
    // 0x2a33a4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a33a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a33a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a33ac: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a33acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a33b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a33b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2a33b4:
    // 0x2a33b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a33b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33b8: 0x24a5d208  addiu       $a1, $a1, -0x2DF8
    ctx->pc = 0x2a33b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955528));
    // 0x2a33bc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A33BCu;
    SET_GPR_U32(ctx, 31, 0x2A33C4u);
    ctx->pc = 0x2A33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33BCu;
    // 0x2a33c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A33BCu, 0x2A33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33C4u;
label_2a33c4:
    // 0x2a33c4: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2a33c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2a33c8: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x2a33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x2a33cc: 0x26740004  addiu       $s4, $s3, 0x4
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2a33d0:
    // 0x2a33d0: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x2a33d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a33d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a33d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a33d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33dc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2A33DCu;
    SET_GPR_U32(ctx, 31, 0x2A33E4u);
    ctx->pc = 0x2A33E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33DCu;
    // 0x2a33e0: 0x26a5d220  addiu       $a1, $s5, -0x2DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2A33DCu, 0x2A33E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33E4u;
label_2a33e4:
    // 0x2a33e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a33e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33e8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A33E8u;
    SET_GPR_U32(ctx, 31, 0x2A33F0u);
    ctx->pc = 0x2A33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33E8u;
    // 0x2a33ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A33E8u, 0x2A33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33F0u;
label_2a33f0:
    // 0x2a33f0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2a33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a33f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a33f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33f8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2a33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a33fc: 0x2a44000a  slti        $a0, $s2, 0xA
    ctx->pc = 0x2a33fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a3400: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A3400u;
    {
        const bool branch_taken_0x2a3400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3400u;
        // 0x2a3404: 0xac620050  sw          $v0, 0x50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3400) {
            ctx->pc = 0x2A33D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a33d0;
        }
    }
    ctx->pc = 0x2A3408u;
    // 0x2a3408: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a3408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a340c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3410: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A3410u;
    SET_GPR_U32(ctx, 31, 0x2A3418u);
    ctx->pc = 0x2A3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3410u;
    // 0x2a3414: 0x24a5d298  addiu       $a1, $a1, -0x2D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A3410u, 0x2A3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3418u;
label_2a3418:
    // 0x2a3418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a341c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A341Cu;
    {
        const bool branch_taken_0x2a341c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A341Cu;
        // 0x2a3420: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a341c) {
            ctx->pc = 0x2A3430u;
            goto label_2a3430;
        }
    }
    ctx->pc = 0x2A3424u;
    // 0x2a3424: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a3424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a3428: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a342c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a342cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a3430:
    // 0x2a3430: 0xae64007c  sw          $a0, 0x7C($s3)
    ctx->pc = 0x2a3430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 4));
    // 0x2a3434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3438: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a3438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a343c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A343Cu;
    SET_GPR_U32(ctx, 31, 0x2A3444u);
    ctx->pc = 0x2A3440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A343Cu;
    // 0x2a3440: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A343Cu, 0x2A3444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3444u;
label_2a3444:
    // 0x2a3444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3448: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3448u;
    {
        const bool branch_taken_0x2a3448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3448u;
        // 0x2a344c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3448) {
            ctx->pc = 0x2A345Cu;
            goto label_2a345c;
        }
    }
    ctx->pc = 0x2A3450u;
    // 0x2a3450: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a3454: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a3458: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a3458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a345c:
    // 0x2a345c: 0xae640080  sw          $a0, 0x80($s3)
    ctx->pc = 0x2a345cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 4));
    // 0x2a3460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3464: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a3464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a3468: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A3468u;
    SET_GPR_U32(ctx, 31, 0x2A3470u);
    ctx->pc = 0x2A346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3468u;
    // 0x2a346c: 0x24a5d2c8  addiu       $a1, $a1, -0x2D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A3468u, 0x2A3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3470u;
label_2a3470:
    // 0x2a3470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3474: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3474u;
    {
        const bool branch_taken_0x2a3474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3474u;
        // 0x2a3478: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3474) {
            ctx->pc = 0x2A3488u;
            goto label_2a3488;
        }
    }
    ctx->pc = 0x2A347Cu;
    // 0x2a347c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a3480: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a3480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a3484: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a3484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a3488:
    // 0x2a3488: 0xae640084  sw          $a0, 0x84($s3)
    ctx->pc = 0x2a3488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 4));
    // 0x2a348c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3490: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a3490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a3494: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A3494u;
    SET_GPR_U32(ctx, 31, 0x2A349Cu);
    ctx->pc = 0x2A3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3494u;
    // 0x2a3498: 0x24a5d2e8  addiu       $a1, $a1, -0x2D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A3494u, 0x2A349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A349Cu;
label_2a349c:
    // 0x2a349c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A34A0u;
    {
        const bool branch_taken_0x2a34a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34A0u;
        // 0x2a34a4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34a0) {
            ctx->pc = 0x2A34B4u;
            goto label_2a34b4;
        }
    }
    ctx->pc = 0x2A34A8u;
    // 0x2a34a8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a34ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a34acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a34b0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a34b4:
    // 0x2a34b4: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2a34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a34b8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2a34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a34bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a34c0: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2a34c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2a34c4: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2a34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x2a34c8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a34cc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A34CCu;
    {
        const bool branch_taken_0x2a34cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A34CCu;
        // 0x2a34d0: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34cc) {
            ctx->pc = 0x2A35ECu;
            goto label_2a35ec;
        }
    }
    ctx->pc = 0x2A34D4u;
    // 0x2a34d4: 0x0  nop
    ctx->pc = 0x2a34d4u;
    // NOP
label_2a34d8:
    // 0x2a34d8: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A34D8u;
    SET_GPR_U32(ctx, 31, 0x2A34E0u);
    ctx->pc = 0x2A34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34D8u;
    // 0x2a34dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A34D8u, 0x2A34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34E0u;
label_2a34e0:
    // 0x2a34e0: 0xc07e558  jal         func_1F9560
    ctx->pc = 0x2A34E0u;
    SET_GPR_U32(ctx, 31, 0x2A34E8u);
    ctx->pc = 0x1F9560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9560u, 0x2A34E0u, 0x2A34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34E8u;
label_2a34e8:
    // 0x2a34e8: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x2A34E8u;
    {
        const bool branch_taken_0x2a34e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a34e8) {
            ctx->pc = 0x2A34ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A34E8u;
            // 0x2a34ec: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A35F4u;
            goto label_2a35f4;
        }
    }
    ctx->pc = 0x2A34F0u;
    // 0x2a34f0: 0xc07e28a  jal         func_1F8A28
    ctx->pc = 0x2A34F0u;
    SET_GPR_U32(ctx, 31, 0x2A34F8u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A34F0u, 0x2A34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34F8u;
label_2a34f8:
    // 0x2a34f8: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A34F8u;
    {
        const bool branch_taken_0x2a34f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a34f8) {
            ctx->pc = 0x2A34FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A34F8u;
            // 0x2a34fc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A35F4u;
            goto label_2a35f4;
        }
    }
    ctx->pc = 0x2A3500u;
    // 0x2a3500: 0xc07e272  jal         func_1F89C8
    ctx->pc = 0x2A3500u;
    SET_GPR_U32(ctx, 31, 0x2A3508u);
    ctx->pc = 0x1F89C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89C8u, 0x2A3500u, 0x2A3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3508u;
label_2a3508:
    // 0x2a3508: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2A3508u;
    {
        const bool branch_taken_0x2a3508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3508) {
            ctx->pc = 0x2A350Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3508u;
            // 0x2a350c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A35F4u;
            goto label_2a35f4;
        }
    }
    ctx->pc = 0x2A3510u;
    // 0x2a3510: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a3514: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a3514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a3518: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2a3518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a351c: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2a351cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x2a3520: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x2a3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2a3524: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2A3524u;
    {
        const bool branch_taken_0x2a3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3524u;
        // 0x2a3528: 0xae240158  sw          $a0, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3524) {
            ctx->pc = 0x2A35ECu;
            goto label_2a35ec;
        }
    }
    ctx->pc = 0x2A352Cu;
    // 0x2a352c: 0x0  nop
    ctx->pc = 0x2a352cu;
    // NOP
label_2a3530:
    // 0x2a3530: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A3530u;
    SET_GPR_U32(ctx, 31, 0x2A3538u);
    ctx->pc = 0x2A3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3530u;
    // 0x2a3534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A3530u, 0x2A3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3538u;
label_2a3538:
    // 0x2a3538: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x2a3538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x2a353c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a353cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a3540: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A3540u;
    {
        const bool branch_taken_0x2a3540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a3540) {
            ctx->pc = 0x2A3544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3540u;
            // 0x2a3544: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A356Cu;
            goto label_2a356c;
        }
    }
    ctx->pc = 0x2A3548u;
    // 0x2a3548: 0xae250158  sw          $a1, 0x158($s1)
    ctx->pc = 0x2a3548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
    // 0x2a354c: 0xc0a8eba  jal         func_2A3AE8
    ctx->pc = 0x2A354Cu;
    SET_GPR_U32(ctx, 31, 0x2A3554u);
    ctx->pc = 0x2A3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A354Cu;
    // 0x2a3550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AE8u, 0x2A354Cu, 0x2A3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3554u;
label_2a3554:
    // 0x2a3554: 0xc0a8f08  jal         func_2A3C20
    ctx->pc = 0x2A3554u;
    SET_GPR_U32(ctx, 31, 0x2A355Cu);
    ctx->pc = 0x2A3558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3554u;
    // 0x2a3558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3C20u, 0x2A3554u, 0x2A355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A355Cu;
label_2a355c:
    // 0x2a355c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3560: 0xc0a8ee2  jal         func_2A3B88
    ctx->pc = 0x2A3560u;
    SET_GPR_U32(ctx, 31, 0x2A3568u);
    ctx->pc = 0x2A3564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3560u;
    // 0x2a3564: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B88u, 0x2A3560u, 0x2A3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3568u;
label_2a3568:
    // 0x2a3568: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2a356c:
    // 0x2a356c: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2a3570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a3570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3574: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a3574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a3578: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2a357c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a357cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3580: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2a3580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a3584: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3584u;
    {
        const bool branch_taken_0x2a3584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3584u;
        // 0x2a3588: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3584) {
            ctx->pc = 0x2A3594u;
            goto label_2a3594;
        }
    }
    ctx->pc = 0x2A358Cu;
    // 0x2a358c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A358Cu;
    {
        const bool branch_taken_0x2a358c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a358c) {
            ctx->pc = 0x2A35B0u;
            goto label_2a35b0;
        }
    }
    ctx->pc = 0x2A3594u;
label_2a3594:
    // 0x2a3594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3598: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2A3598u;
    SET_GPR_U32(ctx, 31, 0x2A35A0u);
    ctx->pc = 0x2A359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3598u;
    // 0x2a359c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2A3598u, 0x2A35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35A0u;
label_2a35a0:
    // 0x2a35a0: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x2a35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2a35a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a35a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a35a8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A35A8u;
    SET_GPR_U32(ctx, 31, 0x2A35B0u);
    ctx->pc = 0x2A35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A35A8u;
    // 0x2a35ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A35A8u, 0x2A35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35B0u;
label_2a35b0:
    // 0x2a35b0: 0xc0a8d86  jal         func_2A3618
    ctx->pc = 0x2A35B0u;
    SET_GPR_U32(ctx, 31, 0x2A35B8u);
    ctx->pc = 0x2A35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A35B0u;
    // 0x2a35b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3618u, 0x2A35B0u, 0x2A35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35B8u;
label_2a35b8:
    // 0x2a35b8: 0xc07e286  jal         func_1F8A18
    ctx->pc = 0x2A35B8u;
    SET_GPR_U32(ctx, 31, 0x2A35C0u);
    ctx->pc = 0x1F8A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A18u, 0x2A35B8u, 0x2A35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35C0u;
label_2a35c0:
    // 0x2a35c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A35C0u;
    {
        const bool branch_taken_0x2a35c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a35c0) {
            ctx->pc = 0x2A35C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A35C0u;
            // 0x2a35c4: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A35DCu;
            goto label_2a35dc;
        }
    }
    ctx->pc = 0x2A35C8u;
    // 0x2a35c8: 0xc07e28a  jal         func_1F8A28
    ctx->pc = 0x2A35C8u;
    SET_GPR_U32(ctx, 31, 0x2A35D0u);
    ctx->pc = 0x1F8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A28u, 0x2A35C8u, 0x2A35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35D0u;
label_2a35d0:
    // 0x2a35d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A35D0u;
    {
        const bool branch_taken_0x2a35d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A35D0u;
        // 0x2a35d4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a35d0) {
            ctx->pc = 0x2A35F4u;
            goto label_2a35f4;
        }
    }
    ctx->pc = 0x2A35D8u;
    // 0x2a35d8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2a35dc:
    // 0x2a35dc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a35e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a35e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a35e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a35e8: 0xae240048  sw          $a0, 0x48($s1)
    ctx->pc = 0x2a35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 4));
label_2a35ec:
    // 0x2a35ec: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a35ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2a35f0:
    // 0x2a35f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a35f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a35f4:
    // 0x2a35f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a35f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35f8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a35f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a35fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a35fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3600: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a3600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a3604: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a3604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3608: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a3608u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a360c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a360cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3610: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3610u;
        // 0x2a3614: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3618u;
}
