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

// Function: sub_00272728
// Address: 0x272728 - 0x2728a0
void sub_00272728_0x272728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272728_0x272728");
#endif

    switch (ctx->pc) {
        case 0x272764u: goto label_272764;
        case 0x2727d0u: goto label_2727d0;
        case 0x2727f0u: goto label_2727f0;
        case 0x272810u: goto label_272810;
        case 0x272834u: goto label_272834;
        case 0x272848u: goto label_272848;
        case 0x27286cu: goto label_27286c;
        case 0x27287cu: goto label_27287c;
        default: break;
    }

    ctx->pc = 0x272728u;

    // 0x272728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27272c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x27272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x272730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x272734: 0x24047402  addiu       $a0, $zero, 0x7402
    ctx->pc = 0x272734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29698));
    // 0x272738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x272738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27273c: 0x94430320  lhu         $v1, 0x320($v0)
    ctx->pc = 0x27273cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x272740: 0x14640053  bne         $v1, $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x272740u;
    {
        const bool branch_taken_0x272740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x272744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272740u;
        // 0x272744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272740) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272748u;
    // 0x272748: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x272748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x27274c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x27274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x272750: 0x94640044  lhu         $a0, 0x44($v1)
    ctx->pc = 0x272750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x272754: 0x1480004e  bnez        $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x272754u;
    {
        const bool branch_taken_0x272754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x272758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272754u;
        // 0x272758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272754) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x27275Cu;
    // 0x27275c: 0xc099bd2  jal         func_266F48
    ctx->pc = 0x27275Cu;
    SET_GPR_U32(ctx, 31, 0x272764u);
    ctx->pc = 0x266F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F48u, 0x27275Cu, 0x272764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272764u;
label_272764:
    // 0x272764: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x272764u;
    {
        const bool branch_taken_0x272764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272764u;
        // 0x272768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272764) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x27276Cu;
    // 0x27276c: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x27276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x272770: 0x24050176  addiu       $a1, $zero, 0x176
    ctx->pc = 0x272770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x272774: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x272774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x272778: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x272778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27277c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27277Cu;
    {
        const bool branch_taken_0x27277c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x272780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27277Cu;
        // 0x272780: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27277c) {
            ctx->pc = 0x272790u;
            goto label_272790;
        }
    }
    ctx->pc = 0x272784u;
    // 0x272784: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x272784u;
    {
        const bool branch_taken_0x272784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272784u;
        // 0x272788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272784) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x27278Cu;
    // 0x27278c: 0x0  nop
    ctx->pc = 0x27278cu;
    // NOP
label_272790:
    // 0x272790: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x272790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x272794: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x272794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x272798: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x272798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x27279c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x27279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727a0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2727a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2727a4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727a8: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x2727a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x2727ac: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2727acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727b0: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x2727b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    // 0x2727b4: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2727b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2727b8: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2727b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727bc: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2727bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2727c0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2727c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2727c4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2727c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727c8: 0xc09aa6e  jal         func_26A9B8
    ctx->pc = 0x2727C8u;
    SET_GPR_U32(ctx, 31, 0x2727D0u);
    ctx->pc = 0x2727CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727C8u;
    // 0x2727cc: 0xac6000a8  sw          $zero, 0xA8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A9B8u, 0x2727C8u, 0x2727D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727D0u;
label_2727d0:
    // 0x2727d0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2727d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727d4: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x2727d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x2727d8: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2727d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727dc: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x2727dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x2727e0: 0x5840002a  blezl       $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2727E0u;
    {
        const bool branch_taken_0x2727e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2727e0) {
            ctx->pc = 0x2727E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2727E0u;
            // 0x2727e4: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x2727E8u;
    // 0x2727e8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2727E8u;
    SET_GPR_U32(ctx, 31, 0x2727F0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2727E8u, 0x2727F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727F0u;
label_2727f0:
    // 0x2727f0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2727f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2727f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2727f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2727f8: 0x8464039e  lh          $a0, 0x39E($v1)
    ctx->pc = 0x2727f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 926)));
    // 0x2727fc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2727fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x272800: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x272800u;
    {
        const bool branch_taken_0x272800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272800u;
        // 0x272804: 0x3c040027  lui         $a0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272800) {
            ctx->pc = 0x272840u;
            goto label_272840;
        }
    }
    ctx->pc = 0x272808u;
    // 0x272808: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272808u;
    SET_GPR_U32(ctx, 31, 0x272810u);
    ctx->pc = 0x27280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272808u;
    // 0x27280c: 0x2484c920  addiu       $a0, $a0, -0x36E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272808u, 0x272810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272810u;
label_272810:
    // 0x272810: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x272810u;
    {
        const bool branch_taken_0x272810 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272810u;
        // 0x272814: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272810) {
            ctx->pc = 0x272840u;
            goto label_272840;
        }
    }
    ctx->pc = 0x272818u;
    // 0x272818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x272818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27281c: 0xac6400d8  sw          $a0, 0xD8($v1)
    ctx->pc = 0x27281cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
    // 0x272820: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x272820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x272824: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x272824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
    // 0x272828: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x272828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27282c: 0xc09b492  jal         func_26D248
    ctx->pc = 0x27282Cu;
    SET_GPR_U32(ctx, 31, 0x272834u);
    ctx->pc = 0x272830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27282Cu;
    // 0x272830: 0xac70008c  sw          $s0, 0x8C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x27282Cu, 0x272834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272834u;
