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

// Function: sub_0010D2B0
// Address: 0x10d2b0 - 0x10d440
void sub_0010D2B0_0x10d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D2B0_0x10d2b0");
#endif

    switch (ctx->pc) {
        case 0x10d2fcu: goto label_10d2fc;
        case 0x10d340u: goto label_10d340;
        case 0x10d350u: goto label_10d350;
        case 0x10d3c0u: goto label_10d3c0;
        case 0x10d400u: goto label_10d400;
        case 0x10d410u: goto label_10d410;
        case 0x10d420u: goto label_10d420;
        default: break;
    }

    ctx->pc = 0x10d2b0u;

    // 0x10d2b0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x10d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x10d2b4: 0x8043cf4  j           func_10F3D0
    ctx->pc = 0x10D2B4u;
    ctx->pc = 0x10D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2B4u;
    // 0x10d2b8: 0x8c4410b8  lw          $a0, 0x10B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3D0u;
    sub_0010F3D0_0x10f3d0(rdram, ctx, runtime); return;
    ctx->pc = 0x10D2BCu;
    // 0x10d2bc: 0x0  nop
    ctx->pc = 0x10d2bcu;
    // NOP
    // 0x10d2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d2c4: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x10d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x10d2c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10d2cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d2d0: 0x24716540  addiu       $s1, $v1, 0x6540
    ctx->pc = 0x10d2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x10d2d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d2d8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10d2dc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1E6564u));
    // 0x10d2e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D2E0u;
    {
        const bool branch_taken_0x10d2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2E0u;
        // 0x10d2e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2e0) {
            ctx->pc = 0x10D2F0u;
            goto label_10d2f0;
        }
    }
    ctx->pc = 0x10D2E8u;
    // 0x10d2e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10D2E8u;
    {
        const bool branch_taken_0x10d2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2E8u;
        // 0x10d2ec: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2e8) {
            ctx->pc = 0x10D364u;
            goto label_10d364;
        }
    }
    ctx->pc = 0x10D2F0u;
label_10d2f0:
    // 0x10d2f0: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x10d2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x10d2f4: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x10D2F4u;
    SET_GPR_U32(ctx, 31, 0x10D2FCu);
    ctx->pc = 0x10D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D2F4u;
    // 0x10d2f8: 0x8e4410b4  lw          $a0, 0x10B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x10D2F4u, 0x10D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D2FCu;
label_10d2fc:
    // 0x10d2fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D2FCu;
    {
        const bool branch_taken_0x10d2fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2FCu;
        // 0x10d300: 0x3c07001e  lui         $a3, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2fc) {
            ctx->pc = 0x10D30Cu;
            goto label_10d30c;
        }
    }
    ctx->pc = 0x10D304u;
    // 0x10d304: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10D304u;
    {
        const bool branch_taken_0x10d304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D304u;
        // 0x10d308: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d304) {
            ctx->pc = 0x10D364u;
            goto label_10d364;
        }
    }
    ctx->pc = 0x10D30Cu;
label_10d30c:
    // 0x10d30c: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x10d30cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x10d310: 0x24e765c0  addiu       $a3, $a3, 0x65C0
    ctx->pc = 0x10d310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26048));
    // 0x10d314: 0x3c0b0011  lui         $t3, 0x11
    ctx->pc = 0x10d314u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17 << 16));
    // 0x10d318: 0xacf00014  sw          $s0, 0x14($a3)
    ctx->pc = 0x10d318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 16));
    // 0x10d31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d320: 0x25297b00  addiu       $t1, $t1, 0x7B00
    ctx->pc = 0x10d320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31488));
    // 0x10d324: 0x256bd2b0  addiu       $t3, $t3, -0x2D50
    ctx->pc = 0x10d324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955696));
    // 0x10d328: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d32c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10d330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10d330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d334: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x10d334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10d338: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x10D338u;
    SET_GPR_U32(ctx, 31, 0x10D340u);
    ctx->pc = 0x10D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D338u;
    // 0x10d33c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x10D338u, 0x10D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D340u;
label_10d340:
    // 0x10d340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D340u;
    {
        const bool branch_taken_0x10d340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D340u;
        // 0x10d344: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d340) {
            ctx->pc = 0x10D358u;
            goto label_10d358;
        }
    }
    ctx->pc = 0x10D348u;
    // 0x10d348: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x10D348u;
    SET_GPR_U32(ctx, 31, 0x10D350u);
    ctx->pc = 0x10D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D348u;
    // 0x10d34c: 0x8e4410b4  lw          $a0, 0x10B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x10D348u, 0x10D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D350u;
label_10d350:
    // 0x10d350: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D350u;
    {
        const bool branch_taken_0x10d350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D350u;
        // 0x10d354: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d350) {
            ctx->pc = 0x10D364u;
            goto label_10d364;
        }
    }
    ctx->pc = 0x10D358u;
