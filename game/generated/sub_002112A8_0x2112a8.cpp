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

// Function: sub_002112A8
// Address: 0x2112a8 - 0x211678
void sub_002112A8_0x2112a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002112A8_0x2112a8");
#endif

    switch (ctx->pc) {
        case 0x21132cu: goto label_21132c;
        case 0x211340u: goto label_211340;
        case 0x2113a8u: goto label_2113a8;
        case 0x2113c8u: goto label_2113c8;
        case 0x211418u: goto label_211418;
        case 0x211454u: goto label_211454;
        case 0x2114c8u: goto label_2114c8;
        case 0x21150cu: goto label_21150c;
        case 0x211540u: goto label_211540;
        case 0x211570u: goto label_211570;
        case 0x2115a4u: goto label_2115a4;
        case 0x2115d4u: goto label_2115d4;
        case 0x211614u: goto label_211614;
        case 0x211640u: goto label_211640;
        default: break;
    }

    ctx->pc = 0x2112a8u;

    // 0x2112a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2112a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2112ac: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x2112acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2112b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2112b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2112b4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2112b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2112b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2112bc: 0x3484335e  ori         $a0, $a0, 0x335E
    ctx->pc = 0x2112bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13150);
    // 0x2112c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2112c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2112c4: 0x8c7100c4  lw          $s1, 0xC4($v1)
    ctx->pc = 0x2112c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2112c8: 0x84700096  lh          $s0, 0x96($v1)
    ctx->pc = 0x2112c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x2112cc: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x2112ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2112d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2112d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2112d4: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x2112d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2112d8: 0x506000e8  beql        $v1, $zero, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2112D8u;
    {
        const bool branch_taken_0x2112d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2112d8) {
            ctx->pc = 0x2112DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2112D8u;
            // 0x2112dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2112E0u;
    // 0x2112e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2112e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2112e4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2112e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2112e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2112e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2112ec: 0x8c634bf0  lw          $v1, 0x4BF0($v1)
    ctx->pc = 0x2112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19440)));
    // 0x2112f0: 0x600008  jr          $v1
    ctx->pc = 0x2112F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2112F8u: goto label_2112f8;
            case 0x211548u: goto label_211548;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2112F8u;
label_2112f8:
    // 0x2112f8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2112fc: 0x2603fff7  addiu       $v1, $s0, -0x9
    ctx->pc = 0x2112fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    // 0x211300: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x211300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211304: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x211304u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x211308: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x211308u;
    {
        const bool branch_taken_0x211308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211308u;
        // 0x21130c: 0xac4400c8  sw          $a0, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211308) {
            ctx->pc = 0x211348u;
            goto label_211348;
        }
    }
    ctx->pc = 0x211310u;
    // 0x211310: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x211310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x211314: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x211314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x211318: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x211318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21131c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21131Cu;
    {
        const bool branch_taken_0x21131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21131c) {
            ctx->pc = 0x211320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21131Cu;
            // 0x211320: 0x96230044  lhu         $v1, 0x44($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21134Cu;
            goto label_21134c;
        }
    }
    ctx->pc = 0x211324u;
    // 0x211324: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x211324u;
    SET_GPR_U32(ctx, 31, 0x21132Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x211324u, 0x21132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21132Cu;
label_21132c:
    // 0x21132c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x21132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x211330: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x211330u;
    {
        const bool branch_taken_0x211330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211330) {
            ctx->pc = 0x211334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211330u;
            // 0x211334: 0x96230044  lhu         $v1, 0x44($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21134Cu;
            goto label_21134c;
        }
    }
    ctx->pc = 0x211338u;
    // 0x211338: 0xc09d17e  jal         func_2745F8
    ctx->pc = 0x211338u;
    SET_GPR_U32(ctx, 31, 0x211340u);
    ctx->pc = 0x2745F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2745F8u, 0x211338u, 0x211340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211340u;
label_211340:
    // 0x211340: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x211340u;
    {
        const bool branch_taken_0x211340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211340u;
        // 0x211344: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211340) {
            ctx->pc = 0x211528u;
            goto label_211528;
        }
    }
    ctx->pc = 0x211348u;
label_211348:
    // 0x211348: 0x96230044  lhu         $v1, 0x44($s1)
    ctx->pc = 0x211348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
