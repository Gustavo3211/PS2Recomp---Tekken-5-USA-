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

// Function: sub_00277090
// Address: 0x277090 - 0x2770c0
void sub_00277090_0x277090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277090_0x277090");
#endif

    switch (ctx->pc) {
        case 0x2770acu: goto label_2770ac;
        default: break;
    }

    ctx->pc = 0x277090u;

    // 0x277090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277094: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x277094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x277098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27709c: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x27709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2770a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2770a0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x2770a4: 0xc092b64  jal         func_24AD90
    ctx->pc = 0x2770A4u;
    SET_GPR_U32(ctx, 31, 0x2770ACu);
    ctx->pc = 0x2770A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770A4u;
    // 0x2770a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AD90u, 0x2770A4u, 0x2770ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770ACu;
label_2770ac:
    // 0x2770ac: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x2770b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2770b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2770b4: 0xac620240  sw          $v0, 0x240($v1)
    ctx->pc = 0x2770b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x170240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x170240u, _value); } while (0);
    // 0x2770b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2770B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770B8u;
        // 0x2770bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2770B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2770C0u;
}
