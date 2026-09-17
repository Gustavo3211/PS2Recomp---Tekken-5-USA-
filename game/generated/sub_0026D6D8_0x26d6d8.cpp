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

// Function: sub_0026D6D8
// Address: 0x26d6d8 - 0x26d8e8
void sub_0026D6D8_0x26d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D6D8_0x26d6d8");
#endif

    switch (ctx->pc) {
        case 0x26d714u: goto label_26d714;
        case 0x26d750u: goto label_26d750;
        case 0x26d790u: goto label_26d790;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d86cu: goto label_26d86c;
        default: break;
    }

    ctx->pc = 0x26d6d8u;

    // 0x26d6d8: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d6dc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26d6e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26d6e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26d6e8: 0x2454014c  addiu       $s4, $v0, 0x14C
    ctx->pc = 0x26d6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x26d6ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x26d6f0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x26d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x26d6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d6f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26d6fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26d700: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26d700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26d704: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26d708: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x26d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x26d70c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D70Cu;
    SET_GPR_U32(ctx, 31, 0x26D714u);
    ctx->pc = 0x26D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D70Cu;
    // 0x26d710: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D70Cu, 0x26D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D714u;
label_26d714:
    // 0x26d714: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26d714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d718: 0x305e0fff  andi        $fp, $v0, 0xFFF
    ctx->pc = 0x26d718u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d71c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26d71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d720: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x26d724: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x26d724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26d728: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d72c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x26d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x26d730: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x26d730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x26d734: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d738: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x26d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x26d73c: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26d740: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x26d740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26d744: 0x1065005b  beq         $v1, $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x26D744u;
    {
        const bool branch_taken_0x26d744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D744u;
        // 0x26d748: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d744) {
            ctx->pc = 0x26D8B4u;
            goto label_26d8b4;
        }
    }
    ctx->pc = 0x26D74Cu;
    // 0x26d74c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x26d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_26d750:
    // 0x26d750: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26D750u;
    {
        const bool branch_taken_0x26d750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d750) {
            ctx->pc = 0x26D754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D750u;
            // 0x26d754: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D780u;
            goto label_26d780;
        }
    }
    ctx->pc = 0x26D758u;
    // 0x26d758: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d75c: 0x96440008  lhu         $a0, 0x8($s2)
    ctx->pc = 0x26d75cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26d760: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26d760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26d764: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26d768: 0x96530014  lhu         $s3, 0x14($s2)
    ctx->pc = 0x26d768u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x26d76c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d770: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26d774: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26d778: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D778u;
    {
        const bool branch_taken_0x26d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D778u;
        // 0x26d77c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d778) {
            ctx->pc = 0x26D784u;
            goto label_26d784;
        }
    }
    ctx->pc = 0x26D780u;
label_26d780:
    // 0x26d780: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x26d780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d784:
    // 0x26d784: 0x12600044  beqz        $s3, . + 4 + (0x44 << 2)
    ctx->pc = 0x26D784u;
    {
        const bool branch_taken_0x26d784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D784u;
        // 0x26d788: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d784) {
            ctx->pc = 0x26D898u;
            goto label_26d898;
        }
    }
    ctx->pc = 0x26D78Cu;
    // 0x26d78c: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_26d790:
    // 0x26d790: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26d790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d794: 0xc09905e  jal         func_264178
    ctx->pc = 0x26D794u;
    SET_GPR_U32(ctx, 31, 0x26D79Cu);
    ctx->pc = 0x26D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D794u;
    // 0x26d798: 0x96250008  lhu         $a1, 0x8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26D794u, 0x26D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D79Cu;
label_26d79c:
    // 0x26d79c: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x26d79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d7a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d7a4: 0x8cc20294  lw          $v0, 0x294($a2)
    ctx->pc = 0x26d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 660)));
    // 0x26d7a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26D7A8u;
    {
        const bool branch_taken_0x26d7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7A8u;
        // 0x26d7ac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7a8) {
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D7B0u;
    // 0x26d7b0: 0x961024  and         $v0, $a0, $s6
    ctx->pc = 0x26d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
    // 0x26d7b4: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x26D7B4u;
    {
        const bool branch_taken_0x26d7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d7b4) {
            ctx->pc = 0x26D7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D7B4u;
            // 0x26d7b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D88Cu;
            goto label_26d88c;
        }
    }
    ctx->pc = 0x26D7BCu;
    // 0x26d7bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26D7BCu;
    {
        const bool branch_taken_0x26d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7BCu;
        // 0x26d7c0: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7bc) {
            ctx->pc = 0x26D7CCu;
            goto label_26d7cc;
        }
    }
    ctx->pc = 0x26D7C4u;
    // 0x26d7c4: 0x0  nop
    ctx->pc = 0x26d7c4u;
    // NOP
