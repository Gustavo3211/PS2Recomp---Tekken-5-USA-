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

// Function: sub_002CD538
// Address: 0x2cd538 - 0x2cd958
void sub_002CD538_0x2cd538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD538_0x2cd538");
#endif

    switch (ctx->pc) {
        case 0x2cd5a4u: goto label_2cd5a4;
        case 0x2cd5e4u: goto label_2cd5e4;
        case 0x2cd628u: goto label_2cd628;
        case 0x2cd63cu: goto label_2cd63c;
        case 0x2cd680u: goto label_2cd680;
        case 0x2cd6c4u: goto label_2cd6c4;
        case 0x2cd6f4u: goto label_2cd6f4;
        case 0x2cd724u: goto label_2cd724;
        case 0x2cd764u: goto label_2cd764;
        case 0x2cd7a4u: goto label_2cd7a4;
        case 0x2cd7e4u: goto label_2cd7e4;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd85cu: goto label_2cd85c;
        case 0x2cd888u: goto label_2cd888;
        case 0x2cd8b4u: goto label_2cd8b4;
        case 0x2cd8c8u: goto label_2cd8c8;
        case 0x2cd8d0u: goto label_2cd8d0;
        case 0x2cd8ecu: goto label_2cd8ec;
        case 0x2cd908u: goto label_2cd908;
        case 0x2cd91cu: goto label_2cd91c;
        default: break;
    }

    ctx->pc = 0x2cd538u;

    // 0x2cd538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cd538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cd53c: 0x248700a0  addiu       $a3, $a0, 0xA0
    ctx->pc = 0x2cd53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2cd540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cd540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cd544: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cd544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd548: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2cd548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2cd54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cd54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cd550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cd554: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cd554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cd558: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cd558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cd55c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cd55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cd560: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cd560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cd564: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2cd564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2cd568: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2cd568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2cd56c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2cd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cd570: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD570u;
    {
        const bool branch_taken_0x2cd570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD570u;
        // 0x2cd574: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd570) {
            ctx->pc = 0x2CD588u;
            goto label_2cd588;
        }
    }
    ctx->pc = 0x2CD578u;
    // 0x2cd578: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cd578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cd57c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2cd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2cd580: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD580u;
    {
        const bool branch_taken_0x2cd580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD580u;
        // 0x2cd584: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd580) {
            ctx->pc = 0x2CD594u;
            goto label_2cd594;
        }
    }
    ctx->pc = 0x2CD588u;
label_2cd588:
    // 0x2cd588: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2cd588u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2cd58c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cd58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd590: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2cd590u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2cd594:
    // 0x2cd594: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cd598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd59c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD59Cu;
    SET_GPR_U32(ctx, 31, 0x2CD5A4u);
    ctx->pc = 0x2CD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD59Cu;
    // 0x2cd5a0: 0x24a5e948  addiu       $a1, $a1, -0x16B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD59Cu, 0x2CD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5A4u;
label_2cd5a4:
    // 0x2cd5a4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD5A4u;
    {
        const bool branch_taken_0x2cd5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5a4) {
            ctx->pc = 0x2CD5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD5A4u;
            // 0x2cd5a8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD5D8u;
            goto label_2cd5d8;
        }
    }
    ctx->pc = 0x2CD5ACu;
    // 0x2cd5ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd5b0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD5B0u;
    {
        const bool branch_taken_0x2cd5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5b0) {
            ctx->pc = 0x2CD5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD5B0u;
            // 0x2cd5b4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD5D8u;
            goto label_2cd5d8;
        }
    }
    ctx->pc = 0x2CD5B8u;
    // 0x2cd5b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD5B8u;
    {
        const bool branch_taken_0x2cd5b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5B8u;
        // 0x2cd5bc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5b8) {
            ctx->pc = 0x2CD5C8u;
            goto label_2cd5c8;
        }
    }
    ctx->pc = 0x2CD5C0u;
    // 0x2cd5c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD5C0u;
    {
        const bool branch_taken_0x2cd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5C0u;
        // 0x2cd5c4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5c0) {
            ctx->pc = 0x2CD5D0u;
            goto label_2cd5d0;
        }
    }
    ctx->pc = 0x2CD5C8u;
