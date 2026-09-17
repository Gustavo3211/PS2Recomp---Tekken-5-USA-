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

// Function: sub_002133F8
// Address: 0x2133f8 - 0x213a68
void sub_002133F8_0x2133f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002133F8_0x2133f8");
#endif

    switch (ctx->pc) {
        case 0x213438u: goto label_213438;
        case 0x213440u: goto label_213440;
        case 0x213448u: goto label_213448;
        case 0x213464u: goto label_213464;
        case 0x213498u: goto label_213498;
        case 0x2134a8u: goto label_2134a8;
        case 0x2134b8u: goto label_2134b8;
        case 0x2134c8u: goto label_2134c8;
        case 0x2134d8u: goto label_2134d8;
        case 0x2134e8u: goto label_2134e8;
        case 0x2134f0u: goto label_2134f0;
        case 0x213528u: goto label_213528;
        case 0x21353cu: goto label_21353c;
        case 0x213560u: goto label_213560;
        case 0x213570u: goto label_213570;
        case 0x213580u: goto label_213580;
        case 0x213594u: goto label_213594;
        case 0x21359cu: goto label_21359c;
        case 0x2135ccu: goto label_2135cc;
        case 0x2135e8u: goto label_2135e8;
        case 0x21360cu: goto label_21360c;
        case 0x213614u: goto label_213614;
        case 0x21361cu: goto label_21361c;
        case 0x213660u: goto label_213660;
        case 0x213670u: goto label_213670;
        case 0x2136b8u: goto label_2136b8;
        case 0x2136c0u: goto label_2136c0;
        case 0x213704u: goto label_213704;
        case 0x21370cu: goto label_21370c;
        case 0x213714u: goto label_213714;
        case 0x21379cu: goto label_21379c;
        case 0x2137a4u: goto label_2137a4;
        case 0x2137c0u: goto label_2137c0;
        case 0x21387cu: goto label_21387c;
        case 0x213898u: goto label_213898;
        case 0x2138c0u: goto label_2138c0;
        case 0x2138e8u: goto label_2138e8;
        case 0x213928u: goto label_213928;
        case 0x2139a4u: goto label_2139a4;
        case 0x2139e4u: goto label_2139e4;
        case 0x2139ecu: goto label_2139ec;
        case 0x2139f4u: goto label_2139f4;
        case 0x2139fcu: goto label_2139fc;
        case 0x213a04u: goto label_213a04;
        case 0x213a18u: goto label_213a18;
        case 0x213a30u: goto label_213a30;
        case 0x213a38u: goto label_213a38;
        default: break;
    }

    ctx->pc = 0x2133f8u;

    // 0x2133f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2133f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2133fc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2133fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x213400: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x213400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x213404: 0x245283c0  addiu       $s2, $v0, -0x7C40
    ctx->pc = 0x213404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x213408: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x213408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21340c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21340cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213410: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x213410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x213414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x213414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x213418: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x213418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21341c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x213420: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x213420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x213424: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x213424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x213428: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x213428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21342c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x213430: 0xc0862ba  jal         func_218AE8
    ctx->pc = 0x213430u;
    SET_GPR_U32(ctx, 31, 0x213438u);
    ctx->pc = 0x213434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213430u;
    // 0x213434: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AE8u, 0x213430u, 0x213438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213438u;
label_213438:
    // 0x213438: 0xc07c356  jal         func_1F0D58
    ctx->pc = 0x213438u;
    SET_GPR_U32(ctx, 31, 0x213440u);
    ctx->pc = 0x1F0D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0D58u, 0x213438u, 0x213440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213440u;
label_213440:
    // 0x213440: 0xc0b43c4  jal         func_2D0F10
    ctx->pc = 0x213440u;
    SET_GPR_U32(ctx, 31, 0x213448u);
    ctx->pc = 0x2D0F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F10u, 0x213440u, 0x213448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213448u;
label_213448:
    // 0x213448: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x213448u;
    {
        const bool branch_taken_0x213448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213448u;
        // 0x21344c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213448) {
            ctx->pc = 0x21346Cu;
            goto label_21346c;
        }
    }
    ctx->pc = 0x213450u;
    // 0x213450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213454: 0x50620179  beql        $v1, $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x213454u;
    {
        const bool branch_taken_0x213454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x213454) {
            ctx->pc = 0x213458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213454u;
            // 0x213458: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A3Cu;
            goto label_213a3c;
        }
    }
    ctx->pc = 0x21345Cu;
    // 0x21345c: 0xc09d940  jal         func_276500
    ctx->pc = 0x21345Cu;
    SET_GPR_U32(ctx, 31, 0x213464u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21345Cu, 0x213464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213464u;
label_213464:
    // 0x213464: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x213464u;
    {
        const bool branch_taken_0x213464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213464u;
        // 0x213468: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213464) {
            ctx->pc = 0x213A3Cu;
            goto label_213a3c;
        }
    }
    ctx->pc = 0x21346Cu;
