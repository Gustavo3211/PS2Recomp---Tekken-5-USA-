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

// Function: sub_0020BBA8
// Address: 0x20bba8 - 0x20bbe0
void sub_0020BBA8_0x20bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BBA8_0x20bba8");
#endif

    switch (ctx->pc) {
        case 0x20bbd0u: goto label_20bbd0;
        default: break;
    }

    ctx->pc = 0x20bba8u;

    // 0x20bba8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20bbac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bbacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bbb0: 0x8c4388ac  lw          $v1, -0x7754($v0)
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x20bbb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BBB4u;
    {
        const bool branch_taken_0x20bbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBB4u;
        // 0x20bbb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbb4) {
            ctx->pc = 0x20BBC8u;
            goto label_20bbc8;
        }
    }
    ctx->pc = 0x20BBBCu;
    // 0x20bbbc: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20bbc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bbc4: 0xaf829730  sw          $v0, -0x68D0($gp)
    ctx->pc = 0x20bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
label_20bbc8:
    // 0x20bbc8: 0xc07f16c  jal         func_1FC5B0
    ctx->pc = 0x20BBC8u;
    SET_GPR_U32(ctx, 31, 0x20BBD0u);
    ctx->pc = 0x1FC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC5B0u, 0x20BBC8u, 0x20BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBD0u;
label_20bbd0:
    // 0x20bbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x20BBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBD4u;
        // 0x20bbd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BBDCu;
    // 0x20bbdc: 0x0  nop
    ctx->pc = 0x20bbdcu;
    // NOP
    ctx->pc = 0x20bbe0u;
}