label_21134c:
    // 0x21134c: 0x2462ffe2  addiu       $v0, $v1, -0x1E
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x211350: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x211350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x211354: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x211354u;
    {
        const bool branch_taken_0x211354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211354u;
        // 0x211358: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211354) {
            ctx->pc = 0x2113E0u;
            goto label_2113e0;
        }
    }
    ctx->pc = 0x21135Cu;
    // 0x21135c: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x211360: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x211364: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x211364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x211368: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x211368u;
    {
        const bool branch_taken_0x211368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211368) {
            ctx->pc = 0x21136Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211368u;
            // 0x21136c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21152Cu;
            goto label_21152c;
        }
    }
    ctx->pc = 0x211370u;
    // 0x211370: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x211370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211374u;
    {
        const bool branch_taken_0x211374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211374u;
        // 0x211378: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211374) {
            ctx->pc = 0x211390u;
            goto label_211390;
        }
    }
    ctx->pc = 0x21137Cu;
    // 0x21137c: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x21137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x211380: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x211380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x211384: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x211384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x211388: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x211388u;
    {
        const bool branch_taken_0x211388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211388u;
        // 0x21138c: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211388) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211390u;
label_211390:
    // 0x211390: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x211390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x211394: 0x28423800  slti        $v0, $v0, 0x3800
    ctx->pc = 0x211394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14336) ? 1 : 0);
    // 0x211398: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211398u;
    {
        const bool branch_taken_0x211398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211398) {
            ctx->pc = 0x2113C0u;
            goto label_2113c0;
        }
    }
    ctx->pc = 0x2113A0u;
    // 0x2113a0: 0xc084440  jal         func_211100
    ctx->pc = 0x2113A0u;
    SET_GPR_U32(ctx, 31, 0x2113A8u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x2113A0u, 0x2113A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113A8u;
label_2113a8:
    // 0x2113a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2113a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2113ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113b0: 0x108300b2  beq         $a0, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2113B0u;
    {
        const bool branch_taken_0x2113b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2113B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113B0u;
        // 0x2113b4: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113b0) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2113B8u;
    // 0x2113b8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2113B8u;
    {
        const bool branch_taken_0x2113b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2113b8) {
            ctx->pc = 0x2115CCu;
            goto label_2115cc;
        }
    }
    ctx->pc = 0x2113C0u;
label_2113c0:
    // 0x2113c0: 0xc084440  jal         func_211100
    ctx->pc = 0x2113C0u;
    SET_GPR_U32(ctx, 31, 0x2113C8u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x2113C0u, 0x2113C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2113C8u;
label_2113c8:
    // 0x2113c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2113c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2113cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2113ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113d0: 0x108300aa  beq         $a0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2113D0u;
    {
        const bool branch_taken_0x2113d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2113D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113D0u;
        // 0x2113d4: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113d0) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2113D8u;
    // 0x2113d8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2113D8u;
    {
        const bool branch_taken_0x2113d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2113d8) {
            ctx->pc = 0x2115CCu;
            goto label_2115cc;
        }
    }
    ctx->pc = 0x2113E0u;
label_2113e0:
    // 0x2113e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2113e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2113e4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2113E4u;
    {
        const bool branch_taken_0x2113e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2113e4) {
            ctx->pc = 0x2113E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2113E4u;
            // 0x2113e8: 0x96230046  lhu         $v1, 0x46($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211460u;
            goto label_211460;
        }
    }
    ctx->pc = 0x2113ECu;
    // 0x2113ec: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2113ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2113f0: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x2113f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2113f4: 0x28423800  slti        $v0, $v0, 0x3800
    ctx->pc = 0x2113f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14336) ? 1 : 0);
    // 0x2113f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2113F8u;
    {
        const bool branch_taken_0x2113f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2113FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113F8u;
        // 0x2113fc: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113f8) {
            ctx->pc = 0x211430u;
            goto label_211430;
        }
    }
    ctx->pc = 0x211400u;
    // 0x211400: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x211400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x211404: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x211404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211408: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x211408u;
    {
        const bool branch_taken_0x211408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211408u;
        // 0x21140c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211408) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211410u;
    // 0x211410: 0xc084440  jal         func_211100
    ctx->pc = 0x211410u;
    SET_GPR_U32(ctx, 31, 0x211418u);
    ctx->pc = 0x211100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211100u, 0x211410u, 0x211418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211418u;
label_211418:
    // 0x211418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21141c: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x21141cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x211420: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x211420u;
    {
        const bool branch_taken_0x211420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211420u;
        // 0x211424: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211420) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211428u;
    // 0x211428: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x211428u;
    {
        const bool branch_taken_0x211428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211428) {
            ctx->pc = 0x2115CCu;
            goto label_2115cc;
        }
    }
    ctx->pc = 0x211430u;
label_211430:
    // 0x211430: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x211430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x211434: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x211434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211438: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x211438u;
    {
        const bool branch_taken_0x211438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211438u;
        // 0x21143c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211438) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211440u;
    // 0x211440: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x211440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x211444: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x211444u;
    {
        const bool branch_taken_0x211444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211444u;
        // 0x211448: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211444) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x21144Cu;
    // 0x21144c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21144Cu;
    SET_GPR_U32(ctx, 31, 0x211454u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21144Cu, 0x211454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211454u;
label_211454:
    // 0x211454: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x211454u;
    {
        const bool branch_taken_0x211454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211454u;
        // 0x211458: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211454) {
            ctx->pc = 0x211644u;
            goto label_211644;
        }
    }
    ctx->pc = 0x21145Cu;
    // 0x21145c: 0x0  nop
    ctx->pc = 0x21145cu;
    // NOP
label_211460:
    // 0x211460: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x211460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x211464: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x211464u;
    {
        const bool branch_taken_0x211464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211464u;
        // 0x211468: 0x24620028  addiu       $v0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211464) {
            ctx->pc = 0x2114E8u;
            goto label_2114e8;
        }
    }
    ctx->pc = 0x21146Cu;
    // 0x21146c: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x21146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x211470: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x211470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x211474: 0x28436000  slti        $v1, $v0, 0x6000
    ctx->pc = 0x211474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24576) ? 1 : 0);
    // 0x211478: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x211478u;
    {
        const bool branch_taken_0x211478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x211478) {
            ctx->pc = 0x21147Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211478u;
            // 0x21147c: 0x28423800  slti        $v0, $v0, 0x3800 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14336) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x211498u;
            goto label_211498;
        }
    }
    ctx->pc = 0x211480u;
    // 0x211480: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x211484: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x211484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211488: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x211488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x21148c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x21148Cu;
    {
        const bool branch_taken_0x21148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21148Cu;
        // 0x211490: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21148c) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211494u;
    // 0x211494: 0x0  nop
    ctx->pc = 0x211494u;
    // NOP
label_211498:
    // 0x211498: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211498u;
    {
        const bool branch_taken_0x211498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211498u;
        // 0x21149c: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211498) {
            ctx->pc = 0x2114C0u;
            goto label_2114c0;
        }
    }
    ctx->pc = 0x2114A0u;
    // 0x2114a0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2114a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2114a4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2114a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2114a8: 0x50400074  beql        $v0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x2114A8u;
    {
        const bool branch_taken_0x2114a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2114a8) {
            ctx->pc = 0x2114ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2114A8u;
            // 0x2114ac: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2114B0u;
    // 0x2114b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2114b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2114b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2114b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114b8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2114B8u;
    {
        const bool branch_taken_0x2114b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114B8u;
        // 0x2114bc: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114b8) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2114C0u;
label_2114c0:
    // 0x2114c0: 0xc08441e  jal         func_211078
    ctx->pc = 0x2114C0u;
    SET_GPR_U32(ctx, 31, 0x2114C8u);
    ctx->pc = 0x211078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211078u, 0x2114C0u, 0x2114C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2114C8u;
label_2114c8:
    // 0x2114c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2114c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2114ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2114d0: 0x1482003e  bne         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2114D0u;
    {
        const bool branch_taken_0x2114d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2114D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114D0u;
        // 0x2114d4: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114d0) {
            ctx->pc = 0x2115CCu;
            goto label_2115cc;
        }
    }
    ctx->pc = 0x2114D8u;
    // 0x2114d8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2114d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2114dc: 0x84640086  lh          $a0, 0x86($v1)
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x2114e0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2114E0u;
    {
        const bool branch_taken_0x2114e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114E0u;
        // 0x2114e4: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114e0) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2114E8u;
label_2114e8:
    // 0x2114e8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2114e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2114ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2114ECu;
    {
        const bool branch_taken_0x2114ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2114F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114ECu;
        // 0x2114f0: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2114ec) {
            ctx->pc = 0x211518u;
            goto label_211518;
        }
    }
    ctx->pc = 0x2114F4u;
    // 0x2114f4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2114f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2114f8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2114f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2114fc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2114FCu;
    {
        const bool branch_taken_0x2114fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2114fc) {
            ctx->pc = 0x211500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2114FCu;
            // 0x211500: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21152Cu;
            goto label_21152c;
        }
    }
    ctx->pc = 0x211504u;
    // 0x211504: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x211504u;
    SET_GPR_U32(ctx, 31, 0x21150Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x211504u, 0x21150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21150Cu;
label_21150c:
    // 0x21150c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x21150Cu;
    {
        const bool branch_taken_0x21150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21150Cu;
        // 0x211510: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21150c) {
            ctx->pc = 0x211644u;
            goto label_211644;
        }
    }
    ctx->pc = 0x211514u;
    // 0x211514: 0x0  nop
    ctx->pc = 0x211514u;
    // NOP
