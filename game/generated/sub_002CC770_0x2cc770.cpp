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

// Function: sub_002CC770
// Address: 0x2cc770 - 0x2ccc20
void sub_002CC770_0x2cc770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC770_0x2cc770");
#endif

    switch (ctx->pc) {
        case 0x2cc7e4u: goto label_2cc7e4;
        case 0x2cc7f0u: goto label_2cc7f0;
        case 0x2cc7fcu: goto label_2cc7fc;
        case 0x2cc808u: goto label_2cc808;
        case 0x2cc818u: goto label_2cc818;
        case 0x2cc848u: goto label_2cc848;
        case 0x2cc874u: goto label_2cc874;
        case 0x2cc8b0u: goto label_2cc8b0;
        case 0x2cc8e4u: goto label_2cc8e4;
        case 0x2cc948u: goto label_2cc948;
        case 0x2cc974u: goto label_2cc974;
        case 0x2cc98cu: goto label_2cc98c;
        case 0x2cc9acu: goto label_2cc9ac;
        case 0x2cc9f4u: goto label_2cc9f4;
        case 0x2cca10u: goto label_2cca10;
        case 0x2cca2cu: goto label_2cca2c;
        case 0x2cca48u: goto label_2cca48;
        case 0x2cca7cu: goto label_2cca7c;
        case 0x2ccaa4u: goto label_2ccaa4;
        case 0x2ccad4u: goto label_2ccad4;
        case 0x2ccafcu: goto label_2ccafc;
        case 0x2ccb28u: goto label_2ccb28;
        case 0x2ccb40u: goto label_2ccb40;
        case 0x2ccb54u: goto label_2ccb54;
        case 0x2ccb6cu: goto label_2ccb6c;
        case 0x2ccb94u: goto label_2ccb94;
        case 0x2ccba8u: goto label_2ccba8;
        case 0x2ccbc4u: goto label_2ccbc4;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccbf0u: goto label_2ccbf0;
        default: break;
    }

    ctx->pc = 0x2cc770u;

    // 0x2cc770: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2cc770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x2cc774: 0xffb60240  sd          $s6, 0x240($sp)
    ctx->pc = 0x2cc774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 22));
    // 0x2cc778: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2cc778u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc77c: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x2cc77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x2cc780: 0x26c500a0  addiu       $a1, $s6, 0xA0
    ctx->pc = 0x2cc780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x2cc784: 0xffb10218  sd          $s1, 0x218($sp)
    ctx->pc = 0x2cc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 17));
    // 0x2cc788: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x2cc788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x2cc78c: 0xffb30228  sd          $s3, 0x228($sp)
    ctx->pc = 0x2cc78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 19));
    // 0x2cc790: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x2cc790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x2cc794: 0xffb50238  sd          $s5, 0x238($sp)
    ctx->pc = 0x2cc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 21));
    // 0x2cc798: 0xffb70248  sd          $s7, 0x248($sp)
    ctx->pc = 0x2cc798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 23));
    // 0x2cc79c: 0xffbe0250  sd          $fp, 0x250($sp)
    ctx->pc = 0x2cc79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 30));
    // 0x2cc7a0: 0xffbf0258  sd          $ra, 0x258($sp)
    ctx->pc = 0x2cc7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 31));
    // 0x2cc7a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2cc7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cc7a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC7A8u;
    {
        const bool branch_taken_0x2cc7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc7a8) {
            ctx->pc = 0x2CC7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC7A8u;
            // 0x2cc7ac: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC7C4u;
            goto label_2cc7c4;
        }
    }
    ctx->pc = 0x2CC7B0u;
    // 0x2cc7b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cc7b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cc7b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC7B8u;
    {
        const bool branch_taken_0x2cc7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7B8u;
        // 0x2cc7bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7b8) {
            ctx->pc = 0x2CC7CCu;
            goto label_2cc7cc;
        }
    }
    ctx->pc = 0x2CC7C0u;
    // 0x2cc7c0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2cc7c4:
    // 0x2cc7c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cc7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2cc7cc:
    // 0x2cc7cc: 0x26c2005c  addiu       $v0, $s6, 0x5C
    ctx->pc = 0x2cc7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 92));
    // 0x2cc7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cc7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7dc: 0xc0b354e  jal         func_2CD538
    ctx->pc = 0x2CC7DCu;
    SET_GPR_U32(ctx, 31, 0x2CC7E4u);
    ctx->pc = 0x2CC7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7DCu;
    // 0x2cc7e0: 0xafa20200  sw          $v0, 0x200($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD538u, 0x2CC7DCu, 0x2CC7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7E4u;
