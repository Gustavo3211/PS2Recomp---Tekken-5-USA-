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

// Function: sub_002FD6A0
// Address: 0x2fd6a0 - 0x2fd900
void sub_002FD6A0_0x2fd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD6A0_0x2fd6a0");
#endif

    switch (ctx->pc) {
        case 0x2fd700u: goto label_2fd700;
        case 0x2fd720u: goto label_2fd720;
        case 0x2fd738u: goto label_2fd738;
        case 0x2fd760u: goto label_2fd760;
        case 0x2fd768u: goto label_2fd768;
        case 0x2fd794u: goto label_2fd794;
        case 0x2fd7a8u: goto label_2fd7a8;
        case 0x2fd7c8u: goto label_2fd7c8;
        case 0x2fd7f8u: goto label_2fd7f8;
        case 0x2fd810u: goto label_2fd810;
        case 0x2fd830u: goto label_2fd830;
        case 0x2fd844u: goto label_2fd844;
        case 0x2fd8ccu: goto label_2fd8cc;
        default: break;
    }

    ctx->pc = 0x2fd6a0u;

    // 0x2fd6a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fd6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fd6a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2fd6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2fd6ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2fd6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fd6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fd6b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2fd6b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fd6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fd6bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2fd6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fd6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fd6c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fd6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fd6cc: 0x12a00083  beqz        $s5, . + 4 + (0x83 << 2)
    ctx->pc = 0x2FD6CCu;
    {
        const bool branch_taken_0x2fd6cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6CCu;
        // 0x2fd6d0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6cc) {
            ctx->pc = 0x2FD8DCu;
            goto label_2fd8dc;
        }
    }
    ctx->pc = 0x2FD6D4u;
    // 0x2fd6d4: 0x52400082  beql        $s2, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x2FD6D4u;
    {
        const bool branch_taken_0x2fd6d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd6d4) {
            ctx->pc = 0x2FD6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD6D4u;
            // 0x2fd6d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD8E0u;
            goto label_2fd8e0;
        }
    }
    ctx->pc = 0x2FD6DCu;
    // 0x2fd6dc: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x2fd6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2fd6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd6e4: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x2FD6E4u;
    {
        const bool branch_taken_0x2fd6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD6E4u;
        // 0x2fd6e8: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6e4) {
            ctx->pc = 0x2FD8DCu;
            goto label_2fd8dc;
        }
    }
    ctx->pc = 0x2FD6ECu;
    // 0x2fd6ec: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2fd6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2fd6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2fd6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fd6f8: 0xc0be9b4  jal         func_2FA6D0
    ctx->pc = 0x2FD6F8u;
    SET_GPR_U32(ctx, 31, 0x2FD700u);
    ctx->pc = 0x2FD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6F8u;
    // 0x2fd6fc: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6D0u, 0x2FD6F8u, 0x2FD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD700u;
label_2fd700:
    // 0x2fd700: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fd700u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd704: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2FD704u;
    {
        const bool branch_taken_0x2fd704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD704u;
        // 0x2fd708: 0xae83001c  sw          $v1, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd704) {
            ctx->pc = 0x2FD8DCu;
            goto label_2fd8dc;
        }
    }
    ctx->pc = 0x2FD70Cu;
    // 0x2fd70c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2fd70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2fd710: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FD710u;
    {
        const bool branch_taken_0x2fd710 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2FD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD710u;
        // 0x2fd714: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd710) {
            ctx->pc = 0x2FD748u;
            goto label_2fd748;
        }
    }
    ctx->pc = 0x2FD718u;
    // 0x2fd718: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x2fd718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2fd71c: 0x0  nop
    ctx->pc = 0x2fd71cu;
    // NOP
label_2fd720:
    // 0x2fd720: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x2fd720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2fd724: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2fd724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2fd728: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fd728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fd72c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fd72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fd730: 0xc0bf498  jal         func_2FD260
    ctx->pc = 0x2FD730u;
    SET_GPR_U32(ctx, 31, 0x2FD738u);
    ctx->pc = 0x2FD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD730u;
    // 0x2fd734: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD260u, 0x2FD730u, 0x2FD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD738u;
label_2fd738:
    // 0x2fd738: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2fd738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2fd73c: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x2fd73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fd740: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2FD740u;
    {
        const bool branch_taken_0x2fd740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd740) {
            ctx->pc = 0x2FD744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD740u;
            // 0x2fd744: 0x132040  sll         $a0, $s3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd720;
        }
    }
    ctx->pc = 0x2FD748u;
