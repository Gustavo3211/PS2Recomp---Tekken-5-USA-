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

// Function: sub_0036E608
// Address: 0x36e608 - 0x36e7b8
void sub_0036E608_0x36e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E608_0x36e608");
#endif

    switch (ctx->pc) {
        case 0x36e62cu: goto label_36e62c;
        case 0x36e644u: goto label_36e644;
        default: break;
    }

    ctx->pc = 0x36e608u;

    // 0x36e608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e60c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e614: 0x245071d0  addiu       $s0, $v0, 0x71D0
    ctx->pc = 0x36e614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29136));
    // 0x36e618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D71D0u));
    // 0x36e61c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E61Cu;
    {
        const bool branch_taken_0x36e61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E61Cu;
        // 0x36e620: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e61c) {
            ctx->pc = 0x36E644u;
            goto label_36e644;
        }
    }
    ctx->pc = 0x36E624u;
    // 0x36e624: 0xc0db8ca  jal         func_36E328
    ctx->pc = 0x36E624u;
    SET_GPR_U32(ctx, 31, 0x36E62Cu);
    ctx->pc = 0x36E328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E328u, 0x36E624u, 0x36E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E62Cu;
label_36e62c:
    // 0x36e62c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e62cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e630: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36e630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36e634: 0x24a5fb70  addiu       $a1, $a1, -0x490
    ctx->pc = 0x36e634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966128));
    // 0x36e638: 0x24c671b0  addiu       $a2, $a2, 0x71B0
    ctx->pc = 0x36e638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29104));
    // 0x36e63c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E63Cu;
    SET_GPR_U32(ctx, 31, 0x36E644u);
    ctx->pc = 0x36E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E63Cu;
    // 0x36e640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E63Cu, 0x36E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E644u;
label_36e644:
    // 0x36e644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e64c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e650: 0x3e00008  jr          $ra
    ctx->pc = 0x36E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E650u;
        // 0x36e654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E658u;
    // 0x36e658: 0x3e00008  jr          $ra
    ctx->pc = 0x36E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E658u;
        // 0x36e65c: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E660u;
    // 0x36e660: 0x3e00008  jr          $ra
    ctx->pc = 0x36E660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E660u;
        // 0x36e664: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E668u;
    // 0x36e668: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x36e668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x36e66c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e670: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E670u;
    {
        const bool branch_taken_0x36e670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E670u;
        // 0x36e674: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e670) {
            ctx->pc = 0x36E688u;
            goto label_36e688;
        }
    }
    ctx->pc = 0x36E678u;
    // 0x36e678: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36e67c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e680: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E680u;
    {
        const bool branch_taken_0x36e680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36e680) {
            ctx->pc = 0x36E694u;
            goto label_36e694;
        }
    }
    ctx->pc = 0x36E688u;
label_36e688:
    // 0x36e688: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36e688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36e68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e690: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36e690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36e694:
    // 0x36e694: 0x3e00008  jr          $ra
    ctx->pc = 0x36E694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E694u;
        // 0x36e698: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E69Cu;
    // 0x36e69c: 0x0  nop
    ctx->pc = 0x36e69cu;
    // NOP
    // 0x36e6a0: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x36e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x36e6a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e6a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E6A8u;
    {
        const bool branch_taken_0x36e6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6A8u;
        // 0x36e6ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e6a8) {
            ctx->pc = 0x36E6C0u;
            goto label_36e6c0;
        }
    }
    ctx->pc = 0x36E6B0u;
    // 0x36e6b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36e6b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e6b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E6B8u;
    {
        const bool branch_taken_0x36e6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36e6b8) {
            ctx->pc = 0x36E6CCu;
            goto label_36e6cc;
        }
    }
    ctx->pc = 0x36E6C0u;
