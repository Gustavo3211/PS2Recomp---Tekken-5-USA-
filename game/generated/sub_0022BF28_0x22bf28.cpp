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

// Function: sub_0022BF28
// Address: 0x22bf28 - 0x22bfb0
void sub_0022BF28_0x22bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BF28_0x22bf28");
#endif

    switch (ctx->pc) {
        case 0x22bf4cu: goto label_22bf4c;
        case 0x22bf54u: goto label_22bf54;
        case 0x22bf84u: goto label_22bf84;
        case 0x22bf8cu: goto label_22bf8c;
        case 0x22bf94u: goto label_22bf94;
        default: break;
    }

    ctx->pc = 0x22bf28u;

    // 0x22bf28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22bf2c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22bf30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22bf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bf38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22bf3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22bf40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22bf44: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x22BF44u;
    SET_GPR_U32(ctx, 31, 0x22BF4Cu);
    ctx->pc = 0x22BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF44u;
    // 0x22bf48: 0x8c51dc38  lw          $s1, -0x23C8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x22BF44u, 0x22BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF4Cu;
label_22bf4c:
    // 0x22bf4c: 0xc0889e4  jal         func_222790
    ctx->pc = 0x22BF4Cu;
    SET_GPR_U32(ctx, 31, 0x22BF54u);
    ctx->pc = 0x22BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF4Cu;
    // 0x22bf50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222790u, 0x22BF4Cu, 0x22BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF54u;
label_22bf54:
    // 0x22bf54: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x22BF54u;
    {
        const bool branch_taken_0x22bf54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF54u;
        // 0x22bf58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf54) {
            ctx->pc = 0x22BF94u;
            goto label_22bf94;
        }
    }
    ctx->pc = 0x22BF5Cu;
    // 0x22bf5c: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22BF5Cu;
    {
        const bool branch_taken_0x22bf5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf5c) {
            ctx->pc = 0x22BF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BF5Cu;
            // 0x22bf60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BF98u;
            goto label_22bf98;
        }
    }
    ctx->pc = 0x22BF64u;
    // 0x22bf64: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x22BF64u;
    {
        const bool branch_taken_0x22bf64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BF64u;
        // 0x22bf68: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf64) {
            ctx->pc = 0x22BF94u;
            goto label_22bf94;
        }
    }
    ctx->pc = 0x22BF6Cu;
    // 0x22bf6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22bf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22bf74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22bf74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf78: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x22bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x22bf7c: 0xc08afa2  jal         func_22BE88
    ctx->pc = 0x22BF7Cu;
    SET_GPR_U32(ctx, 31, 0x22BF84u);
    ctx->pc = 0x22BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF7Cu;
    // 0x22bf80: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE88u, 0x22BF7Cu, 0x22BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF84u;
label_22bf84:
    // 0x22bf84: 0xc0889f0  jal         func_2227C0
    ctx->pc = 0x22BF84u;
    SET_GPR_U32(ctx, 31, 0x22BF8Cu);
    ctx->pc = 0x22BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF84u;
    // 0x22bf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2227C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2227C0u, 0x22BF84u, 0x22BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF8Cu;
label_22bf8c:
    // 0x22bf8c: 0xc08af5a  jal         func_22BD68
    ctx->pc = 0x22BF8Cu;
    SET_GPR_U32(ctx, 31, 0x22BF94u);
    ctx->pc = 0x22BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BF8Cu;
    // 0x22bf90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BD68u, 0x22BF8Cu, 0x22BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BF94u;
label_22bf94:
    // 0x22bf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22bf98:
    // 0x22bf98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22bf98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bf9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22bf9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bfa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x22BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFA4u;
        // 0x22bfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BFACu;
    // 0x22bfac: 0x0  nop
    ctx->pc = 0x22bfacu;
    // NOP
    ctx->pc = 0x22bfb0u;
}