label_21346c:
    // 0x21346c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213470: 0x2650004c  addiu       $s0, $s2, 0x4C
    ctx->pc = 0x213470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x213474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213478: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x213478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x21347c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213480: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x213480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x213484: 0xa2400013  sb          $zero, 0x13($s2)
    ctx->pc = 0x213484u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x213488: 0xa240000e  sb          $zero, 0xE($s2)
    ctx->pc = 0x213488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x21348c: 0xa240000f  sb          $zero, 0xF($s2)
    ctx->pc = 0x21348cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x213490: 0xc04a151  jal         func_128544
    ctx->pc = 0x213490u;
    SET_GPR_U32(ctx, 31, 0x213498u);
    ctx->pc = 0x213494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213490u;
    // 0x213494: 0xa2400010  sb          $zero, 0x10($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x213490u, 0x213498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213498u;
label_213498:
    // 0x213498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21349c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21349cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134a0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2134A0u;
    SET_GPR_U32(ctx, 31, 0x2134A8u);
    ctx->pc = 0x2134A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134A0u;
    // 0x2134a4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2134A0u, 0x2134A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134A8u;
label_2134a8:
    // 0x2134a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2134a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2134acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134b0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2134B0u;
    SET_GPR_U32(ctx, 31, 0x2134B8u);
    ctx->pc = 0x2134B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134B0u;
    // 0x2134b4: 0x2406014c  addiu       $a2, $zero, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2134B0u, 0x2134B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134B8u;
label_2134b8:
    // 0x2134b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2134b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2134bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134c0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2134C0u;
    SET_GPR_U32(ctx, 31, 0x2134C8u);
    ctx->pc = 0x2134C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134C0u;
    // 0x2134c4: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2134C0u, 0x2134C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134C8u;
label_2134c8:
    // 0x2134c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2134c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2134ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134d0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2134D0u;
    SET_GPR_U32(ctx, 31, 0x2134D8u);
    ctx->pc = 0x2134D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134D0u;
    // 0x2134d4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2134D0u, 0x2134D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134D8u;
label_2134d8:
    // 0x2134d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2134d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2134dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134e0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2134E0u;
    SET_GPR_U32(ctx, 31, 0x2134E8u);
    ctx->pc = 0x2134E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134E0u;
    // 0x2134e4: 0x24060408  addiu       $a2, $zero, 0x408 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2134E0u, 0x2134E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134E8u;
label_2134e8:
    // 0x2134e8: 0xc09d940  jal         func_276500
    ctx->pc = 0x2134E8u;
    SET_GPR_U32(ctx, 31, 0x2134F0u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x2134E8u, 0x2134F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134F0u;
label_2134f0:
    // 0x2134f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2134F0u;
    {
        const bool branch_taken_0x2134f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2134F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134F0u;
        // 0x2134f4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134f0) {
            ctx->pc = 0x213500u;
            goto label_213500;
        }
    }
    ctx->pc = 0x2134F8u;
    // 0x2134f8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x2134f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2134fc: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x2134fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_213500:
    // 0x213500: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x213500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x213504: 0x2451f454  addiu       $s1, $v0, -0xBAC
    ctx->pc = 0x213504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964308));
    // 0x213508: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x213508u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x21350c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213510: 0xa2430028  sb          $v1, 0x28($s2)
    ctx->pc = 0x213510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x213514: 0x26708858  addiu       $s0, $s3, -0x77A8
    ctx->pc = 0x213514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
    // 0x213518: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x213518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x21351c: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x21351cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x213520: 0xc0da610  jal         func_369840
    ctx->pc = 0x213520u;
    SET_GPR_U32(ctx, 31, 0x213528u);
    ctx->pc = 0x213524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213520u;
    // 0x213524: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369840u, 0x213520u, 0x213528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213528u;
label_213528:
    // 0x213528: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x213528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x21352c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x21352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x213530: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x213530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213534: 0xc09d940  jal         func_276500
    ctx->pc = 0x213534u;
    SET_GPR_U32(ctx, 31, 0x21353Cu);
    ctx->pc = 0x213538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213534u;
    // 0x213538: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x213534u, 0x21353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21353Cu;
label_21353c:
    // 0x21353c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21353Cu;
    {
        const bool branch_taken_0x21353c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21353c) {
            ctx->pc = 0x213558u;
            goto label_213558;
        }
    }
    ctx->pc = 0x213544u;
    // 0x213544: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x213544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x213548: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x213548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21354c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21354Cu;
    {
        const bool branch_taken_0x21354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21354Cu;
        // 0x213550: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21354c) {
            ctx->pc = 0x213564u;
            goto label_213564;
        }
    }
    ctx->pc = 0x213554u;
    // 0x213554: 0x0  nop
    ctx->pc = 0x213554u;
    // NOP
