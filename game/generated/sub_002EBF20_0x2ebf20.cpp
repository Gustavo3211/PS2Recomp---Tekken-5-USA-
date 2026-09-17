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

// Function: sub_002EBF20
// Address: 0x2ebf20 - 0x2ebfc0
void sub_002EBF20_0x2ebf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBF20_0x2ebf20");
#endif

    switch (ctx->pc) {
        case 0x2ebf40u: goto label_2ebf40;
        case 0x2ebf58u: goto label_2ebf58;
        case 0x2ebf6cu: goto label_2ebf6c;
        case 0x2ebfa8u: goto label_2ebfa8;
        default: break;
    }

    ctx->pc = 0x2ebf20u;

    // 0x2ebf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebf24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebf28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebf28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebf30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebf34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ebf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ebf38: 0xc0badd4  jal         func_2EB750
    ctx->pc = 0x2EBF38u;
    SET_GPR_U32(ctx, 31, 0x2EBF40u);
    ctx->pc = 0x2EBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF38u;
    // 0x2ebf3c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB750u, 0x2EBF38u, 0x2EBF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF40u;
label_2ebf40:
    // 0x2ebf40: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ebf44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ebf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf48: 0x2463f020  addiu       $v1, $v1, -0xFE0
    ctx->pc = 0x2ebf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963232));
    // 0x2ebf4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf50: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EBF50u;
    SET_GPR_U32(ctx, 31, 0x2EBF58u);
    ctx->pc = 0x2EBF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF50u;
    // 0x2ebf54: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EBF50u, 0x2EBF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF58u;
label_2ebf58:
    // 0x2ebf58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ebf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ebf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf64: 0xc0bac70  jal         func_2EB1C0
    ctx->pc = 0x2EBF64u;
    SET_GPR_U32(ctx, 31, 0x2EBF6Cu);
    ctx->pc = 0x2EBF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBF64u;
    // 0x2ebf68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB1C0u, 0x2EBF64u, 0x2EBF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF6Cu;
label_2ebf6c:
    // 0x2ebf6c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2ebf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ebf70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ebf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ebf74: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2ebf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2ebf78: 0x24630788  addiu       $v1, $v1, 0x788
    ctx->pc = 0x2ebf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1928));
    // 0x2ebf7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ebf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebf80: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ebf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ebf84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBF84u;
    {
        const bool branch_taken_0x2ebf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF84u;
        // 0x2ebf88: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebf84) {
            ctx->pc = 0x2EBFA8u;
            goto label_2ebfa8;
        }
    }
    ctx->pc = 0x2EBF8Cu;
    // 0x2ebf8c: 0x0  nop
    ctx->pc = 0x2ebf8cu;
    // NOP
    // 0x2ebf90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ebf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ebf94: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ebf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ebf98: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ebf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ebf9c: 0x2484061c  addiu       $a0, $a0, 0x61C
    ctx->pc = 0x2ebf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1564));
    // 0x2ebfa0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EBFA0u;
    SET_GPR_U32(ctx, 31, 0x2EBFA8u);
    ctx->pc = 0x2EBFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFA0u;
    // 0x2ebfa4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EBFA0u, 0x2EBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFA8u;
label_2ebfa8:
    // 0x2ebfa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebfac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebfacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebfb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebfb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebfb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ebfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFB8u;
        // 0x2ebfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBFC0u;
}