label_36e6c0:
    // 0x36e6c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36e6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36e6cc:
    // 0x36e6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6CCu;
        // 0x36e6d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E6D4u;
    // 0x36e6d4: 0x0  nop
    ctx->pc = 0x36e6d4u;
    // NOP
    // 0x36e6d8: 0x24840084  addiu       $a0, $a0, 0x84
    ctx->pc = 0x36e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x36e6dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e6e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E6E0u;
    {
        const bool branch_taken_0x36e6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6E0u;
        // 0x36e6e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e6e0) {
            ctx->pc = 0x36E6F8u;
            goto label_36e6f8;
        }
    }
    ctx->pc = 0x36E6E8u;
    // 0x36e6e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36e6ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e6f0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E6F0u;
    {
        const bool branch_taken_0x36e6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36e6f0) {
            ctx->pc = 0x36E704u;
            goto label_36e704;
        }
    }
    ctx->pc = 0x36E6F8u;
label_36e6f8:
    // 0x36e6f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36e6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e700: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36e700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36e704:
    // 0x36e704: 0x3e00008  jr          $ra
    ctx->pc = 0x36E704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E704u;
        // 0x36e708: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E70Cu;
    // 0x36e70c: 0x0  nop
    ctx->pc = 0x36e70cu;
    // NOP
    // 0x36e710: 0x2484008c  addiu       $a0, $a0, 0x8C
    ctx->pc = 0x36e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x36e714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E718u;
    {
        const bool branch_taken_0x36e718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E718u;
        // 0x36e71c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e718) {
            ctx->pc = 0x36E730u;
            goto label_36e730;
        }
    }
    ctx->pc = 0x36E720u;
    // 0x36e720: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36e724: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e728: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E728u;
    {
        const bool branch_taken_0x36e728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36e728) {
            ctx->pc = 0x36E73Cu;
            goto label_36e73c;
        }
    }
    ctx->pc = 0x36E730u;
label_36e730:
    // 0x36e730: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36e730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36e734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e738: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36e738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36e73c:
    // 0x36e73c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E73Cu;
        // 0x36e740: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E744u;
    // 0x36e744: 0x0  nop
    ctx->pc = 0x36e744u;
    // NOP
    // 0x36e748: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x36e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x36e74c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E750u;
    {
        const bool branch_taken_0x36e750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E750u;
        // 0x36e754: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e750) {
            ctx->pc = 0x36E768u;
            goto label_36e768;
        }
    }
    ctx->pc = 0x36E758u;
    // 0x36e758: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36e758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36e75c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e760: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E760u;
    {
        const bool branch_taken_0x36e760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36e760) {
            ctx->pc = 0x36E774u;
            goto label_36e774;
        }
    }
    ctx->pc = 0x36E768u;
label_36e768:
    // 0x36e768: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36e768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36e76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e770: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36e770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36e774:
    // 0x36e774: 0x3e00008  jr          $ra
    ctx->pc = 0x36E774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E774u;
        // 0x36e778: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E77Cu;
    // 0x36e77c: 0x0  nop
    ctx->pc = 0x36e77cu;
    // NOP
    // 0x36e780: 0x2484009c  addiu       $a0, $a0, 0x9C
    ctx->pc = 0x36e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    // 0x36e784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36e788: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E788u;
        // 0x36e78c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E7A0u;
            goto label_36e7a0;
        }
    }
    ctx->pc = 0x36E790u;
    // 0x36e790: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36e794: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36e798: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E798u;
    {
        const bool branch_taken_0x36e798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36e798) {
            ctx->pc = 0x36E7ACu;
            goto label_36e7ac;
        }
    }
    ctx->pc = 0x36E7A0u;
label_36e7a0:
    // 0x36e7a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36e7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36e7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36e7ac:
    // 0x36e7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7ACu;
        // 0x36e7b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E7B4u;
    // 0x36e7b4: 0x0  nop
    ctx->pc = 0x36e7b4u;
    // NOP
    ctx->pc = 0x36e7b8u;
}
