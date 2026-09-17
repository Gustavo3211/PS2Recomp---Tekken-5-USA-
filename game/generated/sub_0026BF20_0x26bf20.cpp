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

// Function: sub_0026BF20
// Address: 0x26bf20 - 0x26c008
void sub_0026BF20_0x26bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF20_0x26bf20");
#endif

    switch (ctx->pc) {
        case 0x26bf50u: goto label_26bf50;
        case 0x26bfd0u: goto label_26bfd0;
        default: break;
    }

    ctx->pc = 0x26bf20u;

    // 0x26bf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bf24: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x26bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26bf28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26bf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26bf2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26bf2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bf34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26bf38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x26bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x26bf3c: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26bf40: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x26bf40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26bf44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26bf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf48: 0xc09faac  jal         func_27EAB0
    ctx->pc = 0x26BF48u;
    SET_GPR_U32(ctx, 31, 0x26BF50u);
    ctx->pc = 0x26BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF48u;
    // 0x26bf4c: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EAB0u, 0x26BF48u, 0x26BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF50u;
label_26bf50:
    // 0x26bf50: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x26bf50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26bf54: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x26BF54u;
    {
        const bool branch_taken_0x26bf54 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF54u;
        // 0x26bf58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf54) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BF5Cu;
    // 0x26bf5c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x26bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26bf60: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x26bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x26bf64: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26bf68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26bf6c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26BF6Cu;
    {
        const bool branch_taken_0x26bf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF6Cu;
        // 0x26bf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf6c) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BF74u;
    // 0x26bf74: 0x96050044  lhu         $a1, 0x44($s0)
    ctx->pc = 0x26bf74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x26bf78: 0x50a0001d  beql        $a1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x26BF78u;
    {
        const bool branch_taken_0x26bf78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf78) {
            ctx->pc = 0x26BF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BF78u;
            // 0x26bf7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BFF0u;
            goto label_26bff0;
        }
    }
    ctx->pc = 0x26BF80u;
    // 0x26bf80: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x26bf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26bf84: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26BF84u;
    {
        const bool branch_taken_0x26bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF84u;
        // 0x26bf88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf84) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BF8Cu;
    // 0x26bf8c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26bf90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26bf94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26bf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26bf98: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26BF98u;
    {
        const bool branch_taken_0x26bf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF98u;
        // 0x26bf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf98) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BFA0u;
    // 0x26bfa0: 0x2ca2000c  sltiu       $v0, $a1, 0xC
    ctx->pc = 0x26bfa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x26bfa4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26BFA4u;
    {
        const bool branch_taken_0x26bfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFA4u;
        // 0x26bfa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfa4) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BFACu;
    // 0x26bfac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26bfb0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x26bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x26bfb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26BFB4u;
    {
        const bool branch_taken_0x26bfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFB4u;
        // 0x26bfb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfb4) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BFBCu;
    // 0x26bfbc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26bfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26bfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bfc8: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26BFC8u;
    SET_GPR_U32(ctx, 31, 0x26BFD0u);
    ctx->pc = 0x26BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BFC8u;
    // 0x26bfcc: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26BFC8u, 0x26BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BFD0u;
label_26bfd0:
    // 0x26bfd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26BFD0u;
    {
        const bool branch_taken_0x26bfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFD0u;
        // 0x26bfd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfd0) {
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BFD8u;
    // 0x26bfd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26bfdc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x26bfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x26bfe0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BFE0u;
    {
        const bool branch_taken_0x26bfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bfe0) {
            ctx->pc = 0x26BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BFE0u;
            // 0x26bfe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BFECu;
            goto label_26bfec;
        }
    }
    ctx->pc = 0x26BFE8u;
    // 0x26bfe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bfec:
    // 0x26bfec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bfecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bff0:
    // 0x26bff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26bff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bff4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26bff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bff8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x26bff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26bffc: 0x3e00008  jr          $ra
    ctx->pc = 0x26BFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BFFCu;
        // 0x26c000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C004u;
    // 0x26c004: 0x0  nop
    ctx->pc = 0x26c004u;
    // NOP
    ctx->pc = 0x26c008u;
}
