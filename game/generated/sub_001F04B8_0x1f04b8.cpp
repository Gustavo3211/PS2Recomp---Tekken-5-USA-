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

// Function: sub_001F04B8
// Address: 0x1f04b8 - 0x1f0670
void sub_001F04B8_0x1f04b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F04B8_0x1f04b8");
#endif

    switch (ctx->pc) {
        case 0x1f0520u: goto label_1f0520;
        case 0x1f054cu: goto label_1f054c;
        case 0x1f0554u: goto label_1f0554;
        case 0x1f055cu: goto label_1f055c;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f05bcu: goto label_1f05bc;
        case 0x1f05c4u: goto label_1f05c4;
        case 0x1f05ccu: goto label_1f05cc;
        case 0x1f05d4u: goto label_1f05d4;
        case 0x1f05dcu: goto label_1f05dc;
        case 0x1f05e4u: goto label_1f05e4;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05f4u: goto label_1f05f4;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f060cu: goto label_1f060c;
        default: break;
    }

    ctx->pc = 0x1f04b8u;

    // 0x1f04b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f04b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f04bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f04bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f04c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f04c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f04c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f04c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f04c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f04cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f04ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f04d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f04d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f04d4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f04d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1f04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f04dc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1f04dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1f04e0: 0x10710013  beq         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F04E0u;
    {
        const bool branch_taken_0x1f04e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1F04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04E0u;
        // 0x1f04e4: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04e0) {
            ctx->pc = 0x1F0530u;
            goto label_1f0530;
        }
    }
    ctx->pc = 0x1F04E8u;
    // 0x1f04e8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1f04e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f04ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F04ECu;
    {
        const bool branch_taken_0x1f04ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04ECu;
        // 0x1f04f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04ec) {
            ctx->pc = 0x1F0508u;
            goto label_1f0508;
        }
    }
    ctx->pc = 0x1F04F4u;
    // 0x1f04f4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F04F4u;
    {
        const bool branch_taken_0x1f04f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f04f4) {
            ctx->pc = 0x1F04F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F04F4u;
            // 0x1f04f8: 0xa2000068  sb          $zero, 0x68($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0518u;
            goto label_1f0518;
        }
    }
    ctx->pc = 0x1F04FCu;
    // 0x1f04fc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1F04FCu;
    {
        const bool branch_taken_0x1f04fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04FCu;
        // 0x1f0500: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04fc) {
            ctx->pc = 0x1F0644u;
            goto label_1f0644;
        }
    }
    ctx->pc = 0x1F0504u;
    // 0x1f0504: 0x0  nop
    ctx->pc = 0x1f0504u;
    // NOP
label_1f0508:
    // 0x1f0508: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1F0508u;
    {
        const bool branch_taken_0x1f0508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0508u;
        // 0x1f050c: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0508) {
            ctx->pc = 0x1F0620u;
            goto label_1f0620;
        }
    }
    ctx->pc = 0x1F0510u;
    // 0x1f0510: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1F0510u;
    {
        const bool branch_taken_0x1f0510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0510u;
        // 0x1f0514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0510) {
            ctx->pc = 0x1F0648u;
            goto label_1f0648;
        }
    }
    ctx->pc = 0x1F0518u;
label_1f0518:
    // 0x1f0518: 0xc07c19c  jal         func_1F0670
    ctx->pc = 0x1F0518u;
    SET_GPR_U32(ctx, 31, 0x1F0520u);
    ctx->pc = 0x1F051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0518u;
    // 0x1f051c: 0xa2000050  sb          $zero, 0x50($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0670u, 0x1F0518u, 0x1F0520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0520u;
label_1f0520:
    // 0x1f0520: 0x1840003c  blez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F0520u;
    {
        const bool branch_taken_0x1f0520 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0520u;
        // 0x1f0524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0520) {
            ctx->pc = 0x1F0614u;
            goto label_1f0614;
        }
    }
    ctx->pc = 0x1F0528u;
    // 0x1f0528: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F0528u;
    {
        const bool branch_taken_0x1f0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0528u;
        // 0x1f052c: 0xae110048  sw          $s1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0528) {
            ctx->pc = 0x1F0640u;
            goto label_1f0640;
        }
    }
    ctx->pc = 0x1F0530u;
