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

// Function: sub_003410B8
// Address: 0x3410b8 - 0x341148
void sub_003410B8_0x3410b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003410B8_0x3410b8");
#endif

    switch (ctx->pc) {
        case 0x3410d8u: goto label_3410d8;
        case 0x3410e4u: goto label_3410e4;
        case 0x3410f0u: goto label_3410f0;
        case 0x341110u: goto label_341110;
        case 0x341128u: goto label_341128;
        default: break;
    }

    ctx->pc = 0x3410b8u;

    // 0x3410b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3410b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3410bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3410bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3410c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3410c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3410c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3410c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3410c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3410c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3410cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3410ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3410d0: 0xc0d04c6  jal         func_341318
    ctx->pc = 0x3410D0u;
    SET_GPR_U32(ctx, 31, 0x3410D8u);
    ctx->pc = 0x3410D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3410D0u;
    // 0x3410d4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341318u, 0x3410D0u, 0x3410D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410D8u;
label_3410d8:
    // 0x3410d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3410d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3410dc: 0xc0d0452  jal         func_341148
    ctx->pc = 0x3410DCu;
    SET_GPR_U32(ctx, 31, 0x3410E4u);
    ctx->pc = 0x3410E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3410DCu;
    // 0x3410e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341148u, 0x3410DCu, 0x3410E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410E4u;
label_3410e4:
    // 0x3410e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3410e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3410e8: 0xc0d0462  jal         func_341188
    ctx->pc = 0x3410E8u;
    SET_GPR_U32(ctx, 31, 0x3410F0u);
    ctx->pc = 0x3410ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3410E8u;
    // 0x3410ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341188u, 0x3410E8u, 0x3410F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3410F0u;
label_3410f0:
    // 0x3410f0: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x3410f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3410f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3410f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3410f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3410fc: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x3410fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x341100: 0x24422c28  addiu       $v0, $v0, 0x2C28
    ctx->pc = 0x341100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
    // 0x341104: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x341104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x341108: 0xc0d08e8  jal         func_3423A0
    ctx->pc = 0x341108u;
    SET_GPR_U32(ctx, 31, 0x341110u);
    ctx->pc = 0x34110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341108u;
    // 0x34110c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3423A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3423A0u, 0x341108u, 0x341110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341110u;
label_341110:
    // 0x341110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x341110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341114u;
    {
        const bool branch_taken_0x341114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341114u;
        // 0x341118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341114) {
            ctx->pc = 0x341128u;
            goto label_341128;
        }
    }
    ctx->pc = 0x34111Cu;
    // 0x34111c: 0x96460014  lhu         $a2, 0x14($s2)
    ctx->pc = 0x34111cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x341120: 0xc0d0754  jal         func_341D50
    ctx->pc = 0x341120u;
    SET_GPR_U32(ctx, 31, 0x341128u);
    ctx->pc = 0x341124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341120u;
    // 0x341124: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341D50u, 0x341120u, 0x341128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341128u;
label_341128:
    // 0x341128: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x341128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34112c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34112cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341130: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x341130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x341134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x341134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341138: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x341138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34113c: 0x3e00008  jr          $ra
    ctx->pc = 0x34113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34113Cu;
        // 0x341140: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341144u;
    // 0x341144: 0x0  nop
    ctx->pc = 0x341144u;
    // NOP
    ctx->pc = 0x341148u;
}
