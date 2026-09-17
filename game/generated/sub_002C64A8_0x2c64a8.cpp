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

// Function: sub_002C64A8
// Address: 0x2c64a8 - 0x2c6680
void sub_002C64A8_0x2c64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C64A8_0x2c64a8");
#endif

    switch (ctx->pc) {
        case 0x2c64dcu: goto label_2c64dc;
        case 0x2c64e8u: goto label_2c64e8;
        case 0x2c64f0u: goto label_2c64f0;
        case 0x2c6558u: goto label_2c6558;
        case 0x2c6574u: goto label_2c6574;
        case 0x2c65c0u: goto label_2c65c0;
        case 0x2c65ccu: goto label_2c65cc;
        case 0x2c65d8u: goto label_2c65d8;
        case 0x2c65f4u: goto label_2c65f4;
        case 0x2c6608u: goto label_2c6608;
        case 0x2c6618u: goto label_2c6618;
        case 0x2c6628u: goto label_2c6628;
        case 0x2c6638u: goto label_2c6638;
        default: break;
    }

    ctx->pc = 0x2c64a8u;

    // 0x2c64a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c64a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2c64ac: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2c64acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x2c64b0: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2c64b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2c64b4: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2c64b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x2c64b8: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2c64b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x2c64bc: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2c64bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x2c64c0: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2c64c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2c64c4: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2c64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x2c64c8: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x2c64c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x2c64cc: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2c64ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x2c64d0: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x2c64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x2c64d4: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C64D4u;
    SET_GPR_U32(ctx, 31, 0x2C64DCu);
    ctx->pc = 0x2C64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C64D4u;
    // 0x2c64d8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C64D4u, 0x2C64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64DCu;
label_2c64dc:
    // 0x2c64dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c64dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64e0: 0xc09d480  jal         func_275200
    ctx->pc = 0x2C64E0u;
    SET_GPR_U32(ctx, 31, 0x2C64E8u);
    ctx->pc = 0x2C64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C64E0u;
    // 0x2c64e4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x2C64E0u, 0x2C64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64E8u;
label_2c64e8:
    // 0x2c64e8: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2C64E8u;
    SET_GPR_U32(ctx, 31, 0x2C64F0u);
    ctx->pc = 0x2C64ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C64E8u;
    // 0x2c64ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2C64E8u, 0x2C64F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64F0u;
label_2c64f0:
    // 0x2c64f0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2c64f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2c64f4: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2c64f4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c64f8: 0x24c323b0  addiu       $v1, $a2, 0x23B0
    ctx->pc = 0x2c64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 9136));
    // 0x2c64fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c6500: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2c6500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c6504: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6504u;
    {
        const bool branch_taken_0x2c6504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6504u;
        // 0x2c6508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6504) {
            ctx->pc = 0x2C6518u;
            goto label_2c6518;
        }
    }
    ctx->pc = 0x2C650Cu;
    // 0x2c650c: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x2c650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x2c6510: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6510u;
    {
        const bool branch_taken_0x2c6510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6510) {
            ctx->pc = 0x2C651Cu;
            goto label_2c651c;
        }
    }
    ctx->pc = 0x2C6518u;
label_2c6518:
    // 0x2c6518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c6518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c651c:
    // 0x2c651c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C651Cu;
    {
        const bool branch_taken_0x2c651c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C651Cu;
        // 0x2c6520: 0x24c223b0  addiu       $v0, $a2, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c651c) {
            ctx->pc = 0x2C6544u;
            goto label_2c6544;
        }
    }
    ctx->pc = 0x2C6524u;
    // 0x2c6524: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c6524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6528: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2c6528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c652c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C652Cu;
    {
        const bool branch_taken_0x2c652c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c652c) {
            ctx->pc = 0x2C6530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C652Cu;
            // 0x2c6530: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6544u;
            goto label_2c6544;
        }
    }
    ctx->pc = 0x2C6534u;
    // 0x2c6534: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c6534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c6538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c653c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C653Cu;
    {
        const bool branch_taken_0x2c653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c653c) {
            ctx->pc = 0x2C6540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C653Cu;
            // 0x2c6540: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6544u;
            goto label_2c6544;
        }
    }
    ctx->pc = 0x2C6544u;