label_2cc7e4:
    // 0x2cc7e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cc7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7e8: 0xc0b3656  jal         func_2CD958
    ctx->pc = 0x2CC7E8u;
    SET_GPR_U32(ctx, 31, 0x2CC7F0u);
    ctx->pc = 0x2CC7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7E8u;
    // 0x2cc7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD958u, 0x2CC7E8u, 0x2CC7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7F0u;
label_2cc7f0:
    // 0x2cc7f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cc7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc7f4: 0xc0b37aa  jal         func_2CDEA8
    ctx->pc = 0x2CC7F4u;
    SET_GPR_U32(ctx, 31, 0x2CC7FCu);
    ctx->pc = 0x2CC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7F4u;
    // 0x2cc7f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEA8u, 0x2CC7F4u, 0x2CC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7FCu;
label_2cc7fc:
    // 0x2cc7fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cc7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc800: 0xc0b36e6  jal         func_2CDB98
    ctx->pc = 0x2CC800u;
    SET_GPR_U32(ctx, 31, 0x2CC808u);
    ctx->pc = 0x2CC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC800u;
    // 0x2cc804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB98u, 0x2CC800u, 0x2CC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC808u;
label_2cc808:
    // 0x2cc808: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cc80c: 0x24a5e6a0  addiu       $a1, $a1, -0x1960
    ctx->pc = 0x2cc80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    // 0x2cc810: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC810u;
    SET_GPR_U32(ctx, 31, 0x2CC818u);
    ctx->pc = 0x2CC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC810u;
    // 0x2cc814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC810u, 0x2CC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC818u;
label_2cc818:
    // 0x2cc818: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC818u;
    {
        const bool branch_taken_0x2cc818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC818u;
        // 0x2cc81c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc818) {
            ctx->pc = 0x2CC83Cu;
            goto label_2cc83c;
        }
    }
    ctx->pc = 0x2CC820u;
    // 0x2cc820: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cc820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc824: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC824u;
    {
        const bool branch_taken_0x2cc824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC824u;
        // 0x2cc828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc824) {
            ctx->pc = 0x2CC840u;
            goto label_2cc840;
        }
    }
    ctx->pc = 0x2CC82Cu;
    // 0x2cc82c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cc830: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cc830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cc834: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cc834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2cc838: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cc838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cc83c:
    // 0x2cc83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc840:
    // 0x2cc840: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC840u;
    SET_GPR_U32(ctx, 31, 0x2CC848u);
    ctx->pc = 0x2CC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC840u;
    // 0x2cc844: 0x24a5e8a8  addiu       $a1, $a1, -0x1758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC840u, 0x2CC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC848u;
label_2cc848:
    // 0x2cc848: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC848u;
    {
        const bool branch_taken_0x2cc848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC848u;
        // 0x2cc84c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc848) {
            ctx->pc = 0x2CC868u;
            goto label_2cc868;
        }
    }
    ctx->pc = 0x2CC850u;
    // 0x2cc850: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cc850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc854: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC854u;
    {
        const bool branch_taken_0x2cc854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc854) {
            ctx->pc = 0x2CC868u;
            goto label_2cc868;
        }
    }
    ctx->pc = 0x2CC85Cu;
    // 0x2cc85c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cc860: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cc860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cc864: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cc864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2cc868:
    // 0x2cc868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc86c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC86Cu;
    SET_GPR_U32(ctx, 31, 0x2CC874u);
    ctx->pc = 0x2CC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC86Cu;
    // 0x2cc870: 0x24a5e8c0  addiu       $a1, $a1, -0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC86Cu, 0x2CC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC874u;
