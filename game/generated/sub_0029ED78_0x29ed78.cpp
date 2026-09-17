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

// Function: sub_0029ED78
// Address: 0x29ed78 - 0x29ee08
void sub_0029ED78_0x29ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ED78_0x29ed78");
#endif

    ctx->pc = 0x29ed78u;

    // 0x29ed78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ed7c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x29ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x29ed80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ed84: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29ed88: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29ED88u;
    {
        const bool branch_taken_0x29ed88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED88u;
        // 0x29ed8c: 0x28620039  slti        $v0, $v1, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed88) {
            ctx->pc = 0x29EDC0u;
            goto label_29edc0;
        }
    }
    ctx->pc = 0x29ED90u;
    // 0x29ed90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29ED90u;
    {
        const bool branch_taken_0x29ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED90u;
        // 0x29ed94: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed90) {
            ctx->pc = 0x29EDB0u;
            goto label_29edb0;
        }
    }
    ctx->pc = 0x29ED98u;
    // 0x29ed98: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x29ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x29ed9c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29ED9Cu;
    {
        const bool branch_taken_0x29ed9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED9Cu;
        // 0x29eda0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed9c) {
            ctx->pc = 0x29EDD8u;
            goto label_29edd8;
        }
    }
    ctx->pc = 0x29EDA4u;
    // 0x29eda4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29EDA4u;
    {
        const bool branch_taken_0x29eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eda4) {
            ctx->pc = 0x29EE00u;
            goto label_29ee00;
        }
    }
    ctx->pc = 0x29EDACu;
    // 0x29edac: 0x0  nop
    ctx->pc = 0x29edacu;
    // NOP
label_29edb0:
    // 0x29edb0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EDB0u;
    {
        const bool branch_taken_0x29edb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDB0u;
        // 0x29edb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29edb0) {
            ctx->pc = 0x29EDD0u;
            goto label_29edd0;
        }
    }
    ctx->pc = 0x29EDB8u;
    // 0x29edb8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29EDB8u;
    {
        const bool branch_taken_0x29edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29edb8) {
            ctx->pc = 0x29EE00u;
            goto label_29ee00;
        }
    }
    ctx->pc = 0x29EDC0u;
label_29edc0:
    // 0x29edc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29edc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29edc4: 0x80a7ba6  j           func_29EE98
    ctx->pc = 0x29EDC4u;
    ctx->pc = 0x29EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDC4u;
    // 0x29edc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EE98u;
    sub_0029EE98_0x29ee98(rdram, ctx, runtime); return;
    ctx->pc = 0x29EDCCu;
    // 0x29edcc: 0x0  nop
    ctx->pc = 0x29edccu;
    // NOP
label_29edd0:
    // 0x29edd0: 0x80a7bd6  j           func_29EF58
    ctx->pc = 0x29EDD0u;
    ctx->pc = 0x29EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDD0u;
    // 0x29edd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF58u;
    sub_0029EF58_0x29ef58(rdram, ctx, runtime); return;
    ctx->pc = 0x29EDD8u;
label_29edd8:
    // 0x29edd8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29eddc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29ede0: 0x8c4383c0  lw          $v1, -0x7C40($v0)
    ctx->pc = 0x29ede0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29ede4: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29EDE4u;
    {
        const bool branch_taken_0x29ede4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x29ede4) {
            ctx->pc = 0x29EDF8u;
            goto label_29edf8;
        }
    }
    ctx->pc = 0x29EDECu;
    // 0x29edec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29edecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29edf0: 0x80a7bfe  j           func_29EFF8
    ctx->pc = 0x29EDF0u;
    ctx->pc = 0x29EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDF0u;
    // 0x29edf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EFF8u;
    sub_0029EFF8_0x29eff8(rdram, ctx, runtime); return;
    ctx->pc = 0x29EDF8u;
label_29edf8:
    // 0x29edf8: 0x80a7c26  j           func_29F098
    ctx->pc = 0x29EDF8u;
    ctx->pc = 0x29EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDF8u;
    // 0x29edfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    sub_0029F098_0x29f098(rdram, ctx, runtime); return;
    ctx->pc = 0x29EE00u;
label_29ee00:
    // 0x29ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x29EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EE00u;
        // 0x29ee04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE08u;
}
