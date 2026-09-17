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

// Function: sub_00372DF8
// Address: 0x372df8 - 0x372e48
void sub_00372DF8_0x372df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372DF8_0x372df8");
#endif

    switch (ctx->pc) {
        case 0x372e1cu: goto label_372e1c;
        case 0x372e34u: goto label_372e34;
        default: break;
    }

    ctx->pc = 0x372df8u;

    // 0x372df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372dfc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372e04: 0x245076d0  addiu       $s0, $v0, 0x76D0
    ctx->pc = 0x372e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30416));
    // 0x372e08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372e08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D76D0u));
    // 0x372e0c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372E0Cu;
    {
        const bool branch_taken_0x372e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E0Cu;
        // 0x372e10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e0c) {
            ctx->pc = 0x372E34u;
            goto label_372e34;
        }
    }
    ctx->pc = 0x372E14u;
    // 0x372e14: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x372E14u;
    SET_GPR_U32(ctx, 31, 0x372E1Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x372E14u, 0x372E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E1Cu;
label_372e1c:
    // 0x372e1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372e20: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372e20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372e24: 0x24a51b60  addiu       $a1, $a1, 0x1B60
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7008));
    // 0x372e28: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x372e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x372e2c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372E2Cu;
    SET_GPR_U32(ctx, 31, 0x372E34u);
    ctx->pc = 0x372E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E2Cu;
    // 0x372e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372E2Cu, 0x372E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E34u;
label_372e34:
    // 0x372e34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372e40: 0x3e00008  jr          $ra
    ctx->pc = 0x372E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E40u;
        // 0x372e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372E48u;
}
