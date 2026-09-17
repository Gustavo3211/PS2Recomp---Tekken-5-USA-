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

// Function: sub_002A5158
// Address: 0x2a5158 - 0x2a5180
void sub_002A5158_0x2a5158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5158_0x2a5158");
#endif

    switch (ctx->pc) {
        case 0x2a5168u: goto label_2a5168;
        case 0x2a5170u: goto label_2a5170;
        default: break;
    }

    ctx->pc = 0x2a5158u;

    // 0x2a5158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a515c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5160: 0xc092486  jal         func_249218
    ctx->pc = 0x2A5160u;
    SET_GPR_U32(ctx, 31, 0x2A5168u);
    ctx->pc = 0x2A5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5160u;
    // 0x2a5164: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2A5160u, 0x2A5168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5168u;
label_2a5168:
    // 0x2a5168: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x2A5168u;
    SET_GPR_U32(ctx, 31, 0x2A5170u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x2A5168u, 0x2A5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5170u;
label_2a5170:
    // 0x2a5170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5174: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5174u;
        // 0x2a5178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A517Cu;
    // 0x2a517c: 0x0  nop
    ctx->pc = 0x2a517cu;
    // NOP
    ctx->pc = 0x2a5180u;
}