label_2cd5c8:
    // 0x2cd5c8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd5cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd5d0:
    // 0x2cd5d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd5d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd5d8:
    // 0x2cd5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5dc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD5DCu;
    SET_GPR_U32(ctx, 31, 0x2CD5E4u);
    ctx->pc = 0x2CD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5DCu;
    // 0x2cd5e0: 0x24a5e9c0  addiu       $a1, $a1, -0x1640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD5DCu, 0x2CD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5E4u;
label_2cd5e4:
    // 0x2cd5e4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD5E4u;
    {
        const bool branch_taken_0x2cd5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5e4) {
            ctx->pc = 0x2CD5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD5E4u;
            // 0x2cd5e8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD618u;
            goto label_2cd618;
        }
    }
    ctx->pc = 0x2CD5ECu;
    // 0x2cd5ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd5f0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD5F0u;
    {
        const bool branch_taken_0x2cd5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5f0) {
            ctx->pc = 0x2CD5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD5F0u;
            // 0x2cd5f4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD618u;
            goto label_2cd618;
        }
    }
    ctx->pc = 0x2CD5F8u;
    // 0x2cd5f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD5F8u;
    {
        const bool branch_taken_0x2cd5f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5F8u;
        // 0x2cd5fc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5f8) {
            ctx->pc = 0x2CD608u;
            goto label_2cd608;
        }
    }
    ctx->pc = 0x2CD600u;
    // 0x2cd600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD600u;
    {
        const bool branch_taken_0x2cd600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD600u;
        // 0x2cd604: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd600) {
            ctx->pc = 0x2CD610u;
            goto label_2cd610;
        }
    }
    ctx->pc = 0x2CD608u;
label_2cd608:
    // 0x2cd608: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd60c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd610:
    // 0x2cd610: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd614: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cd614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2cd618:
    // 0x2cd618: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cd618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd61c: 0x2454d580  addiu       $s4, $v0, -0x2A80
    ctx->pc = 0x2cd61cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
    // 0x2cd620: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x2cd620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd624: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2cd628:
    // 0x2cd628: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cd628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cd62c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2cd62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2cd630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd634: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD634u;
    SET_GPR_U32(ctx, 31, 0x2CD63Cu);
    ctx->pc = 0x2CD638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD634u;
    // 0x2cd638: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD634u, 0x2CD63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD63Cu;
label_2cd63c:
    // 0x2cd63c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD63Cu;
    {
        const bool branch_taken_0x2cd63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD63Cu;
        // 0x2cd640: 0x2a04001e  slti        $a0, $s0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd63c) {
            ctx->pc = 0x2CD668u;
            goto label_2cd668;
        }
    }
    ctx->pc = 0x2CD644u;
    // 0x2cd644: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd648: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD648u;
    {
        const bool branch_taken_0x2cd648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd648) {
            ctx->pc = 0x2CD668u;
            goto label_2cd668;
        }
    }
    ctx->pc = 0x2CD650u;
    // 0x2cd650: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD650u;
    {
        const bool branch_taken_0x2cd650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD650u;
        // 0x2cd654: 0x8c620080  lw          $v0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd650) {
            ctx->pc = 0x2CD660u;
            goto label_2cd660;
        }
    }
    ctx->pc = 0x2CD658u;
    // 0x2cd658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD658u;
    {
        const bool branch_taken_0x2cd658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD658u;
        // 0x2cd65c: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd658) {
            ctx->pc = 0x2CD664u;
            goto label_2cd664;
        }
    }
    ctx->pc = 0x2CD660u;
label_2cd660:
    // 0x2cd660: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2cd660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2cd664:
    // 0x2cd664: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2cd664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2cd668:
    // 0x2cd668: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CD668u;
    {
        const bool branch_taken_0x2cd668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD668u;
        // 0x2cd66c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd668) {
            ctx->pc = 0x2CD628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd628;
        }
    }
    ctx->pc = 0x2CD670u;
    // 0x2cd670: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2cd670u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2cd674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd678: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD678u;
    SET_GPR_U32(ctx, 31, 0x2CD680u);
    ctx->pc = 0x2CD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD678u;
    // 0x2cd67c: 0x27c5e928  addiu       $a1, $fp, -0x16D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD678u, 0x2CD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD680u;