label_26d7c8:
    // 0x26d7c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x26d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_26d7cc:
    // 0x26d7cc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26d7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26d7d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D7D0u;
    {
        const bool branch_taken_0x26d7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D0u;
        // 0x26d7d4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7d0) {
            ctx->pc = 0x26D818u;
            goto label_26d818;
        }
    }
    ctx->pc = 0x26D7D8u;
    // 0x26d7d8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26d7dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d7e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26D7E0u;
    {
        const bool branch_taken_0x26d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7E0u;
        // 0x26d7e4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7e0) {
            ctx->pc = 0x26D81Cu;
            goto label_26d81c;
        }
    }
    ctx->pc = 0x26D7E8u;
    // 0x26d7e8: 0x961024  and         $v0, $a0, $s6
    ctx->pc = 0x26d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
    // 0x26d7ec: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x26D7ECu;
    {
        const bool branch_taken_0x26d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d7ec) {
            ctx->pc = 0x26D7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D7ECu;
            // 0x26d7f0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D88Cu;
            goto label_26d88c;
        }
    }
    ctx->pc = 0x26D7F4u;
    // 0x26d7f4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26D7F4u;
    SET_GPR_U32(ctx, 31, 0x26D7FCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26D7F4u, 0x26D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7FCu;
label_26d7fc:
    // 0x26d7fc: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x26d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d800: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d804: 0x84c3034e  lh          $v1, 0x34E($a2)
    ctx->pc = 0x26d804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 846)));
    // 0x26d808: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26d808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26d80c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x26D80Cu;
    {
        const bool branch_taken_0x26d80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d80c) {
            ctx->pc = 0x26D810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D80Cu;
            // 0x26d810: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D88Cu;
            goto label_26d88c;
        }
    }
    ctx->pc = 0x26D814u;
    // 0x26d814: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26d814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_26d818:
    // 0x26d818: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26d818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_26d81c:
    // 0x26d81c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d820: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x26D820u;
    {
        const bool branch_taken_0x26d820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d820) {
            ctx->pc = 0x26D824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D820u;
            // 0x26d824: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D88Cu;
            goto label_26d88c;
        }
    }
    ctx->pc = 0x26D828u;
    // 0x26d828: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x26d828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x26d82c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D82Cu;
    {
        const bool branch_taken_0x26d82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D82Cu;
        // 0x26d830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d82c) {
            ctx->pc = 0x26D850u;
            goto label_26d850;
        }
    }
    ctx->pc = 0x26D834u;
    // 0x26d834: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d838: 0x8443003e  lh          $v1, 0x3E($v0)
    ctx->pc = 0x26d838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x26d83c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D83Cu;
    {
        const bool branch_taken_0x26d83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d83c) {
            ctx->pc = 0x26D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D83Cu;
            // 0x26d840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D854u;
            goto label_26d854;
        }
    }
    ctx->pc = 0x26D844u;
    // 0x26d844: 0x2bc2000d  slti        $v0, $fp, 0xD
    ctx->pc = 0x26d844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x26d848: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26D848u;
    {
        const bool branch_taken_0x26d848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d848) {
            ctx->pc = 0x26D854u;
            goto label_26d854;
        }
    }
    ctx->pc = 0x26D850u;
label_26d850:
    // 0x26d850: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d854:
    // 0x26d854: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x26D854u;
    {
        const bool branch_taken_0x26d854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d854) {
            ctx->pc = 0x26D858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D854u;
            // 0x26d858: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D88Cu;
            goto label_26d88c;
        }
    }
    ctx->pc = 0x26D85Cu;
    // 0x26d85c: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x26d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x26d860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26d860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d864: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26D864u;
    SET_GPR_U32(ctx, 31, 0x26D86Cu);
    ctx->pc = 0x26D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D864u;
    // 0x26d868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26D864u, 0x26D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D86Cu;
label_26d86c:
    // 0x26d86c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26D86Cu;
    {
        const bool branch_taken_0x26d86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d86c) {
            ctx->pc = 0x26D870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D86Cu;
            // 0x26d870: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D88Cu;
            goto label_26d88c;
        }
    }
    ctx->pc = 0x26D874u;
    // 0x26d874: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x26d874u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x26d878: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x26d878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x26d87c: 0x2ae20030  slti        $v0, $s7, 0x30
    ctx->pc = 0x26d87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x26d880: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26D880u;
    {
        const bool branch_taken_0x26d880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D880u;
        // 0x26d884: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d880) {
            ctx->pc = 0x26D8ACu;
            goto label_26d8ac;
        }
    }
    ctx->pc = 0x26D888u;
    // 0x26d888: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26d888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_26d88c:
    // 0x26d88c: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x26d88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x26d890: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x26D890u;
    {
        const bool branch_taken_0x26d890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D890u;
        // 0x26d894: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d890) {
            ctx->pc = 0x26D790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d790;
        }
    }
    ctx->pc = 0x26D898u;
label_26d898:
    // 0x26d898: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x26d898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x26d89c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26d89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d8a0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x26d8a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26d8a4: 0x1462ffaa  bne         $v1, $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x26D8A4u;
    {
        const bool branch_taken_0x26d8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8A4u;
        // 0x26d8a8: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8a4) {
            ctx->pc = 0x26D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d750;
        }
    }
    ctx->pc = 0x26D8ACu;
label_26d8ac:
    // 0x26d8ac: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x26d8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d8b0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x26d8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26d8b4:
    // 0x26d8b4: 0xacd70148  sw          $s7, 0x148($a2)
    ctx->pc = 0x26d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 328), GPR_U32(ctx, 23));
    // 0x26d8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d8bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26d8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d8c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26d8c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d8c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26d8c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26d8c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26d8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d8cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26d8ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26d8d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d8d4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x26d8d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26d8d8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x26d8d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d8dc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x26d8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26d8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8E0u;
        // 0x26d8e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D8E8u;
}
