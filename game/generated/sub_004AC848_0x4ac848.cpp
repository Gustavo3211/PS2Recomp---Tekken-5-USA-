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

// Function: sub_004AC848
// Address: 0x4ac848 - 0x4aca00
void sub_004AC848_0x4ac848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC848_0x4ac848");
#endif

    switch (ctx->pc) {
        case 0x4ac8f8u: goto label_4ac8f8;
        case 0x4ac980u: goto label_4ac980;
        case 0x4ac9b4u: goto label_4ac9b4;
        case 0x4ac9d4u: goto label_4ac9d4;
        case 0x4ac9e0u: goto label_4ac9e0;
        case 0x4ac9e8u: goto label_4ac9e8;
        default: break;
    }

    ctx->pc = 0x4ac848u;

    // 0x4ac848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ac848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ac84c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ac84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ac850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac854: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ac854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ac858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ac858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ac85c: 0x2447d680  addiu       $a3, $v0, -0x2980
    ctx->pc = 0x4ac85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ac860: 0x26080cc8  addiu       $t0, $s0, 0xCC8
    ctx->pc = 0x4ac860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3272));
    // 0x4ac864: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ac864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac868: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ac868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CC8u));
    // 0x4ac86c: 0x24ea0014  addiu       $t2, $a3, 0x14
    ctx->pc = 0x4ac86cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4ac870: 0x84e20022  lh          $v0, 0x22($a3)
    ctx->pc = 0x4ac870u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D6A2u));
    // 0x4ac874: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ac874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ac878: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4ac878u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x72D680u));
    // 0x4ac87c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ac87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ac880: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x4ac880u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x72D694u));
    // 0x4ac884: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4ac884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ac888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac88c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4ac88cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4ac890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ac890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4ac894: 0xa4e2001a  sh          $v0, 0x1A($a3)
    ctx->pc = 0x4ac894u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ac898: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4ac898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ac89c: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x4ac89cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ac8a0: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC8A0u;
    {
        const bool branch_taken_0x4ac8a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8A0u;
        // 0x4ac8a4: 0x95090000  lhu         $t1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac8a0) {
            ctx->pc = 0x4AC8E4u;
            goto label_4ac8e4;
        }
    }
    ctx->pc = 0x4AC8A8u;
    // 0x4ac8a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ac8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ac8ac: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x4ac8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ac8b0: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x4ac8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x4ac8b4: 0x24e50018  addiu       $a1, $a3, 0x18
    ctx->pc = 0x4ac8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x4ac8b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ac8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ac8bc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4ac8bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ac8c0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ac8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ac8c4: 0xa5490000  sh          $t1, 0x0($t2)
    ctx->pc = 0x4ac8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x4ac8c8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ac8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ac8cc: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x4ac8ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4ac8d0: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC8D0u;
    {
        const bool branch_taken_0x4ac8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac8d0) {
            ctx->pc = 0x4AC8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC8D0u;
            // 0x4ac8d4: 0x26100cc8  addiu       $s0, $s0, 0xCC8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC8E8u;
            goto label_4ac8e8;
        }
    }
    ctx->pc = 0x4AC8D8u;
    // 0x4ac8d8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x4ac8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4ac8dc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4ac8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ac8e0: 0xa4e20016  sh          $v0, 0x16($a3)
    ctx->pc = 0x4ac8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 22), (uint16_t)GPR_U32(ctx, 2));
label_4ac8e4:
    // 0x4ac8e4: 0x26100cc8  addiu       $s0, $s0, 0xCC8
    ctx->pc = 0x4ac8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3272));
label_4ac8e8:
    // 0x4ac8e8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ac8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ac8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ac8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac8f0: 0xc124a04  jal         func_492810
    ctx->pc = 0x4AC8F0u;
    SET_GPR_U32(ctx, 31, 0x4AC8F8u);
    ctx->pc = 0x4AC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC8F0u;
    // 0x4ac8f4: 0x24840cc4  addiu       $a0, $a0, 0xCC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492810u, 0x4AC8F0u, 0x4AC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC8F8u;
label_4ac8f8:
    // 0x4ac8f8: 0x86100000  lh          $s0, 0x0($s0)
    ctx->pc = 0x4ac8f8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ac8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ac8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac900: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AC900u;
    {
        const bool branch_taken_0x4ac900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC900u;
        // 0x4ac904: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac900) {
            ctx->pc = 0x4AC948u;
            goto label_4ac948;
        }
    }
    ctx->pc = 0x4AC908u;
    // 0x4ac908: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC908u;
    {
        const bool branch_taken_0x4ac908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac908) {
            ctx->pc = 0x4AC90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC908u;
            // 0x4ac90c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC920u;
            goto label_4ac920;
        }
    }
    ctx->pc = 0x4AC910u;
    // 0x4ac910: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AC910u;
    {
        const bool branch_taken_0x4ac910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC910u;
        // 0x4ac914: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac910) {
            ctx->pc = 0x4AC938u;
            goto label_4ac938;
        }
    }
    ctx->pc = 0x4AC918u;
    // 0x4ac918: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4AC918u;
    {
        const bool branch_taken_0x4ac918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC918u;
        // 0x4ac91c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac918) {
            ctx->pc = 0x4AC978u;
            goto label_4ac978;
        }
    }
    ctx->pc = 0x4AC920u;
