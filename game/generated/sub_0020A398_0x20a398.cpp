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

// Function: sub_0020A398
// Address: 0x20a398 - 0x20a668
void sub_0020A398_0x20a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A398_0x20a398");
#endif

    switch (ctx->pc) {
        case 0x20a3c0u: goto label_20a3c0;
        case 0x20a3fcu: goto label_20a3fc;
        case 0x20a454u: goto label_20a454;
        case 0x20a4b4u: goto label_20a4b4;
        case 0x20a4bcu: goto label_20a4bc;
        case 0x20a4d4u: goto label_20a4d4;
        case 0x20a4dcu: goto label_20a4dc;
        case 0x20a4ecu: goto label_20a4ec;
        case 0x20a4fcu: goto label_20a4fc;
        case 0x20a510u: goto label_20a510;
        case 0x20a520u: goto label_20a520;
        case 0x20a528u: goto label_20a528;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a558u: goto label_20a558;
        case 0x20a568u: goto label_20a568;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5f0u: goto label_20a5f0;
        case 0x20a600u: goto label_20a600;
        case 0x20a618u: goto label_20a618;
        case 0x20a628u: goto label_20a628;
        case 0x20a64cu: goto label_20a64c;
        default: break;
    }

    ctx->pc = 0x20a398u;

    // 0x20a398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a39c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20a3a0: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x20a3a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a3a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20a3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20a3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a3b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a3b8: 0xc0b25bc  jal         func_2C96F0
    ctx->pc = 0x20A3B8u;
    SET_GPR_U32(ctx, 31, 0x20A3C0u);
    ctx->pc = 0x20A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A3B8u;
    // 0x20a3bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C96F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C96F0u, 0x20A3B8u, 0x20A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3C0u;
label_20a3c0:
    // 0x20a3c0: 0x8e6383c0  lw          $v1, -0x7C40($s3)
    ctx->pc = 0x20a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
    // 0x20a3c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a3c8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A3C8u;
    {
        const bool branch_taken_0x20a3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3C8u;
        // 0x20a3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3c8) {
            ctx->pc = 0x20A3DCu;
            goto label_20a3dc;
        }
    }
    ctx->pc = 0x20A3D0u;
    // 0x20a3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a3d4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A3D4u;
    {
        const bool branch_taken_0x20a3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a3d4) {
            ctx->pc = 0x20A3E0u;
            goto label_20a3e0;
        }
    }
    ctx->pc = 0x20A3DCu;
label_20a3dc:
    // 0x20a3dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a3e0:
    // 0x20a3e0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A3E0u;
    {
        const bool branch_taken_0x20a3e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3E0u;
        // 0x20a3e4: 0x8f8398ac  lw          $v1, -0x6754($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3e0) {
            ctx->pc = 0x20A400u;
            goto label_20a400;
        }
    }
    ctx->pc = 0x20A3E8u;
    // 0x20a3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a3ec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A3ECu;
    {
        const bool branch_taken_0x20a3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a3ec) {
            ctx->pc = 0x20A3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A3ECu;
            // 0x20a3f0: 0x8e6483c0  lw          $a0, -0x7C40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A404u;
            goto label_20a404;
        }
    }
    ctx->pc = 0x20A3F4u;
    // 0x20a3f4: 0xc08221e  jal         func_208878
    ctx->pc = 0x20A3F4u;
    SET_GPR_U32(ctx, 31, 0x20A3FCu);
    ctx->pc = 0x208878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208878u, 0x20A3F4u, 0x20A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3FCu;
label_20a3fc:
    // 0x20a3fc: 0x8f8398ac  lw          $v1, -0x6754($gp)
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
label_20a400:
    // 0x20a400: 0x8e6483c0  lw          $a0, -0x7C40($s3)
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
label_20a404:
    // 0x20a404: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a408: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A408u;
    {
        const bool branch_taken_0x20a408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A408u;
        // 0x20a40c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a408) {
            ctx->pc = 0x20A41Cu;
            goto label_20a41c;
        }
    }
    ctx->pc = 0x20A410u;
    // 0x20a410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a414: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A414u;
    {
        const bool branch_taken_0x20a414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a414) {
            ctx->pc = 0x20A420u;
            goto label_20a420;
        }
    }
    ctx->pc = 0x20A41Cu;
