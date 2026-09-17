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

// Function: sub_0036A0D0
// Address: 0x36a0d0 - 0x36a110
void sub_0036A0D0_0x36a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A0D0_0x36a0d0");
#endif

    switch (ctx->pc) {
        case 0x36a0f8u: goto label_36a0f8;
        default: break;
    }

    ctx->pc = 0x36a0d0u;

    // 0x36a0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a0d8: 0x2790cc58  addiu       $s0, $gp, -0x33A8
    ctx->pc = 0x36a0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954072));
    // 0x36a0dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x36a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A0E4u;
    {
        const bool branch_taken_0x36a0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0E4u;
        // 0x36a0e8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a0e4) {
            ctx->pc = 0x36A0F8u;
            goto label_36a0f8;
        }
    }
    ctx->pc = 0x36A0ECu;
    // 0x36a0ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a0f0: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x36A0F0u;
    SET_GPR_U32(ctx, 31, 0x36A0F8u);
    ctx->pc = 0x36A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0F0u;
    // 0x36a0f4: 0x24a50530  addiu       $a1, $a1, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x36A0F0u, 0x36A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0F8u;
label_36a0f8:
    // 0x36a0f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a104: 0x3e00008  jr          $ra
    ctx->pc = 0x36A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A104u;
        // 0x36a108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A10Cu;
    // 0x36a10c: 0x0  nop
    ctx->pc = 0x36a10cu;
    // NOP
    ctx->pc = 0x36a110u;
}