label_2c6544:
    // 0x2c6544: 0x1a800043  blez        $s4, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C6544u;
    {
        const bool branch_taken_0x2c6544 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2C6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6544u;
        // 0x2c6548: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6544) {
            ctx->pc = 0x2C6654u;
            goto label_2c6654;
        }
    }
    ctx->pc = 0x2C654Cu;
    // 0x2c654c: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x2c654cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6550: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2c6550u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c6554: 0x0  nop
    ctx->pc = 0x2c6554u;
    // NOP
label_2c6558:
    // 0x2c6558: 0x8e300898  lw          $s0, 0x898($s1)
    ctx->pc = 0x2c6558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x2c655c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2c655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2c6560: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2C6560u;
    {
        const bool branch_taken_0x2c6560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6560u;
        // 0x2c6564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6560) {
            ctx->pc = 0x2C6644u;
            goto label_2c6644;
        }
    }
    ctx->pc = 0x2C6568u;
    // 0x2c6568: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c6568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c656c: 0xc0b179c  jal         func_2C5E70
    ctx->pc = 0x2C656Cu;
    SET_GPR_U32(ctx, 31, 0x2C6574u);
    ctx->pc = 0x2C6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C656Cu;
    // 0x2c6570: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5E70u, 0x2C656Cu, 0x2C6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6574u;
label_2c6574:
    // 0x2c6574: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x2c6574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2c6578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c657c: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2C657Cu;
    {
        const bool branch_taken_0x2c657c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C657Cu;
        // 0x2c6580: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c657c) {
            ctx->pc = 0x2C6640u;
            goto label_2c6640;
        }
    }
    ctx->pc = 0x2C6584u;
    // 0x2c6584: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6584u;
    {
        const bool branch_taken_0x2c6584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6584) {
            ctx->pc = 0x2C6588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6584u;
            // 0x2c6588: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C65A0u;
            goto label_2c65a0;
        }
    }
    ctx->pc = 0x2C658Cu;
    // 0x2c658c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C658Cu;
    {
        const bool branch_taken_0x2c658c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C658Cu;
        // 0x2c6590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c658c) {
            ctx->pc = 0x2C65B0u;
            goto label_2c65b0;
        }
    }
    ctx->pc = 0x2C6594u;
    // 0x2c6594: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C6594u;
    {
        const bool branch_taken_0x2c6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6594u;
        // 0x2c6598: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6594) {
            ctx->pc = 0x2C6648u;
            goto label_2c6648;
        }
    }
    ctx->pc = 0x2C659Cu;
    // 0x2c659c: 0x0  nop
    ctx->pc = 0x2c659cu;
    // NOP
label_2c65a0:
    // 0x2c65a0: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C65A0u;
    {
        const bool branch_taken_0x2c65a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65a0) {
            ctx->pc = 0x2C65A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C65A0u;
            // 0x2c65a4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6648u;
            goto label_2c6648;
        }
    }
    ctx->pc = 0x2C65A8u;
    // 0x2c65a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C65A8u;
    {
        const bool branch_taken_0x2c65a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65A8u;
        // 0x2c65ac: 0x8e220898  lw          $v0, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65a8) {
            ctx->pc = 0x2C65C4u;
            goto label_2c65c4;
        }
    }
    ctx->pc = 0x2C65B0u;
label_2c65b0:
    // 0x2c65b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c65b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c65b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65b8: 0xc097d1a  jal         func_25F468
    ctx->pc = 0x2C65B8u;
    SET_GPR_U32(ctx, 31, 0x2C65C0u);
    ctx->pc = 0x2C65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C65B8u;
    // 0x2c65bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F468u, 0x2C65B8u, 0x2C65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65C0u;
label_2c65c0:
    // 0x2c65c0: 0x8e220898  lw          $v0, 0x898($s1)
    ctx->pc = 0x2c65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_2c65c4:
    // 0x2c65c4: 0xc08c31a  jal         func_230C68
    ctx->pc = 0x2C65C4u;
    SET_GPR_U32(ctx, 31, 0x2C65CCu);
    ctx->pc = 0x2C65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C65C4u;
    // 0x2c65c8: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C68u, 0x2C65C4u, 0x2C65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65CCu;