label_1f0530:
    // 0x1f0530: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1f0530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1f0534: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x1f0534u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x1f0538: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f053c: 0x264423b0  addiu       $a0, $s2, 0x23B0
    ctx->pc = 0x1f053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9136));
    // 0x1f0540: 0x2611006c  addiu       $s1, $s0, 0x6C
    ctx->pc = 0x1f0540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1f0544: 0xc098346  jal         func_260D18
    ctx->pc = 0x1F0544u;
    SET_GPR_U32(ctx, 31, 0x1F054Cu);
    ctx->pc = 0x1F0548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0544u;
    // 0x1f0548: 0xac4388c4  sw          $v1, -0x773C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936772), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260D18u, 0x1F0544u, 0x1F054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F054Cu;
label_1f054c:
    // 0x1f054c: 0xc098458  jal         func_261160
    ctx->pc = 0x1F054Cu;
    SET_GPR_U32(ctx, 31, 0x1F0554u);
    ctx->pc = 0x261160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261160u, 0x1F054Cu, 0x1F0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0554u;
label_1f0554:
    // 0x1f0554: 0xc07c412  jal         func_1F1048
    ctx->pc = 0x1F0554u;
    SET_GPR_U32(ctx, 31, 0x1F055Cu);
    ctx->pc = 0x1F1048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1048u, 0x1F0554u, 0x1F055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F055Cu;
label_1f055c:
    // 0x1f055c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1f055cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f0560: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0560u;
    {
        const bool branch_taken_0x1f0560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0560) {
            ctx->pc = 0x1F0564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0560u;
            // 0x1f0564: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F057Cu;
            goto label_1f057c;
        }
    }
    ctx->pc = 0x1F0568u;
    // 0x1f0568: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1f056c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f0570: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0570u;
    {
        const bool branch_taken_0x1f0570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0570) {
            ctx->pc = 0x1F0584u;
            goto label_1f0584;
        }
    }
    ctx->pc = 0x1F0578u;
    // 0x1f0578: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f0578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1f057c:
    // 0x1f057c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0580: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f0580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1f0584:
    // 0x1f0584: 0xc0b7a86  jal         func_2DEA18
    ctx->pc = 0x1F0584u;
    SET_GPR_U32(ctx, 31, 0x1F058Cu);
    ctx->pc = 0x1F0588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0584u;
    // 0x1f0588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA18u, 0x1F0584u, 0x1F058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F058Cu;
label_1f058c:
    // 0x1f058c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f058cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f0590: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0590u;
    {
        const bool branch_taken_0x1f0590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0590) {
            ctx->pc = 0x1F0594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0590u;
            // 0x1f0594: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F05ACu;
            goto label_1f05ac;
        }
    }
    ctx->pc = 0x1F0598u;
    // 0x1f0598: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f0598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f059c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f05a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F05A0u;
    {
        const bool branch_taken_0x1f05a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f05a0) {
            ctx->pc = 0x1F05B4u;
            goto label_1f05b4;
        }
    }
    ctx->pc = 0x1F05A8u;
    // 0x1f05a8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1f05ac:
    // 0x1f05ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f05acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f05b0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1f05b4:
    // 0x1f05b4: 0xc0b7fcc  jal         func_2DFF30
    ctx->pc = 0x1F05B4u;
    SET_GPR_U32(ctx, 31, 0x1F05BCu);
    ctx->pc = 0x2DFF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF30u, 0x1F05B4u, 0x1F05BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05BCu;
label_1f05bc:
    // 0x1f05bc: 0xc09381a  jal         func_24E068
    ctx->pc = 0x1F05BCu;
    SET_GPR_U32(ctx, 31, 0x1F05C4u);
    ctx->pc = 0x24E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E068u, 0x1F05BCu, 0x1F05C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05C4u;
label_1f05c4:
    // 0x1f05c4: 0xc091dbe  jal         func_2476F8
    ctx->pc = 0x1F05C4u;
    SET_GPR_U32(ctx, 31, 0x1F05CCu);
    ctx->pc = 0x2476F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2476F8u, 0x1F05C4u, 0x1F05CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05CCu;
label_1f05cc:
    // 0x1f05cc: 0xc09845e  jal         func_261178
    ctx->pc = 0x1F05CCu;
    SET_GPR_U32(ctx, 31, 0x1F05D4u);
    ctx->pc = 0x261178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261178u, 0x1F05CCu, 0x1F05D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05D4u;
