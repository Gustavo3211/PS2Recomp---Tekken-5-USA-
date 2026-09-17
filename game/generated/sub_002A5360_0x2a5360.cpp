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

// Function: sub_002A5360
// Address: 0x2a5360 - 0x2a5510
void sub_002A5360_0x2a5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5360_0x2a5360");
#endif

    switch (ctx->pc) {
        case 0x2a53d8u: goto label_2a53d8;
        case 0x2a53e8u: goto label_2a53e8;
        case 0x2a53f4u: goto label_2a53f4;
        case 0x2a5400u: goto label_2a5400;
        case 0x2a540cu: goto label_2a540c;
        case 0x2a542cu: goto label_2a542c;
        case 0x2a5438u: goto label_2a5438;
        case 0x2a5470u: goto label_2a5470;
        case 0x2a54a0u: goto label_2a54a0;
        default: break;
    }

    ctx->pc = 0x2a5360u;

    // 0x2a5360: 0x9385b85d  lbu         $a1, -0x47A3($gp)
    ctx->pc = 0x2a5360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948957)));
    // 0x2a5364: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5368: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a5368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a536c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a5370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a5374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a5378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a537c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a537cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5380: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a5380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a5384: 0x10a3005a  beq         $a1, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2A5384u;
    {
        const bool branch_taken_0x2a5384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5384u;
        // 0x2a5388: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5384) {
            ctx->pc = 0x2A54F0u;
            goto label_2a54f0;
        }
    }
    ctx->pc = 0x2A538Cu;
    // 0x2a538c: 0x8e500048  lw          $s0, 0x48($s2)
    ctx->pc = 0x2a538cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2a5390: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a5390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5394: 0x12130026  beq         $s0, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A5394u;
    {
        const bool branch_taken_0x2a5394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5394u;
        // 0x2a5398: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5394) {
            ctx->pc = 0x2A5430u;
            goto label_2a5430;
        }
    }
    ctx->pc = 0x2A539Cu;
    // 0x2a539c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A539Cu;
    {
        const bool branch_taken_0x2a539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A539Cu;
        // 0x2a53a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a539c) {
            ctx->pc = 0x2A53B8u;
            goto label_2a53b8;
        }
    }
    ctx->pc = 0x2A53A4u;
    // 0x2a53a4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A53A4u;
    {
        const bool branch_taken_0x2a53a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53A4u;
        // 0x2a53a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53a4) {
            ctx->pc = 0x2A53D0u;
            goto label_2a53d0;
        }
    }
    ctx->pc = 0x2A53ACu;
    // 0x2a53ac: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2A53ACu;
    {
        const bool branch_taken_0x2a53ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53ACu;
        // 0x2a53b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53ac) {
            ctx->pc = 0x2A54F4u;
            goto label_2a54f4;
        }
    }
    ctx->pc = 0x2A53B4u;
    // 0x2a53b4: 0x0  nop
    ctx->pc = 0x2a53b4u;
    // NOP
label_2a53b8:
    // 0x2a53b8: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A53B8u;
    {
        const bool branch_taken_0x2a53b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53B8u;
        // 0x2a53bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53b8) {
            ctx->pc = 0x2A5468u;
            goto label_2a5468;
        }
    }
    ctx->pc = 0x2A53C0u;
    // 0x2a53c0: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A53C0u;
    {
        const bool branch_taken_0x2a53c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53C0u;
        // 0x2a53c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53c0) {
            ctx->pc = 0x2A5498u;
            goto label_2a5498;
        }
    }
    ctx->pc = 0x2A53C8u;
    // 0x2a53c8: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2A53C8u;
    {
        const bool branch_taken_0x2a53c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53C8u;
        // 0x2a53cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a53c8) {
            ctx->pc = 0x2A54F4u;
            goto label_2a54f4;
        }
    }
    ctx->pc = 0x2A53D0u;
