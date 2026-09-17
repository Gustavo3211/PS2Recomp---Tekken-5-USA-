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

// Function: sub_00123300
// Address: 0x123300 - 0x123588
void sub_00123300_0x123300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123300_0x123300");
#endif

    switch (ctx->pc) {
        case 0x123338u: goto label_123338;
        case 0x123348u: goto label_123348;
        case 0x123420u: goto label_123420;
        case 0x123430u: goto label_123430;
        case 0x123440u: goto label_123440;
        case 0x123454u: goto label_123454;
        case 0x1234c8u: goto label_1234c8;
        case 0x123520u: goto label_123520;
        case 0x12355cu: goto label_12355c;
        default: break;
    }

    ctx->pc = 0x123300u;

    // 0x123300: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x123304: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x123304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x123308: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x123308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12330c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x12330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x123310: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x123310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x123314: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x123314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x123318: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x123318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x12331c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x12331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x123320: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x123320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x123324: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x123324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x123328: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x123328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x12332c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x12332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x123330: 0xc049ca4  jal         func_127290
    ctx->pc = 0x123330u;
    SET_GPR_U32(ctx, 31, 0x123338u);
    ctx->pc = 0x123334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123330u;
    // 0x123334: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x123330u, 0x123338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123338u;
label_123338:
    // 0x123338: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12333c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x123340: 0xc049ca4  jal         func_127290
    ctx->pc = 0x123340u;
    SET_GPR_U32(ctx, 31, 0x123348u);
    ctx->pc = 0x123344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123340u;
    // 0x123344: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x123340u, 0x123348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123348u;
label_123348:
    // 0x123348: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x123348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12334c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x12334cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x123350: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x123350u;
    {
        const bool branch_taken_0x123350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123350u;
        // 0x123354: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123350) {
            ctx->pc = 0x1233B4u;
            goto label_1233b4;
        }
    }
    ctx->pc = 0x123358u;
    // 0x123358: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x123358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12335c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x12335cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x123360: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x123360u;
    {
        const bool branch_taken_0x123360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123360) {
            ctx->pc = 0x123364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123360u;
            // 0x123364: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1233DCu;
            goto label_1233dc;
        }
    }
    ctx->pc = 0x123368u;
    // 0x123368: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x123368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x12336c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12336Cu;
    {
        const bool branch_taken_0x12336c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12336Cu;
        // 0x123370: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12336c) {
            ctx->pc = 0x123388u;
            goto label_123388;
        }
    }
    ctx->pc = 0x123374u;
    // 0x123374: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x123374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x123378: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x123378u;
    {
        const bool branch_taken_0x123378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123378) {
            ctx->pc = 0x12337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123378u;
            // 0x12337c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1233B4u;
            goto label_1233b4;
        }
    }
    ctx->pc = 0x123380u;
    // 0x123380: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x123380u;
    {
        const bool branch_taken_0x123380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123380u;
        // 0x123384: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123380) {
            ctx->pc = 0x12339Cu;
            goto label_12339c;
        }
    }
    ctx->pc = 0x123388u;
label_123388:
    // 0x123388: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123388u;
    {
        const bool branch_taken_0x123388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123388u;
        // 0x12338c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123388) {
            ctx->pc = 0x1233A8u;
            goto label_1233a8;
        }
    }
    ctx->pc = 0x123390u;
    // 0x123390: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x123390u;
    {
        const bool branch_taken_0x123390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123390) {
            ctx->pc = 0x123394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123390u;
            // 0x123394: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1233DCu;
            goto label_1233dc;
        }
    }
    ctx->pc = 0x123398u;
    // 0x123398: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x123398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_12339c:
    // 0x12339c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x12339Cu;
    {
        const bool branch_taken_0x12339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12339Cu;
        // 0x1233a0: 0x2444f208  addiu       $a0, $v0, -0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12339c) {
            ctx->pc = 0x123554u;
            goto label_123554;
        }
    }
    ctx->pc = 0x1233A4u;
    // 0x1233a4: 0x0  nop
    ctx->pc = 0x1233a4u;
    // NOP
label_1233a8:
    // 0x1233a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1233A8u;
    {
        const bool branch_taken_0x1233a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1233ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233A8u;
        // 0x1233ac: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233a8) {
            ctx->pc = 0x1233D0u;
            goto label_1233d0;
        }
    }
    ctx->pc = 0x1233B0u;
    // 0x1233b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1233b4:
    // 0x1233b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1233b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233b8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1233b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1233bc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1233bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1233c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1233c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1233c4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1233C4u;
    {
        const bool branch_taken_0x1233c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233C4u;
        // 0x1233c8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233c4) {
            ctx->pc = 0x123554u;
            goto label_123554;
        }
    }
    ctx->pc = 0x1233CCu;
    // 0x1233cc: 0x0  nop
    ctx->pc = 0x1233ccu;
    // NOP
label_1233d0:
    // 0x1233d0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1233D0u;
    {
        const bool branch_taken_0x1233d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1233D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233D0u;
        // 0x1233d4: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233d0) {
            ctx->pc = 0x1233F8u;
            goto label_1233f8;
        }
    }
    ctx->pc = 0x1233D8u;
    // 0x1233d8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1233d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1233dc:
    // 0x1233dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1233dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1233e4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1233e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1233e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1233e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1233ec: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1233ECu;
    {
        const bool branch_taken_0x1233ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233ECu;
        // 0x1233f0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233ec) {
            ctx->pc = 0x123554u;
            goto label_123554;
        }
    }
    ctx->pc = 0x1233F4u;
    // 0x1233f4: 0x0  nop
    ctx->pc = 0x1233f4u;
    // NOP
