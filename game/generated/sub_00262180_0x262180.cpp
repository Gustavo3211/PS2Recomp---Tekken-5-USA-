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

// Function: sub_00262180
// Address: 0x262180 - 0x2621a8
void sub_00262180_0x262180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262180_0x262180");
#endif

    switch (ctx->pc) {
        case 0x262198u: goto label_262198;
        default: break;
    }

    ctx->pc = 0x262180u;

    // 0x262180: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262184: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x262184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x262188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26218c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26218cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262190: 0xc098b7e  jal         func_262DF8
    ctx->pc = 0x262190u;
    SET_GPR_U32(ctx, 31, 0x262198u);
    ctx->pc = 0x262194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262190u;
    // 0x262194: 0x2484ed98  addiu       $a0, $a0, -0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x262190u, 0x262198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262198u;
label_262198:
    // 0x262198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26219c: 0x3e00008  jr          $ra
    ctx->pc = 0x26219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2621A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26219Cu;
        // 0x2621a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2621A4u;
    // 0x2621a4: 0x0  nop
    ctx->pc = 0x2621a4u;
    // NOP
    ctx->pc = 0x2621a8u;
}
