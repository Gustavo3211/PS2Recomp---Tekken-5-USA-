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

// Function: sub_003054E8
// Address: 0x3054e8 - 0x305510
void sub_003054E8_0x3054e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003054E8_0x3054e8");
#endif

    switch (ctx->pc) {
        case 0x305500u: goto label_305500;
        default: break;
    }

    ctx->pc = 0x3054e8u;

    // 0x3054e8: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x3054e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x3054ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3054ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3054f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3054f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3054f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3054f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3054f8: 0xc0c114a  jal         func_304528
    ctx->pc = 0x3054F8u;
    SET_GPR_U32(ctx, 31, 0x305500u);
    ctx->pc = 0x3054FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3054F8u;
    // 0x3054fc: 0x35081400  ori         $t0, $t0, 0x1400 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)5120);
    ctx->in_delay_slot = false;
    ctx->pc = 0x304528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304528u, 0x3054F8u, 0x305500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305500u;
label_305500:
    // 0x305500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305504: 0x3e00008  jr          $ra
    ctx->pc = 0x305504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305504u;
        // 0x305508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30550Cu;
    // 0x30550c: 0x0  nop
    ctx->pc = 0x30550cu;
    // NOP
    ctx->pc = 0x305510u;
}