label_2c65cc:
    // 0x2c65cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65d0: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x2C65D0u;
    SET_GPR_U32(ctx, 31, 0x2C65D8u);
    ctx->pc = 0x2C65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C65D0u;
    // 0x2c65d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x2C65D0u, 0x2C65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65D8u;
label_2c65d8:
    // 0x2c65d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c65d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65dc: 0x8e2208a0  lw          $v0, 0x8A0($s1)
    ctx->pc = 0x2c65dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x2c65e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C65E0u;
    {
        const bool branch_taken_0x2c65e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65E0u;
        // 0x2c65e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65e0) {
            ctx->pc = 0x2C6600u;
            goto label_2c6600;
        }
    }
    ctx->pc = 0x2C65E8u;
    // 0x2c65e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c65e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65ec: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2C65ECu;
    SET_GPR_U32(ctx, 31, 0x2C65F4u);
    ctx->pc = 0x2C65F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C65ECu;
    // 0x2c65f0: 0x26260720  addiu       $a2, $s1, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2C65ECu, 0x2C65F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65F4u;
label_2c65f4:
    // 0x2c65f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C65F4u;
    {
        const bool branch_taken_0x2c65f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C65F4u;
        // 0x2c65f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c65f4) {
            ctx->pc = 0x2C660Cu;
            goto label_2c660c;
        }
    }
    ctx->pc = 0x2C65FCu;
    // 0x2c65fc: 0x0  nop
    ctx->pc = 0x2c65fcu;
    // NOP
label_2c6600:
    // 0x2c6600: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2C6600u;
    SET_GPR_U32(ctx, 31, 0x2C6608u);
    ctx->pc = 0x2C6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6600u;
    // 0x2c6604: 0x26250720  addiu       $a1, $s1, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2C6600u, 0x2C6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6608u;
label_2c6608:
    // 0x2c6608: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c6608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c660c:
    // 0x2c660c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c660cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6610: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2C6610u;
    SET_GPR_U32(ctx, 31, 0x2C6618u);
    ctx->pc = 0x2C6614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6610u;
    // 0x2c6614: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2C6610u, 0x2C6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6618u;
label_2c6618:
    // 0x2c6618: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c6618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c661c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6620: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2C6620u;
    SET_GPR_U32(ctx, 31, 0x2C6628u);
    ctx->pc = 0x2C6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6620u;
    // 0x2c6624: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2C6620u, 0x2C6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6628u;
label_2c6628:
    // 0x2c6628: 0x8e240898  lw          $a0, 0x898($s1)
    ctx->pc = 0x2c6628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x2c662c: 0x26660080  addiu       $a2, $s3, 0x80
    ctx->pc = 0x2c662cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x2c6630: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2C6630u;
    SET_GPR_U32(ctx, 31, 0x2C6638u);
    ctx->pc = 0x2C6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6630u;
    // 0x2c6634: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2C6630u, 0x2C6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6638u;
label_2c6638:
    // 0x2c6638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6638u;
    {
        const bool branch_taken_0x2c6638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6638u;
        // 0x2c663c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6638) {
            ctx->pc = 0x2C6648u;
            goto label_2c6648;
        }
    }
    ctx->pc = 0x2C6640u;
label_2c6640:
    // 0x2c6640: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2c6640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2c6644:
    // 0x2c6644: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2c6644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2c6648:
    // 0x2c6648: 0x1e80ffc3  bgtz        $s4, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2C6648u;
    {
        const bool branch_taken_0x2c6648 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x2C664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6648u;
        // 0x2c664c: 0x263108d0  addiu       $s1, $s1, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6648) {
            ctx->pc = 0x2C6558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6558;
        }
    }
    ctx->pc = 0x2C6650u;
    // 0x2c6650: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2c6650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2c6654:
    // 0x2c6654: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2c6654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2c6658: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2c6658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c665c: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x2c665cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2c6660: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x2c6660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c6664: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x2c6664u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2c6668: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x2c6668u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c666c: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x2c666cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2c6670: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x2c6670u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c6674: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x2c6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2c6678: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6678u;
        // 0x2c667c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6680u;
}