label_213558:
    // 0x213558: 0xc09dc30  jal         func_2770C0
    ctx->pc = 0x213558u;
    SET_GPR_U32(ctx, 31, 0x213560u);
    ctx->pc = 0x2770C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2770C0u, 0x213558u, 0x213560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213560u;
label_213560:
    // 0x213560: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x213560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_213564:
    // 0x213564: 0xaf809744  sw          $zero, -0x68BC($gp)
    ctx->pc = 0x213564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940484), GPR_U32(ctx, 0));
    // 0x213568: 0xc09d940  jal         func_276500
    ctx->pc = 0x213568u;
    SET_GPR_U32(ctx, 31, 0x213570u);
    ctx->pc = 0x21356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213568u;
    // 0x21356c: 0xaf809748  sw          $zero, -0x68B8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940488), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x213568u, 0x213570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213570u;
label_213570:
    // 0x213570: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x213570u;
    {
        const bool branch_taken_0x213570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213570u;
        // 0x213574: 0x26628858  addiu       $v0, $s3, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213570) {
            ctx->pc = 0x2135ACu;
            goto label_2135ac;
        }
    }
    ctx->pc = 0x213578u;
    // 0x213578: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x213578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21357c: 0x2351007  srav        $v0, $s5, $s1
    ctx->pc = 0x21357cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
label_213580:
    // 0x213580: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213584: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x213584u;
    {
        const bool branch_taken_0x213584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213584) {
            ctx->pc = 0x213588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213584u;
            // 0x213588: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2135A0u;
            goto label_2135a0;
        }
    }
    ctx->pc = 0x21358Cu;
    // 0x21358c: 0xc0850e6  jal         func_214398
    ctx->pc = 0x21358Cu;
    SET_GPR_U32(ctx, 31, 0x213594u);
    ctx->pc = 0x213590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21358Cu;
    // 0x213590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214398u, 0x21358Cu, 0x213594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213594u;
label_213594:
    // 0x213594: 0xc0b474e  jal         func_2D1D38
    ctx->pc = 0x213594u;
    SET_GPR_U32(ctx, 31, 0x21359Cu);
    ctx->pc = 0x213598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213594u;
    // 0x213598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D38u, 0x213594u, 0x21359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21359Cu;
label_21359c:
    // 0x21359c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21359cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2135a0:
    // 0x2135a0: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2135A0u;
    {
        const bool branch_taken_0x2135a0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2135A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135A0u;
        // 0x2135a4: 0x2351007  srav        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135a0) {
            ctx->pc = 0x213580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213580;
        }
    }
    ctx->pc = 0x2135A8u;
    // 0x2135a8: 0x26628858  addiu       $v0, $s3, -0x77A8
    ctx->pc = 0x2135a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936664));
label_2135ac:
    // 0x2135ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2135acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2135b0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2135b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2135b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2135b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135b8: 0x26560005  addiu       $s6, $s2, 0x5
    ctx->pc = 0x2135b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x2135bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2135bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2135c0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2135c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2135c4: 0xc086b20  jal         func_21AC80
    ctx->pc = 0x2135C4u;
    SET_GPR_U32(ctx, 31, 0x2135CCu);
    ctx->pc = 0x2135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135C4u;
    // 0x2135c8: 0x26770008  addiu       $s7, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC80u, 0x2135C4u, 0x2135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135CCu;
label_2135cc:
    // 0x2135cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2135ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2135d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2135d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2135d4: 0x821826  xor         $v1, $a0, $v0
    ctx->pc = 0x2135d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2135d8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2135d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2135dc: 0x43a80a  movz        $s5, $v0, $v1
    ctx->pc = 0x2135dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x2135e0: 0x249e88d0  addiu       $fp, $a0, -0x7730
    ctx->pc = 0x2135e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x2135e4: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2135e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2135e8:
    // 0x2135e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2135e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135ec: 0x21e3021  addu        $a2, $s0, $fp
    ctx->pc = 0x2135ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x2135f0: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x2135f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x2135f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2135f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2135f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2135f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135fc: 0xa4510012  sh          $s1, 0x12($v0)
    ctx->pc = 0x2135fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 17));
    // 0x213600: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x213600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213604: 0xc08664a  jal         func_219928
    ctx->pc = 0x213604u;
    SET_GPR_U32(ctx, 31, 0x21360Cu);
    ctx->pc = 0x213608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213604u;
    // 0x213608: 0xa471003c  sh          $s1, 0x3C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x213604u, 0x21360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21360Cu;