label_2fd748:
    // 0x2fd748: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2fd748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2fd74c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fd74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd750: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FD750u;
    {
        const bool branch_taken_0x2fd750 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD750u;
        // 0x2fd754: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd750) {
            ctx->pc = 0x2FD7E4u;
            goto label_2fd7e4;
        }
    }
    ctx->pc = 0x2FD758u;
    // 0x2fd758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fd758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd75c: 0x0  nop
    ctx->pc = 0x2fd75cu;
    // NOP
label_2fd760:
    // 0x2fd760: 0xc0bf3e0  jal         func_2FCF80
    ctx->pc = 0x2FD760u;
    SET_GPR_U32(ctx, 31, 0x2FD768u);
    ctx->pc = 0x2FD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD760u;
    // 0x2fd764: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF80u, 0x2FD760u, 0x2FD768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD768u;
label_2fd768:
    // 0x2fd768: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fd768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd76c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2fd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2fd770: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fd770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd774: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FD774u;
    {
        const bool branch_taken_0x2fd774 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD774u;
        // 0x2fd778: 0x21840  sll         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd774) {
            ctx->pc = 0x2FD7CCu;
            goto label_2fd7cc;
        }
    }
    ctx->pc = 0x2FD77Cu;
    // 0x2fd77c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fd780: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x2fd780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2fd784: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fd784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fd788: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2fd788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fd78c: 0xc0bf408  jal         func_2FD020
    ctx->pc = 0x2FD78Cu;
    SET_GPR_U32(ctx, 31, 0x2FD794u);
    ctx->pc = 0x2FD790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD78Cu;
    // 0x2fd790: 0xae330000  sw          $s3, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD020u, 0x2FD78Cu, 0x2FD794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD794u;
label_2fd794:
    // 0x2fd794: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fd794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd798: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FD798u;
    {
        const bool branch_taken_0x2fd798 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FD79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD798u;
        // 0x2fd79c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd798) {
            ctx->pc = 0x2FD7C8u;
            goto label_2fd7c8;
        }
    }
    ctx->pc = 0x2FD7A0u;
    // 0x2fd7a0: 0xc0bf3e0  jal         func_2FCF80
    ctx->pc = 0x2FD7A0u;
    SET_GPR_U32(ctx, 31, 0x2FD7A8u);
    ctx->pc = 0x2FCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF80u, 0x2FD7A0u, 0x2FD7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7A8u;
label_2fd7a8:
    // 0x2fd7a8: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x2fd7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2fd7ac: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2fd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2fd7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fd7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd7b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2fd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2fd7b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fd7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fd7bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fd7c0: 0xc0bf47c  jal         func_2FD1F0
    ctx->pc = 0x2FD7C0u;
    SET_GPR_U32(ctx, 31, 0x2FD7C8u);
    ctx->pc = 0x2FD7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7C0u;
    // 0x2fd7c4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD1F0u, 0x2FD7C0u, 0x2FD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7C8u;
label_2fd7c8:
    // 0x2fd7c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fd7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fd7cc:
    // 0x2fd7cc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x2fd7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x2fd7d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fd7d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fd7d4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2fd7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd7d8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2FD7D8u;
    {
        const bool branch_taken_0x2fd7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7D8u;
        // 0x2fd7dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7d8) {
            ctx->pc = 0x2FD760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd760;
        }
    }
    ctx->pc = 0x2FD7E0u;
    // 0x2fd7e0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2fd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2fd7e4:
    // 0x2fd7e4: 0x1603003d  bne         $s0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2FD7E4u;
    {
        const bool branch_taken_0x2fd7e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7E4u;
        // 0x2fd7e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7e4) {
            ctx->pc = 0x2FD8DCu;
            goto label_2fd8dc;
        }
    }
    ctx->pc = 0x2FD7ECu;
    // 0x2fd7ec: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x2fd7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2fd7f0: 0xc0be9be  jal         func_2FA6F8
    ctx->pc = 0x2FD7F0u;
    SET_GPR_U32(ctx, 31, 0x2FD7F8u);
    ctx->pc = 0x2FD7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7F0u;
    // 0x2fd7f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FD7F0u, 0x2FD7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7F8u;
label_2fd7f8:
    // 0x2fd7f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD7F8u;
    {
        const bool branch_taken_0x2fd7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7F8u;
        // 0x2fd7fc: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7f8) {
            ctx->pc = 0x2FD818u;
            goto label_2fd818;
        }
    }
    ctx->pc = 0x2FD800u;
    // 0x2fd800: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x2fd800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2fd804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd808: 0xc0be9be  jal         func_2FA6F8
    ctx->pc = 0x2FD808u;
    SET_GPR_U32(ctx, 31, 0x2FD810u);
    ctx->pc = 0x2FD80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD808u;
    // 0x2fd80c: 0x52980  sll         $a1, $a1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x2FD808u, 0x2FD810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD810u;