label_2a53d0:
    // 0x2a53d0: 0xc089622  jal         func_225888
    ctx->pc = 0x2A53D0u;
    SET_GPR_U32(ctx, 31, 0x2A53D8u);
    ctx->pc = 0x2A53D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53D0u;
    // 0x2a53d4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x2A53D0u, 0x2A53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53D8u;
label_2a53d8:
    // 0x2a53d8: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2A53D8u;
    {
        const bool branch_taken_0x2a53d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a53d8) {
            ctx->pc = 0x2A53DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A53D8u;
            // 0x2a53dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A54F0u;
            goto label_2a54f0;
        }
    }
    ctx->pc = 0x2A53E0u;
    // 0x2a53e0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A53E0u;
    SET_GPR_U32(ctx, 31, 0x2A53E8u);
    ctx->pc = 0x2A53E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53E0u;
    // 0x2a53e4: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A53E0u, 0x2A53E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53E8u;
label_2a53e8:
    // 0x2a53e8: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2a53ec: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A53ECu;
    SET_GPR_U32(ctx, 31, 0x2A53F4u);
    ctx->pc = 0x2A53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53ECu;
    // 0x2a53f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A53ECu, 0x2A53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53F4u;
label_2a53f4:
    // 0x2a53f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a53f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a53f8: 0xc04058e  jal         func_101638
    ctx->pc = 0x2A53F8u;
    SET_GPR_U32(ctx, 31, 0x2A5400u);
    ctx->pc = 0x2A53FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A53F8u;
    // 0x2a53fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101638u, 0x2A53F8u, 0x2A5400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5400u;
label_2a5400:
    // 0x2a5400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a5400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5404: 0xc07c494  jal         func_1F1250
    ctx->pc = 0x2A5404u;
    SET_GPR_U32(ctx, 31, 0x2A540Cu);
    ctx->pc = 0x2A5408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5404u;
    // 0x2a5408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x2A5404u, 0x2A540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A540Cu;
label_2a540c:
    // 0x2a540c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5410: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2a5410u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2a5414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a5414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a5418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a541c: 0x24072800  addiu       $a3, $zero, 0x2800
    ctx->pc = 0x2a541cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x2a5420: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x2a5420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x2a5424: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2A5424u;
    SET_GPR_U32(ctx, 31, 0x2A542Cu);
    ctx->pc = 0x2A5428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5424u;
    // 0x2a5428: 0x35290400  ori         $t1, $t1, 0x400 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2A5424u, 0x2A542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A542Cu;
label_2a542c:
    // 0x2a542c: 0xae530048  sw          $s3, 0x48($s2)
    ctx->pc = 0x2a542cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 19));
label_2a5430:
    // 0x2a5430: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A5430u;
    SET_GPR_U32(ctx, 31, 0x2A5438u);
    ctx->pc = 0x2A5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5430u;
    // 0x2a5434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A5430u, 0x2A5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5438u;
label_2a5438:
    // 0x2a5438: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2a5438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x2a543c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A543Cu;
    {
        const bool branch_taken_0x2a543c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A543Cu;
        // 0x2a5440: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a543c) {
            ctx->pc = 0x2A54ECu;
            goto label_2a54ec;
        }
    }
    ctx->pc = 0x2A5444u;
    // 0x2a5444: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2a5448: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a5448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a544c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a5450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a5454: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2a5454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2a5458: 0xa384b85d  sb          $a0, -0x47A3($gp)
    ctx->pc = 0x2a5458u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948957), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a545c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2A545Cu;
    {
        const bool branch_taken_0x2a545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A545Cu;
        // 0x2a5460: 0xae450048  sw          $a1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a545c) {
            ctx->pc = 0x2A54ECu;
            goto label_2a54ec;
        }
    }
    ctx->pc = 0x2A5464u;
    // 0x2a5464: 0x0  nop
    ctx->pc = 0x2a5464u;
    // NOP
