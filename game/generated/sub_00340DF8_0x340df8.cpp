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

// Function: sub_00340DF8
// Address: 0x340df8 - 0x340e48
void sub_00340DF8_0x340df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340DF8_0x340df8");
#endif

    switch (ctx->pc) {
        case 0x340e0cu: goto label_340e0c;
        case 0x340e24u: goto label_340e24;
        default: break;
    }

    ctx->pc = 0x340df8u;

    // 0x340df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340e00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x340e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x340e04: 0xc0d0392  jal         func_340E48
    ctx->pc = 0x340E04u;
    SET_GPR_U32(ctx, 31, 0x340E0Cu);
    ctx->pc = 0x340E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340E04u;
    // 0x340e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340E48u, 0x340E04u, 0x340E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E0Cu;
label_340e0c:
    // 0x340e0c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x340e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x340e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x340E14u;
    {
        const bool branch_taken_0x340e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E14u;
        // 0x340e18: 0x24a50e80  addiu       $a1, $a1, 0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e14) {
            ctx->pc = 0x340E38u;
            goto label_340e38;
        }
    }
    ctx->pc = 0x340E1Cu;
    // 0x340e1c: 0xc0d0350  jal         func_340D40
    ctx->pc = 0x340E1Cu;
    SET_GPR_U32(ctx, 31, 0x340E24u);
    ctx->pc = 0x340D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D40u, 0x340E1Cu, 0x340E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340E24u;
label_340e24:
    // 0x340e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340e30: 0x80d03f8  j           func_340FE0
    ctx->pc = 0x340E30u;
    ctx->pc = 0x340E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340E30u;
    // 0x340e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340FE0u;
    sub_00340FE0_0x340fe0(rdram, ctx, runtime); return;
    ctx->pc = 0x340E38u;
label_340e38:
    // 0x340e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x340e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340e40: 0x3e00008  jr          $ra
    ctx->pc = 0x340E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E40u;
        // 0x340e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340E48u;
}
