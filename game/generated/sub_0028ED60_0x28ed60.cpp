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

// Function: sub_0028ED60
// Address: 0x28ed60 - 0x28edb0
void sub_0028ED60_0x28ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ED60_0x28ed60");
#endif

    switch (ctx->pc) {
        case 0x28ed74u: goto label_28ed74;
        default: break;
    }

    ctx->pc = 0x28ed60u;

    // 0x28ed60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ed64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ed68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28ed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28ed6c: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28ED6Cu;
    SET_GPR_U32(ctx, 31, 0x28ED74u);
    ctx->pc = 0x28ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED6Cu;
    // 0x28ed70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28ED6Cu, 0x28ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ED74u;
label_28ed74:
    // 0x28ed74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ed78: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28ED78u;
    {
        const bool branch_taken_0x28ed78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed78) {
            ctx->pc = 0x28ED7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED78u;
            // 0x28ed7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EDA0u;
            goto label_28eda0;
        }
    }
    ctx->pc = 0x28ED80u;
    // 0x28ed80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28ED80u;
    {
        const bool branch_taken_0x28ed80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED80u;
        // 0x28ed84: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed80) {
            ctx->pc = 0x28ED90u;
            goto label_28ed90;
        }
    }
    ctx->pc = 0x28ED88u;
    // 0x28ed88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28ED88u;
    {
        const bool branch_taken_0x28ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED88u;
        // 0x28ed8c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed88) {
            ctx->pc = 0x28ED98u;
            goto label_28ed98;
        }
    }
    ctx->pc = 0x28ED90u;
label_28ed90:
    // 0x28ed90: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x28ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ed94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28ed98:
    // 0x28ed98: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x28ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x28ed9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ed9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eda0:
    // 0x28eda0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28eda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28eda4: 0x3e00008  jr          $ra
    ctx->pc = 0x28EDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDA4u;
        // 0x28eda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EDACu;
    // 0x28edac: 0x0  nop
    ctx->pc = 0x28edacu;
    // NOP
    ctx->pc = 0x28edb0u;
}