label_2cc874:
    // 0x2cc874: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC874u;
    {
        const bool branch_taken_0x2cc874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc874) {
            ctx->pc = 0x2CC878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC874u;
            // 0x2cc878: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC898u;
            goto label_2cc898;
        }
    }
    ctx->pc = 0x2CC87Cu;
    // 0x2cc87c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc880: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC880u;
    {
        const bool branch_taken_0x2cc880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc880) {
            ctx->pc = 0x2CC884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC880u;
            // 0x2cc884: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC898u;
            goto label_2cc898;
        }
    }
    ctx->pc = 0x2CC888u;
    // 0x2cc888: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cc888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cc88c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cc88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cc890: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cc890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2cc894: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x2cc894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_2cc898:
    // 0x2cc898: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cc898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cc89c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CC89Cu;
    {
        const bool branch_taken_0x2cc89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC89Cu;
        // 0x2cc8a0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc89c) {
            ctx->pc = 0x2CC8D8u;
            goto label_2cc8d8;
        }
    }
    ctx->pc = 0x2CC8A4u;
    // 0x2cc8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8a8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC8A8u;
    SET_GPR_U32(ctx, 31, 0x2CC8B0u);
    ctx->pc = 0x2CC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8A8u;
    // 0x2cc8ac: 0x24a5e6b0  addiu       $a1, $a1, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC8A8u, 0x2CC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8B0u;
label_2cc8b0:
    // 0x2cc8b0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CC8B0u;
    {
        const bool branch_taken_0x2cc8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc8b0) {
            ctx->pc = 0x2CC8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC8B0u;
            // 0x2cc8b4: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC908u;
            goto label_2cc908;
        }
    }
    ctx->pc = 0x2CC8B8u;
    // 0x2cc8b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cc8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc8bc: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CC8BCu;
    {
        const bool branch_taken_0x2cc8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc8bc) {
            ctx->pc = 0x2CC8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC8BCu;
            // 0x2cc8c0: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC908u;
            goto label_2cc908;
        }
    }
    ctx->pc = 0x2CC8C4u;
    // 0x2cc8c4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2cc8c8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cc8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cc8cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CC8CCu;
    {
        const bool branch_taken_0x2cc8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8CCu;
        // 0x2cc8d0: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8cc) {
            ctx->pc = 0x2CC904u;
            goto label_2cc904;
        }
    }
    ctx->pc = 0x2CC8D4u;
    // 0x2cc8d4: 0x0  nop
    ctx->pc = 0x2cc8d4u;
    // NOP
label_2cc8d8:
    // 0x2cc8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8dc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CC8DCu;
    SET_GPR_U32(ctx, 31, 0x2CC8E4u);
    ctx->pc = 0x2CC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC8DCu;
    // 0x2cc8e0: 0x24a5e6b0  addiu       $a1, $a1, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CC8DCu, 0x2CC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC8E4u;
label_2cc8e4:
    // 0x2cc8e4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC8E4u;
    {
        const bool branch_taken_0x2cc8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc8e4) {
            ctx->pc = 0x2CC8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC8E4u;
            // 0x2cc8e8: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC908u;
            goto label_2cc908;
        }
    }
    ctx->pc = 0x2CC8ECu;
    // 0x2cc8ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cc8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc8f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC8F0u;
    {
        const bool branch_taken_0x2cc8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8F0u;
        // 0x2cc8f4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8f0) {
            ctx->pc = 0x2CC904u;
            goto label_2cc904;
        }
    }
    ctx->pc = 0x2CC8F8u;
    // 0x2cc8f8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cc8fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc900: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cc900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cc904:
    // 0x2cc904: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x2cc904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_2cc908:
    // 0x2cc908: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cc90c: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CC90Cu;
    {
        const bool branch_taken_0x2cc90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC90Cu;
        // 0x2cc910: 0x3c170048  lui         $s7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc90c) {
            ctx->pc = 0x2CCA18u;
            goto label_2cca18;
        }
    }
    ctx->pc = 0x2CC914u;
    // 0x2cc914: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cc914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cc918: 0x8ed50090  lw          $s5, 0x90($s6)
    ctx->pc = 0x2cc918u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x2cc91c: 0x2453e770  addiu       $s3, $v0, -0x1890
    ctx->pc = 0x2cc91cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2cc920: 0x3c1080ff  lui         $s0, 0x80FF
    ctx->pc = 0x2cc920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33023 << 16));
    // 0x2cc924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cc924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc928: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cc928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc92c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cc92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc930: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc934: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cc934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cc938: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2cc938u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2cc93c: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2cc93cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2cc940: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC940u;
    SET_GPR_U32(ctx, 31, 0x2CC948u);
    ctx->pc = 0x2CC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC940u;
    // 0x2cc944: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC940u, 0x2CC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC948u;
