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

// Function: sub_002166F0
// Address: 0x2166f0 - 0x216990
void sub_002166F0_0x2166f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002166F0_0x2166f0");
#endif

    switch (ctx->pc) {
        case 0x21670cu: goto label_21670c;
        case 0x216724u: goto label_216724;
        case 0x21672cu: goto label_21672c;
        case 0x216734u: goto label_216734;
        case 0x216760u: goto label_216760;
        case 0x216778u: goto label_216778;
        case 0x216788u: goto label_216788;
        case 0x2167a4u: goto label_2167a4;
        case 0x2167b0u: goto label_2167b0;
        case 0x2167bcu: goto label_2167bc;
        case 0x2167c4u: goto label_2167c4;
        case 0x2167d8u: goto label_2167d8;
        case 0x2167e8u: goto label_2167e8;
        case 0x2167fcu: goto label_2167fc;
        case 0x216804u: goto label_216804;
        case 0x216820u: goto label_216820;
        case 0x216828u: goto label_216828;
        case 0x216834u: goto label_216834;
        case 0x216840u: goto label_216840;
        case 0x216850u: goto label_216850;
        case 0x21688cu: goto label_21688c;
        case 0x2168dcu: goto label_2168dc;
        case 0x2168e4u: goto label_2168e4;
        case 0x2168f4u: goto label_2168f4;
        case 0x216904u: goto label_216904;
        case 0x216930u: goto label_216930;
        case 0x216948u: goto label_216948;
        case 0x216958u: goto label_216958;
        default: break;
    }

    ctx->pc = 0x2166f0u;

    // 0x2166f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2166f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2166f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2166f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2166f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2166f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2166fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216704: 0xc08582a  jal         func_2160A8
    ctx->pc = 0x216704u;
    SET_GPR_U32(ctx, 31, 0x21670Cu);
    ctx->pc = 0x216708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216704u;
    // 0x216708: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2160A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2160A8u, 0x216704u, 0x21670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21670Cu;
label_21670c:
    // 0x21670c: 0x8f83c910  lw          $v1, -0x36F0($gp)
    ctx->pc = 0x21670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953232)));
    // 0x216710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x216710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216714: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x216714u;
    {
        const bool branch_taken_0x216714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216714) {
            ctx->pc = 0x216718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216714u;
            // 0x216718: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216768u;
            goto label_216768;
        }
    }
    ctx->pc = 0x21671Cu;
    // 0x21671c: 0xc0a4c9a  jal         func_293268
    ctx->pc = 0x21671Cu;
    SET_GPR_U32(ctx, 31, 0x216724u);
    ctx->pc = 0x293268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293268u, 0x21671Cu, 0x216724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216724u;
label_216724:
    // 0x216724: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x216724u;
    SET_GPR_U32(ctx, 31, 0x21672Cu);
    ctx->pc = 0x216728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216724u;
    // 0x216728: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x216724u, 0x21672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21672Cu;
label_21672c:
    // 0x21672c: 0xc0a5a0e  jal         func_296838
    ctx->pc = 0x21672Cu;
    SET_GPR_U32(ctx, 31, 0x216734u);
    ctx->pc = 0x296838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296838u, 0x21672Cu, 0x216734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216734u;
label_216734:
    // 0x216734: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x216734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x216738: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x216738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x21673c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21673cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216740: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x216740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x216744: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x216744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x216748: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x216748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x21674c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21674cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216758: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x216758u;
    SET_GPR_U32(ctx, 31, 0x216760u);
    ctx->pc = 0x21675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216758u;
    // 0x21675c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x216758u, 0x216760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216760u;
