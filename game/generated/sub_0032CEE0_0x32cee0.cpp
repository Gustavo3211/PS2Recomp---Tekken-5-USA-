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

// Function: sub_0032CEE0
// Address: 0x32cee0 - 0x32cf18
void sub_0032CEE0_0x32cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CEE0_0x32cee0");
#endif

    switch (ctx->pc) {
        case 0x32cf08u: goto label_32cf08;
        default: break;
    }

    ctx->pc = 0x32cee0u;

    // 0x32cee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cee4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32cee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ceec: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x32ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x32cef0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CEF0u;
    {
        const bool branch_taken_0x32cef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cef0) {
            ctx->pc = 0x32CEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CEF0u;
            // 0x32cef4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CF0Cu;
            goto label_32cf0c;
        }
    }
    ctx->pc = 0x32CEF8u;
    // 0x32cef8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x32cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x32cefc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x32cf00: 0xc0d0f56  jal         func_343D58
    ctx->pc = 0x32CF00u;
    SET_GPR_U32(ctx, 31, 0x32CF08u);
    ctx->pc = 0x32CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF00u;
    // 0x32cf04: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343D58u, 0x32CF00u, 0x32CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF08u;
label_32cf08:
    // 0x32cf08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32cf0c:
    // 0x32cf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF0Cu;
        // 0x32cf10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CF14u;
    // 0x32cf14: 0x0  nop
    ctx->pc = 0x32cf14u;
    // NOP
    ctx->pc = 0x32cf18u;
}