label_21360c:
    // 0x21360c: 0xc086f40  jal         func_21BD00
    ctx->pc = 0x21360Cu;
    SET_GPR_U32(ctx, 31, 0x213614u);
    ctx->pc = 0x213610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21360Cu;
    // 0x213610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BD00u, 0x21360Cu, 0x213614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213614u;
label_213614:
    // 0x213614: 0xc07c2dc  jal         func_1F0B70
    ctx->pc = 0x213614u;
    SET_GPR_U32(ctx, 31, 0x21361Cu);
    ctx->pc = 0x213618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213614u;
    // 0x213618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B70u, 0x213614u, 0x21361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21361Cu;
label_21361c:
    // 0x21361c: 0x2342804  sllv        $a1, $s4, $s1
    ctx->pc = 0x21361cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 17) & 0x1F));
    // 0x213620: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x213620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x213624: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x213624u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x213628: 0x2352007  srav        $a0, $s5, $s1
    ctx->pc = 0x213628u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 17) & 0x1F));
    // 0x21362c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x213630: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x213630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x213634: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x213634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x213638: 0xae630050  sw          $v1, 0x50($s3)
    ctx->pc = 0x213638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
    // 0x21363c: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x21363cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x213640: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213640u;
    {
        const bool branch_taken_0x213640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x213644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213640u;
        // 0x213644: 0xae140040  sw          $s4, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213640) {
            ctx->pc = 0x213654u;
            goto label_213654;
        }
    }
    ctx->pc = 0x213648u;
    // 0x213648: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x213648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x21364c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x21364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x213650: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x213650u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
label_213654:
    // 0x213654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213658: 0xc0865d8  jal         func_219760
    ctx->pc = 0x213658u;
    SET_GPR_U32(ctx, 31, 0x213660u);
    ctx->pc = 0x21365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213658u;
    // 0x21365c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219760u, 0x213658u, 0x213660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213660u;
label_213660:
    // 0x213660: 0x623ffe1  bgezl       $s1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x213660u;
    {
        const bool branch_taken_0x213660 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x213660) {
            ctx->pc = 0x213664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213660u;
            // 0x213664: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2135E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2135e8;
        }
    }
    ctx->pc = 0x213668u;
    // 0x213668: 0xc084e9a  jal         func_213A68
    ctx->pc = 0x213668u;
    SET_GPR_U32(ctx, 31, 0x213670u);
    ctx->pc = 0x21366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213668u;
    // 0x21366c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A68u, 0x213668u, 0x213670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213670u;
label_213670:
    // 0x213670: 0xa2400008  sb          $zero, 0x8($s2)
    ctx->pc = 0x213670u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x213674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213678: 0xa2400009  sb          $zero, 0x9($s2)
    ctx->pc = 0x213678u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x21367c: 0xa242000b  sb          $v0, 0xB($s2)
    ctx->pc = 0x21367cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x213680: 0xa2420004  sb          $v0, 0x4($s2)
    ctx->pc = 0x213680u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x213684: 0x2610f490  addiu       $s0, $s0, -0xB70
    ctx->pc = 0x213684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964368));
    // 0x213688: 0xa2420005  sb          $v0, 0x5($s2)
    ctx->pc = 0x213688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x21368c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x21368cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x213690: 0xa242000d  sb          $v0, 0xD($s2)
    ctx->pc = 0x213690u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x213694: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x213694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x213698: 0xa2420006  sb          $v0, 0x6($s2)
    ctx->pc = 0x213698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x21369c: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x21369cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2136a0: 0xa2420007  sb          $v0, 0x7($s2)
    ctx->pc = 0x2136a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2136a4: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x2136a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2136a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2136a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2136ac: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2136acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2136b0: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x2136B0u;
    SET_GPR_U32(ctx, 31, 0x2136B8u);
    ctx->pc = 0x2136B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136B0u;
    // 0x2136b4: 0xa243000c  sb          $v1, 0xC($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x2136B0u, 0x2136B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136B8u;
label_2136b8:
    // 0x2136b8: 0xc085134  jal         func_2144D0
    ctx->pc = 0x2136B8u;
    SET_GPR_U32(ctx, 31, 0x2136C0u);
    ctx->pc = 0x2136BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136B8u;
    // 0x2136bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2144D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2144D0u, 0x2136B8u, 0x2136C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136C0u;
