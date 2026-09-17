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

// Function: sub_00323DE0
// Address: 0x323de0 - 0x323e30
void sub_00323DE0_0x323de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323DE0_0x323de0");
#endif

    switch (ctx->pc) {
        case 0x323e04u: goto label_323e04;
        case 0x323e14u: goto label_323e14;
        case 0x323e20u: goto label_323e20;
        default: break;
    }

    ctx->pc = 0x323de0u;

    // 0x323de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323df0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x323df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x323df4: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x323df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x323df8: 0xae000424  sw          $zero, 0x424($s0)
    ctx->pc = 0x323df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1060), GPR_U32(ctx, 0));
    // 0x323dfc: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x323DFCu;
    SET_GPR_U32(ctx, 31, 0x323E04u);
    ctx->pc = 0x323E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DFCu;
    // 0x323e00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x323DFCu, 0x323E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E04u;
label_323e04:
    // 0x323e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e0c: 0xc0cb17c  jal         func_32C5F0
    ctx->pc = 0x323E0Cu;
    SET_GPR_U32(ctx, 31, 0x323E14u);
    ctx->pc = 0x323E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E0Cu;
    // 0x323e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5F0u, 0x323E0Cu, 0x323E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E14u;
label_323e14:
    // 0x323e14: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x323e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x323e18: 0xc0cbf5c  jal         func_32FD70
    ctx->pc = 0x323E18u;
    SET_GPR_U32(ctx, 31, 0x323E20u);
    ctx->pc = 0x323E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E18u;
    // 0x323e1c: 0x24840390  addiu       $a0, $a0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD70u, 0x323E18u, 0x323E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323E20u;
label_323e20:
    // 0x323e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323e24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323e28: 0x3e00008  jr          $ra
    ctx->pc = 0x323E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E28u;
        // 0x323e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323E30u;
}