label_2a5468:
    // 0x2a5468: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A5468u;
    SET_GPR_U32(ctx, 31, 0x2A5470u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A5468u, 0x2A5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5470u;
label_2a5470:
    // 0x2a5470: 0x9384b85d  lbu         $a0, -0x47A3($gp)
    ctx->pc = 0x2a5470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948957)));
    // 0x2a5474: 0x1490001e  bne         $a0, $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A5474u;
    {
        const bool branch_taken_0x2a5474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x2A5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5474u;
        // 0x2a5478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5474) {
            ctx->pc = 0x2A54F0u;
            goto label_2a54f0;
        }
    }
    ctx->pc = 0x2A547Cu;
    // 0x2a547c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x2a547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2a5480: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a5480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a5484: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x2a5484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x2a5488: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a5488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a548c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2a548cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x2a5490: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2A5490u;
    {
        const bool branch_taken_0x2a5490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5490u;
        // 0x2a5494: 0xae430040  sw          $v1, 0x40($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5490) {
            ctx->pc = 0x2A54ECu;
            goto label_2a54ec;
        }
    }
    ctx->pc = 0x2A5498u;
label_2a5498:
    // 0x2a5498: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x2A5498u;
    SET_GPR_U32(ctx, 31, 0x2A54A0u);
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x2A5498u, 0x2A54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54A0u;
label_2a54a0:
    // 0x2a54a0: 0x9382b85e  lbu         $v0, -0x47A2($gp)
    ctx->pc = 0x2a54a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948958)));
    // 0x2a54a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A54A4u;
    {
        const bool branch_taken_0x2a54a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54A4u;
        // 0x2a54a8: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54a4) {
            ctx->pc = 0x2A54B8u;
            goto label_2a54b8;
        }
    }
    ctx->pc = 0x2A54ACu;
    // 0x2a54ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A54ACu;
    {
        const bool branch_taken_0x2a54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54ACu;
        // 0x2a54b0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54ac) {
            ctx->pc = 0x2A54C0u;
            goto label_2a54c0;
        }
    }
    ctx->pc = 0x2A54B4u;
    // 0x2a54b4: 0x0  nop
    ctx->pc = 0x2a54b4u;
    // NOP
label_2a54b8:
    // 0x2a54b8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a54b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a54bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a54bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a54c0:
    // 0x2a54c0: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2a54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2a54c4: 0x9383b85d  lbu         $v1, -0x47A3($gp)
    ctx->pc = 0x2a54c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294948957)));
    // 0x2a54c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a54cc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A54CCu;
    {
        const bool branch_taken_0x2a54cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54CCu;
        // 0x2a54d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54cc) {
            ctx->pc = 0x2A54F0u;
            goto label_2a54f0;
        }
    }
    ctx->pc = 0x2A54D4u;
    // 0x2a54d4: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x2a54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2a54d8: 0x28420168  slti        $v0, $v0, 0x168
    ctx->pc = 0x2a54d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x2a54dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A54DCu;
    {
        const bool branch_taken_0x2a54dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54DCu;
        // 0x2a54e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54dc) {
            ctx->pc = 0x2A54F0u;
            goto label_2a54f0;
        }
    }
    ctx->pc = 0x2A54E4u;
    // 0x2a54e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a54e8: 0xa382b85d  sb          $v0, -0x47A3($gp)
    ctx->pc = 0x2a54e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294948957), (uint8_t)GPR_U32(ctx, 2));
label_2a54ec:
    // 0x2a54ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a54ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a54f0:
    // 0x2a54f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a54f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a54f4:
    // 0x2a54f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a54f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a54f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a54f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a54fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a54fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a5500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5504: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5504u;
        // 0x2a5508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A550Cu;
    // 0x2a550c: 0x0  nop
    ctx->pc = 0x2a550cu;
    // NOP
    ctx->pc = 0x2a5510u;
}
