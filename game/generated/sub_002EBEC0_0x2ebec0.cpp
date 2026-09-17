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

// Function: sub_002EBEC0
// Address: 0x2ebec0 - 0x2ebf20
void sub_002EBEC0_0x2ebec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBEC0_0x2ebec0");
#endif

    switch (ctx->pc) {
        case 0x2ebed0u: goto label_2ebed0;
        case 0x2ebee0u: goto label_2ebee0;
        case 0x2ebf14u: goto label_2ebf14;
        default: break;
    }

    ctx->pc = 0x2ebec0u;

    // 0x2ebec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebec8: 0xc0bae14  jal         func_2EB850
    ctx->pc = 0x2EBEC8u;
    SET_GPR_U32(ctx, 31, 0x2EBED0u);
    ctx->pc = 0x2EB850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB850u, 0x2EBEC8u, 0x2EBED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBED0u;
label_2ebed0:
    // 0x2ebed0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ebed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ebed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ebed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebed8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2EBED8u;
    SET_GPR_U32(ctx, 31, 0x2EBEE0u);
    ctx->pc = 0x2EBEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBED8u;
    // 0x2ebedc: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2EBED8u, 0x2EBEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBEE0u;
label_2ebee0:
    // 0x2ebee0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2ebee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2ebee4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ebee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ebee8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBEE8u;
    {
        const bool branch_taken_0x2ebee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebee8) {
            ctx->pc = 0x2EBEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBEE8u;
            // 0x2ebeec: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBF04u;
            goto label_2ebf04;
        }
    }
    ctx->pc = 0x2EBEF0u;
    // 0x2ebef0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ebef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ebef4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ebef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ebef8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBEF8u;
    {
        const bool branch_taken_0x2ebef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebef8) {
            ctx->pc = 0x2EBF0Cu;
            goto label_2ebf0c;
        }
    }
    ctx->pc = 0x2EBF00u;
    // 0x2ebf00: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ebf00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ebf04:
    // 0x2ebf04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebf08: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ebf08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ebf0c:
    // 0x2ebf0c: 0xc0a1626  jal         func_285898
    ctx->pc = 0x2EBF0Cu;
    SET_GPR_U32(ctx, 31, 0x2EBF14u);
    ctx->pc = 0x285898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285898u, 0x2EBF0Cu, 0x2EBF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBF14u;
label_2ebf14:
    // 0x2ebf14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebf18: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBF18u;
        // 0x2ebf1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBF20u;
}