label_2cd680:
    // 0x2cd680: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CD680u;
    {
        const bool branch_taken_0x2cd680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd680) {
            ctx->pc = 0x2CD684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD680u;
            // 0x2cd684: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD6B8u;
            goto label_2cd6b8;
        }
    }
    ctx->pc = 0x2CD688u;
    // 0x2cd688: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd68c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD68Cu;
    {
        const bool branch_taken_0x2cd68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd68c) {
            ctx->pc = 0x2CD690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD68Cu;
            // 0x2cd690: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD6B8u;
            goto label_2cd6b8;
        }
    }
    ctx->pc = 0x2CD694u;
    // 0x2cd694: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD694u;
    {
        const bool branch_taken_0x2cd694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD694u;
        // 0x2cd698: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd694) {
            ctx->pc = 0x2CD6A8u;
            goto label_2cd6a8;
        }
    }
    ctx->pc = 0x2CD69Cu;
    // 0x2cd69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD69Cu;
    {
        const bool branch_taken_0x2cd69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD69Cu;
        // 0x2cd6a0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd69c) {
            ctx->pc = 0x2CD6B0u;
            goto label_2cd6b0;
        }
    }
    ctx->pc = 0x2CD6A4u;
    // 0x2cd6a4: 0x0  nop
    ctx->pc = 0x2cd6a4u;
    // NOP
label_2cd6a8:
    // 0x2cd6a8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd6ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd6b0:
    // 0x2cd6b0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd6b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cd6b8:
    // 0x2cd6b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6bc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD6BCu;
    SET_GPR_U32(ctx, 31, 0x2CD6C4u);
    ctx->pc = 0x2CD6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6BCu;
    // 0x2cd6c0: 0x24a5e630  addiu       $a1, $a1, -0x19D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD6BCu, 0x2CD6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6C4u;
label_2cd6c4:
    // 0x2cd6c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD6C4u;
    {
        const bool branch_taken_0x2cd6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6C4u;
        // 0x2cd6c8: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6c4) {
            ctx->pc = 0x2CD6E8u;
            goto label_2cd6e8;
        }
    }
    ctx->pc = 0x2CD6CCu;
    // 0x2cd6cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd6d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD6D0u;
    {
        const bool branch_taken_0x2cd6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6D0u;
        // 0x2cd6d4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6d0) {
            ctx->pc = 0x2CD6E8u;
            goto label_2cd6e8;
        }
    }
    ctx->pc = 0x2CD6D8u;
    // 0x2cd6d8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd6dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd6e0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd6e4: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x2cd6e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
label_2cd6e8:
    // 0x2cd6e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6ec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD6ECu;
    SET_GPR_U32(ctx, 31, 0x2CD6F4u);
    ctx->pc = 0x2CD6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6ECu;
    // 0x2cd6f0: 0x26c5e9e8  addiu       $a1, $s6, -0x1618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD6ECu, 0x2CD6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6F4u;
label_2cd6f4:
    // 0x2cd6f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD6F4u;
    {
        const bool branch_taken_0x2cd6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6F4u;
        // 0x2cd6f8: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6f4) {
            ctx->pc = 0x2CD718u;
            goto label_2cd718;
        }
    }
    ctx->pc = 0x2CD6FCu;
    // 0x2cd6fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd700: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD700u;
    {
        const bool branch_taken_0x2cd700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD700u;
        // 0x2cd704: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd700) {
            ctx->pc = 0x2CD718u;
            goto label_2cd718;
        }
    }
    ctx->pc = 0x2CD708u;
    // 0x2cd708: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd70c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd710: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd714: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_2cd718:
    // 0x2cd718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd71c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD71Cu;
    SET_GPR_U32(ctx, 31, 0x2CD724u);
    ctx->pc = 0x2CD720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD71Cu;
    // 0x2cd720: 0x26a5e8d8  addiu       $a1, $s5, -0x1728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD71Cu, 0x2CD724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD724u;
label_2cd724:
    // 0x2cd724: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD724u;
    {
        const bool branch_taken_0x2cd724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD724u;
        // 0x2cd728: 0x3c140048  lui         $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd724) {
            ctx->pc = 0x2CD758u;
            goto label_2cd758;
        }
    }
    ctx->pc = 0x2CD72Cu;
    // 0x2cd72c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd730: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD730u;
    {
        const bool branch_taken_0x2cd730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd730) {
            ctx->pc = 0x2CD734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD730u;
            // 0x2cd734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD75Cu;
            goto label_2cd75c;
        }
    }
    ctx->pc = 0x2CD738u;
    // 0x2cd738: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD738u;
    {
        const bool branch_taken_0x2cd738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD738u;
        // 0x2cd73c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd738) {
            ctx->pc = 0x2CD748u;
            goto label_2cd748;
        }
    }
    ctx->pc = 0x2CD740u;
    // 0x2cd740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD740u;
    {
        const bool branch_taken_0x2cd740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD740u;
        // 0x2cd744: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd740) {
            ctx->pc = 0x2CD750u;
            goto label_2cd750;
        }
    }
    ctx->pc = 0x2CD748u;
