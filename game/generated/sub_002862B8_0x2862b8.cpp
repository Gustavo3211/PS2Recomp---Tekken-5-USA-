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

// Function: sub_002862B8
// Address: 0x2862b8 - 0x2863c8
void sub_002862B8_0x2862b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002862B8_0x2862b8");
#endif

    switch (ctx->pc) {
        case 0x286308u: goto label_286308;
        case 0x28631cu: goto label_28631c;
        case 0x286384u: goto label_286384;
        case 0x2863a0u: goto label_2863a0;
        case 0x2863b0u: goto label_2863b0;
        default: break;
    }

    ctx->pc = 0x2862b8u;

    // 0x2862b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2862bc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2862bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2862c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2862c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2862c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2862c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2862cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2862ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2862d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2862d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2862D4u;
    {
        const bool branch_taken_0x2862d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2862D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862D4u;
        // 0x2862d8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862d4) {
            ctx->pc = 0x286328u;
            goto label_286328;
        }
    }
    ctx->pc = 0x2862DCu;
    // 0x2862dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2862e0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2862e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2862e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2862e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2862e8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2862e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2862ec: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2862ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2862f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2862f4: 0x24a55ee0  addiu       $a1, $a1, 0x5EE0
    ctx->pc = 0x2862f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24288));
    // 0x2862f8: 0x7c2021  addu        $a0, $v1, $gp
    ctx->pc = 0x2862f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 28)));
    // 0x2862fc: 0x8c84b318  lw          $a0, -0x4CE8($a0)
    ctx->pc = 0x2862fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947608)));
    // 0x286300: 0xc0d468c  jal         func_351A30
    ctx->pc = 0x286300u;
    SET_GPR_U32(ctx, 31, 0x286308u);
    ctx->pc = 0x286304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286300u;
    // 0x286304: 0x26060034  addiu       $a2, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351A30u, 0x286300u, 0x286308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286308u;
label_286308:
    // 0x286308: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x286308u;
    {
        const bool branch_taken_0x286308 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286308u;
        // 0x28630c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286308) {
            ctx->pc = 0x2863B0u;
            goto label_2863b0;
        }
    }
    ctx->pc = 0x286310u;
    // 0x286310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286314: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286314u;
    SET_GPR_U32(ctx, 31, 0x28631Cu);
    ctx->pc = 0x286318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286314u;
    // 0x286318: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286314u, 0x28631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28631Cu;
label_28631c:
    // 0x28631c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x28631Cu;
    {
        const bool branch_taken_0x28631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28631Cu;
        // 0x286320: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28631c) {
            ctx->pc = 0x2863B4u;
            goto label_2863b4;
        }
    }
    ctx->pc = 0x286324u;
    // 0x286324: 0x0  nop
    ctx->pc = 0x286324u;
    // NOP
label_286328:
    // 0x286328: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28632c: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x286330: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286334: 0x50e2001f  beql        $a3, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x286334u;
    {
        const bool branch_taken_0x286334 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x286334) {
            ctx->pc = 0x286338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286334u;
            // 0x286338: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2863B4u;
            goto label_2863b4;
        }
    }
    ctx->pc = 0x28633Cu;
    // 0x28633c: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x28633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x286340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286344: 0x2786b300  addiu       $a2, $gp, -0x4D00
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947584));
    // 0x286348: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x286348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28634c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x286350: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286350u;
    {
        const bool branch_taken_0x286350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x286354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286350u;
        // 0x286354: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286350) {
            ctx->pc = 0x286370u;
            goto label_286370;
        }
    }
    ctx->pc = 0x286358u;
    // 0x286358: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x286358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28635c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28635cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286364: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286364u;
    ctx->pc = 0x286368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286364u;
    // 0x286368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x28636Cu;
    // 0x28636c: 0x0  nop
    ctx->pc = 0x28636cu;
    // NOP
label_286370:
    // 0x286370: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x286370u;
    {
        const bool branch_taken_0x286370 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x286374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286370u;
        // 0x286374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286370) {
            ctx->pc = 0x286390u;
            goto label_286390;
        }
    }
    ctx->pc = 0x286378u;
    // 0x286378: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x286378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28637c: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x28637Cu;
    SET_GPR_U32(ctx, 31, 0x286384u);
    ctx->pc = 0x286380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28637Cu;
    // 0x286380: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x28637Cu, 0x286384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286384u;
label_286384:
    // 0x286384: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x286384u;
    {
        const bool branch_taken_0x286384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286384u;
        // 0x286388: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286384) {
            ctx->pc = 0x2863B4u;
            goto label_2863b4;
        }
    }
    ctx->pc = 0x28638Cu;
    // 0x28638c: 0x0  nop
    ctx->pc = 0x28638cu;
    // NOP
label_286390:
    // 0x286390: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286390u;
    {
        const bool branch_taken_0x286390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x286390) {
            ctx->pc = 0x2863A8u;
            goto label_2863a8;
        }
    }
    ctx->pc = 0x286398u;
    // 0x286398: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286398u;
    SET_GPR_U32(ctx, 31, 0x2863A0u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286398u, 0x2863A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863A0u;
label_2863a0:
    // 0x2863a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2863A0u;
    {
        const bool branch_taken_0x2863a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2863A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863A0u;
        // 0x2863a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863a0) {
            ctx->pc = 0x2863B4u;
            goto label_2863b4;
        }
    }
    ctx->pc = 0x2863A8u;
label_2863a8:
    // 0x2863a8: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x2863A8u;
    SET_GPR_U32(ctx, 31, 0x2863B0u);
    ctx->pc = 0x2863ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863A8u;
    // 0x2863ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x2863A8u, 0x2863B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863B0u;
label_2863b0:
    // 0x2863b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2863b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2863b4:
    // 0x2863b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2863b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2863b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2863b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2863bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2863BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863BCu;
        // 0x2863c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2863BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2863C4u;
    // 0x2863c4: 0x0  nop
    ctx->pc = 0x2863c4u;
    // NOP
    ctx->pc = 0x2863c8u;
}