label_2fd810:
    // 0x2fd810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD810u;
    {
        const bool branch_taken_0x2fd810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD810u;
        // 0x2fd814: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd810) {
            ctx->pc = 0x2FD820u;
            goto label_2fd820;
        }
    }
    ctx->pc = 0x2FD818u;
label_2fd818:
    // 0x2fd818: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2FD818u;
    {
        const bool branch_taken_0x2fd818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD818u;
        // 0x2fd81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd818) {
            ctx->pc = 0x2FD8DCu;
            goto label_2fd8dc;
        }
    }
    ctx->pc = 0x2FD820u;
label_2fd820:
    // 0x2fd820: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2fd820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2fd824: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fd824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd828: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FD828u;
    {
        const bool branch_taken_0x2fd828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD828u;
        // 0x2fd82c: 0x8e91001c  lw          $s1, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd828) {
            ctx->pc = 0x2FD8C4u;
            goto label_2fd8c4;
        }
    }
    ctx->pc = 0x2FD830u;
label_2fd830:
    // 0x2fd830: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2fd830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fd834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd838: 0x8e900024  lw          $s0, 0x24($s4)
    ctx->pc = 0x2fd838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2fd83c: 0xc0bf3e0  jal         func_2FCF80
    ctx->pc = 0x2FD83Cu;
    SET_GPR_U32(ctx, 31, 0x2FD844u);
    ctx->pc = 0x2FD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD83Cu;
    // 0x2fd840: 0x139180  sll         $s2, $s3, 6 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF80u, 0x2FD83Cu, 0x2FD844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD844u;
label_2fd844:
    // 0x2fd844: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2fd844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2fd848: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2fd848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2fd84c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x2fd84cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fd850: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x2fd850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fd854: 0x78c40020  lq          $a0, 0x20($a2)
    ctx->pc = 0x2fd854u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fd858: 0x78c50030  lq          $a1, 0x30($a2)
    ctx->pc = 0x2fd858u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2fd85c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2fd85cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2fd860: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2fd860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2fd864: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x2fd864u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x2fd868: 0x7e050030  sq          $a1, 0x30($s0)
    ctx->pc = 0x2fd868u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 5));
    // 0x2fd86c: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x2fd86cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2fd870: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x2fd870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x2fd874: 0x50e0000b  beql        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FD874u;
    {
        const bool branch_taken_0x2fd874 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd874) {
            ctx->pc = 0x2FD878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD874u;
            // 0x2fd878: 0xae270004  sw          $a3, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD8A4u;
            goto label_2fd8a4;
        }
    }
    ctx->pc = 0x2FD87Cu;
    // 0x2fd87c: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x2fd87cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd880: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    ctx->pc = 0x2fd880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fd884: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2fd884u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2fd888: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2fd888u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2fd88c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2fd88cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2fd890: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x2fd890u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fd894: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x2fd894u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2fd898: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x2fd898u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2fd89c: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x2fd89cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2fd8a0: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x2fd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
label_2fd8a4:
    // 0x2fd8a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fd8a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fd8a8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x2fd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2fd8ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2fd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2fd8b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2fd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2fd8b4: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2fd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2fd8b8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2fd8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd8bc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2FD8BCu;
    {
        const bool branch_taken_0x2fd8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD8BCu;
        // 0x2fd8c0: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8bc) {
            ctx->pc = 0x2FD830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd830;
        }
    }
    ctx->pc = 0x2FD8C4u;
label_2fd8c4:
    // 0x2fd8c4: 0xc0bf662  jal         func_2FD988
    ctx->pc = 0x2FD8C4u;
    SET_GPR_U32(ctx, 31, 0x2FD8CCu);
    ctx->pc = 0x2FD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8C4u;
    // 0x2fd8c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD988u, 0x2FD8C4u, 0x2FD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8CCu;
label_2fd8cc:
    // 0x2fd8cc: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x2fd8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2fd8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd8d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2fd8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2fd8d8: 0xae830028  sw          $v1, 0x28($s4)
    ctx->pc = 0x2fd8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
label_2fd8dc:
    // 0x2fd8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd8e0:
    // 0x2fd8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fd8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd8e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fd8e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd8e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fd8e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fd8ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fd8ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd8f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2fd8f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fd8f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fd8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD8F8u;
        // 0x2fd8fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD900u;
}