label_20a41c:
    // 0x20a41c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a420:
    // 0x20a420: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x20A420u;
    {
        const bool branch_taken_0x20a420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A420u;
        // 0x20a424: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a420) {
            ctx->pc = 0x20A458u;
            goto label_20a458;
        }
    }
    ctx->pc = 0x20A428u;
    // 0x20a428: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A428u;
    {
        const bool branch_taken_0x20a428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a428) {
            ctx->pc = 0x20A42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A428u;
            // 0x20a42c: 0x28620078  slti        $v0, $v1, 0x78 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A45Cu;
            goto label_20a45c;
        }
    }
    ctx->pc = 0x20A430u;
    // 0x20a430: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x20a434: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x20a438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a43c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x20a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x20a440: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20a444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a44c: 0xc0a5ea4  jal         func_297A90
    ctx->pc = 0x20A44Cu;
    SET_GPR_U32(ctx, 31, 0x20A454u);
    ctx->pc = 0x20A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A44Cu;
    // 0x20a450: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A90u, 0x20A44Cu, 0x20A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A454u;
label_20a454:
    // 0x20a454: 0x8f8398ac  lw          $v1, -0x6754($gp)
    ctx->pc = 0x20a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940844)));
label_20a458:
    // 0x20a458: 0x28620078  slti        $v0, $v1, 0x78
    ctx->pc = 0x20a458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
label_20a45c:
    // 0x20a45c: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x20A45Cu;
    {
        const bool branch_taken_0x20a45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A45Cu;
        // 0x20a460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a45c) {
            ctx->pc = 0x20A650u;
            goto label_20a650;
        }
    }
    ctx->pc = 0x20A464u;
    // 0x20a464: 0x8e6383c0  lw          $v1, -0x7C40($s3)
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
    // 0x20a468: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a46c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A46Cu;
    {
        const bool branch_taken_0x20a46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A46Cu;
        // 0x20a470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a46c) {
            ctx->pc = 0x20A480u;
            goto label_20a480;
        }
    }
    ctx->pc = 0x20A474u;
    // 0x20a474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a478: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A478u;
    {
        const bool branch_taken_0x20a478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a478) {
            ctx->pc = 0x20A484u;
            goto label_20a484;
        }
    }
    ctx->pc = 0x20A480u;
label_20a480:
    // 0x20a480: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a484:
    // 0x20a484: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A484u;
    {
        const bool branch_taken_0x20a484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A484u;
        // 0x20a488: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a484) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A48Cu;
    // 0x20a48c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x20a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20a490: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x20A490u;
    {
        const bool branch_taken_0x20a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A490u;
        // 0x20a494: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a490) {
            ctx->pc = 0x20A64Cu;
            goto label_20a64c;
        }
    }
    ctx->pc = 0x20A498u;
label_20a498:
    // 0x20a498: 0x267083c0  addiu       $s0, $s3, -0x7C40
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x20a49c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a4a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a4a4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A4A4u;
    {
        const bool branch_taken_0x20a4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a4a4) {
            ctx->pc = 0x20A4B4u;
            goto label_20a4b4;
        }
    }
    ctx->pc = 0x20A4ACu;
    // 0x20a4ac: 0xc087048  jal         func_21C120
    ctx->pc = 0x20A4ACu;
    SET_GPR_U32(ctx, 31, 0x20A4B4u);
    ctx->pc = 0x20A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4ACu;
    // 0x20a4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C120u, 0x20A4ACu, 0x20A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4B4u;
label_20a4b4:
    // 0x20a4b4: 0xc0824c4  jal         func_209310
    ctx->pc = 0x20A4B4u;
    SET_GPR_U32(ctx, 31, 0x20A4BCu);
    ctx->pc = 0x209310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209310u, 0x20A4B4u, 0x20A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4BCu;
label_20a4bc:
    // 0x20a4bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a4c0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x20a4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x20a4c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A4C4u;
    {
        const bool branch_taken_0x20a4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a4c4) {
            ctx->pc = 0x20A4D4u;
            goto label_20a4d4;
        }
    }
    ctx->pc = 0x20A4CCu;
    // 0x20a4cc: 0xc0824d0  jal         func_209340
    ctx->pc = 0x20A4CCu;
    SET_GPR_U32(ctx, 31, 0x20A4D4u);
    ctx->pc = 0x209340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209340u, 0x20A4CCu, 0x20A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4D4u;