label_2cc948:
    // 0x2cc948: 0x363180ff  ori         $s1, $s1, 0x80FF
    ctx->pc = 0x2cc948u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)33023);
    // 0x2cc94c: 0x26f2e780  addiu       $s2, $s7, -0x1880
    ctx->pc = 0x2cc94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
    // 0x2cc950: 0x2b41026  xor         $v0, $s5, $s4
    ctx->pc = 0x2cc950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 20));
    // 0x2cc954: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cc954u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cc958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc95c: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x2cc95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x2cc960: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2cc960u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cc964: 0x240700da  addiu       $a3, $zero, 0xDA
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2cc968: 0x3508006d  ori         $t0, $t0, 0x6D
    ctx->pc = 0x2cc968u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)109);
    // 0x2cc96c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC96Cu;
    SET_GPR_U32(ctx, 31, 0x2CC974u);
    ctx->pc = 0x2CC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC96Cu;
    // 0x2cc970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC96Cu, 0x2CC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC974u;
label_2cc974:
    // 0x2cc974: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cc974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc97c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cc97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc980: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc984: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC984u;
    SET_GPR_U32(ctx, 31, 0x2CC98Cu);
    ctx->pc = 0x2CC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC984u;
    // 0x2cc988: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC984u, 0x2CC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC98Cu;
label_2cc98c:
    // 0x2cc98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cc990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc994: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cc994u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cc998: 0x235280a  movz        $a1, $s1, $s5
    ctx->pc = 0x2cc998u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cc99c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x2cc99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x2cc9a0: 0x240700da  addiu       $a3, $zero, 0xDA
    ctx->pc = 0x2cc9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x2cc9a4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC9A4u;
    SET_GPR_U32(ctx, 31, 0x2CC9ACu);
    ctx->pc = 0x2CC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9A4u;
    // 0x2cc9a8: 0x3508006e  ori         $t0, $t0, 0x6E (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)110);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC9A4u, 0x2CC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9ACu;
label_2cc9ac:
    // 0x2cc9ac: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x2cc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x2cc9b0: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2cc9b0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2cc9b4: 0x14540006  bne         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC9B4u;
    {
        const bool branch_taken_0x2cc9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2CC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B4u;
        // 0x2cc9b8: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9b4) {
            ctx->pc = 0x2CC9D0u;
            goto label_2cc9d0;
        }
    }
    ctx->pc = 0x2CC9BCu;
    // 0x2cc9bc: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x2cc9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
    // 0x2cc9c0: 0x24110136  addiu       $s1, $zero, 0x136
    ctx->pc = 0x2cc9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x2cc9c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC9C4u;
    {
        const bool branch_taken_0x2cc9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9C4u;
        // 0x2cc9c8: 0x3610006f  ori         $s0, $s0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9c4) {
            ctx->pc = 0x2CC9DCu;
            goto label_2cc9dc;
        }
    }
    ctx->pc = 0x2CC9CCu;
    // 0x2cc9cc: 0x0  nop
    ctx->pc = 0x2cc9ccu;
    // NOP
label_2cc9d0:
    // 0x2cc9d0: 0x3c100003  lui         $s0, 0x3
    ctx->pc = 0x2cc9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)3 << 16));
    // 0x2cc9d4: 0x2411014a  addiu       $s1, $zero, 0x14A
    ctx->pc = 0x2cc9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2cc9d8: 0x36100070  ori         $s0, $s0, 0x70
    ctx->pc = 0x2cc9d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)112);