label_10d358:
    // 0x10d358: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x10d358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x10d35c: 0xac6210b0  sw          $v0, 0x10B0($v1)
    ctx->pc = 0x10d35cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1310B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1310B0u, _value); } while (0);
    // 0x10d360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d364:
    // 0x10d364: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d368: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10d368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d36c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10d36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d370: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d374: 0x3e00008  jr          $ra
    ctx->pc = 0x10D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D374u;
        // 0x10d378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D37Cu;
    // 0x10d37c: 0x0  nop
    ctx->pc = 0x10d37cu;
    // NOP
    // 0x10d380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10d384: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x10d384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x10d388: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10d388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10d38c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10d38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10d390: 0x24726540  addiu       $s2, $v1, 0x6540
    ctx->pc = 0x10d390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x10d394: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10d398: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10d39c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10d39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10d3a0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1E6564u));
    // 0x10d3a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D3A4u;
    {
        const bool branch_taken_0x10d3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3A4u;
        // 0x10d3a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3a4) {
            ctx->pc = 0x10D3B4u;
            goto label_10d3b4;
        }
    }
    ctx->pc = 0x10D3ACu;
    // 0x10d3ac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x10D3ACu;
    {
        const bool branch_taken_0x10d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3ACu;
        // 0x10d3b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3ac) {
            ctx->pc = 0x10D424u;
            goto label_10d424;
        }
    }
    ctx->pc = 0x10D3B4u;
label_10d3b4:
    // 0x10d3b4: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x10d3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x10d3b8: 0xc043cfc  jal         func_10F3F0
    ctx->pc = 0x10D3B8u;
    SET_GPR_U32(ctx, 31, 0x10D3C0u);
    ctx->pc = 0x10D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3B8u;
    // 0x10d3bc: 0x8e0410b4  lw          $a0, 0x10B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3F0u, 0x10D3B8u, 0x10D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3C0u;
label_10d3c0:
    // 0x10d3c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D3C0u;
    {
        const bool branch_taken_0x10d3c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C0u;
        // 0x10d3c4: 0x3c07001e  lui         $a3, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c0) {
            ctx->pc = 0x10D3D0u;
            goto label_10d3d0;
        }
    }
    ctx->pc = 0x10D3C8u;
    // 0x10d3c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x10D3C8u;
    {
        const bool branch_taken_0x10d3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3C8u;
        // 0x10d3cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3c8) {
            ctx->pc = 0x10D424u;
            goto label_10d424;
        }
    }
    ctx->pc = 0x10D3D0u;
label_10d3d0:
    // 0x10d3d0: 0x3c13001e  lui         $s3, 0x1E
    ctx->pc = 0x10d3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)30 << 16));
    // 0x10d3d4: 0x24e765c0  addiu       $a3, $a3, 0x65C0
    ctx->pc = 0x10d3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26048));
    // 0x10d3d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3dc: 0xacf10004  sw          $s1, 0x4($a3)
    ctx->pc = 0x10d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 17));
    // 0x10d3e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x10d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x10d3e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10d3e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10d3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3ec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x10d3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10d3f0: 0x26697b00  addiu       $t1, $s3, 0x7B00
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 31488));
    // 0x10d3f4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10d3f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d3f8: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x10D3F8u;
    SET_GPR_U32(ctx, 31, 0x10D400u);
    ctx->pc = 0x10D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3F8u;
    // 0x10d3fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x10D3F8u, 0x10D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D400u;
label_10d400:
    // 0x10d400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D400u;
    {
        const bool branch_taken_0x10d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d400) {
            ctx->pc = 0x10D418u;
            goto label_10d418;
        }
    }
    ctx->pc = 0x10D408u;
    // 0x10d408: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x10D408u;
    SET_GPR_U32(ctx, 31, 0x10D410u);
    ctx->pc = 0x10D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D408u;
    // 0x10d40c: 0x8e0410b4  lw          $a0, 0x10B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x10D408u, 0x10D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D410u;
label_10d410:
    // 0x10d410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D410u;
    {
        const bool branch_taken_0x10d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D410u;
        // 0x10d414: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d410) {
            ctx->pc = 0x10D424u;
            goto label_10d424;
        }
    }
    ctx->pc = 0x10D418u;
label_10d418:
    // 0x10d418: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x10D418u;
    SET_GPR_U32(ctx, 31, 0x10D420u);
    ctx->pc = 0x10D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D418u;
    // 0x10d41c: 0x8e0410b4  lw          $a0, 0x10B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x10D418u, 0x10D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D420u;
label_10d420:
    // 0x10d420: 0x8e627b00  lw          $v0, 0x7B00($s3)
    ctx->pc = 0x10d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31488)));
label_10d424:
    // 0x10d424: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10d424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d428: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10d428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d42c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10d42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d430: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10d430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d434: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d438: 0x3e00008  jr          $ra
    ctx->pc = 0x10D438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D438u;
        // 0x10d43c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D440u;
}