label_20a4d4:
    // 0x20a4d4: 0xc082fec  jal         func_20BFB0
    ctx->pc = 0x20A4D4u;
    SET_GPR_U32(ctx, 31, 0x20A4DCu);
    ctx->pc = 0x20BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BFB0u, 0x20A4D4u, 0x20A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4DCu;
label_20a4dc:
    // 0x20a4dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20A4DCu;
    {
        const bool branch_taken_0x20a4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4DCu;
        // 0x20a4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4dc) {
            ctx->pc = 0x20A508u;
            goto label_20a508;
        }
    }
    ctx->pc = 0x20A4E4u;
    // 0x20a4e4: 0xc09860e  jal         func_261838
    ctx->pc = 0x20A4E4u;
    SET_GPR_U32(ctx, 31, 0x20A4ECu);
    ctx->pc = 0x20A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4E4u;
    // 0x20a4e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261838u, 0x20A4E4u, 0x20A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4ECu;
label_20a4ec:
    // 0x20a4ec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20a4f0: 0x248423b0  addiu       $a0, $a0, 0x23B0
    ctx->pc = 0x20a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
    // 0x20a4f4: 0xc098336  jal         func_260CD8
    ctx->pc = 0x20A4F4u;
    SET_GPR_U32(ctx, 31, 0x20A4FCu);
    ctx->pc = 0x20A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4F4u;
    // 0x20a4f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CD8u, 0x20A4F4u, 0x20A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4FCu;
label_20a4fc:
    // 0x20a4fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20A4FCu;
    {
        const bool branch_taken_0x20a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a4fc) {
            ctx->pc = 0x20A520u;
            goto label_20a520;
        }
    }
    ctx->pc = 0x20A504u;
    // 0x20a504: 0x0  nop
    ctx->pc = 0x20a504u;
    // NOP
label_20a508:
    // 0x20a508: 0xc09860e  jal         func_261838
    ctx->pc = 0x20A508u;
    SET_GPR_U32(ctx, 31, 0x20A510u);
    ctx->pc = 0x20A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A508u;
    // 0x20a50c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261838u, 0x20A508u, 0x20A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A510u;
label_20a510:
    // 0x20a510: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x20a510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x20a514: 0x248423b0  addiu       $a0, $a0, 0x23B0
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9136));
    // 0x20a518: 0xc098336  jal         func_260CD8
    ctx->pc = 0x20A518u;
    SET_GPR_U32(ctx, 31, 0x20A520u);
    ctx->pc = 0x20A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A518u;
    // 0x20a51c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260CD8u, 0x20A518u, 0x20A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A520u;
label_20a520:
    // 0x20a520: 0xc082162  jal         func_208588
    ctx->pc = 0x20A520u;
    SET_GPR_U32(ctx, 31, 0x20A528u);
    ctx->pc = 0x20A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A520u;
    // 0x20a524: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x20A520u, 0x20A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A528u;
label_20a528:
    // 0x20a528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a52c: 0xaf82c8cc  sw          $v0, -0x3734($gp)
    ctx->pc = 0x20a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953164), GPR_U32(ctx, 2));
    // 0x20a530: 0xaf8098c0  sw          $zero, -0x6740($gp)
    ctx->pc = 0x20a530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), GPR_U32(ctx, 0));
    // 0x20a534: 0xc09d940  jal         func_276500
    ctx->pc = 0x20A534u;
    SET_GPR_U32(ctx, 31, 0x20A53Cu);
    ctx->pc = 0x20A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A534u;
    // 0x20a538: 0xaf8098b4  sw          $zero, -0x674C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940852), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20A534u, 0x20A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A53Cu;