label_2136c0:
    // 0x2136c0: 0x8e03ffd4  lw          $v1, -0x2C($s0)
    ctx->pc = 0x2136c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967252)));
    // 0x2136c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2136c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2136c8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2136c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2136cc: 0x2ca4000a  sltiu       $a0, $a1, 0xA
    ctx->pc = 0x2136ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2136d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2136d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2136d4: 0x108000b1  beqz        $a0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2136D4u;
    {
        const bool branch_taken_0x2136d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136D4u;
        // 0x2136d8: 0xa242002f  sb          $v0, 0x2F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136d4) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x2136DCu;
    // 0x2136dc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2136dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2136e0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2136e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2136e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2136e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2136e8: 0x8c634e40  lw          $v1, 0x4E40($v1)
    ctx->pc = 0x2136e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20032)));
    // 0x2136ec: 0x600008  jr          $v1
    ctx->pc = 0x2136ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2136F8u: goto label_2136f8;
            case 0x213720u: goto label_213720;
            case 0x213730u: goto label_213730;
            case 0x213770u: goto label_213770;
            case 0x2137E8u: goto label_2137e8;
            case 0x213838u: goto label_213838;
            case 0x2138F0u: goto label_2138f0;
            case 0x213930u: goto label_213930;
            case 0x213970u: goto label_213970;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2136ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2136F4u;
    // 0x2136f4: 0x0  nop
    ctx->pc = 0x2136f4u;
    // NOP
label_2136f8:
    // 0x2136f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2136f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136fc: 0xc086bca  jal         func_21AF28
    ctx->pc = 0x2136FCu;
    SET_GPR_U32(ctx, 31, 0x213704u);
    ctx->pc = 0x213700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136FCu;
    // 0x213700: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AF28u, 0x2136FCu, 0x213704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213704u;
label_213704:
    // 0x213704: 0xc086f96  jal         func_21BE58
    ctx->pc = 0x213704u;
    SET_GPR_U32(ctx, 31, 0x21370Cu);
    ctx->pc = 0x213708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213704u;
    // 0x213708: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE58u, 0x213704u, 0x21370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21370Cu;
label_21370c:
    // 0x21370c: 0xc0a1260  jal         func_284980
    ctx->pc = 0x21370Cu;
    SET_GPR_U32(ctx, 31, 0x213714u);
    ctx->pc = 0x284980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284980u, 0x21370Cu, 0x213714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213714u;
label_213714:
    // 0x213714: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x213714u;
    {
        const bool branch_taken_0x213714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213714) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x21371Cu;
    // 0x21371c: 0x0  nop
    ctx->pc = 0x21371cu;
    // NOP
label_213720:
    // 0x213720: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x213720u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x213724: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x213724u;
    {
        const bool branch_taken_0x213724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213724u;
        // 0x213728: 0xa240000d  sb          $zero, 0xD($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213724) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x21372Cu;
    // 0x21372c: 0x0  nop
    ctx->pc = 0x21372cu;
    // NOP
label_213730:
    // 0x213730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x213734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213738: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x213738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21373c: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x21373cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x213740: 0xa6440052  sh          $a0, 0x52($s2)
    ctx->pc = 0x213740u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x213744: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x213744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x213748: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x213748u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x21374c: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x21374cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x213750: 0xa242000a  sb          $v0, 0xA($s2)
    ctx->pc = 0x213750u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x213754: 0xa6400054  sh          $zero, 0x54($s2)
    ctx->pc = 0x213754u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x213758: 0xa640004c  sh          $zero, 0x4C($s2)
    ctx->pc = 0x213758u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x21375c: 0xa6400050  sh          $zero, 0x50($s2)
    ctx->pc = 0x21375cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x213760: 0xa644004e  sh          $a0, 0x4E($s2)
    ctx->pc = 0x213760u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 78), (uint16_t)GPR_U32(ctx, 4));
    // 0x213764: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x213764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
    // 0x213768: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x213768u;
    {
        const bool branch_taken_0x213768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213768u;
        // 0x21376c: 0xae430060  sw          $v1, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213768) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x213770u;
label_213770:
    // 0x213770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213778: 0xa242002f  sb          $v0, 0x2F($s2)
    ctx->pc = 0x213778u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x21377c: 0xa2420006  sb          $v0, 0x6($s2)
    ctx->pc = 0x21377cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x213780: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x213780u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x213784: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x213784u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x213788: 0xa242000a  sb          $v0, 0xA($s2)
    ctx->pc = 0x213788u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x21378c: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x21378cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x213790: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x213790u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x213794: 0xc086bca  jal         func_21AF28
    ctx->pc = 0x213794u;
    SET_GPR_U32(ctx, 31, 0x21379Cu);
    ctx->pc = 0x213798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213794u;
    // 0x213798: 0xae4000d8  sw          $zero, 0xD8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AF28u, 0x213794u, 0x21379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21379Cu;
label_21379c:
    // 0x21379c: 0xc09d940  jal         func_276500
    ctx->pc = 0x21379Cu;
    SET_GPR_U32(ctx, 31, 0x2137A4u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21379Cu, 0x2137A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2137A4u;
label_2137a4:
    // 0x2137a4: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2137A4u;
    {
        const bool branch_taken_0x2137a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2137A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137A4u;
        // 0x2137a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137a4) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x2137ACu;
    // 0x2137ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2137acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137b0: 0xa2420116  sb          $v0, 0x116($s2)
    ctx->pc = 0x2137b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 278), (uint8_t)GPR_U32(ctx, 2));
    // 0x2137b4: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2137b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2137b8: 0xa2420109  sb          $v0, 0x109($s2)
    ctx->pc = 0x2137b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 265), (uint8_t)GPR_U32(ctx, 2));
    // 0x2137bc: 0x0  nop
    ctx->pc = 0x2137bcu;
    // NOP