label_216760:
    // 0x216760: 0x8f83c910  lw          $v1, -0x36F0($gp)
    ctx->pc = 0x216760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953232)));
    // 0x216764: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x216764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_216768:
    // 0x216768: 0x1c400048  bgtz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x216768u;
    {
        const bool branch_taken_0x216768 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216768u;
        // 0x21676c: 0xaf82c910  sw          $v0, -0x36F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216768) {
            ctx->pc = 0x21688Cu;
            goto label_21688c;
        }
    }
    ctx->pc = 0x216770u;
    // 0x216770: 0xc0a6100  jal         func_298400
    ctx->pc = 0x216770u;
    SET_GPR_U32(ctx, 31, 0x216778u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x216770u, 0x216778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216778u;
label_216778:
    // 0x216778: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x216778u;
    {
        const bool branch_taken_0x216778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216778u;
        // 0x21677c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216778) {
            ctx->pc = 0x216854u;
            goto label_216854;
        }
    }
    ctx->pc = 0x216780u;
    // 0x216780: 0xc0403da  jal         func_100F68
    ctx->pc = 0x216780u;
    SET_GPR_U32(ctx, 31, 0x216788u);
    ctx->pc = 0x100F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100F68u, 0x216780u, 0x216788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216788u;
label_216788:
    // 0x216788: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21678c: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x21678cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x216790: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x216790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x216794: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x216794u;
    {
        const bool branch_taken_0x216794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216794) {
            ctx->pc = 0x2167D0u;
            goto label_2167d0;
        }
    }
    ctx->pc = 0x21679Cu;
    // 0x21679c: 0xc040454  jal         func_101150
    ctx->pc = 0x21679Cu;
    SET_GPR_U32(ctx, 31, 0x2167A4u);
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x21679Cu, 0x2167A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167A4u;
label_2167a4:
    // 0x2167a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2167a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167a8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2167A8u;
    SET_GPR_U32(ctx, 31, 0x2167B0u);
    ctx->pc = 0x2167ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167A8u;
    // 0x2167ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2167A8u, 0x2167B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167B0u;
label_2167b0:
    // 0x2167b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2167b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167b4: 0xc0a4d12  jal         func_293448
    ctx->pc = 0x2167B4u;
    SET_GPR_U32(ctx, 31, 0x2167BCu);
    ctx->pc = 0x2167B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167B4u;
    // 0x2167b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293448u, 0x2167B4u, 0x2167BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167BCu;
label_2167bc:
    // 0x2167bc: 0xc0c2320  jal         func_308C80
    ctx->pc = 0x2167BCu;
    SET_GPR_U32(ctx, 31, 0x2167C4u);
    ctx->pc = 0x2167C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167BCu;
    // 0x2167c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308C80u, 0x2167BCu, 0x2167C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167C4u;
label_2167c4:
    // 0x2167c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2167C4u;
    {
        const bool branch_taken_0x2167c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167C4u;
        // 0x2167c8: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167c4) {
            ctx->pc = 0x216854u;
            goto label_216854;
        }
    }
    ctx->pc = 0x2167CCu;
    // 0x2167cc: 0x0  nop
    ctx->pc = 0x2167ccu;
    // NOP
label_2167d0:
    // 0x2167d0: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x2167D0u;
    SET_GPR_U32(ctx, 31, 0x2167D8u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x2167D0u, 0x2167D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167D8u;
label_2167d8:
    // 0x2167d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2167D8u;
    {
        const bool branch_taken_0x2167d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167D8u;
        // 0x2167dc: 0x3c10003e  lui         $s0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2167d8) {
            ctx->pc = 0x216810u;
            goto label_216810;
        }
    }
    ctx->pc = 0x2167E0u;
    // 0x2167e0: 0xc0a9488  jal         func_2A5220
    ctx->pc = 0x2167E0u;
    SET_GPR_U32(ctx, 31, 0x2167E8u);
    ctx->pc = 0x2A5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5220u, 0x2167E0u, 0x2167E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167E8u;
label_2167e8:
    // 0x2167e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2167E8u;
    {
        const bool branch_taken_0x2167e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2167e8) {
            ctx->pc = 0x2167ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2167E8u;
            // 0x2167ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216814u;
            goto label_216814;
        }
    }
    ctx->pc = 0x2167F0u;
    // 0x2167f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2167f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2167f4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2167F4u;
    SET_GPR_U32(ctx, 31, 0x2167FCu);
    ctx->pc = 0x2167F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167F4u;
    // 0x2167f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2167F4u, 0x2167FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167FCu;
label_2167fc:
    // 0x2167fc: 0xc0a94c2  jal         func_2A5308
    ctx->pc = 0x2167FCu;
    SET_GPR_U32(ctx, 31, 0x216804u);
    ctx->pc = 0x216800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167FCu;
    // 0x216800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5308u, 0x2167FCu, 0x216804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216804u;