label_4ac920:
    // 0x4ac920: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4AC920u;
    {
        const bool branch_taken_0x4ac920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC920u;
        // 0x4ac924: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac920) {
            ctx->pc = 0x4AC958u;
            goto label_4ac958;
        }
    }
    ctx->pc = 0x4AC928u;
    // 0x4ac928: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC928u;
    {
        const bool branch_taken_0x4ac928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC928u;
        // 0x4ac92c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac928) {
            ctx->pc = 0x4AC968u;
            goto label_4ac968;
        }
    }
    ctx->pc = 0x4AC930u;
    // 0x4ac930: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4AC930u;
    {
        const bool branch_taken_0x4ac930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC930u;
        // 0x4ac934: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac930) {
            ctx->pc = 0x4AC978u;
            goto label_4ac978;
        }
    }
    ctx->pc = 0x4AC938u;
label_4ac938:
    // 0x4ac938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ac938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac93c: 0x812b1ca  j           func_4AC728
    ctx->pc = 0x4AC93Cu;
    ctx->pc = 0x4AC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC93Cu;
    // 0x4ac940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC728u, 0x4AC93Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AC944u;
    // 0x4ac944: 0x0  nop
    ctx->pc = 0x4ac944u;
    // NOP
label_4ac948:
    // 0x4ac948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac94c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ac94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac950: 0x812b1e0  j           func_4AC780
    ctx->pc = 0x4AC950u;
    ctx->pc = 0x4AC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC950u;
    // 0x4ac954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC780u, 0x4AC950u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AC958u;
label_4ac958:
    // 0x4ac958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac95c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ac95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac960: 0x812b1f0  j           func_4AC7C0
    ctx->pc = 0x4AC960u;
    ctx->pc = 0x4AC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC960u;
    // 0x4ac964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C0u, 0x4AC960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AC968u;
label_4ac968:
    // 0x4ac968: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ac968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac96c: 0x812b1f0  j           func_4AC7C0
    ctx->pc = 0x4AC96Cu;
    ctx->pc = 0x4AC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC96Cu;
    // 0x4ac970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C0u, 0x4AC96Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AC974u;
    // 0x4ac974: 0x0  nop
    ctx->pc = 0x4ac974u;
    // NOP
label_4ac978:
    // 0x4ac978: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC978u;
        // 0x4ac97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC980u;
label_4ac980:
    // 0x4ac980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac984: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4ac984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4ac988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac98c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ac98cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ac990: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ac990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ac994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ac994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ac998: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4ac998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac99c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ac99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ac9a0: 0xa611007a  sh          $s1, 0x7A($s0)
    ctx->pc = 0x4ac9a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x72D6FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6FAu, _value); } while (0);
    // 0x4ac9a4: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x4ac9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x4ac9a8: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x4ac9a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D68Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D68Au, _value); } while (0);
    // 0x4ac9ac: 0xc124910  jal         func_492440
    ctx->pc = 0x4AC9ACu;
    SET_GPR_U32(ctx, 31, 0x4AC9B4u);
    ctx->pc = 0x4AC9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC9ACu;
    // 0x4ac9b0: 0xa60021fe  sh          $zero, 0x21FE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4AC9ACu, 0x4AC9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC9B4u;
label_4ac9b4:
    // 0x4ac9b4: 0x96040022  lhu         $a0, 0x22($s0)
    ctx->pc = 0x4ac9b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x4ac9b8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x4ac9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4ac9bc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4ac9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4ac9c0: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x4ac9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ac9c4: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x4ac9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ac9c8: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x4ac9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ac9cc: 0xc1246f2  jal         func_491BC8
    ctx->pc = 0x4AC9CCu;
    SET_GPR_U32(ctx, 31, 0x4AC9D4u);
    ctx->pc = 0x4AC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC9CCu;
    // 0x4ac9d0: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491BC8u, 0x4AC9CCu, 0x4AC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC9D4u;
label_4ac9d4:
    // 0x4ac9d4: 0xa61122ca  sh          $s1, 0x22CA($s0)
    ctx->pc = 0x4ac9d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8906), (uint16_t)GPR_U32(ctx, 17));
    // 0x4ac9d8: 0xc122c6c  jal         func_48B1B0
    ctx->pc = 0x4AC9D8u;
    SET_GPR_U32(ctx, 31, 0x4AC9E0u);
    ctx->pc = 0x4AC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC9D8u;
    // 0x4ac9dc: 0xa600220a  sh          $zero, 0x220A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8714), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B1B0u, 0x4AC9D8u, 0x4AC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC9E0u;
label_4ac9e0:
    // 0x4ac9e0: 0xc122c36  jal         func_48B0D8
    ctx->pc = 0x4AC9E0u;
    SET_GPR_U32(ctx, 31, 0x4AC9E8u);
    ctx->pc = 0x48B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B0D8u, 0x4AC9E0u, 0x4AC9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC9E8u;
label_4ac9e8:
    // 0x4ac9e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac9ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ac9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ac9f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ac9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac9f4: 0x8123228  j           func_48C8A0
    ctx->pc = 0x4AC9F4u;
    ctx->pc = 0x4AC9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC9F4u;
    // 0x4ac9f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8A0u;
    sub_0048C8A0_0x48c8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AC9FCu;
    // 0x4ac9fc: 0x0  nop
    ctx->pc = 0x4ac9fcu;
    // NOP
    ctx->pc = 0x4aca00u;
}