label_2137c0:
    // 0x2137c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2137c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2137c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2137c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2137c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2137c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2137cc: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x2137ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2137d0: 0x0  nop
    ctx->pc = 0x2137d0u;
    // NOP
    // 0x2137d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2137D4u;
    {
        const bool branch_taken_0x2137d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2137D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137D4u;
        // 0x2137d8: 0xac400100  sw          $zero, 0x100($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137d4) {
            ctx->pc = 0x2137C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2137c0;
        }
    }
    ctx->pc = 0x2137DCu;
    // 0x2137dc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2137DCu;
    {
        const bool branch_taken_0x2137dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2137dc) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x2137E4u;
    // 0x2137e4: 0x0  nop
    ctx->pc = 0x2137e4u;
    // NOP
label_2137e8:
    // 0x2137e8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2137e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2137ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2137ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2137f0: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x2137f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2137f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2137f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2137fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2137fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213800: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x213800u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x213804: 0xa244002f  sb          $a0, 0x2F($s2)
    ctx->pc = 0x213804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x213808: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x213808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3A888Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A888Cu, _value); } while (0);
    // 0x21380c: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x21380cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3A8894u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8894u, _value); } while (0);
    // 0x213810: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x213810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8890u, _value); } while (0);
    // 0x213814: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x213814u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x213818: 0xa2400006  sb          $zero, 0x6($s2)
    ctx->pc = 0x213818u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x21381c: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x21381cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x213820: 0xa2400008  sb          $zero, 0x8($s2)
    ctx->pc = 0x213820u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x213824: 0xa2400009  sb          $zero, 0x9($s2)
    ctx->pc = 0x213824u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x213828: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x213828u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x21382c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x21382Cu;
    {
        const bool branch_taken_0x21382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21382Cu;
        // 0x213830: 0xa240000d  sb          $zero, 0xD($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21382c) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x213834u;
    // 0x213834: 0x0  nop
    ctx->pc = 0x213834u;
    // NOP
label_213838:
    // 0x213838: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x21383c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213840: 0x24828858  addiu       $v0, $a0, -0x77A8
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x213844: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213848: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x213848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21384c: 0xa243002f  sb          $v1, 0x2F($s2)
    ctx->pc = 0x21384cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x213850: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x213850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3A888Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A888Cu, _value); } while (0);
    // 0x213854: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x213854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3A8894u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8894u, _value); } while (0);
    // 0x213858: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x213858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8890u, _value); } while (0);
    // 0x21385c: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x21385cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x213860: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x213860u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x213864: 0xa2400006  sb          $zero, 0x6($s2)
    ctx->pc = 0x213864u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x213868: 0xa2430007  sb          $v1, 0x7($s2)
    ctx->pc = 0x213868u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x21386c: 0xa2400008  sb          $zero, 0x8($s2)
    ctx->pc = 0x21386cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x213870: 0xa2430009  sb          $v1, 0x9($s2)
    ctx->pc = 0x213870u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x213874: 0xc09d940  jal         func_276500
    ctx->pc = 0x213874u;
    SET_GPR_U32(ctx, 31, 0x21387Cu);
    ctx->pc = 0x213878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213874u;
    // 0x213878: 0xa243000a  sb          $v1, 0xA($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x213874u, 0x21387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21387Cu;
label_21387c:
    // 0x21387c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21387Cu;
    {
        const bool branch_taken_0x21387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21387Cu;
        // 0x213880: 0x2645001c  addiu       $a1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21387c) {
            ctx->pc = 0x21388Cu;
            goto label_21388c;
        }
    }
    ctx->pc = 0x213884u;
    // 0x213884: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x213884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x213888: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x213888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_21388c:
    // 0x21388c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21388cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213890: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x213890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213894: 0x0  nop
    ctx->pc = 0x213894u;
    // NOP