label_2cd748:
    // 0x2cd748: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd74c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd750:
    // 0x2cd750: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd754: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_2cd758:
    // 0x2cd758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd75c:
    // 0x2cd75c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD75Cu;
    SET_GPR_U32(ctx, 31, 0x2CD764u);
    ctx->pc = 0x2CD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD75Cu;
    // 0x2cd760: 0x2685e8e8  addiu       $a1, $s4, -0x1718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD75Cu, 0x2CD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD764u;
label_2cd764:
    // 0x2cd764: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD764u;
    {
        const bool branch_taken_0x2cd764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD764u;
        // 0x2cd768: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd764) {
            ctx->pc = 0x2CD798u;
            goto label_2cd798;
        }
    }
    ctx->pc = 0x2CD76Cu;
    // 0x2cd76c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd770: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD770u;
    {
        const bool branch_taken_0x2cd770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd770) {
            ctx->pc = 0x2CD774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD770u;
            // 0x2cd774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD79Cu;
            goto label_2cd79c;
        }
    }
    ctx->pc = 0x2CD778u;
    // 0x2cd778: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD778u;
    {
        const bool branch_taken_0x2cd778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD778u;
        // 0x2cd77c: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd778) {
            ctx->pc = 0x2CD788u;
            goto label_2cd788;
        }
    }
    ctx->pc = 0x2CD780u;
    // 0x2cd780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD780u;
    {
        const bool branch_taken_0x2cd780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD780u;
        // 0x2cd784: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd780) {
            ctx->pc = 0x2CD790u;
            goto label_2cd790;
        }
    }
    ctx->pc = 0x2CD788u;
label_2cd788:
    // 0x2cd788: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd78c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd790:
    // 0x2cd790: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd794: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2cd794u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_2cd798:
    // 0x2cd798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd79c:
    // 0x2cd79c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD79Cu;
    SET_GPR_U32(ctx, 31, 0x2CD7A4u);
    ctx->pc = 0x2CD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD79Cu;
    // 0x2cd7a0: 0x2665e900  addiu       $a1, $s3, -0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD79Cu, 0x2CD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7A4u;
label_2cd7a4:
    // 0x2cd7a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD7A4u;
    {
        const bool branch_taken_0x2cd7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7A4u;
        // 0x2cd7a8: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7a4) {
            ctx->pc = 0x2CD7D8u;
            goto label_2cd7d8;
        }
    }
    ctx->pc = 0x2CD7ACu;
    // 0x2cd7ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd7b0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD7B0u;
    {
        const bool branch_taken_0x2cd7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7b0) {
            ctx->pc = 0x2CD7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7B0u;
            // 0x2cd7b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7DCu;
            goto label_2cd7dc;
        }
    }
    ctx->pc = 0x2CD7B8u;
    // 0x2cd7b8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD7B8u;
    {
        const bool branch_taken_0x2cd7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7B8u;
        // 0x2cd7bc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7b8) {
            ctx->pc = 0x2CD7C8u;
            goto label_2cd7c8;
        }
    }
    ctx->pc = 0x2CD7C0u;
    // 0x2cd7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD7C0u;
    {
        const bool branch_taken_0x2cd7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7C0u;
        // 0x2cd7c4: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7c0) {
            ctx->pc = 0x2CD7D0u;
            goto label_2cd7d0;
        }
    }
    ctx->pc = 0x2CD7C8u;
label_2cd7c8:
    // 0x2cd7c8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd7cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd7d0:
    // 0x2cd7d0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd7d4: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2cd7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
label_2cd7d8:
    // 0x2cd7d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd7dc:
    // 0x2cd7dc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD7DCu;
    SET_GPR_U32(ctx, 31, 0x2CD7E4u);
    ctx->pc = 0x2CD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7DCu;
    // 0x2cd7e0: 0x2605e910  addiu       $a1, $s0, -0x16F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD7DCu, 0x2CD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7E4u;