label_1f05d4:
    // 0x1f05d4: 0xc0983b0  jal         func_260EC0
    ctx->pc = 0x1F05D4u;
    SET_GPR_U32(ctx, 31, 0x1F05DCu);
    ctx->pc = 0x1F05D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05D4u;
    // 0x1f05d8: 0x264423b0  addiu       $a0, $s2, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260EC0u, 0x1F05D4u, 0x1F05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05DCu;
label_1f05dc:
    // 0x1f05dc: 0xc0b7f6e  jal         func_2DFDB8
    ctx->pc = 0x1F05DCu;
    SET_GPR_U32(ctx, 31, 0x1F05E4u);
    ctx->pc = 0x1F05E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05DCu;
    // 0x1f05e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFDB8u, 0x1F05DCu, 0x1F05E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05E4u;
label_1f05e4:
    // 0x1f05e4: 0xc0b7f76  jal         func_2DFDD8
    ctx->pc = 0x1F05E4u;
    SET_GPR_U32(ctx, 31, 0x1F05ECu);
    ctx->pc = 0x1F05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05E4u;
    // 0x1f05e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFDD8u, 0x1F05E4u, 0x1F05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05ECu;
label_1f05ec:
    // 0x1f05ec: 0xc0b7f86  jal         func_2DFE18
    ctx->pc = 0x1F05ECu;
    SET_GPR_U32(ctx, 31, 0x1F05F4u);
    ctx->pc = 0x1F05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05ECu;
    // 0x1f05f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFE18u, 0x1F05ECu, 0x1F05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05F4u;
label_1f05f4:
    // 0x1f05f4: 0xc0b4318  jal         func_2D0C60
    ctx->pc = 0x1F05F4u;
    SET_GPR_U32(ctx, 31, 0x1F05FCu);
    ctx->pc = 0x1F05F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05F4u;
    // 0x1f05f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C60u, 0x1F05F4u, 0x1F05FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F05FCu;
label_1f05fc:
    // 0x1f05fc: 0xc0b7f96  jal         func_2DFE58
    ctx->pc = 0x1F05FCu;
    SET_GPR_U32(ctx, 31, 0x1F0604u);
    ctx->pc = 0x1F0600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05FCu;
    // 0x1f0600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFE58u, 0x1F05FCu, 0x1F0604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0604u;
label_1f0604:
    // 0x1f0604: 0xc07c1a6  jal         func_1F0698
    ctx->pc = 0x1F0604u;
    SET_GPR_U32(ctx, 31, 0x1F060Cu);
    ctx->pc = 0x1F0608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0604u;
    // 0x1f0608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0698u, 0x1F0604u, 0x1F060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F060Cu;
label_1f060c:
    // 0x1f060c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F060Cu;
    {
        const bool branch_taken_0x1f060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F060Cu;
        // 0x1f0610: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f060c) {
            ctx->pc = 0x1F0640u;
            goto label_1f0640;
        }
    }
    ctx->pc = 0x1F0614u;
label_1f0614:
    // 0x1f0614: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F0614u;
    {
        const bool branch_taken_0x1f0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0614u;
        // 0x1f0618: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0614) {
            ctx->pc = 0x1F0640u;
            goto label_1f0640;
        }
    }
    ctx->pc = 0x1F061Cu;
    // 0x1f061c: 0x0  nop
    ctx->pc = 0x1f061cu;
    // NOP
label_1f0620:
    // 0x1f0620: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1f0620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1f0624: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1f0628: 0xa2110068  sb          $s1, 0x68($s0)
    ctx->pc = 0x1f0628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f062c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f062cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0630: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f0630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f0634: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1f0634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1f0638: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0638u;
    {
        const bool branch_taken_0x1f0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0638u;
        // 0x1f063c: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0638) {
            ctx->pc = 0x1F0654u;
            goto label_1f0654;
        }
    }
    ctx->pc = 0x1F0640u;
label_1f0640:
    // 0x1f0640: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x1f0640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_1f0644:
    // 0x1f0644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0648:
    // 0x1f0648: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f0648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f064c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f0650: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f0650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f0654:
    // 0x1f0654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f065c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f065cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0660: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f0660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0664: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0664u;
        // 0x1f0668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F066Cu;
    // 0x1f066c: 0x0  nop
    ctx->pc = 0x1f066cu;
    // NOP
    ctx->pc = 0x1f0670u;
}