label_213898:
    // 0x213898: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x213898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21389c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21389cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2138a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2138a4: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x2138a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2138a8: 0x0  nop
    ctx->pc = 0x2138a8u;
    // NOP
    // 0x2138ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2138ACu;
    {
        const bool branch_taken_0x2138ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2138B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138ACu;
        // 0x2138b0: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138ac) {
            ctx->pc = 0x213898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213898;
        }
    }
    ctx->pc = 0x2138B4u;
    // 0x2138b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2138b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2138b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2138bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2138bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2138c0:
    // 0x2138c0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2138c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2138c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2138c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2138cc: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2138ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2138d0: 0x0  nop
    ctx->pc = 0x2138d0u;
    // NOP
    // 0x2138d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2138D4u;
    {
        const bool branch_taken_0x2138d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2138D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138D4u;
        // 0x2138d8: 0xac4500d0  sw          $a1, 0xD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138d4) {
            ctx->pc = 0x2138C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2138c0;
        }
    }
    ctx->pc = 0x2138DCu;
    // 0x2138dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2138dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2138e0: 0xc086bca  jal         func_21AF28
    ctx->pc = 0x2138E0u;
    SET_GPR_U32(ctx, 31, 0x2138E8u);
    ctx->pc = 0x2138E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2138E0u;
    // 0x2138e4: 0xae4000e8  sw          $zero, 0xE8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AF28u, 0x2138E0u, 0x2138E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2138E8u;
label_2138e8:
    // 0x2138e8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2138E8u;
    {
        const bool branch_taken_0x2138e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2138e8) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x2138F0u;
label_2138f0:
    // 0x2138f0: 0x9245000c  lbu         $a1, 0xC($s2)
    ctx->pc = 0x2138f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2138f4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2138f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2138f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2138f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2138fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2138fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x213900: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x213900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x213904: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x213904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8894u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8894u, _value); } while (0);
    // 0x213908: 0xa244002f  sb          $a0, 0x2F($s2)
    ctx->pc = 0x213908u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x21390c: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x21390cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x213910: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x213910u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x213914: 0xa2400008  sb          $zero, 0x8($s2)
    ctx->pc = 0x213914u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x213918: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x213918u;
    {
        const bool branch_taken_0x213918 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213918u;
        // 0x21391c: 0xa240000a  sb          $zero, 0xA($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213918) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x213920u;
    // 0x213920: 0xc089890  jal         func_226240
    ctx->pc = 0x213920u;
    SET_GPR_U32(ctx, 31, 0x213928u);
    ctx->pc = 0x213924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213920u;
    // 0x213924: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226240u, 0x213920u, 0x213928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213928u;
label_213928:
    // 0x213928: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x213928u;
    {
        const bool branch_taken_0x213928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213928) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x213930u;
label_213930:
    // 0x213930: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x213930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x213934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213938: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21393c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x213940: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x213940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x213944: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x213944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x213948: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x213948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8894u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8894u, _value); } while (0);
    // 0x21394c: 0xa244000b  sb          $a0, 0xB($s2)
    ctx->pc = 0x21394cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x213950: 0xaf859748  sw          $a1, -0x68B8($gp)
    ctx->pc = 0x213950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940488), GPR_U32(ctx, 5));
    // 0x213954: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x213954u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x213958: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x213958u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x21395c: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x21395cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x213960: 0xa244000a  sb          $a0, 0xA($s2)
    ctx->pc = 0x213960u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x213964: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x213964u;
    {
        const bool branch_taken_0x213964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213964u;
        // 0x213968: 0xaf859744  sw          $a1, -0x68BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940484), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213964) {
            ctx->pc = 0x21399Cu;
            goto label_21399c;
        }
    }
    ctx->pc = 0x21396Cu;
    // 0x21396c: 0x0  nop
    ctx->pc = 0x21396cu;
    // NOP
label_213970:
    // 0x213970: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x213970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x213974: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21397c: 0x24a28858  addiu       $v0, $a1, -0x77A8
    ctx->pc = 0x21397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x213980: 0xa244000b  sb          $a0, 0xB($s2)
    ctx->pc = 0x213980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x213984: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x213988: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x213988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A8894u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8894u, _value); } while (0);
    // 0x21398c: 0xa2400004  sb          $zero, 0x4($s2)
    ctx->pc = 0x21398cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x213990: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x213990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x213994: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x213994u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x213998: 0xa244000a  sb          $a0, 0xA($s2)
    ctx->pc = 0x213998u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 4));
