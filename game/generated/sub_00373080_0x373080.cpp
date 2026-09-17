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

// Function: sub_00373080
// Address: 0x373080 - 0x3731c8
void sub_00373080_0x373080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373080_0x373080");
#endif

    switch (ctx->pc) {
        case 0x3730a4u: goto label_3730a4;
        case 0x3730b8u: goto label_3730b8;
        default: break;
    }

    ctx->pc = 0x373080u;

    // 0x373080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373084: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x373084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x373088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37308c: 0x24507700  addiu       $s0, $v0, 0x7700
    ctx->pc = 0x37308cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30464));
    // 0x373090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x373090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7700u));
    // 0x373094: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x373094u;
    {
        const bool branch_taken_0x373094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373094u;
        // 0x373098: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373094) {
            ctx->pc = 0x3730B8u;
            goto label_3730b8;
        }
    }
    ctx->pc = 0x37309Cu;
    // 0x37309c: 0xc0dcbc0  jal         func_372F00
    ctx->pc = 0x37309Cu;
    SET_GPR_U32(ctx, 31, 0x3730A4u);
    ctx->pc = 0x372F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372F00u, 0x37309Cu, 0x3730A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730A4u;
label_3730a4:
    // 0x3730a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3730a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3730a8: 0x24a51be8  addiu       $a1, $a1, 0x1BE8
    ctx->pc = 0x3730a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7144));
    // 0x3730ac: 0x2786cc98  addiu       $a2, $gp, -0x3368
    ctx->pc = 0x3730acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954136));
    // 0x3730b0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3730B0u;
    SET_GPR_U32(ctx, 31, 0x3730B8u);
    ctx->pc = 0x3730B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730B0u;
    // 0x3730b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3730B0u, 0x3730B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730B8u;
label_3730b8:
    // 0x3730b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3730b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3730bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3730c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3730c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3730c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3730C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730C4u;
        // 0x3730c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730CCu;
    // 0x3730cc: 0x0  nop
    ctx->pc = 0x3730ccu;
    // NOP
    // 0x3730d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3730D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730D0u;
        // 0x3730d4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730D8u;
    // 0x3730d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3730D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730D8u;
        // 0x3730dc: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730E0u;
    // 0x3730e0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3730e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3730e4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3730e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3730e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3730e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3730ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3730ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3730f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3730F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730F0u;
        // 0x3730f4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730F8u;
    // 0x3730f8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3730f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3730fc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x3730fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373100: 0x3e00008  jr          $ra
    ctx->pc = 0x373100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373100u;
        // 0x373104: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373108u;
    // 0x373108: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x373108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x37310c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37310cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373110: 0x3e00008  jr          $ra
    ctx->pc = 0x373110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373110u;
        // 0x373114: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373118u;
    // 0x373118: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x373118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x37311c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37311cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373120: 0x3e00008  jr          $ra
    ctx->pc = 0x373120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373120u;
        // 0x373124: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373128u;
    // 0x373128: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x373128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x37312c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37312cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373130: 0x3e00008  jr          $ra
    ctx->pc = 0x373130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373130u;
        // 0x373134: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373138u;
    // 0x373138: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x373138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x37313c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37313cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373140: 0x3e00008  jr          $ra
    ctx->pc = 0x373140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373140u;
        // 0x373144: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373148u;
    // 0x373148: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x37314c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37314cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373150: 0x3e00008  jr          $ra
    ctx->pc = 0x373150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373150u;
        // 0x373154: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373158u;
    // 0x373158: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x373158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x37315c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37315cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373160: 0x3e00008  jr          $ra
    ctx->pc = 0x373160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373160u;
        // 0x373164: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373168u;
    // 0x373168: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x373168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x37316c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x37316cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x373170: 0x3e00008  jr          $ra
    ctx->pc = 0x373170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373170u;
        // 0x373174: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373178u;
    // 0x373178: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x373178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x37317c: 0x3e00008  jr          $ra
    ctx->pc = 0x37317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37317Cu;
        // 0x373180: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373184u;
    // 0x373184: 0x0  nop
    ctx->pc = 0x373184u;
    // NOP
    // 0x373188: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x373188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x37318c: 0x3e00008  jr          $ra
    ctx->pc = 0x37318Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37318Cu;
        // 0x373190: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37318Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373194u;
    // 0x373194: 0x0  nop
    ctx->pc = 0x373194u;
    // NOP
    // 0x373198: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x373198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x37319c: 0x3e00008  jr          $ra
    ctx->pc = 0x37319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3731A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37319Cu;
        // 0x3731a0: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3731A4u;
    // 0x3731a4: 0x0  nop
    ctx->pc = 0x3731a4u;
    // NOP
    // 0x3731a8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x3731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x3731ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3731ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3731B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731ACu;
        // 0x3731b0: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3731ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3731B4u;
    // 0x3731b4: 0x0  nop
    ctx->pc = 0x3731b4u;
    // NOP
    // 0x3731b8: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x3731b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x3731bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3731bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3731c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3731C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3731C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731C0u;
        // 0x3731c4: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3731C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3731C8u;
}