label_211518:
    // 0x211518: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21151c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x21151cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211520: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211520u;
    {
        const bool branch_taken_0x211520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211520) {
            ctx->pc = 0x211538u;
            goto label_211538;
        }
    }
    ctx->pc = 0x211528u;
label_211528:
    // 0x211528: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21152c:
    // 0x21152c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x21152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x211530: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x211530u;
    {
        const bool branch_taken_0x211530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211530u;
        // 0x211534: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211530) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211538u;
label_211538:
    // 0x211538: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x211538u;
    SET_GPR_U32(ctx, 31, 0x211540u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x211538u, 0x211540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211540u;
label_211540:
    // 0x211540: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x211540u;
    {
        const bool branch_taken_0x211540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211540u;
        // 0x211544: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211540) {
            ctx->pc = 0x211644u;
            goto label_211644;
        }
    }
    ctx->pc = 0x211548u;
label_211548:
    // 0x211548: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x211548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x21154c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211550: 0xac8300c8  sw          $v1, 0xC8($a0)
    ctx->pc = 0x211550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
    // 0x211554: 0x96220044  lhu         $v0, 0x44($s1)
    ctx->pc = 0x211554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x211558: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x211558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x21155c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21155cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x211560: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x211560u;
    {
        const bool branch_taken_0x211560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211560) {
            ctx->pc = 0x211564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211560u;
            // 0x211564: 0x96220046  lhu         $v0, 0x46($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2115E0u;
            goto label_2115e0;
        }
    }
    ctx->pc = 0x211568u;
    // 0x211568: 0xc08441e  jal         func_211078
    ctx->pc = 0x211568u;
    SET_GPR_U32(ctx, 31, 0x211570u);
    ctx->pc = 0x211078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211078u, 0x211568u, 0x211570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211570u;