label_20a53c:
    // 0x20a53c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A53Cu;
    {
        const bool branch_taken_0x20a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a53c) {
            ctx->pc = 0x20A540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A53Cu;
            // 0x20a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A550u;
            goto label_20a550;
        }
    }
    ctx->pc = 0x20A544u;
    // 0x20a544: 0xc09dcbe  jal         func_2772F8
    ctx->pc = 0x20A544u;
    SET_GPR_U32(ctx, 31, 0x20A54Cu);
    ctx->pc = 0x20A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A544u;
    // 0x20a548: 0x8f84973c  lw          $a0, -0x68C4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2772F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2772F8u, 0x20A544u, 0x20A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A54Cu;
label_20a54c:
    // 0x20a54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a550:
    // 0x20a550: 0xc082fd8  jal         func_20BF60
    ctx->pc = 0x20A550u;
    SET_GPR_U32(ctx, 31, 0x20A558u);
    ctx->pc = 0x20A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A550u;
    // 0x20a554: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF60u, 0x20A550u, 0x20A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A558u;
label_20a558:
    // 0x20a558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A558u;
    {
        const bool branch_taken_0x20a558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A558u;
        // 0x20a55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a558) {
            ctx->pc = 0x20A568u;
            goto label_20a568;
        }
    }
    ctx->pc = 0x20A560u;
    // 0x20a560: 0xc0a0b72  jal         func_282DC8
    ctx->pc = 0x20A560u;
    SET_GPR_U32(ctx, 31, 0x20A568u);
    ctx->pc = 0x20A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A560u;
    // 0x20a564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282DC8u, 0x20A560u, 0x20A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A568u;
label_20a568:
    // 0x20a568: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20a56c: 0x8f83973c  lw          $v1, -0x68C4($gp)
    ctx->pc = 0x20a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
    // 0x20a570: 0x24458858  addiu       $a1, $v0, -0x77A8
    ctx->pc = 0x20a570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x20a574: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x20a574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A889Cu));
    // 0x20a578: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x20a578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20a57c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20A57Cu;
    {
        const bool branch_taken_0x20a57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a57c) {
            ctx->pc = 0x20A5A8u;
            goto label_20a5a8;
        }
    }
    ctx->pc = 0x20A584u;
    // 0x20a584: 0x86220090  lh          $v0, 0x90($s1)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x20a588: 0x8ca50040  lw          $a1, 0x40($a1)
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x20a58c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20a58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20a590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A590u;
    {
        const bool branch_taken_0x20a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a590) {
            ctx->pc = 0x20A5A8u;
            goto label_20a5a8;
        }
    }
    ctx->pc = 0x20A598u;
    // 0x20a598: 0x86420090  lh          $v0, 0x90($s2)
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x20a59c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x20a59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20a5a0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20A5A0u;
    {
        const bool branch_taken_0x20a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a5a0) {
            ctx->pc = 0x20A620u;
            goto label_20a620;
        }
    }
    ctx->pc = 0x20A5A8u;
label_20a5a8:
    // 0x20a5a8: 0xc09d940  jal         func_276500
    ctx->pc = 0x20A5A8u;
    SET_GPR_U32(ctx, 31, 0x20A5B0u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20A5A8u, 0x20A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5B0u;
label_20a5b0:
    // 0x20a5b0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20A5B0u;
    {
        const bool branch_taken_0x20a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5B0u;
        // 0x20a5b4: 0x267083c0  addiu       $s0, $s3, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5b0) {
            ctx->pc = 0x20A620u;
            goto label_20a620;
        }
    }
    ctx->pc = 0x20A5B8u;
    // 0x20a5b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a5bc: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x20a5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x20a5c0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A5C0u;
    {
        const bool branch_taken_0x20a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5C0u;
        // 0x20a5c4: 0x8e6283c0  lw          $v0, -0x7C40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5c0) {
            ctx->pc = 0x20A604u;
            goto label_20a604;
        }
    }
    ctx->pc = 0x20A5C8u;
    // 0x20a5c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a5cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a5d0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A5D0u;
    {
        const bool branch_taken_0x20a5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5D0u;
        // 0x20a5d4: 0x2c620004  sltiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5d0) {
            ctx->pc = 0x20A5F8u;
            goto label_20a5f8;
        }
    }
    ctx->pc = 0x20A5D8u;
    // 0x20a5d8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20A5D8u;
    {
        const bool branch_taken_0x20a5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a5d8) {
            ctx->pc = 0x20A5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A5D8u;
            // 0x20a5dc: 0x8e6283c0  lw          $v0, -0x7C40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A604u;
            goto label_20a604;
        }
    }
    ctx->pc = 0x20A5E0u;
    // 0x20a5e0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A5E0u;
    {
        const bool branch_taken_0x20a5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a5e0) {
            ctx->pc = 0x20A5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A5E0u;
            // 0x20a5e4: 0x8e6283c0  lw          $v0, -0x7C40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A604u;
            goto label_20a604;
        }
    }
    ctx->pc = 0x20A5E8u;
    // 0x20a5e8: 0xc087084  jal         func_21C210
    ctx->pc = 0x20A5E8u;
    SET_GPR_U32(ctx, 31, 0x20A5F0u);
    ctx->pc = 0x20A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5E8u;
    // 0x20a5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C210u, 0x20A5E8u, 0x20A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5F0u;