label_2cd7e4:
    // 0x2cd7e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD7E4u;
    {
        const bool branch_taken_0x2cd7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7e4) {
            ctx->pc = 0x2CD814u;
            goto label_2cd814;
        }
    }
    ctx->pc = 0x2CD7ECu;
    // 0x2cd7ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd7f0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD7F0u;
    {
        const bool branch_taken_0x2cd7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7f0) {
            ctx->pc = 0x2CD814u;
            goto label_2cd814;
        }
    }
    ctx->pc = 0x2CD7F8u;
    // 0x2cd7f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD7F8u;
    {
        const bool branch_taken_0x2cd7f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7F8u;
        // 0x2cd7fc: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7f8) {
            ctx->pc = 0x2CD808u;
            goto label_2cd808;
        }
    }
    ctx->pc = 0x2CD800u;
    // 0x2cd800: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD800u;
    {
        const bool branch_taken_0x2cd800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD800u;
        // 0x2cd804: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd800) {
            ctx->pc = 0x2CD810u;
            goto label_2cd810;
        }
    }
    ctx->pc = 0x2CD808u;
label_2cd808:
    // 0x2cd808: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2cd808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2cd80c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cd810:
    // 0x2cd810: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cd814:
    // 0x2cd814: 0x52200044  beql        $s1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CD814u;
    {
        const bool branch_taken_0x2cd814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd814) {
            ctx->pc = 0x2CD818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD814u;
            // 0x2cd818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD928u;
            goto label_2cd928;
        }
    }
    ctx->pc = 0x2CD81Cu;
    // 0x2cd81c: 0x12e0000c  beqz        $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD81Cu;
    {
        const bool branch_taken_0x2cd81c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD81Cu;
        // 0x2cd820: 0x26a5e8d8  addiu       $a1, $s5, -0x1728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd81c) {
            ctx->pc = 0x2CD850u;
            goto label_2cd850;
        }
    }
    ctx->pc = 0x2CD824u;
    // 0x2cd824: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD824u;
    SET_GPR_U32(ctx, 31, 0x2CD82Cu);
    ctx->pc = 0x2CD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD824u;
    // 0x2cd828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD824u, 0x2CD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD82Cu;
label_2cd82c:
    // 0x2cd82c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CD82Cu;
    {
        const bool branch_taken_0x2cd82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD82Cu;
        // 0x2cd830: 0x2685e8e8  addiu       $a1, $s4, -0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd82c) {
            ctx->pc = 0x2CD880u;
            goto label_2cd880;
        }
    }
    ctx->pc = 0x2CD834u;
    // 0x2cd834: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd838: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CD838u;
    {
        const bool branch_taken_0x2cd838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD838u;
        // 0x2cd83c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd838) {
            ctx->pc = 0x2CD880u;
            goto label_2cd880;
        }
    }
    ctx->pc = 0x2CD840u;
    // 0x2cd840: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd844: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd848: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CD848u;
    {
        const bool branch_taken_0x2cd848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD848u;
        // 0x2cd84c: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd848) {
            ctx->pc = 0x2CD880u;
            goto label_2cd880;
        }
    }
    ctx->pc = 0x2CD850u;
label_2cd850:
    // 0x2cd850: 0x2665e900  addiu       $a1, $s3, -0x1700
    ctx->pc = 0x2cd850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961408));
    // 0x2cd854: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD854u;
    SET_GPR_U32(ctx, 31, 0x2CD85Cu);
    ctx->pc = 0x2CD858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD854u;
    // 0x2cd858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD854u, 0x2CD85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD85Cu;
label_2cd85c:
    // 0x2cd85c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD85Cu;
    {
        const bool branch_taken_0x2cd85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD85Cu;
        // 0x2cd860: 0x2605e910  addiu       $a1, $s0, -0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd85c) {
            ctx->pc = 0x2CD880u;
            goto label_2cd880;
        }
    }
    ctx->pc = 0x2CD864u;
    // 0x2cd864: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd868: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD868u;
    {
        const bool branch_taken_0x2cd868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD868u;
        // 0x2cd86c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd868) {
            ctx->pc = 0x2CD880u;
            goto label_2cd880;
        }
    }
    ctx->pc = 0x2CD870u;
    // 0x2cd870: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd874: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd878: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cd87c: 0x2605e910  addiu       $a1, $s0, -0x16F0
    ctx->pc = 0x2cd87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961424));
label_2cd880:
    // 0x2cd880: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD880u;
    SET_GPR_U32(ctx, 31, 0x2CD888u);
    ctx->pc = 0x2CD884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD880u;
    // 0x2cd884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD880u, 0x2CD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD888u;