label_1233f8:
    // 0x1233f8: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1233f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x1233fc: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x1233fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x123400: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x123400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123404: 0x2758024  and         $s0, $s3, $s5
    ctx->pc = 0x123404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x123408: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x123408u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x12340c: 0x255b024  and         $s6, $s2, $s5
    ctx->pc = 0x12340cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x123410: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x123410u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x123414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123418: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x123418u;
    SET_GPR_U32(ctx, 31, 0x123420u);
    ctx->pc = 0x12341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123418u;
    // 0x12341c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x123418u, 0x123420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123420u;
label_123420:
    // 0x123420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123428: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x123428u;
    SET_GPR_U32(ctx, 31, 0x123430u);
    ctx->pc = 0x12342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123428u;
    // 0x12342c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x123428u, 0x123430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123430u;
label_123430:
    // 0x123430: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x123430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123438: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x123438u;
    SET_GPR_U32(ctx, 31, 0x123440u);
    ctx->pc = 0x12343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123438u;
    // 0x12343c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x123438u, 0x123440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123440u;
label_123440:
    // 0x123440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x123444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123448: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x123448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12344c: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x12344Cu;
    SET_GPR_U32(ctx, 31, 0x123454u);
    ctx->pc = 0x123450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12344Cu;
    // 0x123450: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x12344Cu, 0x123454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123454u;
label_123454:
    // 0x123454: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x123454u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x123458: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x123458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12345c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12345cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x123460: 0x286302d  daddu       $a2, $s4, $a2
    ctx->pc = 0x123460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
    // 0x123464: 0x2158024  and         $s0, $s0, $s5
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
    // 0x123468: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x123468u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x12346c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x12346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x123470: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x123474: 0xd4a02b  sltu        $s4, $a2, $s4
    ctx->pc = 0x123474u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x123478: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12347c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x12347cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123480: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x123480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
    // 0x123484: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x123484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x123488: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x123488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x12348c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x123490: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x123490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123494: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x123494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x123498: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x123498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x12349c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1234a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1234a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1234a4: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1234a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1234a8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1234a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1234ac: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1234ACu;
    {
        const bool branch_taken_0x1234ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234ACu;
        // 0x1234b0: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234ac) {
            ctx->pc = 0x1234F4u;
            goto label_1234f4;
        }
    }
    ctx->pc = 0x1234B4u;
    // 0x1234b4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1234b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1234b8: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1234b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1234bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1234bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1234c0: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x1234c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
    // 0x1234c4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1234c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1234c8:
    // 0x1234c8: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1234c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x1234cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1234ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1234d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1234d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1234d4: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x1234d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1234d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1234D8u;
    {
        const bool branch_taken_0x1234d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234D8u;
        // 0x1234dc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234d8) {
            ctx->pc = 0x1234E8u;
            goto label_1234e8;
        }
    }
    ctx->pc = 0x1234E0u;
    // 0x1234e0: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1234e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x1234e4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1234e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1234e8:
    // 0x1234e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1234E8u;
    {
        const bool branch_taken_0x1234e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1234ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E8u;
        // 0x1234ec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234e8) {
            ctx->pc = 0x1234C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1234c8;
        }
    }
    ctx->pc = 0x1234F0u;
    // 0x1234f0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1234f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1234f4:
    // 0x1234f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1234f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1234f8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1234f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1234fc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1234fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x123500: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x123500u;
    {
        const bool branch_taken_0x123500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123500u;
        // 0x123504: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123500) {
            ctx->pc = 0x123548u;
            goto label_123548;
        }
    }
    ctx->pc = 0x123508u;
    // 0x123508: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x123508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12350c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x12350cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x123510: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x123510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x123514: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x123514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123518: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12351c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x12351cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_123520:
    // 0x123520: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x123520u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x123524: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x123524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x123528: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x123528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x12352c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x12352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x123530: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x123530u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x123534: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x123534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x123538: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x123538u;
    {
        const bool branch_taken_0x123538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123538u;
        // 0x12353c: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123538) {
            ctx->pc = 0x123520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123520;
        }
    }
    ctx->pc = 0x123540u;
    // 0x123540: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x123540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x123544: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x123544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_123548:
    // 0x123548: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x123548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x12354c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12354cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x123550: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x123550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_123554:
    // 0x123554: 0xc049c6e  jal         func_1271B8
    ctx->pc = 0x123554u;
    SET_GPR_U32(ctx, 31, 0x12355Cu);
    ctx->pc = 0x1271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271B8u, 0x123554u, 0x12355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12355Cu;
label_12355c:
    // 0x12355c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12355cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123560: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x123560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123564: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x123564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x123568: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x123568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12356c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x12356cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x123570: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x123570u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x123574: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x123574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x123578: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x123578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x12357c: 0x3e00008  jr          $ra
    ctx->pc = 0x12357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12357Cu;
        // 0x123580: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123584u;
    // 0x123584: 0x0  nop
    ctx->pc = 0x123584u;
    // NOP
    ctx->pc = 0x123588u;
}
