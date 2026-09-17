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

// Function: sub_0012E828
// Address: 0x12e828 - 0x12e980
void sub_0012E828_0x12e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E828_0x12e828");
#endif

    switch (ctx->pc) {
        case 0x12e880u: goto label_12e880;
        case 0x12e8f0u: goto label_12e8f0;
        case 0x12e950u: goto label_12e950;
        default: break;
    }

    ctx->pc = 0x12e828u;

    // 0x12e828: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12e828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12e82c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x12e830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e834: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x12e834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x12e838: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x12e838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x12e83c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x12e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x12e840: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12e840u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e844: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x12e844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12e848: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E848u;
    {
        const bool branch_taken_0x12e848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E848u;
        // 0x12e84c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e848) {
            ctx->pc = 0x12E868u;
            goto label_12e868;
        }
    }
    ctx->pc = 0x12E850u;
    // 0x12e850: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x12e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x12e854: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x12e858: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x12e858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x12e85c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x12E85Cu;
    {
        const bool branch_taken_0x12e85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E85Cu;
        // 0x12e860: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e85c) {
            ctx->pc = 0x12E964u;
            goto label_12e964;
        }
    }
    ctx->pc = 0x12E864u;
    // 0x12e864: 0x0  nop
    ctx->pc = 0x12e864u;
    // NOP
label_12e868:
    // 0x12e868: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12e86c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E86Cu;
    {
        const bool branch_taken_0x12e86c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x12E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E86Cu;
        // 0x12e870: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e86c) {
            ctx->pc = 0x12E890u;
            goto label_12e890;
        }
    }
    ctx->pc = 0x12E874u;
    // 0x12e874: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12e874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12e878: 0xc04bfc6  jal         func_12FF18
    ctx->pc = 0x12E878u;
    SET_GPR_U32(ctx, 31, 0x12E880u);
    ctx->pc = 0x12E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E878u;
    // 0x12e87c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF18u, 0x12E878u, 0x12E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E880u;
label_12e880:
    // 0x12e880: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E880u;
    {
        const bool branch_taken_0x12e880 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E880u;
        // 0x12e884: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e880) {
            ctx->pc = 0x12E8A0u;
            goto label_12e8a0;
        }
    }
    ctx->pc = 0x12E888u;
    // 0x12e888: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12e888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e88c: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x12e88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_12e890:
    // 0x12e890: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e894: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12e894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12e898: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12E898u;
    {
        const bool branch_taken_0x12e898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E898u;
        // 0x12e89c: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e898) {
            ctx->pc = 0x12E8E4u;
            goto label_12e8e4;
        }
    }
    ctx->pc = 0x12E8A0u;
label_12e8a0:
    // 0x12e8a0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x12e8a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12e8a4: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x12e8a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12e8a8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x12e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12e8ac: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x12e8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x12e8b0: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E8B0u;
    {
        const bool branch_taken_0x12e8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x12E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8B0u;
        // 0x12e8b4: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8b0) {
            ctx->pc = 0x12E8D8u;
            goto label_12e8d8;
        }
    }
    ctx->pc = 0x12E8B8u;
    // 0x12e8b8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12e8bc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x12e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12e8c0: 0x2442fd20  addiu       $v0, $v0, -0x2E0
    ctx->pc = 0x12e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x12e8c4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E8C4u;
    {
        const bool branch_taken_0x12e8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8C4u;
        // 0x12e8c8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8c4) {
            ctx->pc = 0x12E8DCu;
            goto label_12e8dc;
        }
    }
    ctx->pc = 0x12E8CCu;
    // 0x12e8cc: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x12e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x12e8d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12E8D0u;
    {
        const bool branch_taken_0x12e8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8D0u;
        // 0x12e8d4: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8d0) {
            ctx->pc = 0x12E8E0u;
            goto label_12e8e0;
        }
    }
    ctx->pc = 0x12E8D8u;
label_12e8d8:
    // 0x12e8d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12e8d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12e8dc:
    // 0x12e8dc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x12e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_12e8e0:
    // 0x12e8e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12e8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_12e8e4:
    // 0x12e8e4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12e8e8: 0xc049f36  jal         func_127CD8
    ctx->pc = 0x12E8E8u;
    SET_GPR_U32(ctx, 31, 0x12E8F0u);
    ctx->pc = 0x12E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8E8u;
    // 0x12e8ec: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD8u, 0x12E8E8u, 0x12E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8F0u;
label_12e8f0:
    // 0x12e8f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8f4: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x12E8F4u;
    {
        const bool branch_taken_0x12e8f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8F4u;
        // 0x12e8f8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e8f4) {
            ctx->pc = 0x12E920u;
            goto label_12e920;
        }
    }
    ctx->pc = 0x12E8FCu;
    // 0x12e8fc: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x12e900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e904: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x12e904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x12e908: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12e908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x12e90c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x12e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x12e910: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12e910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12e914: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12E914u;
    {
        const bool branch_taken_0x12e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E914u;
        // 0x12e918: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e914) {
            ctx->pc = 0x12E964u;
            goto label_12e964;
        }
    }
    ctx->pc = 0x12E91Cu;
    // 0x12e91c: 0x0  nop
    ctx->pc = 0x12e91cu;
    // NOP
label_12e920:
    // 0x12e920: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12e920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12e924: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12e928: 0x2463dd90  addiu       $v1, $v1, -0x2270
    ctx->pc = 0x12e928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958480));
    // 0x12e92c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x12e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x12e930: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x12e930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x12e934: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x12e934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x12e938: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12e938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12e93c: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x12e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x12e940: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E940u;
    {
        const bool branch_taken_0x12e940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E940u;
        // 0x12e944: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e940) {
            ctx->pc = 0x12E964u;
            goto label_12e964;
        }
    }
    ctx->pc = 0x12E948u;
    // 0x12e948: 0xc043ed4  jal         func_10FB50
    ctx->pc = 0x12E948u;
    SET_GPR_U32(ctx, 31, 0x12E950u);
    ctx->pc = 0x12E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E948u;
    // 0x12e94c: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB50u, 0x12E948u, 0x12E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E950u;
label_12e950:
    // 0x12e950: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E950u;
    {
        const bool branch_taken_0x12e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e950) {
            ctx->pc = 0x12E954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E950u;
            // 0x12e954: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E958u;
    // 0x12e958: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12e958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e95c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12e95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12e960: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12e960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_12e964:
    // 0x12e964: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12e964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12e968:
    // 0x12e968: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x12e968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12e96c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12e970: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x12e970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x12e974: 0x3e00008  jr          $ra
    ctx->pc = 0x12E974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E974u;
        // 0x12e978: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E97Cu;
    // 0x12e97c: 0x0  nop
    ctx->pc = 0x12e97cu;
    // NOP
    ctx->pc = 0x12e980u;
}