label_21399c:
    // 0x21399c: 0xc09d940  jal         func_276500
    ctx->pc = 0x21399Cu;
    SET_GPR_U32(ctx, 31, 0x2139A4u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x21399Cu, 0x2139A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139A4u;
label_2139a4:
    // 0x2139a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2139A4u;
    {
        const bool branch_taken_0x2139a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139A4u;
        // 0x2139a8: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139a4) {
            ctx->pc = 0x2139B4u;
            goto label_2139b4;
        }
    }
    ctx->pc = 0x2139ACu;
    // 0x2139ac: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x2139acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2139b0: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2139b4:
    // 0x2139b4: 0x24c38858  addiu       $v1, $a2, -0x77A8
    ctx->pc = 0x2139b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x2139b8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2139bc: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2139bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2139c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2139C0u;
    {
        const bool branch_taken_0x2139c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2139C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139C0u;
        // 0x2139c4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139c0) {
            ctx->pc = 0x2139D4u;
            goto label_2139d4;
        }
    }
    ctx->pc = 0x2139C8u;
    // 0x2139c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2139c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2139cc: 0xaf829744  sw          $v0, -0x68BC($gp)
    ctx->pc = 0x2139ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940484), GPR_U32(ctx, 2));
    // 0x2139d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2139d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2139d4:
    // 0x2139d4: 0x5662000e  bnel        $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2139D4u;
    {
        const bool branch_taken_0x2139d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2139d4) {
            ctx->pc = 0x2139D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2139D4u;
            // 0x2139d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213A10u;
            goto label_213a10;
        }
    }
    ctx->pc = 0x2139DCu;
    // 0x2139dc: 0xc0821ce  jal         func_208738
    ctx->pc = 0x2139DCu;
    SET_GPR_U32(ctx, 31, 0x2139E4u);
    ctx->pc = 0x2139E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139DCu;
    // 0x2139e0: 0x92440005  lbu         $a0, 0x5($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x2139DCu, 0x2139E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139E4u;
label_2139e4:
    // 0x2139e4: 0xc08659e  jal         func_219678
    ctx->pc = 0x2139E4u;
    SET_GPR_U32(ctx, 31, 0x2139ECu);
    ctx->pc = 0x2139E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139E4u;
    // 0x2139e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219678u, 0x2139E4u, 0x2139ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139ECu;
label_2139ec:
    // 0x2139ec: 0xc0868b0  jal         func_21A2C0
    ctx->pc = 0x2139ECu;
    SET_GPR_U32(ctx, 31, 0x2139F4u);
    ctx->pc = 0x2139F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139ECu;
    // 0x2139f0: 0x92440028  lbu         $a0, 0x28($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2C0u, 0x2139ECu, 0x2139F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139F4u;
label_2139f4:
    // 0x2139f4: 0xc086612  jal         func_219848
    ctx->pc = 0x2139F4u;
    SET_GPR_U32(ctx, 31, 0x2139FCu);
    ctx->pc = 0x2139F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139F4u;
    // 0x2139f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219848u, 0x2139F4u, 0x2139FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139FCu;
label_2139fc:
    // 0x2139fc: 0xc084eb2  jal         func_213AC8
    ctx->pc = 0x2139FCu;
    SET_GPR_U32(ctx, 31, 0x213A04u);
    ctx->pc = 0x213AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AC8u, 0x2139FCu, 0x213A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A04u;
label_213a04:
    // 0x213a04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x213A04u;
    {
        const bool branch_taken_0x213a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A04u;
        // 0x213a08: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a04) {
            ctx->pc = 0x213A1Cu;
            goto label_213a1c;
        }
    }
    ctx->pc = 0x213A0Cu;
    // 0x213a0c: 0x0  nop
    ctx->pc = 0x213a0cu;
    // NOP
label_213a10:
    // 0x213a10: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x213A10u;
    SET_GPR_U32(ctx, 31, 0x213A18u);
    ctx->pc = 0x213A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A10u;
    // 0x213a14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x213A10u, 0x213A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A18u;
label_213a18:
    // 0x213a18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x213a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_213a1c:
    // 0x213a1c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x213a20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213A20u;
    {
        const bool branch_taken_0x213a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x213a20) {
            ctx->pc = 0x213A30u;
            goto label_213a30;
        }
    }
    ctx->pc = 0x213A28u;
    // 0x213a28: 0xc092486  jal         func_249218
    ctx->pc = 0x213A28u;
    SET_GPR_U32(ctx, 31, 0x213A30u);
    ctx->pc = 0x213A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A28u;
    // 0x213a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x213A28u, 0x213A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A30u;
label_213a30:
    // 0x213a30: 0xc092490  jal         func_249240
    ctx->pc = 0x213A30u;
    SET_GPR_U32(ctx, 31, 0x213A38u);
    ctx->pc = 0x213A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A30u;
    // 0x213a34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x213A30u, 0x213A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A38u;
label_213a38:
    // 0x213a38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x213a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_213a3c:
    // 0x213a3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x213a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213a40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x213a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213a44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x213a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213a48: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x213a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213a4c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x213a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x213a50: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x213a50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213a54: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x213a54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x213a58: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x213a58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213a5c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x213a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x213a60: 0x3e00008  jr          $ra
    ctx->pc = 0x213A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A60u;
        // 0x213a64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213A68u;
}
