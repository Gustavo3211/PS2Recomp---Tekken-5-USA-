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

// Function: sub_002DB7C0
// Address: 0x2db7c0 - 0x2db8b8
void sub_002DB7C0_0x2db7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB7C0_0x2db7c0");
#endif

    switch (ctx->pc) {
        case 0x2db800u: goto label_2db800;
        case 0x2db830u: goto label_2db830;
        case 0x2db84cu: goto label_2db84c;
        default: break;
    }

    ctx->pc = 0x2db7c0u;

    // 0x2db7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2db7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2db7c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2db7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2db7c8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2db7c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2db7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2db7d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2db7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2db7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2db7d8: 0x24920020  addiu       $s2, $a0, 0x20
    ctx->pc = 0x2db7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2db7dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2db7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2db7e0: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2db7e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2db7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2db7e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2db7e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2db7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2db7f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2db7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2db7f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2db7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2db7f8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB7F8u;
    {
        const bool branch_taken_0x2db7f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB7F8u;
        // 0x2db7fc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db7f8) {
            ctx->pc = 0x2DB81Cu;
            goto label_2db81c;
        }
    }
    ctx->pc = 0x2DB800u;
label_2db800:
    // 0x2db800: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2db800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2db804: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2db804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2db808: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2db808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2db80c: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x2db80cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2db810: 0x0  nop
    ctx->pc = 0x2db810u;
    // NOP
    // 0x2db814: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DB814u;
    {
        const bool branch_taken_0x2db814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB814u;
        // 0x2db818: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db814) {
            ctx->pc = 0x2DB800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db800;
        }
    }
    ctx->pc = 0x2DB81Cu;
label_2db81c:
    // 0x2db81c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2db81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2db820: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db824: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB824u;
    {
        const bool branch_taken_0x2db824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB824u;
        // 0x2db828: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db824) {
            ctx->pc = 0x2DB88Cu;
            goto label_2db88c;
        }
    }
    ctx->pc = 0x2DB82Cu;
    // 0x2db82c: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2db82cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_2db830:
    // 0x2db830: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2db830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2db834: 0x26e4f310  addiu       $a0, $s7, -0xCF0
    ctx->pc = 0x2db834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963984));
    // 0x2db838: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2db838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2db83c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2db83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2db840: 0x2450fff0  addiu       $s0, $v0, -0x10
    ctx->pc = 0x2db840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2db844: 0xc04a100  jal         func_128400
    ctx->pc = 0x2DB844u;
    SET_GPR_U32(ctx, 31, 0x2DB84Cu);
    ctx->pc = 0x2DB848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB844u;
    // 0x2db848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x2DB844u, 0x2DB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB84Cu;
label_2db84c:
    // 0x2db84c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB84Cu;
    {
        const bool branch_taken_0x2db84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB84Cu;
        // 0x2db850: 0x275182b  sltu        $v1, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db84c) {
            ctx->pc = 0x2DB86Cu;
            goto label_2db86c;
        }
    }
    ctx->pc = 0x2DB854u;
    // 0x2db854: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB854u;
    {
        const bool branch_taken_0x2db854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db854) {
            ctx->pc = 0x2DB858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB854u;
            // 0x2db858: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB870u;
            goto label_2db870;
        }
    }
    ctx->pc = 0x2DB85Cu;
    // 0x2db85c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2db85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2db860: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2db860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2db864: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2db864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2db868: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2db868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2db86c:
    // 0x2db86c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2db86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2db870:
    // 0x2db870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2db870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2db874: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2db874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2db878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db87c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2db87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2db880: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2db880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2db884: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DB884u;
    {
        const bool branch_taken_0x2db884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB884u;
        // 0x2db888: 0x2452000c  addiu       $s2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db884) {
            ctx->pc = 0x2DB830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db830;
        }
    }
    ctx->pc = 0x2DB88Cu;
label_2db88c:
    // 0x2db88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2db88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2db890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2db894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2db894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db898: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2db898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2db89c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2db89cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db8a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2db8a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8a4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2db8a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db8a8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2db8a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db8ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2db8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8B0u;
        // 0x2db8b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB8B8u;
}