label_272834:
    // 0x272834: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272834u;
    {
        const bool branch_taken_0x272834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272834u;
        // 0x272838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272834) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x27283Cu;
    // 0x27283c: 0x0  nop
    ctx->pc = 0x27283cu;
    // NOP
label_272840:
    // 0x272840: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x272840u;
    SET_GPR_U32(ctx, 31, 0x272848u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x272840u, 0x272848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272848u;
label_272848:
    // 0x272848: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x272848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x27284c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x27284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x272850: 0x8483039c  lh          $v1, 0x39C($a0)
    ctx->pc = 0x272850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 924)));
    // 0x272854: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x272854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x272858: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x272858u;
    {
        const bool branch_taken_0x272858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272858) {
            ctx->pc = 0x27285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272858u;
            // 0x27285c: 0xa4800006  sh          $zero, 0x6($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27288Cu;
            goto label_27288c;
        }
    }
    ctx->pc = 0x272860u;
    // 0x272860: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x272860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x272864: 0xc09aef8  jal         func_26BBE0
    ctx->pc = 0x272864u;
    SET_GPR_U32(ctx, 31, 0x27286Cu);
    ctx->pc = 0x272868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272864u;
    // 0x272868: 0x2484c910  addiu       $a0, $a0, -0x36F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BBE0u, 0x272864u, 0x27286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27286Cu;
label_27286c:
    // 0x27286c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27286Cu;
    {
        const bool branch_taken_0x27286c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x272870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27286Cu;
        // 0x272870: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27286c) {
            ctx->pc = 0x272888u;
            goto label_272888;
        }
    }
    ctx->pc = 0x272874u;
    // 0x272874: 0xc09b492  jal         func_26D248
    ctx->pc = 0x272874u;
    SET_GPR_U32(ctx, 31, 0x27287Cu);
    ctx->pc = 0x26D248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D248u, 0x272874u, 0x27287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27287Cu;
label_27287c:
    // 0x27287c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27287Cu;
    {
        const bool branch_taken_0x27287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27287Cu;
        // 0x272880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27287c) {
            ctx->pc = 0x272890u;
            goto label_272890;
        }
    }
    ctx->pc = 0x272884u;
    // 0x272884: 0x0  nop
    ctx->pc = 0x272884u;
    // NOP
label_272888:
    // 0x272888: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x272888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
label_27288c:
    // 0x27288c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272890:
    // 0x272890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x272890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x272894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x272898: 0x3e00008  jr          $ra
    ctx->pc = 0x272898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272898u;
        // 0x27289c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2728A0u;
}
