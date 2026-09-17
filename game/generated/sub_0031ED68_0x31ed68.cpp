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

// Function: sub_0031ED68
// Address: 0x31ed68 - 0x31ed98
void sub_0031ED68_0x31ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031ED68_0x31ed68");
#endif

    switch (ctx->pc) {
        case 0x31ed8cu: goto label_31ed8c;
        default: break;
    }

    ctx->pc = 0x31ed68u;

    // 0x31ed68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ed68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ed6c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31ed70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ed74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ed74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed78: 0x94860400  lhu         $a2, 0x400($a0)
    ctx->pc = 0x31ed78u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x31ed7c: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ED7Cu;
    {
        const bool branch_taken_0x31ed7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x31ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED7Cu;
        // 0x31ed80: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ed7c) {
            ctx->pc = 0x31ED8Cu;
            goto label_31ed8c;
        }
    }
    ctx->pc = 0x31ED84u;
    // 0x31ed84: 0xc0c7b66  jal         func_31ED98
    ctx->pc = 0x31ED84u;
    SET_GPR_U32(ctx, 31, 0x31ED8Cu);
    ctx->pc = 0x31ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ED84u;
    // 0x31ed88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED98u, 0x31ED84u, 0x31ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ED8Cu;
label_31ed8c:
    // 0x31ed8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x31ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED90u;
        // 0x31ed94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ED90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ED98u;
}