label_2cc9dc:
    // 0x2cc9dc: 0x27c4e770  addiu       $a0, $fp, -0x1890
    ctx->pc = 0x2cc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961008));
    // 0x2cc9e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc9e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cc9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc9e8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc9ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC9ECu;
    SET_GPR_U32(ctx, 31, 0x2CC9F4u);
    ctx->pc = 0x2CC9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9ECu;
    // 0x2cc9f0: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC9ECu, 0x2CC9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9F4u;
label_2cc9f4:
    // 0x2cc9f4: 0x2664e780  addiu       $a0, $s3, -0x1880
    ctx->pc = 0x2cc9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961024));
    // 0x2cc9f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2cc9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2cc9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cc9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca00: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2cca00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca04: 0x34a580ff  ori         $a1, $a1, 0x80FF
    ctx->pc = 0x2cca04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33023);
    // 0x2cca08: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCA08u;
    SET_GPR_U32(ctx, 31, 0x2CCA10u);
    ctx->pc = 0x2CCA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA08u;
    // 0x2cca0c: 0x240700da  addiu       $a3, $zero, 0xDA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCA08u, 0x2CCA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA10u;
label_2cca10:
    // 0x2cca10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCA10u;
    {
        const bool branch_taken_0x2cca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA10u;
        // 0x2cca14: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca10) {
            ctx->pc = 0x2CCA1Cu;
            goto label_2cca1c;
        }
    }
    ctx->pc = 0x2CCA18u;
label_2cca18:
    // 0x2cca18: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2cca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2cca1c:
    // 0x2cca1c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cca20: 0x248443d8  addiu       $a0, $a0, 0x43D8
    ctx->pc = 0x2cca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17368));
    // 0x2cca24: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCA24u;
    SET_GPR_U32(ctx, 31, 0x2CCA2Cu);
    ctx->pc = 0x2CCA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA24u;
    // 0x2cca28: 0x34a5006b  ori         $a1, $a1, 0x6B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)107);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCA24u, 0x2CCA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA2Cu;
label_2cca2c:
    // 0x2cca2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cca30: 0x2444e770  addiu       $a0, $v0, -0x1890
    ctx->pc = 0x2cca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2cca34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cca34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cca38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cca3c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cca3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cca40: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCA40u;
    SET_GPR_U32(ctx, 31, 0x2CCA48u);
    ctx->pc = 0x2CCA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA40u;
    // 0x2cca44: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCA40u, 0x2CCA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA48u;
label_2cca48:
    // 0x2cca48: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x2cca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x2cca4c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cca50: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CCA50u;
    {
        const bool branch_taken_0x2cca50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA50u;
        // 0x2cca54: 0x8ec20094  lw          $v0, 0x94($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca50) {
            ctx->pc = 0x2CCAB0u;
            goto label_2ccab0;
        }
    }
    ctx->pc = 0x2CCA58u;
    // 0x2cca58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CCA58u;
    {
        const bool branch_taken_0x2cca58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA58u;
        // 0x2cca5c: 0x26e4e780  addiu       $a0, $s7, -0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca58) {
            ctx->pc = 0x2CCA88u;
            goto label_2cca88;
        }
    }
    ctx->pc = 0x2CCA60u;
    // 0x2cca60: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cca60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cca64: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cca64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cca68: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cca68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cca6c: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cca70: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x2cca70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2cca74: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCA74u;
    SET_GPR_U32(ctx, 31, 0x2CCA7Cu);
    ctx->pc = 0x2CCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA74u;
    // 0x2cca78: 0x3508001a  ori         $t0, $t0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCA74u, 0x2CCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA7Cu;
label_2cca7c:
    // 0x2cca7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CCA7Cu;
    {
        const bool branch_taken_0x2cca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA7Cu;
        // 0x2cca80: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca7c) {
            ctx->pc = 0x2CCB00u;
            goto label_2ccb00;
        }
    }
    ctx->pc = 0x2CCA84u;
    // 0x2cca84: 0x0  nop
    ctx->pc = 0x2cca84u;
    // NOP