label_211570:
    // 0x211570: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x211570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x211574: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x211574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x211578: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x211578u;
    {
        const bool branch_taken_0x211578 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x21157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211578u;
        // 0x21157c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211578) {
            ctx->pc = 0x211590u;
            goto label_211590;
        }
    }
    ctx->pc = 0x211580u;
    // 0x211580: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211584: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x211584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x211588: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x211588u;
    {
        const bool branch_taken_0x211588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211588u;
        // 0x21158c: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211588) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211590u;
label_211590:
    // 0x211590: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x211590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x211594: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x211594u;
    {
        const bool branch_taken_0x211594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211594u;
        // 0x211598: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211594) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x21159Cu;
    // 0x21159c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21159Cu;
    SET_GPR_U32(ctx, 31, 0x2115A4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21159Cu, 0x2115A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115A4u;
label_2115a4:
    // 0x2115a4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2115a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2115a8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2115A8u;
    {
        const bool branch_taken_0x2115a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2115a8) {
            ctx->pc = 0x211638u;
            goto label_211638;
        }
    }
    ctx->pc = 0x2115B0u;
    // 0x2115b0: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x2115b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2115b4: 0x84430086  lh          $v1, 0x86($v0)
    ctx->pc = 0x2115b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x2115b8: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2115B8u;
    {
        const bool branch_taken_0x2115b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2115b8) {
            ctx->pc = 0x211638u;
            goto label_211638;
        }
    }
    ctx->pc = 0x2115C0u;
    // 0x2115c0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2115c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2115c4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2115C4u;
    {
        const bool branch_taken_0x2115c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115C4u;
        // 0x2115c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115c4) {
            ctx->pc = 0x211638u;
            goto label_211638;
        }
    }
    ctx->pc = 0x2115CCu;
