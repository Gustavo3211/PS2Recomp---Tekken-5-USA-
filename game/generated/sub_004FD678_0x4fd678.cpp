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

// Function: sub_004FD678
// Address: 0x4fd678 - 0x4fd778
void sub_004FD678_0x4fd678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD678_0x4fd678");
#endif

    switch (ctx->pc) {
        case 0x4fd6c0u: goto label_4fd6c0;
        case 0x4fd6d8u: goto label_4fd6d8;
        case 0x4fd714u: goto label_4fd714;
        case 0x4fd72cu: goto label_4fd72c;
        default: break;
    }

    ctx->pc = 0x4fd678u;

    // 0x4fd678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4fd678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4fd67c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4fd67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4fd680: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4fd680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd684: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4fd684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4fd688: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x4fd688u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd68c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fd68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fd690: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4fd690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4fd694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4fd698: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x4fd698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd69c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4fd69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4fd6a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4fd6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4fd6a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4fd6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4fd6a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4fd6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4fd6ac: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4fd6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4fd6b0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4fd6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4fd6b4: 0x86960000  lh          $s6, 0x0($s4)
    ctx->pc = 0x4fd6b4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fd6b8: 0xc13f21a  jal         func_4FC868
    ctx->pc = 0x4FD6B8u;
    SET_GPR_U32(ctx, 31, 0x4FD6C0u);
    ctx->pc = 0x4FD6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD6B8u;
    // 0x4fd6bc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FC868u, 0x4FD6B8u, 0x4FD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD6C0u;
label_4fd6c0:
    // 0x4fd6c0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4FD6C0u;
    {
        const bool branch_taken_0x4fd6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD6C0u;
        // 0x4fd6c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd6c0) {
            ctx->pc = 0x4FD748u;
            goto label_4fd748;
        }
    }
    ctx->pc = 0x4FD6C8u;
    // 0x4fd6c8: 0x1ac0001f  blez        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x4FD6C8u;
    {
        const bool branch_taken_0x4fd6c8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4FD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD6C8u;
        // 0x4fd6cc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd6c8) {
            ctx->pc = 0x4FD748u;
            goto label_4fd748;
        }
    }
    ctx->pc = 0x4FD6D0u;
    // 0x4fd6d0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4fd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4fd6d4: 0x245ea350  addiu       $fp, $v0, -0x5CB0
    ctx->pc = 0x4fd6d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943568));
label_4fd6d8:
    // 0x4fd6d8: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4fd6d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fd6dc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4fd6dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4fd6e0: 0x86920000  lh          $s2, 0x0($s4)
    ctx->pc = 0x4fd6e0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fd6e4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4fd6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4fd6e8: 0x86930000  lh          $s3, 0x0($s4)
    ctx->pc = 0x4fd6e8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fd6ec: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4fd6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4fd6f0: 0x86900000  lh          $s0, 0x0($s4)
    ctx->pc = 0x4fd6f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fd6f4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4fd6f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4fd6f8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4fd6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fd6fc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4fd6fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4fd700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fd700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd704: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4fd704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd708: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4fd708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd70c: 0xc13f4a0  jal         func_4FD280
    ctx->pc = 0x4FD70Cu;
    SET_GPR_U32(ctx, 31, 0x4FD714u);
    ctx->pc = 0x4FD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD70Cu;
    // 0x4fd710: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD280u, 0x4FD70Cu, 0x4FD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD714u;
label_4fd714:
    // 0x4fd714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fd714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4fd718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd71c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4fd71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd720: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4fd720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd724: 0xc13f4a0  jal         func_4FD280
    ctx->pc = 0x4FD724u;
    SET_GPR_U32(ctx, 31, 0x4FD72Cu);
    ctx->pc = 0x4FD728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD724u;
    // 0x4fd728: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FD280u, 0x4FD724u, 0x4FD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD72Cu;
label_4fd72c:
    // 0x4fd72c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4fd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4fd730: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x4fd730u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x4fd734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4fd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4fd738: 0x2f6182a  slt         $v1, $s7, $s6
    ctx->pc = 0x4fd738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4fd73c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4FD73Cu;
    {
        const bool branch_taken_0x4fd73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD73Cu;
        // 0x4fd740: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd73c) {
            ctx->pc = 0x4FD6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4fd6d8;
        }
    }
    ctx->pc = 0x4FD744u;
    // 0x4fd744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fd744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4fd748:
    // 0x4fd748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4fd748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fd74c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4fd74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fd750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4fd750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fd754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4fd754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd758: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4fd758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fd75c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4fd75cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fd760: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4fd760u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fd764: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4fd764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fd768: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4fd768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fd76c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD76Cu;
        // 0x4fd770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FD774u;
    // 0x4fd774: 0x0  nop
    ctx->pc = 0x4fd774u;
    // NOP
    ctx->pc = 0x4fd778u;
}
