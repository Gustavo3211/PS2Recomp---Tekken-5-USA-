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

// Function: sub_00213BD8
// Address: 0x213bd8 - 0x213c58
void sub_00213BD8_0x213bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213BD8_0x213bd8");
#endif

    switch (ctx->pc) {
        case 0x213becu: goto label_213bec;
        case 0x213c00u: goto label_213c00;
        case 0x213c2cu: goto label_213c2c;
        case 0x213c3cu: goto label_213c3c;
        case 0x213c48u: goto label_213c48;
        default: break;
    }

    ctx->pc = 0x213bd8u;

    // 0x213bd8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213bdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213be4: 0xc0a13f0  jal         func_284FC0
    ctx->pc = 0x213BE4u;
    SET_GPR_U32(ctx, 31, 0x213BECu);
    ctx->pc = 0x213BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BE4u;
    // 0x213be8: 0x24843370  addiu       $a0, $a0, 0x3370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284FC0u, 0x213BE4u, 0x213BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BECu;
label_213bec:
    // 0x213bec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x213becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213bf0: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x213BF0u;
    {
        const bool branch_taken_0x213bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x213BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BF0u;
        // 0x213bf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bf0) {
            ctx->pc = 0x213C4Cu;
            goto label_213c4c;
        }
    }
    ctx->pc = 0x213BF8u;
    // 0x213bf8: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x213BF8u;
    SET_GPR_U32(ctx, 31, 0x213C00u);
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x213BF8u, 0x213C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C00u;
label_213c00:
    // 0x213c00: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x213C00u;
    {
        const bool branch_taken_0x213c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C00u;
        // 0x213c04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c00) {
            ctx->pc = 0x213C4Cu;
            goto label_213c4c;
        }
    }
    ctx->pc = 0x213C08u;
    // 0x213c08: 0x8f82c8f8  lw          $v0, -0x3708($gp)
    ctx->pc = 0x213c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953208)));
    // 0x213c0c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x213C0Cu;
    {
        const bool branch_taken_0x213c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213c0c) {
            ctx->pc = 0x213C4Cu;
            goto label_213c4c;
        }
    }
    ctx->pc = 0x213C14u;
    // 0x213c14: 0x8f82a534  lw          $v0, -0x5ACC($gp)
    ctx->pc = 0x213c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944052)));
    // 0x213c18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213c1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x213C1Cu;
    {
        const bool branch_taken_0x213c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c1c) {
            ctx->pc = 0x213C4Cu;
            goto label_213c4c;
        }
    }
    ctx->pc = 0x213C24u;
    // 0x213c24: 0xc084ecc  jal         func_213B30
    ctx->pc = 0x213C24u;
    SET_GPR_U32(ctx, 31, 0x213C2Cu);
    ctx->pc = 0x213B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B30u, 0x213C24u, 0x213C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C2Cu;
label_213c2c:
    // 0x213c2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213C2Cu;
    {
        const bool branch_taken_0x213c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C2Cu;
        // 0x213c30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c2c) {
            ctx->pc = 0x213C4Cu;
            goto label_213c4c;
        }
    }
    ctx->pc = 0x213C34u;
    // 0x213c34: 0xc092940  jal         func_24A500
    ctx->pc = 0x213C34u;
    SET_GPR_U32(ctx, 31, 0x213C3Cu);
    ctx->pc = 0x213C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C34u;
    // 0x213c38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x213C34u, 0x213C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C3Cu;
label_213c3c:
    // 0x213c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213c40: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x213C40u;
    SET_GPR_U32(ctx, 31, 0x213C48u);
    ctx->pc = 0x213C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C40u;
    // 0x213c44: 0xaf82c8f8  sw          $v0, -0x3708($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x213C40u, 0x213C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C48u;
label_213c48:
    // 0x213c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_213c4c:
    // 0x213c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x213C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C4Cu;
        // 0x213c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213C54u;
    // 0x213c54: 0x0  nop
    ctx->pc = 0x213c54u;
    // NOP
    ctx->pc = 0x213c58u;
}
