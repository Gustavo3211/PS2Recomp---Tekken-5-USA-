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

// Function: sub_00262218
// Address: 0x262218 - 0x262250
void sub_00262218_0x262218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262218_0x262218");
#endif

    switch (ctx->pc) {
        case 0x262240u: goto label_262240;
        default: break;
    }

    ctx->pc = 0x262218u;

    // 0x262218: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x262218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26221c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x26221cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x262220: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x262220u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x262224: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262228: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x262228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26222c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26222cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262230: 0x24a5ed98  addiu       $a1, $a1, -0x1268
    ctx->pc = 0x262230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962584));
    // 0x262234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262238: 0xc09866c  jal         func_2619B0
    ctx->pc = 0x262238u;
    SET_GPR_U32(ctx, 31, 0x262240u);
    ctx->pc = 0x26223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262238u;
    // 0x26223c: 0x24e7ec30  addiu       $a3, $a3, -0x13D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2619B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2619B0u, 0x262238u, 0x262240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262240u;
label_262240:
    // 0x262240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262244: 0x3e00008  jr          $ra
    ctx->pc = 0x262244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262244u;
        // 0x262248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26224Cu;
    // 0x26224c: 0x0  nop
    ctx->pc = 0x26224cu;
    // NOP
    ctx->pc = 0x262250u;
}
