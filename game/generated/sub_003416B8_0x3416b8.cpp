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

// Function: sub_003416B8
// Address: 0x3416b8 - 0x341748
void sub_003416B8_0x3416b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003416B8_0x3416b8");
#endif

    switch (ctx->pc) {
        case 0x3416e0u: goto label_3416e0;
        case 0x3416ecu: goto label_3416ec;
        case 0x3416f8u: goto label_3416f8;
        case 0x341714u: goto label_341714;
        case 0x34172cu: goto label_34172c;
        default: break;
    }

    ctx->pc = 0x3416b8u;

    // 0x3416b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3416b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3416bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3416bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3416c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3416c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3416c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3416c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3416c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3416c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3416cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3416ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3416d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3416d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3416d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3416d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3416d8: 0xc0d061a  jal         func_341868
    ctx->pc = 0x3416D8u;
    SET_GPR_U32(ctx, 31, 0x3416E0u);
    ctx->pc = 0x3416DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416D8u;
    // 0x3416dc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341868u, 0x3416D8u, 0x3416E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416E0u;
label_3416e0:
    // 0x3416e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3416e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3416e4: 0xc0d0626  jal         func_341898
    ctx->pc = 0x3416E4u;
    SET_GPR_U32(ctx, 31, 0x3416ECu);
    ctx->pc = 0x3416E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416E4u;
    // 0x3416e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341898u, 0x3416E4u, 0x3416ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416ECu;
label_3416ec:
    // 0x3416ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3416ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3416f0: 0xc0d0650  jal         func_341940
    ctx->pc = 0x3416F0u;
    SET_GPR_U32(ctx, 31, 0x3416F8u);
    ctx->pc = 0x3416F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416F0u;
    // 0x3416f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341940u, 0x3416F0u, 0x3416F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416F8u;
label_3416f8:
    // 0x3416f8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x3416f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3416fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3416fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x341700: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x341700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341704: 0x24422c68  addiu       $v0, $v0, 0x2C68
    ctx->pc = 0x341704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x341708: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x341708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x34170c: 0xc0d07cc  jal         func_341F30
    ctx->pc = 0x34170Cu;
    SET_GPR_U32(ctx, 31, 0x341714u);
    ctx->pc = 0x341710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34170Cu;
    // 0x341710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341F30u, 0x34170Cu, 0x341714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341714u;
label_341714:
    // 0x341714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341718: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341718u;
    {
        const bool branch_taken_0x341718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341718u;
        // 0x34171c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341718) {
            ctx->pc = 0x34172Cu;
            goto label_34172c;
        }
    }
    ctx->pc = 0x341720u;
    // 0x341720: 0x96260014  lhu         $a2, 0x14($s1)
    ctx->pc = 0x341720u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x341724: 0xc0d0754  jal         func_341D50
    ctx->pc = 0x341724u;
    SET_GPR_U32(ctx, 31, 0x34172Cu);
    ctx->pc = 0x341728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341724u;
    // 0x341728: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D50u, 0x341724u, 0x34172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34172Cu;
label_34172c:
    // 0x34172c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34172cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341734: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x341734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x341738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x341738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34173c: 0x3e00008  jr          $ra
    ctx->pc = 0x34173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34173Cu;
        // 0x341740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341744u;
    // 0x341744: 0x0  nop
    ctx->pc = 0x341744u;
    // NOP
    ctx->pc = 0x341748u;
}
