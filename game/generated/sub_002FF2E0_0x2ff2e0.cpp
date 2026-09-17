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

// Function: sub_002FF2E0
// Address: 0x2ff2e0 - 0x2ff580
void sub_002FF2E0_0x2ff2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF2E0_0x2ff2e0");
#endif

    switch (ctx->pc) {
        case 0x2ff320u: goto label_2ff320;
        case 0x2ff340u: goto label_2ff340;
        case 0x2ff348u: goto label_2ff348;
        case 0x2ff430u: goto label_2ff430;
        case 0x2ff460u: goto label_2ff460;
        case 0x2ff4b4u: goto label_2ff4b4;
        case 0x2ff4d4u: goto label_2ff4d4;
        case 0x2ff500u: goto label_2ff500;
        default: break;
    }

    ctx->pc = 0x2ff2e0u;

    // 0x2ff2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ff2e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ff2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ff2e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ff2e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ff2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ff2f0: 0x26910070  addiu       $s1, $s4, 0x70
    ctx->pc = 0x2ff2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x2ff2f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ff2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2ff2f8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2ff2f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff2fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff300: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2ff300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ff308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ff30c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ff30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ff310: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ff310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ff314: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ff314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2ff318: 0xc0c0106  jal         func_300418
    ctx->pc = 0x2FF318u;
    SET_GPR_U32(ctx, 31, 0x2FF320u);
    ctx->pc = 0x2FF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF318u;
    // 0x2ff31c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300418u, 0x2FF318u, 0x2FF320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF320u;
label_2ff320:
    // 0x2ff320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff324: 0x1443008b  bne         $v0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x2FF324u;
    {
        const bool branch_taken_0x2ff324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF324u;
        // 0x2ff328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff324) {
            ctx->pc = 0x2FF554u;
            goto label_2ff554;
        }
    }
    ctx->pc = 0x2FF32Cu;
    // 0x2ff32c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ff32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ff330: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FF330u;
    {
        const bool branch_taken_0x2ff330 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF330u;
        // 0x2ff334: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff330) {
            ctx->pc = 0x2FF3C4u;
            goto label_2ff3c4;
        }
    }
    ctx->pc = 0x2FF338u;
    // 0x2ff338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ff338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff33c: 0x0  nop
    ctx->pc = 0x2ff33cu;
    // NOP
label_2ff340:
    // 0x2ff340: 0xc0c0e16  jal         func_303858
    ctx->pc = 0x2FF340u;
    SET_GPR_U32(ctx, 31, 0x2FF348u);
    ctx->pc = 0x2FF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF340u;
    // 0x2ff344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303858u, 0x2FF340u, 0x2FF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF348u;
label_2ff348:
    // 0x2ff348: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2ff348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ff34c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2ff34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ff350: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ff350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ff354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ff354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ff358: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x2ff358u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ff35c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x2ff35cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ff360: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ff360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ff364: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FF364u;
    {
        const bool branch_taken_0x2ff364 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF364u;
        // 0x2ff368: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff364) {
            ctx->pc = 0x2FF3B4u;
            goto label_2ff3b4;
        }
    }
    ctx->pc = 0x2FF36Cu;
    // 0x2ff36c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x2ff36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2ff370: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2ff370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ff374: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ff374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ff378: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ff378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ff37c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2ff37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2ff380: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ff380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ff384: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x2ff384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x2ff388: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2ff388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ff38c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ff38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ff390: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2ff390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2ff394: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2ff394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2ff398: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ff398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ff39c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2ff39cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2ff3a0: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x2ff3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2ff3a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2ff3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ff3a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2ff3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ff3ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ff3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ff3b0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2ff3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2ff3b4:
    // 0x2ff3b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ff3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ff3b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ff3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ff3bc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2FF3BCu;
    {
        const bool branch_taken_0x2ff3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3BCu;
        // 0x2ff3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3bc) {
            ctx->pc = 0x2FF340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff340;
        }
    }
    ctx->pc = 0x2FF3C4u;
