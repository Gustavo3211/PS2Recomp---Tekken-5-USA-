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

// Function: sub_0048D750
// Address: 0x48d750 - 0x48d868
void sub_0048D750_0x48d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D750_0x48d750");
#endif

    switch (ctx->pc) {
        case 0x48d7a0u: goto label_48d7a0;
        case 0x48d800u: goto label_48d800;
        case 0x48d814u: goto label_48d814;
        case 0x48d82cu: goto label_48d82c;
        default: break;
    }

    ctx->pc = 0x48d750u;

    // 0x48d750: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48d754: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48d754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48d758: 0x9443d712  lhu         $v1, -0x28EE($v0)
    ctx->pc = 0x48d758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D712u));
    // 0x48d75c: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x48d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x48d760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48d760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48d764: 0x246305b6  addiu       $v1, $v1, 0x5B6
    ctx->pc = 0x48d764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1462));
    // 0x48d768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48d76c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x48d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x48d770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48d770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48d774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x48d774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x48d778: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48d778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d77c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x48d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x48d780: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x48d780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48d784: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x48d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x48d788: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x48d788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d78c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x48d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x48d790: 0x24b5be40  addiu       $s5, $a1, -0x41C0
    ctx->pc = 0x48d790u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950464));
    // 0x48d794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48d794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d798: 0x38403  sra         $s0, $v1, 16
    ctx->pc = 0x48d798u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
    // 0x48d79c: 0x0  nop
    ctx->pc = 0x48d79cu;
    // NOP
label_48d7a0:
    // 0x48d7a0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x48d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x48d7a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x48d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x48d7a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48d7ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x48d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x48d7b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x48d7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x48d7b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48d7b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x48d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x48d7bc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x48d7bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48d7c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48d7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d7c4: 0x10740010  beq         $v1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x48D7C4u;
    {
        const bool branch_taken_0x48d7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x48D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D7C4u;
        // 0x48d7c8: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7c4) {
            ctx->pc = 0x48D808u;
            goto label_48d808;
        }
    }
    ctx->pc = 0x48D7CCu;
    // 0x48d7cc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48D7CCu;
    {
        const bool branch_taken_0x48d7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d7cc) {
            ctx->pc = 0x48D7E8u;
            goto label_48d7e8;
        }
    }
    ctx->pc = 0x48D7D4u;
    // 0x48d7d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48D7D4u;
    {
        const bool branch_taken_0x48d7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d7d4) {
            ctx->pc = 0x48D7F8u;
            goto label_48d7f8;
        }
    }
    ctx->pc = 0x48D7DCu;
    // 0x48d7dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48D7DCu;
    {
        const bool branch_taken_0x48d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D7DCu;
        // 0x48d7e0: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7dc) {
            ctx->pc = 0x48D830u;
            goto label_48d830;
        }
    }
    ctx->pc = 0x48D7E4u;
    // 0x48d7e4: 0x0  nop
    ctx->pc = 0x48d7e4u;
    // NOP
label_48d7e8:
    // 0x48d7e8: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x48D7E8u;
    {
        const bool branch_taken_0x48d7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x48D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D7E8u;
        // 0x48d7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7e8) {
            ctx->pc = 0x48D820u;
            goto label_48d820;
        }
    }
    ctx->pc = 0x48D7F0u;
    // 0x48d7f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x48D7F0u;
    {
        const bool branch_taken_0x48d7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D7F0u;
        // 0x48d7f4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d7f0) {
            ctx->pc = 0x48D830u;
            goto label_48d830;
        }
    }
    ctx->pc = 0x48D7F8u;
label_48d7f8:
    // 0x48d7f8: 0xc12361a  jal         func_48D868
    ctx->pc = 0x48D7F8u;
    SET_GPR_U32(ctx, 31, 0x48D800u);
    ctx->pc = 0x48D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D7F8u;
    // 0x48d7fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D868u, 0x48D7F8u, 0x48D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D800u;
label_48d800:
    // 0x48d800: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x48D800u;
    {
        const bool branch_taken_0x48d800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D800u;
        // 0x48d804: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d800) {
            ctx->pc = 0x48D830u;
            goto label_48d830;
        }
    }
    ctx->pc = 0x48D808u;
label_48d808:
    // 0x48d808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48d808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d80c: 0xc123628  jal         func_48D8A0
    ctx->pc = 0x48D80Cu;
    SET_GPR_U32(ctx, 31, 0x48D814u);
    ctx->pc = 0x48D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D80Cu;
    // 0x48d810: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D8A0u, 0x48D80Cu, 0x48D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D814u;
label_48d814:
    // 0x48d814: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48D814u;
    {
        const bool branch_taken_0x48d814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D814u;
        // 0x48d818: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d814) {
            ctx->pc = 0x48D830u;
            goto label_48d830;
        }
    }
    ctx->pc = 0x48D81Cu;
    // 0x48d81c: 0x0  nop
    ctx->pc = 0x48d81cu;
    // NOP
label_48d820:
    // 0x48d820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x48d820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d824: 0xc123684  jal         func_48DA10
    ctx->pc = 0x48D824u;
    SET_GPR_U32(ctx, 31, 0x48D82Cu);
    ctx->pc = 0x48D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D824u;
    // 0x48d828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DA10u, 0x48D824u, 0x48D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D82Cu;
label_48d82c:
    // 0x48d82c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x48d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_48d830:
    // 0x48d830: 0x2a230114  slti        $v1, $s1, 0x114
    ctx->pc = 0x48d830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)276) ? 1 : 0);
    // 0x48d834: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x48d834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x48d838: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x48D838u;
    {
        const bool branch_taken_0x48d838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D838u;
        // 0x48d83c: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d838) {
            ctx->pc = 0x48D7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d7a0;
        }
    }
    ctx->pc = 0x48D840u;
    // 0x48d840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48d840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48d844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48d848: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x48d848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d84c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x48d84cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x48d850: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x48d850u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d854: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x48d854u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48d858: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48d858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d85c: 0x3e00008  jr          $ra
    ctx->pc = 0x48D85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D85Cu;
        // 0x48d860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D864u;
    // 0x48d864: 0x0  nop
    ctx->pc = 0x48d864u;
    // NOP
    ctx->pc = 0x48d868u;
}