label_2cd888:
    // 0x2cd888: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD888u;
    {
        const bool branch_taken_0x2cd888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD888u;
        // 0x2cd88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd888) {
            ctx->pc = 0x2CD8ACu;
            goto label_2cd8ac;
        }
    }
    ctx->pc = 0x2CD890u;
    // 0x2cd890: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd894: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD894u;
    {
        const bool branch_taken_0x2cd894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD894u;
        // 0x2cd898: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd894) {
            ctx->pc = 0x2CD8A8u;
            goto label_2cd8a8;
        }
    }
    ctx->pc = 0x2CD89Cu;
    // 0x2cd89c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cd89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cd8a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cd8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cd8a4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cd8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2cd8a8:
    // 0x2cd8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd8ac:
    // 0x2cd8ac: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD8ACu;
    SET_GPR_U32(ctx, 31, 0x2CD8B4u);
    ctx->pc = 0x2CD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8ACu;
    // 0x2cd8b0: 0x26c5e9e8  addiu       $a1, $s6, -0x1618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD8ACu, 0x2CD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8B4u;
label_2cd8b4:
    // 0x2cd8b4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2cd8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2cd8b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cd8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd8bc: 0x2473d580  addiu       $s3, $v1, -0x2A80
    ctx->pc = 0x2cd8bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956416));
    // 0x2cd8c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cd8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8c4: 0x8c910078  lw          $s1, 0x78($a0)
    ctx->pc = 0x2cd8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_2cd8c8:
    // 0x2cd8c8: 0xc086304  jal         func_218C10
    ctx->pc = 0x2CD8C8u;
    SET_GPR_U32(ctx, 31, 0x2CD8D0u);
    ctx->pc = 0x2CD8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8C8u;
    // 0x2cd8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2CD8C8u, 0x2CD8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8D0u;
label_2cd8d0:
    // 0x2cd8d0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cd8d4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2cd8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cd8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD8DCu;
    {
        const bool branch_taken_0x2cd8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8DCu;
        // 0x2cd8e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8dc) {
            ctx->pc = 0x2CD8F4u;
            goto label_2cd8f4;
        }
    }
    ctx->pc = 0x2CD8E4u;
    // 0x2cd8e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD8E4u;
    SET_GPR_U32(ctx, 31, 0x2CD8ECu);
    ctx->pc = 0x2CD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8E4u;
    // 0x2cd8e8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD8E4u, 0x2CD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8ECu;
label_2cd8ec:
    // 0x2cd8ec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd8f0: 0xac710078  sw          $s1, 0x78($v1)
    ctx->pc = 0x2cd8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 17));
label_2cd8f4:
    // 0x2cd8f4: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x2cd8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2cd8f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CD8F8u;
    {
        const bool branch_taken_0x2cd8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd8f8) {
            ctx->pc = 0x2CD8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd8c8;
        }
    }
    ctx->pc = 0x2CD900u;
    // 0x2cd900: 0xc086304  jal         func_218C10
    ctx->pc = 0x2CD900u;
    SET_GPR_U32(ctx, 31, 0x2CD908u);
    ctx->pc = 0x2CD904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD900u;
    // 0x2cd904: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2CD900u, 0x2CD908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD908u;
label_2cd908:
    // 0x2cd908: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD908u;
    {
        const bool branch_taken_0x2cd908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd908) {
            ctx->pc = 0x2CD90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD908u;
            // 0x2cd90c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD928u;
            goto label_2cd928;
        }
    }
    ctx->pc = 0x2CD910u;
    // 0x2cd910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd914: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CD914u;
    SET_GPR_U32(ctx, 31, 0x2CD91Cu);
    ctx->pc = 0x2CD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD914u;
    // 0x2cd918: 0x27c5e928  addiu       $a1, $fp, -0x16D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CD914u, 0x2CD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD91Cu;
label_2cd91c:
    // 0x2cd91c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cd920: 0xac710078  sw          $s1, 0x78($v1)
    ctx->pc = 0x2cd920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 17));
    // 0x2cd924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cd924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd928:
    // 0x2cd928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cd928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cd92c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cd92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cd930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd934: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cd934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd938: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cd938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cd93c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cd93cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd940: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cd940u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cd944: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2cd944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd948: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cd948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cd94c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD94Cu;
        // 0x2cd950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD954u;
    // 0x2cd954: 0x0  nop
    ctx->pc = 0x2cd954u;
    // NOP
    ctx->pc = 0x2cd958u;
}