label_216804:
    // 0x216804: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x216804u;
    {
        const bool branch_taken_0x216804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216804u;
        // 0x216808: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216804) {
            ctx->pc = 0x216854u;
            goto label_216854;
        }
    }
    ctx->pc = 0x21680Cu;
    // 0x21680c: 0x0  nop
    ctx->pc = 0x21680cu;
    // NOP
label_216810:
    // 0x216810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216814:
    // 0x216814: 0x261037e0  addiu       $s0, $s0, 0x37E0
    ctx->pc = 0x216814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14304));
    // 0x216818: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x216818u;
    SET_GPR_U32(ctx, 31, 0x216820u);
    ctx->pc = 0x21681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216818u;
    // 0x21681c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x216818u, 0x216820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216820u;
label_216820:
    // 0x216820: 0xc0a7a3c  jal         func_29E8F0
    ctx->pc = 0x216820u;
    SET_GPR_U32(ctx, 31, 0x216828u);
    ctx->pc = 0x216824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216820u;
    // 0x216824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8F0u, 0x216820u, 0x216828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216828u;
label_216828:
    // 0x216828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x216828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21682c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x21682Cu;
    SET_GPR_U32(ctx, 31, 0x216834u);
    ctx->pc = 0x216830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21682Cu;
    // 0x216830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x21682Cu, 0x216834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216834u;
label_216834:
    // 0x216834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x216834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216838: 0xc0a2afe  jal         func_28ABF8
    ctx->pc = 0x216838u;
    SET_GPR_U32(ctx, 31, 0x216840u);
    ctx->pc = 0x21683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216838u;
    // 0x21683c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABF8u, 0x216838u, 0x216840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216840u;
label_216840:
    // 0x216840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216844: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x216844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216848: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x216848u;
    SET_GPR_U32(ctx, 31, 0x216850u);
    ctx->pc = 0x21684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216848u;
    // 0x21684c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x216848u, 0x216850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216850u;
label_216850:
    // 0x216850: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x216850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_216854:
    // 0x216854: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x216854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x216858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21685c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x21685cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x216860: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x216860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x216864: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x216864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x216868: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x216868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21686c: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x216870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x216870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21687c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21687cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216880: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x216880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x216884: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x216884u;
    SET_GPR_U32(ctx, 31, 0x21688Cu);
    ctx->pc = 0x216888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216884u;
    // 0x216888: 0xaf80a1b8  sw          $zero, -0x5E48($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943160), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x216884u, 0x21688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21688Cu;
label_21688c:
    // 0x21688c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21688cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21689c: 0x3e00008  jr          $ra
    ctx->pc = 0x21689Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2168A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21689Cu;
        // 0x2168a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21689Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2168A4u;
    // 0x2168a4: 0x0  nop
    ctx->pc = 0x2168a4u;
    // NOP
    // 0x2168a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2168a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2168ac: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2168acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2168b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2168b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2168b4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2168b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2168b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2168b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2168bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2168bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2168c0: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2168c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2168c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2168c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2168c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2168ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2168d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2168d4: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2168D4u;
    SET_GPR_U32(ctx, 31, 0x2168DCu);
    ctx->pc = 0x2168D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168D4u;
    // 0x2168d8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2168D4u, 0x2168DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168DCu;
label_2168dc:
    // 0x2168dc: 0xc0a6100  jal         func_298400
    ctx->pc = 0x2168DCu;
    SET_GPR_U32(ctx, 31, 0x2168E4u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x2168DCu, 0x2168E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168E4u;
label_2168e4:
    // 0x2168e4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2168E4u;
    {
        const bool branch_taken_0x2168e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2168E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168E4u;
        // 0x2168e8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168e4) {
            ctx->pc = 0x216968u;
            goto label_216968;
        }
    }
    ctx->pc = 0x2168ECu;
    // 0x2168ec: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x2168ECu;
    SET_GPR_U32(ctx, 31, 0x2168F4u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x2168ECu, 0x2168F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168F4u;
label_2168f4:
    // 0x2168f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2168F4u;
    {
        const bool branch_taken_0x2168f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168F4u;
        // 0x2168f8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168f4) {
            ctx->pc = 0x216918u;
            goto label_216918;
        }
    }
    ctx->pc = 0x2168FCu;
    // 0x2168fc: 0xc0a946e  jal         func_2A51B8
    ctx->pc = 0x2168FCu;
    SET_GPR_U32(ctx, 31, 0x216904u);
    ctx->pc = 0x2A51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51B8u, 0x2168FCu, 0x216904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216904u;
