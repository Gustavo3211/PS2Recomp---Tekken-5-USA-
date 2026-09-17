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

// Function: sub_00293238
// Address: 0x293238 - 0x293268
void sub_00293238_0x293238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293238_0x293238");
#endif

    switch (ctx->pc) {
        case 0x293248u: goto label_293248;
        case 0x293258u: goto label_293258;
        default: break;
    }

    ctx->pc = 0x293238u;

    // 0x293238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29323c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293240: 0xc0a4c5a  jal         func_293168
    ctx->pc = 0x293240u;
    SET_GPR_U32(ctx, 31, 0x293248u);
    ctx->pc = 0x293168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293168u, 0x293240u, 0x293248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293248u;
label_293248:
    // 0x293248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293248u;
    {
        const bool branch_taken_0x293248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293248u;
        // 0x29324c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293248) {
            ctx->pc = 0x293258u;
            goto label_293258;
        }
    }
    ctx->pc = 0x293250u;
    // 0x293250: 0xc0a4842  jal         func_292108
    ctx->pc = 0x293250u;
    SET_GPR_U32(ctx, 31, 0x293258u);
    ctx->pc = 0x292108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292108u, 0x293250u, 0x293258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293258u;
label_293258:
    // 0x293258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29325c: 0x3e00008  jr          $ra
    ctx->pc = 0x29325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29325Cu;
        // 0x293260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293264u;
    // 0x293264: 0x0  nop
    ctx->pc = 0x293264u;
    // NOP
    ctx->pc = 0x293268u;
}
