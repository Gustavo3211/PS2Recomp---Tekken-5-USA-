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

// Function: sub_00208320
// Address: 0x208320 - 0x208500
void sub_00208320_0x208320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208320_0x208320");
#endif

    ctx->pc = 0x208320u;

    // 0x208320: 0x2c820025  sltiu       $v0, $a0, 0x25
    ctx->pc = 0x208320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x208324: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x208324u;
    {
        const bool branch_taken_0x208324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208324) {
            ctx->pc = 0x2084B8u;
            goto label_2084b8;
        }
    }
    ctx->pc = 0x20832Cu;
    // 0x20832c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x208330: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x208330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x208334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x208334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208338: 0x8c634340  lw          $v1, 0x4340($v1)
    ctx->pc = 0x208338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17216)));
    // 0x20833c: 0x600008  jr          $v1
    ctx->pc = 0x20833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208348u: goto label_208348;
            case 0x208358u: goto label_208358;
            case 0x208368u: goto label_208368;
            case 0x208378u: goto label_208378;
            case 0x208388u: goto label_208388;
            case 0x208398u: goto label_208398;
            case 0x2083A8u: goto label_2083a8;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083C8u: goto label_2083c8;
            case 0x2083D8u: goto label_2083d8;
            case 0x2083E8u: goto label_2083e8;
            case 0x2083F8u: goto label_2083f8;
            case 0x208408u: goto label_208408;
            case 0x208418u: goto label_208418;
            case 0x208428u: goto label_208428;
            case 0x208438u: goto label_208438;
            case 0x208448u: goto label_208448;
            case 0x208458u: goto label_208458;
            case 0x208468u: goto label_208468;
            case 0x208478u: goto label_208478;
            case 0x208488u: goto label_208488;
            case 0x208498u: goto label_208498;
            case 0x2084A8u: goto label_2084a8;
            case 0x2084B8u: goto label_2084b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20833Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x208344u;
    // 0x208344: 0x0  nop
    ctx->pc = 0x208344u;
    // NOP
label_208348:
    // 0x208348: 0x2782c8b8  addiu       $v0, $gp, -0x3748
    ctx->pc = 0x208348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20834c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20834cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x208350: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x208350u;
    {
        const bool branch_taken_0x208350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208350u;
        // 0x208354: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208350) {
            ctx->pc = 0x2084C8u;
            goto label_2084c8;
        }
    }
    ctx->pc = 0x208358u;
