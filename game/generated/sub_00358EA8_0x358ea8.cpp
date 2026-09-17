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

// Function: sub_00358EA8
// Address: 0x358ea8 - 0x358f00
void sub_00358EA8_0x358ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358EA8_0x358ea8");
#endif

    switch (ctx->pc) {
        case 0x358ed0u: goto label_358ed0;
        case 0x358ef0u: goto label_358ef0;
        default: break;
    }

    ctx->pc = 0x358ea8u;

    // 0x358ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358eac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358eb4: 0x80d87dc  j           func_361F70
    ctx->pc = 0x358EB4u;
    ctx->pc = 0x358EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358EB4u;
    // 0x358eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361F70u, 0x358EB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358EBCu;
    // 0x358ebc: 0x0  nop
    ctx->pc = 0x358ebcu;
    // NOP
    // 0x358ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358ec8: 0xc0d87ea  jal         func_361FA8
    ctx->pc = 0x358EC8u;
    SET_GPR_U32(ctx, 31, 0x358ED0u);
    ctx->pc = 0x361FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361FA8u, 0x358EC8u, 0x358ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358ED0u;
label_358ed0:
    // 0x358ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x358ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358ED4u;
        // 0x358ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358EDCu;
    // 0x358edc: 0x0  nop
    ctx->pc = 0x358edcu;
    // NOP
    // 0x358ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358ee8: 0xc0d87f6  jal         func_361FD8
    ctx->pc = 0x358EE8u;
    SET_GPR_U32(ctx, 31, 0x358EF0u);
    ctx->pc = 0x361FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361FD8u, 0x358EE8u, 0x358EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358EF0u;
label_358ef0:
    // 0x358ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x358EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EF4u;
        // 0x358ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358EFCu;
    // 0x358efc: 0x0  nop
    ctx->pc = 0x358efcu;
    // NOP
    ctx->pc = 0x358f00u;
}