label_2cca88:
    // 0x2cca88: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2cca88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2cca8c: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cca8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cca90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cca90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cca94: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cca98: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x2cca98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2cca9c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCA9Cu;
    SET_GPR_U32(ctx, 31, 0x2CCAA4u);
    ctx->pc = 0x2CCAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA9Cu;
    // 0x2ccaa0: 0x3508001f  ori         $t0, $t0, 0x1F (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)31);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCA9Cu, 0x2CCAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAA4u;
label_2ccaa4:
    // 0x2ccaa4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CCAA4u;
    {
        const bool branch_taken_0x2ccaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAA4u;
        // 0x2ccaa8: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccaa4) {
            ctx->pc = 0x2CCB00u;
            goto label_2ccb00;
        }
    }
    ctx->pc = 0x2CCAACu;
    // 0x2ccaac: 0x0  nop
    ctx->pc = 0x2ccaacu;
    // NOP
label_2ccab0:
    // 0x2ccab0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CCAB0u;
    {
        const bool branch_taken_0x2ccab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAB0u;
        // 0x2ccab4: 0x26e4e780  addiu       $a0, $s7, -0x1880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccab0) {
            ctx->pc = 0x2CCAE0u;
            goto label_2ccae0;
        }
    }
    ctx->pc = 0x2CCAB8u;
    // 0x2ccab8: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccabc: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2ccabcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2ccac0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccac4: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2ccac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ccac8: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x2ccac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2ccacc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCACCu;
    SET_GPR_U32(ctx, 31, 0x2CCAD4u);
    ctx->pc = 0x2CCAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCACCu;
    // 0x2ccad0: 0x3508001d  ori         $t0, $t0, 0x1D (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)29);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCACCu, 0x2CCAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAD4u;
label_2ccad4:
    // 0x2ccad4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CCAD4u;
    {
        const bool branch_taken_0x2ccad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAD4u;
        // 0x2ccad8: 0x8ec30048  lw          $v1, 0x48($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccad4) {
            ctx->pc = 0x2CCB00u;
            goto label_2ccb00;
        }
    }
    ctx->pc = 0x2CCADCu;
    // 0x2ccadc: 0x0  nop
    ctx->pc = 0x2ccadcu;
    // NOP
label_2ccae0:
    // 0x2ccae0: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccae4: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2ccae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2ccae8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccaec: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2ccaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ccaf0: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x2ccaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2ccaf4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCAF4u;
    SET_GPR_U32(ctx, 31, 0x2CCAFCu);
    ctx->pc = 0x2CCAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCAF4u;
    // 0x2ccaf8: 0x35080022  ori         $t0, $t0, 0x22 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)34);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCAF4u, 0x2CCAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCAFCu;
label_2ccafc:
    // 0x2ccafc: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
label_2ccb00:
    // 0x2ccb00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ccb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ccb04: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CCB04u;
    {
        const bool branch_taken_0x2ccb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB04u;
        // 0x2ccb08: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb04) {
            ctx->pc = 0x2CCB78u;
            goto label_2ccb78;
        }
    }
    ctx->pc = 0x2CCB0Cu;
    // 0x2ccb0c: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccb10: 0x261043d0  addiu       $s0, $s0, 0x43D0
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17360));
    // 0x2ccb14: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ccb18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccb1c: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x2ccb1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x2ccb20: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCB20u;
    SET_GPR_U32(ctx, 31, 0x2CCB28u);
    ctx->pc = 0x2CCB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB20u;
    // 0x2ccb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCB20u, 0x2CCB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB28u;
label_2ccb28:
    // 0x2ccb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb2c: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccb30: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ccb30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ccb34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccb34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccb38: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCB38u;
    SET_GPR_U32(ctx, 31, 0x2CCB40u);
    ctx->pc = 0x2CCB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB38u;
    // 0x2ccb3c: 0x34c60021  ori         $a2, $a2, 0x21 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCB38u, 0x2CCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB40u;
label_2ccb40:
    // 0x2ccb40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb44: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccb44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccb48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ccb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccb4c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCB4Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB54u);
    ctx->pc = 0x2CCB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB4Cu;
    // 0x2ccb50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCB4Cu, 0x2CCB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB54u;