label_20a5f0:
    // 0x20a5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A5F0u;
    {
        const bool branch_taken_0x20a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5F0u;
        // 0x20a5f4: 0x8e6283c0  lw          $v0, -0x7C40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5f0) {
            ctx->pc = 0x20A604u;
            goto label_20a604;
        }
    }
    ctx->pc = 0x20A5F8u;
label_20a5f8:
    // 0x20a5f8: 0xc08717e  jal         func_21C5F8
    ctx->pc = 0x20A5F8u;
    SET_GPR_U32(ctx, 31, 0x20A600u);
    ctx->pc = 0x20A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5F8u;
    // 0x20a5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5F8u, 0x20A5F8u, 0x20A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A600u;
label_20a600:
    // 0x20a600: 0x8e6283c0  lw          $v0, -0x7C40($s3)
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
label_20a604:
    // 0x20a604: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x20a604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x20a608: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x20A608u;
    {
        const bool branch_taken_0x20a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a608) {
            ctx->pc = 0x20A60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A608u;
            // 0x20a60c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A650u;
            goto label_20a650;
        }
    }
    ctx->pc = 0x20A610u;
    // 0x20a610: 0xc0871fc  jal         func_21C7F0
    ctx->pc = 0x20A610u;
    SET_GPR_U32(ctx, 31, 0x20A618u);
    ctx->pc = 0x20A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A610u;
    // 0x20a614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7F0u, 0x20A610u, 0x20A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A618u;
label_20a618:
    // 0x20a618: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20A618u;
    {
        const bool branch_taken_0x20a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A618u;
        // 0x20a61c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a618) {
            ctx->pc = 0x20A650u;
            goto label_20a650;
        }
    }
    ctx->pc = 0x20A620u;
label_20a620:
    // 0x20a620: 0xc09d940  jal         func_276500
    ctx->pc = 0x20A620u;
    SET_GPR_U32(ctx, 31, 0x20A628u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x20A620u, 0x20A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A628u;
label_20a628:
    // 0x20a628: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A628u;
    {
        const bool branch_taken_0x20a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A628u;
        // 0x20a62c: 0x266483c0  addiu       $a0, $s3, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a628) {
            ctx->pc = 0x20A64Cu;
            goto label_20a64c;
        }
    }
    ctx->pc = 0x20A630u;
    // 0x20a630: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a634: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A634u;
    {
        const bool branch_taken_0x20a634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A634u;
        // 0x20a638: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a634) {
            ctx->pc = 0x20A644u;
            goto label_20a644;
        }
    }
    ctx->pc = 0x20A63Cu;
    // 0x20a63c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A63Cu;
    {
        const bool branch_taken_0x20a63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A63Cu;
        // 0x20a640: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a63c) {
            ctx->pc = 0x20A650u;
            goto label_20a650;
        }
    }
    ctx->pc = 0x20A644u;
label_20a644:
    // 0x20a644: 0xc08717e  jal         func_21C5F8
    ctx->pc = 0x20A644u;
    SET_GPR_U32(ctx, 31, 0x20A64Cu);
    ctx->pc = 0x21C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C5F8u, 0x20A644u, 0x20A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A64Cu;
label_20a64c:
    // 0x20a64c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a650:
    // 0x20a650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20a654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20a658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a65c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a660: 0x3e00008  jr          $ra
    ctx->pc = 0x20A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A660u;
        // 0x20a664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A668u;
}