label_208358:
    // 0x208358: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20835c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x20835Cu;
    {
        const bool branch_taken_0x20835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20835Cu;
        // 0x208360: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20835c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208364u;
    // 0x208364: 0x0  nop
    ctx->pc = 0x208364u;
    // NOP
label_208368:
    // 0x208368: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20836c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x20836Cu;
    {
        const bool branch_taken_0x20836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20836Cu;
        // 0x208370: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20836c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208374u;
    // 0x208374: 0x0  nop
    ctx->pc = 0x208374u;
    // NOP
label_208378:
    // 0x208378: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20837c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x20837Cu;
    {
        const bool branch_taken_0x20837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20837Cu;
        // 0x208380: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20837c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208384u;
    // 0x208384: 0x0  nop
    ctx->pc = 0x208384u;
    // NOP
label_208388:
    // 0x208388: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20838c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x20838Cu;
    {
        const bool branch_taken_0x20838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20838Cu;
        // 0x208390: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20838c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208394u;
    // 0x208394: 0x0  nop
    ctx->pc = 0x208394u;
    // NOP
label_208398:
    // 0x208398: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20839c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x20839Cu;
    {
        const bool branch_taken_0x20839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20839Cu;
        // 0x2083a0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20839c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2083A4u;
    // 0x2083a4: 0x0  nop
    ctx->pc = 0x2083a4u;
    // NOP
label_2083a8:
    // 0x2083a8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2083ac: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2083ACu;
    {
        const bool branch_taken_0x2083ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083ACu;
        // 0x2083b0: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083ac) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2083B4u;
    // 0x2083b4: 0x0  nop
    ctx->pc = 0x2083b4u;
    // NOP
label_2083b8:
    // 0x2083b8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2083b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2083bc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2083BCu;
    {
        const bool branch_taken_0x2083bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083BCu;
        // 0x2083c0: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083bc) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2083C4u;
    // 0x2083c4: 0x0  nop
    ctx->pc = 0x2083c4u;
    // NOP
label_2083c8:
    // 0x2083c8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2083c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2083cc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2083CCu;
    {
        const bool branch_taken_0x2083cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083CCu;
        // 0x2083d0: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083cc) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2083D4u;
    // 0x2083d4: 0x0  nop
    ctx->pc = 0x2083d4u;
    // NOP
label_2083d8:
    // 0x2083d8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2083d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2083dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2083DCu;
    {
        const bool branch_taken_0x2083dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083DCu;
        // 0x2083e0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083dc) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2083E4u;
    // 0x2083e4: 0x0  nop
    ctx->pc = 0x2083e4u;
    // NOP
label_2083e8:
    // 0x2083e8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2083e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2083ec: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2083ECu;
    {
        const bool branch_taken_0x2083ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083ECu;
        // 0x2083f0: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083ec) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2083F4u;
    // 0x2083f4: 0x0  nop
    ctx->pc = 0x2083f4u;
    // NOP
label_2083f8:
    // 0x2083f8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2083f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2083fc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2083FCu;
    {
        const bool branch_taken_0x2083fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083FCu;
        // 0x208400: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083fc) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208404u;
    // 0x208404: 0x0  nop
    ctx->pc = 0x208404u;
    // NOP
label_208408:
    // 0x208408: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20840c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20840Cu;
    {
        const bool branch_taken_0x20840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20840Cu;
        // 0x208410: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20840c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208414u;
    // 0x208414: 0x0  nop
    ctx->pc = 0x208414u;
    // NOP
label_208418:
    // 0x208418: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20841c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x20841Cu;
    {
        const bool branch_taken_0x20841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20841Cu;
        // 0x208420: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20841c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208424u;
    // 0x208424: 0x0  nop
    ctx->pc = 0x208424u;
    // NOP
label_208428:
    // 0x208428: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20842c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x20842Cu;
    {
        const bool branch_taken_0x20842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20842Cu;
        // 0x208430: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20842c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208434u;
    // 0x208434: 0x0  nop
    ctx->pc = 0x208434u;
    // NOP
label_208438:
    // 0x208438: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20843c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20843Cu;
    {
        const bool branch_taken_0x20843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20843Cu;
        // 0x208440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20843c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208444u;
    // 0x208444: 0x0  nop
    ctx->pc = 0x208444u;
    // NOP
label_208448:
    // 0x208448: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20844c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20844Cu;
    {
        const bool branch_taken_0x20844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20844Cu;
        // 0x208450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20844c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208454u;
    // 0x208454: 0x0  nop
    ctx->pc = 0x208454u;
    // NOP
label_208458:
    // 0x208458: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20845c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20845Cu;
    {
        const bool branch_taken_0x20845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20845Cu;
        // 0x208460: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20845c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208464u;
    // 0x208464: 0x0  nop
    ctx->pc = 0x208464u;
    // NOP
label_208468:
    // 0x208468: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20846c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20846Cu;
    {
        const bool branch_taken_0x20846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20846Cu;
        // 0x208470: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20846c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208474u;
    // 0x208474: 0x0  nop
    ctx->pc = 0x208474u;
    // NOP
label_208478:
    // 0x208478: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20847c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20847Cu;
    {
        const bool branch_taken_0x20847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20847Cu;
        // 0x208480: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20847c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208484u;
    // 0x208484: 0x0  nop
    ctx->pc = 0x208484u;
    // NOP
label_208488:
    // 0x208488: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20848c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20848Cu;
    {
        const bool branch_taken_0x20848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20848Cu;
        // 0x208490: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20848c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x208494u;
    // 0x208494: 0x0  nop
    ctx->pc = 0x208494u;
    // NOP
label_208498:
    // 0x208498: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x208498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x20849c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20849Cu;
    {
        const bool branch_taken_0x20849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20849Cu;
        // 0x2084a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20849c) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2084A4u;
    // 0x2084a4: 0x0  nop
    ctx->pc = 0x2084a4u;
    // NOP
label_2084a8:
    // 0x2084a8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2084a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2084ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2084ACu;
    {
        const bool branch_taken_0x2084ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084ACu;
        // 0x2084b0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084ac) {
            ctx->pc = 0x2084C0u;
            goto label_2084c0;
        }
    }
    ctx->pc = 0x2084B4u;
    // 0x2084b4: 0x0  nop
    ctx->pc = 0x2084b4u;
    // NOP
label_2084b8:
    // 0x2084b8: 0x2783c8b8  addiu       $v1, $gp, -0x3748
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953144));
    // 0x2084bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2084c0:
    // 0x2084c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2084c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2084c4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2084c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2084c8:
    // 0x2084c8: 0x2482fff9  addiu       $v0, $a0, -0x7
    ctx->pc = 0x2084c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x2084cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2084d0: 0x8f83c8c0  lw          $v1, -0x3740($gp)
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x2084d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2084d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2084d8: 0xaf84c8c8  sw          $a0, -0x3738($gp)
    ctx->pc = 0x2084d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 4));
    // 0x2084dc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2084dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2084e0: 0xaf80c8a8  sw          $zero, -0x3758($gp)
    ctx->pc = 0x2084e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953128), GPR_U32(ctx, 0));
    // 0x2084e4: 0xaf83c8c0  sw          $v1, -0x3740($gp)
    ctx->pc = 0x2084e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953152), GPR_U32(ctx, 3));
    // 0x2084e8: 0xaf80c8ac  sw          $zero, -0x3754($gp)
    ctx->pc = 0x2084e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953132), GPR_U32(ctx, 0));
    // 0x2084ec: 0xaf8098ac  sw          $zero, -0x6754($gp)
    ctx->pc = 0x2084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 0));
    // 0x2084f0: 0xaf80c8c4  sw          $zero, -0x373C($gp)
    ctx->pc = 0x2084f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953156), GPR_U32(ctx, 0));
    // 0x2084f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2084F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2084F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084F4u;
        // 0x2084f8: 0xaf80c8d4  sw          $zero, -0x372C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2084FCu;
    // 0x2084fc: 0x0  nop
    ctx->pc = 0x2084fcu;
    // NOP
    ctx->pc = 0x208500u;
}