label_2ff3c4:
    // 0x2ff3c4: 0x8e93006c  lw          $s3, 0x6C($s4)
    ctx->pc = 0x2ff3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x2ff3c8: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FF3C8u;
    {
        const bool branch_taken_0x2ff3c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3C8u;
        // 0x2ff3cc: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3c8) {
            ctx->pc = 0x2FF4C8u;
            goto label_2ff4c8;
        }
    }
    ctx->pc = 0x2FF3D0u;
    // 0x2ff3d0: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2ff3d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ff3d4: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FF3D4u;
    {
        const bool branch_taken_0x2ff3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff3d4) {
            ctx->pc = 0x2FF3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF3D4u;
            // 0x2ff3d8: 0x8e6b0000  lw          $t3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF420u;
            goto label_2ff420;
        }
    }
    ctx->pc = 0x2FF3DCu;
    // 0x2ff3dc: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x2ff3dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2ff3e0: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x2ff3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2ff3e4: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FF3E4u;
    {
        const bool branch_taken_0x2ff3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff3e4) {
            ctx->pc = 0x2FF3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF3E4u;
            // 0x2ff3e8: 0x8e6b0000  lw          $t3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF420u;
            goto label_2ff420;
        }
    }
    ctx->pc = 0x2FF3ECu;
    // 0x2ff3ec: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x2ff3ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2ff3f0: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x2ff3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2ff3f4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FF3F4u;
    {
        const bool branch_taken_0x2ff3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff3f4) {
            ctx->pc = 0x2FF3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF3F4u;
            // 0x2ff3f8: 0x8e6b0000  lw          $t3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF420u;
            goto label_2ff420;
        }
    }
    ctx->pc = 0x2FF3FCu;
    // 0x2ff3fc: 0x82620003  lb          $v0, 0x3($s3)
    ctx->pc = 0x2ff3fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2ff400: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF400u;
    {
        const bool branch_taken_0x2ff400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ff400) {
            ctx->pc = 0x2FF404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF400u;
            // 0x2ff404: 0x8e6b0000  lw          $t3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF420u;
            goto label_2ff420;
        }
    }
    ctx->pc = 0x2FF408u;
    // 0x2ff408: 0x82630004  lb          $v1, 0x4($s3)
    ctx->pc = 0x2ff408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ff40c: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x2ff40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x2ff410: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF410u;
    {
        const bool branch_taken_0x2ff410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff410) {
            ctx->pc = 0x2FF414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF410u;
            // 0x2ff414: 0x8e6b0000  lw          $t3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF420u;
            goto label_2ff420;
        }
    }
    ctx->pc = 0x2FF418u;
    // 0x2ff418: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2FF418u;
    {
        const bool branch_taken_0x2ff418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF418u;
        // 0x2ff41c: 0xae80006c  sw          $zero, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff418) {
            ctx->pc = 0x2FF4C8u;
            goto label_2ff4c8;
        }
    }
    ctx->pc = 0x2FF420u;
label_2ff420:
    // 0x2ff420: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x2ff420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ff424: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2ff424u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff428: 0x19600027  blez        $t3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2FF428u;
    {
        const bool branch_taken_0x2ff428 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2FF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF428u;
        // 0x2ff42c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff428) {
            ctx->pc = 0x2FF4C8u;
            goto label_2ff4c8;
        }
    }
    ctx->pc = 0x2FF430u;
label_2ff430:
    // 0x2ff430: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ff430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ff434: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ff434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ff438: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2ff438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2ff43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff440: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ff440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ff444: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2ff444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2ff448: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FF448u;
    {
        const bool branch_taken_0x2ff448 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2FF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF448u;
        // 0x2ff44c: 0x844a0000  lh          $t2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff448) {
            ctx->pc = 0x2FF4A0u;
            goto label_2ff4a0;
        }
    }
    ctx->pc = 0x2FF450u;
    // 0x2ff450: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x2ff450u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ff454: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2ff454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff458: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ff458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ff45c: 0x0  nop
    ctx->pc = 0x2ff45cu;
    // NOP
label_2ff460:
    // 0x2ff460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff464: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ff464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ff468: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ff468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ff46c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ff46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ff470: 0xa8382a  slt         $a3, $a1, $t0
    ctx->pc = 0x2ff470u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2ff474: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2ff474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2ff478: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ff478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ff47c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF47Cu;
    {
        const bool branch_taken_0x2ff47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF47Cu;
        // 0x2ff480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff47c) {
            ctx->pc = 0x2FF490u;
            goto label_2ff490;
        }
    }
    ctx->pc = 0x2FF484u;
    // 0x2ff484: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2ff484u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff488: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x2ff488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x2ff48c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2ff48cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ff490:
    // 0x2ff490: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF490u;
    {
        const bool branch_taken_0x2ff490 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff490) {
            ctx->pc = 0x2FF4A4u;
            goto label_2ff4a4;
        }
    }
    ctx->pc = 0x2FF498u;
    // 0x2ff498: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FF498u;
    {
        const bool branch_taken_0x2ff498 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF498u;
        // 0x2ff49c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff498) {
            ctx->pc = 0x2FF460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff460;
        }
    }
    ctx->pc = 0x2FF4A0u;