label_2ccb54:
    // 0x2ccb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb58: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccb58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccb5c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ccb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ccb60: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccb60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccb64: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCB64u;
    SET_GPR_U32(ctx, 31, 0x2CCB6Cu);
    ctx->pc = 0x2CCB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB64u;
    // 0x2ccb68: 0x34c60071  ori         $a2, $a2, 0x71 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)113);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCB64u, 0x2CCB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB6Cu;
label_2ccb6c:
    // 0x2ccb6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CCB6Cu;
    {
        const bool branch_taken_0x2ccb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB6Cu;
        // 0x2ccb70: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb6c) {
            ctx->pc = 0x2CCBACu;
            goto label_2ccbac;
        }
    }
    ctx->pc = 0x2CCB74u;
    // 0x2ccb74: 0x0  nop
    ctx->pc = 0x2ccb74u;
    // NOP
label_2ccb78:
    // 0x2ccb78: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccb78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccb7c: 0x261043d0  addiu       $s0, $s0, 0x43D0
    ctx->pc = 0x2ccb7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17360));
    // 0x2ccb80: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ccb80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ccb84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccb88: 0x34c60023  ori         $a2, $a2, 0x23
    ctx->pc = 0x2ccb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)35);
    // 0x2ccb8c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCB8Cu;
    SET_GPR_U32(ctx, 31, 0x2CCB94u);
    ctx->pc = 0x2CCB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCB8Cu;
    // 0x2ccb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCB8Cu, 0x2CCB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCB94u;
label_2ccb94:
    // 0x2ccb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccb98: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccb98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccb9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ccb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ccba0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCBA0u;
    SET_GPR_U32(ctx, 31, 0x2CCBA8u);
    ctx->pc = 0x2CCBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBA0u;
    // 0x2ccba4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCBA0u, 0x2CCBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBA8u;
label_2ccba8:
    // 0x2ccba8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2ccbac:
    // 0x2ccbac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ccbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccbb0: 0x2444e770  addiu       $a0, $v0, -0x1890
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2ccbb4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2ccbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ccbb8: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2ccbbc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCBBCu;
    SET_GPR_U32(ctx, 31, 0x2CCBC4u);
    ctx->pc = 0x2CCBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBBCu;
    // 0x2ccbc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCBBCu, 0x2CCBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBC4u;
label_2ccbc4:
    // 0x2ccbc4: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x2ccbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2ccbc8: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x2CCBC8u;
    SET_GPR_U32(ctx, 31, 0x2CCBD0u);
    ctx->pc = 0x2CCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBC8u;
    // 0x2ccbcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x2CCBC8u, 0x2CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBD0u;
label_2ccbd0:
    // 0x2ccbd0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ccbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2ccbd4: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccbd8: 0x2484e790  addiu       $a0, $a0, -0x1870
    ctx->pc = 0x2ccbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    // 0x2ccbdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccbe0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2ccbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ccbe4: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x2ccbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2ccbe8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCBE8u;
    SET_GPR_U32(ctx, 31, 0x2CCBF0u);
    ctx->pc = 0x2CCBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCBE8u;
    // 0x2ccbec: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCBE8u, 0x2CCBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCBF0u;
label_2ccbf0:
    // 0x2ccbf0: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x2ccbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2ccbf4: 0xdfb10218  ld          $s1, 0x218($sp)
    ctx->pc = 0x2ccbf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2ccbf8: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x2ccbf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2ccbfc: 0xdfb30228  ld          $s3, 0x228($sp)
    ctx->pc = 0x2ccbfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2ccc00: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x2ccc00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2ccc04: 0xdfb50238  ld          $s5, 0x238($sp)
    ctx->pc = 0x2ccc04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2ccc08: 0xdfb60240  ld          $s6, 0x240($sp)
    ctx->pc = 0x2ccc08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2ccc0c: 0xdfb70248  ld          $s7, 0x248($sp)
    ctx->pc = 0x2ccc0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2ccc10: 0xdfbe0250  ld          $fp, 0x250($sp)
    ctx->pc = 0x2ccc10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2ccc14: 0xdfbf0258  ld          $ra, 0x258($sp)
    ctx->pc = 0x2ccc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2ccc18: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC18u;
        // 0x2ccc1c: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCC20u;
}
