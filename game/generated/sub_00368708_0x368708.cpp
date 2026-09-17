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

// Function: sub_00368708
// Address: 0x368708 - 0x368800
void sub_00368708_0x368708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368708_0x368708");
#endif

    switch (ctx->pc) {
        case 0x368748u: goto label_368748;
        case 0x368758u: goto label_368758;
        case 0x368778u: goto label_368778;
        case 0x368798u: goto label_368798;
        case 0x3687bcu: goto label_3687bc;
        default: break;
    }

    ctx->pc = 0x368708u;

    // 0x368708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36870c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368710: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x368710u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x368714: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x368714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x368718: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36871c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368720: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x368720u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x368724: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368724u;
    {
        const bool branch_taken_0x368724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368724u;
        // 0x368728: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368724) {
            ctx->pc = 0x368740u;
            goto label_368740;
        }
    }
    ctx->pc = 0x36872Cu;
    // 0x36872c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36872cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x368730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368734: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x368734u;
    {
        const bool branch_taken_0x368734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368734u;
        // 0x368738: 0x24847c40  addiu       $a0, $a0, 0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368734) {
            ctx->pc = 0x3687B4u;
            goto label_3687b4;
        }
    }
    ctx->pc = 0x36873Cu;
    // 0x36873c: 0x0  nop
    ctx->pc = 0x36873cu;
    // NOP
label_368740:
    // 0x368740: 0xc0d7bc2  jal         func_35EF08
    ctx->pc = 0x368740u;
    SET_GPR_U32(ctx, 31, 0x368748u);
    ctx->pc = 0x368744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368740u;
    // 0x368744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF08u, 0x368740u, 0x368748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368748u;
label_368748:
    // 0x368748: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368748u;
    {
        const bool branch_taken_0x368748 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x368748) {
            ctx->pc = 0x36874Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368748u;
            // 0x36874c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368764u;
            goto label_368764;
        }
    }
    ctx->pc = 0x368750u;
    // 0x368750: 0xc0d7c82  jal         func_35F208
    ctx->pc = 0x368750u;
    SET_GPR_U32(ctx, 31, 0x368758u);
    ctx->pc = 0x368754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368750u;
    // 0x368754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F208u, 0x368750u, 0x368758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368758u;
label_368758:
    // 0x368758: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x368758u;
    {
        const bool branch_taken_0x368758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368758) {
            ctx->pc = 0x368770u;
            goto label_368770;
        }
    }
    ctx->pc = 0x368760u;
    // 0x368760: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_368764:
    // 0x368764: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x368764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368768: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x368768u;
    {
        const bool branch_taken_0x368768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368768u;
        // 0x36876c: 0x24847c88  addiu       $a0, $a0, 0x7C88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368768) {
            ctx->pc = 0x3687B4u;
            goto label_3687b4;
        }
    }
    ctx->pc = 0x368770u;
label_368770:
    // 0x368770: 0xc0d7bd8  jal         func_35EF60
    ctx->pc = 0x368770u;
    SET_GPR_U32(ctx, 31, 0x368778u);
    ctx->pc = 0x368774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368770u;
    // 0x368774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF60u, 0x368770u, 0x368778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368778u;
label_368778:
    // 0x368778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x368778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36877c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36877Cu;
    {
        const bool branch_taken_0x36877c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x368780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36877Cu;
        // 0x368780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36877c) {
            ctx->pc = 0x368790u;
            goto label_368790;
        }
    }
    ctx->pc = 0x368784u;
    // 0x368784: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368788: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x368788u;
    {
        const bool branch_taken_0x368788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368788u;
        // 0x36878c: 0x24847cd8  addiu       $a0, $a0, 0x7CD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368788) {
            ctx->pc = 0x3687B4u;
            goto label_3687b4;
        }
    }
    ctx->pc = 0x368790u;
label_368790:
    // 0x368790: 0xc0d7c1e  jal         func_35F078
    ctx->pc = 0x368790u;
    SET_GPR_U32(ctx, 31, 0x368798u);
    ctx->pc = 0x368794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368790u;
    // 0x368794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F078u, 0x368790u, 0x368798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368798u;
label_368798:
    // 0x368798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x368798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36879c: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x36879cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3687a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3687A0u;
    {
        const bool branch_taken_0x3687a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3687A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687A0u;
        // 0x3687a4: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687a0) {
            ctx->pc = 0x3687C8u;
            goto label_3687c8;
        }
    }
    ctx->pc = 0x3687A8u;
    // 0x3687a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3687a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3687ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3687acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687b0: 0x24847d28  addiu       $a0, $a0, 0x7D28
    ctx->pc = 0x3687b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32040));
label_3687b4:
    // 0x3687b4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3687B4u;
    SET_GPR_U32(ctx, 31, 0x3687BCu);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3687B4u, 0x3687BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687BCu;
label_3687bc:
    // 0x3687bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3687BCu;
    {
        const bool branch_taken_0x3687bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3687C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687BCu;
        // 0x3687c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687bc) {
            ctx->pc = 0x3687E8u;
            goto label_3687e8;
        }
    }
    ctx->pc = 0x3687C4u;
    // 0x3687c4: 0x0  nop
    ctx->pc = 0x3687c4u;
    // NOP
label_3687c8:
    // 0x3687c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3687c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3687cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3687ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3687d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3687d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3687d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3687d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3687d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3687d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3687dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3687dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3687e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3687e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3687e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3687e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3687e8:
    // 0x3687e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3687e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3687ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3687ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3687f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3687f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3687f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3687f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3687f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3687F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3687FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687F8u;
        // 0x3687fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3687F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368800u;
}