label_216904:
    // 0x216904: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x216904u;
    {
        const bool branch_taken_0x216904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216904u;
        // 0x216908: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216904) {
            ctx->pc = 0x216968u;
            goto label_216968;
        }
    }
    ctx->pc = 0x21690Cu;
    // 0x21690c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21690Cu;
    {
        const bool branch_taken_0x21690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21690Cu;
        // 0x216910: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21690c) {
            ctx->pc = 0x216988u;
            goto label_216988;
        }
    }
    ctx->pc = 0x216914u;
    // 0x216914: 0x0  nop
    ctx->pc = 0x216914u;
    // NOP
label_216918:
    // 0x216918: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x216918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x21691c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x21691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x216920: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216920u;
    {
        const bool branch_taken_0x216920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216920) {
            ctx->pc = 0x216940u;
            goto label_216940;
        }
    }
    ctx->pc = 0x216928u;
    // 0x216928: 0xc0c2326  jal         func_308C98
    ctx->pc = 0x216928u;
    SET_GPR_U32(ctx, 31, 0x216930u);
    ctx->pc = 0x308C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308C98u, 0x216928u, 0x216930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216930u;
label_216930:
    // 0x216930: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x216930u;
    {
        const bool branch_taken_0x216930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216930u;
        // 0x216934: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216930) {
            ctx->pc = 0x216968u;
            goto label_216968;
        }
    }
    ctx->pc = 0x216938u;
    // 0x216938: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x216938u;
    {
        const bool branch_taken_0x216938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216938u;
        // 0x21693c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216938) {
            ctx->pc = 0x216988u;
            goto label_216988;
        }
    }
    ctx->pc = 0x216940u;
label_216940:
    // 0x216940: 0xc0a3aea  jal         func_28EBA8
    ctx->pc = 0x216940u;
    SET_GPR_U32(ctx, 31, 0x216948u);
    ctx->pc = 0x28EBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBA8u, 0x216940u, 0x216948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216948u;
label_216948:
    // 0x216948: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x216948u;
    {
        const bool branch_taken_0x216948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216948) {
            ctx->pc = 0x21694Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216948u;
            // 0x21694c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216984u;
            goto label_216984;
        }
    }
    ctx->pc = 0x216950u;
    // 0x216950: 0xc0a7a6e  jal         func_29E9B8
    ctx->pc = 0x216950u;
    SET_GPR_U32(ctx, 31, 0x216958u);
    ctx->pc = 0x29E9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9B8u, 0x216950u, 0x216958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216958u;
label_216958:
    // 0x216958: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216958u;
    {
        const bool branch_taken_0x216958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216958u;
        // 0x21695c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216958) {
            ctx->pc = 0x216968u;
            goto label_216968;
        }
    }
    ctx->pc = 0x216960u;
    // 0x216960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216960u;
    {
        const bool branch_taken_0x216960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216960u;
        // 0x216964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216960) {
            ctx->pc = 0x216984u;
            goto label_216984;
        }
    }
    ctx->pc = 0x216968u;
label_216968:
    // 0x216968: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x216968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21696c: 0x24638858  addiu       $v1, $v1, -0x77A8
    ctx->pc = 0x21696cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x216970: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x216974: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x216974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x216978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21697c: 0xac80c500  sw          $zero, -0x3B00($a0)
    ctx->pc = 0x21697cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3BC500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3BC500u, _value); } while (0);
    // 0x216980: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x216980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_216984:
    // 0x216984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216988:
    // 0x216988: 0x3e00008  jr          $ra
    ctx->pc = 0x216988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216988u;
        // 0x21698c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216990u;
}