label_2ff4a0:
    // 0x2ff4a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4a4:
    // 0x2ff4a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF4A4u;
    {
        const bool branch_taken_0x2ff4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff4a4) {
            ctx->pc = 0x2FF4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF4A4u;
            // 0x2ff4a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF4BCu;
            goto label_2ff4bc;
        }
    }
    ctx->pc = 0x2FF4ACu;
    // 0x2ff4ac: 0xc0c006c  jal         func_3001B0
    ctx->pc = 0x2FF4ACu;
    SET_GPR_U32(ctx, 31, 0x2FF4B4u);
    ctx->pc = 0x2FF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4ACu;
    // 0x2ff4b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3001B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3001B0u, 0x2FF4ACu, 0x2FF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4B4u;
label_2ff4b4:
    // 0x2ff4b4: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x2ff4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ff4b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ff4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ff4bc:
    // 0x2ff4bc: 0x20b102a  slt         $v0, $s0, $t3
    ctx->pc = 0x2ff4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2ff4c0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2FF4C0u;
    {
        const bool branch_taken_0x2ff4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4C0u;
        // 0x2ff4c4: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4c0) {
            ctx->pc = 0x2FF430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff430;
        }
    }
    ctx->pc = 0x2FF4C8u;
label_2ff4c8:
    // 0x2ff4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff4cc: 0xc0c0146  jal         func_300518
    ctx->pc = 0x2FF4CCu;
    SET_GPR_U32(ctx, 31, 0x2FF4D4u);
    ctx->pc = 0x2FF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4CCu;
    // 0x2ff4d0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300518u, 0x2FF4CCu, 0x2FF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4D4u;
label_2ff4d4:
    // 0x2ff4d4: 0xaed108c4  sw          $s1, 0x8C4($s6)
    ctx->pc = 0x2ff4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2244), GPR_U32(ctx, 17));
    // 0x2ff4d8: 0x86c30040  lh          $v1, 0x40($s6)
    ctx->pc = 0x2ff4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x2ff4dc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ff4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ff4e0: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2FF4E0u;
    {
        const bool branch_taken_0x2ff4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff4e0) {
            ctx->pc = 0x2FF4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF4E0u;
            // 0x2ff4e4: 0xae800090  sw          $zero, 0x90($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF550u;
            goto label_2ff550;
        }
    }
    ctx->pc = 0x2FF4E8u;
    // 0x2ff4e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ff4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ff4ec: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FF4ECu;
    {
        const bool branch_taken_0x2ff4ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4ECu;
        // 0x2ff4f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4ec) {
            ctx->pc = 0x2FF53Cu;
            goto label_2ff53c;
        }
    }
    ctx->pc = 0x2FF4F4u;
    // 0x2ff4f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2ff4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ff4f8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ff4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff4fc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2ff4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2ff500:
    // 0x2ff500: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff504: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ff504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ff508: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ff508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ff50c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ff50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ff510: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2ff510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ff514: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2ff514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ff518: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF518u;
    {
        const bool branch_taken_0x2ff518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF518u;
        // 0x2ff51c: 0xc8282a  slt         $a1, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff518) {
            ctx->pc = 0x2FF52Cu;
            goto label_2ff52c;
        }
    }
    ctx->pc = 0x2FF520u;
    // 0x2ff520: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2ff520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff524: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x2ff524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
    // 0x2ff528: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x2ff528u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ff52c:
    // 0x2ff52c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF52Cu;
    {
        const bool branch_taken_0x2ff52c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF52Cu;
        // 0x2ff530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff52c) {
            ctx->pc = 0x2FF540u;
            goto label_2ff540;
        }
    }
    ctx->pc = 0x2FF534u;
    // 0x2ff534: 0x14a0fff2  bnez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FF534u;
    {
        const bool branch_taken_0x2ff534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF534u;
        // 0x2ff538: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff534) {
            ctx->pc = 0x2FF500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff500;
        }
    }
    ctx->pc = 0x2FF53Cu;
label_2ff53c:
    // 0x2ff53c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ff53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff540:
    // 0x2ff540: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF540u;
    {
        const bool branch_taken_0x2ff540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff540) {
            ctx->pc = 0x2FF544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF540u;
            // 0x2ff544: 0xae800090  sw          $zero, 0x90($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF550u;
            goto label_2ff550;
        }
    }
    ctx->pc = 0x2FF548u;
    // 0x2ff548: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ff548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff54c: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x2ff54cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_2ff550:
    // 0x2ff550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff554:
    // 0x2ff554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ff558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff55c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ff55cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff560: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ff560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ff564: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ff564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff568: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ff568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ff56c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ff56cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff570: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ff570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ff574: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF574u;
        // 0x2ff578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF57Cu;
    // 0x2ff57c: 0x0  nop
    ctx->pc = 0x2ff57cu;
    // NOP
    ctx->pc = 0x2ff580u;
}
