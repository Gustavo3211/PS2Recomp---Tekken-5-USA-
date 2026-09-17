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

// Function: sub_0022B7C8
// Address: 0x22b7c8 - 0x22b858
void sub_0022B7C8_0x22b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B7C8_0x22b7c8");
#endif

    switch (ctx->pc) {
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        default: break;
    }

    ctx->pc = 0x22b7c8u;

label_22b7c8:
    // 0x22b7c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22b7cc:
    // 0x22b7cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_22b7d0:
    // 0x22b7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b7d4:
    // 0x22b7d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_22b7d8:
    // 0x22b7d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22b7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b7dc:
    // 0x22b7dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22b7e0:
    // 0x22b7e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b7e4:
    // 0x22b7e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b7e8:
    // 0x22b7e8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x22b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_22b7ec:
    // 0x22b7ec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_22b7f0:
    if (ctx->pc == 0x22B7F0u) {
        ctx->pc = 0x22B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7ECu;
        // 0x22b7f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7F4u;
        goto label_22b7f4;
    }
    ctx->pc = 0x22B7ECu;
    {
        const bool branch_taken_0x22b7ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7ECu;
        // 0x22b7f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7ec) {
            ctx->pc = 0x22B800u;
            goto label_22b800;
        }
    }
    ctx->pc = 0x22B7F4u;
label_22b7f4:
    // 0x22b7f4: 0xc08ad98  jal         func_22B660
label_22b7f8:
    if (ctx->pc == 0x22B7F8u) {
        ctx->pc = 0x22B7FCu;
        goto label_22b7fc;
    }
    ctx->pc = 0x22B7F4u;
    SET_GPR_U32(ctx, 31, 0x22B7FCu);
    ctx->pc = 0x22B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B660u, 0x22B7F4u, 0x22B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7FCu;
label_22b7fc:
    // 0x22b7fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b800:
    // 0x22b800: 0xc08adc2  jal         func_22B708
label_22b804:
    if (ctx->pc == 0x22B804u) {
        ctx->pc = 0x22B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B800u;
        // 0x22b804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B808u;
        goto label_22b808;
    }
    ctx->pc = 0x22B800u;
    SET_GPR_U32(ctx, 31, 0x22B808u);
    ctx->pc = 0x22B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B800u;
    // 0x22b804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B708u, 0x22B800u, 0x22B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B808u;
label_22b808:
    // 0x22b808: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22b808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b80c:
    // 0x22b80c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x22b80cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b810:
    // 0x22b810: 0x50e0000d  beql        $a3, $zero, . + 4 + (0xD << 2)
label_22b814:
    if (ctx->pc == 0x22B814u) {
        ctx->pc = 0x22B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B810u;
        // 0x22b814: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B818u;
        goto label_22b818;
    }
    ctx->pc = 0x22B810u;
    {
        const bool branch_taken_0x22b810 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b810) {
            ctx->pc = 0x22B814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B810u;
            // 0x22b814: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B848u;
            goto label_22b848;
        }
    }
    ctx->pc = 0x22B818u;
label_22b818:
    // 0x22b818: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x22b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_22b81c:
    // 0x22b81c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22b820:
    if (ctx->pc == 0x22B820u) {
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B824u;
        goto label_22b824;
    }
    ctx->pc = 0x22B81Cu;
    {
        const bool branch_taken_0x22b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b81c) {
            ctx->pc = 0x22B844u;
            goto label_22b844;
        }
    }
    ctx->pc = 0x22B824u;
label_22b824:
    // 0x22b824: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_22b828:
    if (ctx->pc == 0x22B828u) {
        ctx->pc = 0x22B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B824u;
        // 0x22b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B82Cu;
        goto label_22b82c;
    }
    ctx->pc = 0x22B824u;
    {
        const bool branch_taken_0x22b824 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x22B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B824u;
        // 0x22b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b824) {
            ctx->pc = 0x22B838u;
            goto label_22b838;
        }
    }
    ctx->pc = 0x22B82Cu;
label_22b82c:
    // 0x22b82c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22b830:
    // 0x22b830: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22b834:
    if (ctx->pc == 0x22B834u) {
        ctx->pc = 0x22B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B830u;
        // 0x22b834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B838u;
        goto label_22b838;
    }
    ctx->pc = 0x22B830u;
    {
        const bool branch_taken_0x22b830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b830) {
            ctx->pc = 0x22B834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B830u;
            // 0x22b834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B848u;
            goto label_22b848;
        }
    }
    ctx->pc = 0x22B838u;
label_22b838:
    // 0x22b838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b83c:
    // 0x22b83c: 0xe0f809  jalr        $a3
label_22b840:
    if (ctx->pc == 0x22B840u) {
        ctx->pc = 0x22B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B83Cu;
        // 0x22b840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B844u;
        goto label_22b844;
    }
    ctx->pc = 0x22B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x22B844u);
        ctx->pc = 0x22B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B83Cu;
        // 0x22b840: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B83Cu, 0x22B844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B844u;
label_22b844:
    // 0x22b844: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22b844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b848:
    // 0x22b848: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22b848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22b84c:
    // 0x22b84c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22b850:
    // 0x22b850: 0x3e00008  jr          $ra
label_22b854:
    if (ctx->pc == 0x22B854u) {
        ctx->pc = 0x22B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B850u;
        // 0x22b854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B858u;
        goto label_fallthrough_0x22b850;
    }
    ctx->pc = 0x22B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B850u;
        // 0x22b854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b850:
    ctx->pc = 0x22B858u;
}
