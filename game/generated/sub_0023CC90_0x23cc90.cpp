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

// Function: sub_0023CC90
// Address: 0x23cc90 - 0x23cd08
void sub_0023CC90_0x23cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CC90_0x23cc90");
#endif

    switch (ctx->pc) {
        case 0x23cca8u: goto label_23cca8;
        case 0x23ccb8u: goto label_23ccb8;
        case 0x23ccc8u: goto label_23ccc8;
        case 0x23ccdcu: goto label_23ccdc;
        case 0x23ccecu: goto label_23ccec;
        default: break;
    }

    ctx->pc = 0x23cc90u;

    // 0x23cc90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23cc94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cc98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cc9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23cca0: 0xc09224e  jal         func_248938
    ctx->pc = 0x23CCA0u;
    SET_GPR_U32(ctx, 31, 0x23CCA8u);
    ctx->pc = 0x23CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCA0u;
    // 0x23cca4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x23CCA0u, 0x23CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCA8u;
label_23cca8:
    // 0x23cca8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23CCA8u;
    {
        const bool branch_taken_0x23cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA8u;
        // 0x23ccac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cca8) {
            ctx->pc = 0x23CCF0u;
            goto label_23ccf0;
        }
    }
    ctx->pc = 0x23CCB0u;
    // 0x23ccb0: 0xc09224e  jal         func_248938
    ctx->pc = 0x23CCB0u;
    SET_GPR_U32(ctx, 31, 0x23CCB8u);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x23CCB0u, 0x23CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCB8u;
label_23ccb8:
    // 0x23ccb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23CCB8u;
    {
        const bool branch_taken_0x23ccb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB8u;
        // 0x23ccbc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccb8) {
            ctx->pc = 0x23CCF0u;
            goto label_23ccf0;
        }
    }
    ctx->pc = 0x23CCC0u;
    // 0x23ccc0: 0xc09224e  jal         func_248938
    ctx->pc = 0x23CCC0u;
    SET_GPR_U32(ctx, 31, 0x23CCC8u);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x23CCC0u, 0x23CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCC8u;
label_23ccc8:
    // 0x23ccc8: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x23ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x23cccc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23CCCCu;
    {
        const bool branch_taken_0x23cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCCCu;
        // 0x23ccd0: 0x2484ae78  addiu       $a0, $a0, -0x5188 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cccc) {
            ctx->pc = 0x23CCF0u;
            goto label_23ccf0;
        }
    }
    ctx->pc = 0x23CCD4u;
    // 0x23ccd4: 0xc08f2e6  jal         func_23CB98
    ctx->pc = 0x23CCD4u;
    SET_GPR_U32(ctx, 31, 0x23CCDCu);
    ctx->pc = 0x23CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CB98u, 0x23CCD4u, 0x23CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCDCu;
label_23ccdc:
    // 0x23ccdc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CCDCu;
    {
        const bool branch_taken_0x23ccdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccdc) {
            ctx->pc = 0x23CCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCDCu;
            // 0x23cce0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCF4u;
            goto label_23ccf4;
        }
    }
    ctx->pc = 0x23CCE4u;
    // 0x23cce4: 0xc08f31c  jal         func_23CC70
    ctx->pc = 0x23CCE4u;
    SET_GPR_U32(ctx, 31, 0x23CCECu);
    ctx->pc = 0x23CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CC70u, 0x23CCE4u, 0x23CCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCECu;
label_23ccec:
    // 0x23ccec: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x23ccecu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23ccf0:
    // 0x23ccf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ccf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ccf4:
    // 0x23ccf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ccf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ccf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ccf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x23CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCFCu;
        // 0x23cd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD04u;
    // 0x23cd04: 0x0  nop
    ctx->pc = 0x23cd04u;
    // NOP
    ctx->pc = 0x23cd08u;
}