label_2115cc:
    // 0x2115cc: 0xc09d14c  jal         func_274530
    ctx->pc = 0x2115CCu;
    SET_GPR_U32(ctx, 31, 0x2115D4u);
    ctx->pc = 0x274530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274530u, 0x2115CCu, 0x2115D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2115D4u;
label_2115d4:
    // 0x2115d4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2115D4u;
    {
        const bool branch_taken_0x2115d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115D4u;
        // 0x2115d8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115d4) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2115DCu;
    // 0x2115dc: 0x0  nop
    ctx->pc = 0x2115dcu;
    // NOP
label_2115e0:
    // 0x2115e0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2115e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2115e4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2115E4u;
    {
        const bool branch_taken_0x2115e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115E4u;
        // 0x2115e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115e4) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x2115ECu;
    // 0x2115ec: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2115f0: 0x84430086  lh          $v1, 0x86($v0)
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x2115f4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2115F4u;
    {
        const bool branch_taken_0x2115f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2115F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115F4u;
        // 0x2115f8: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115f4) {
            ctx->pc = 0x211658u;
            goto label_211658;
        }
    }
    ctx->pc = 0x2115FCu;
    // 0x2115fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2115fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x211600: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x211600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x211604: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x211604u;
    {
        const bool branch_taken_0x211604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211604u;
        // 0x211608: 0x28430003  slti        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211604) {
            ctx->pc = 0x211630u;
            goto label_211630;
        }
    }
    ctx->pc = 0x21160Cu;
    // 0x21160c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21160Cu;
    SET_GPR_U32(ctx, 31, 0x211614u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21160Cu, 0x211614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211614u;
label_211614:
    // 0x211614: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x211614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x211618: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21161c: 0x5c0821  addu        $at, $v0, $gp
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x211620: 0x942298f8  lhu         $v0, -0x6708($at)
    ctx->pc = 0x211620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294940920)));
    // 0x211624: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x211624u;
    {
        const bool branch_taken_0x211624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211624u;
        // 0x211628: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211624) {
            ctx->pc = 0x211680u;
            return;
        }
    }
    ctx->pc = 0x21162Cu;
    // 0x21162c: 0x0  nop
    ctx->pc = 0x21162cu;
    // NOP
label_211630:
    // 0x211630: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x211630u;
    {
        const bool branch_taken_0x211630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211630u;
        // 0x211634: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211630) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211638u;
label_211638:
    // 0x211638: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x211638u;
    SET_GPR_U32(ctx, 31, 0x211640u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x211638u, 0x211640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211640u;
label_211640:
    // 0x211640: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x211640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_211644:
    // 0x211644: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x211644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x211648: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x211648u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x21164c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21164Cu;
    {
        const bool branch_taken_0x21164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21164Cu;
        // 0x211650: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21164c) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211654u;
    // 0x211654: 0x0  nop
    ctx->pc = 0x211654u;
    // NOP
label_211658:
    // 0x211658: 0xc7819724  lwc1        $f1, -0x68DC($gp)
    ctx->pc = 0x211658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21165c: 0xc780846c  lwc1        $f0, -0x7B94($gp)
    ctx->pc = 0x21165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211660: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x211660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x211664: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x211664u;
    {
        const bool branch_taken_0x211664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x211668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211664u;
        // 0x211668: 0x24026000  addiu       $v0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211664) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x21166Cu;
    // 0x21166c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21166Cu;
    {
        const bool branch_taken_0x21166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21166Cu;
        // 0x211670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21166c) {
            ctx->pc = 0x21167Cu;
            return;
        }
    }
    ctx->pc = 0x211674u;
    // 0x211674: 0x0  nop
    ctx->pc = 0x211674u;
    // NOP
    ctx->pc = 0x211678u;
}
