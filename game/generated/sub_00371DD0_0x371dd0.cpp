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

// Function: sub_00371DD0
// Address: 0x371dd0 - 0x371e20
void sub_00371DD0_0x371dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371DD0_0x371dd0");
#endif

    switch (ctx->pc) {
        case 0x371df0u: goto label_371df0;
        case 0x371e0cu: goto label_371e0c;
        default: break;
    }

    ctx->pc = 0x371dd0u;

    // 0x371dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371dd4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x371dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x371dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x371ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371de4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x371de8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x371DE8u;
    SET_GPR_U32(ctx, 31, 0x371DF0u);
    ctx->pc = 0x371DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DE8u;
    // 0x371dec: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x371DE8u, 0x371DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DF0u;
label_371df0:
    // 0x371df0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x371df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x371df4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x371df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371df8: 0x8c66f5d8  lw          $a2, -0xA28($v1)
    ctx->pc = 0x371df8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EF5D8u));
    // 0x371dfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x371e00: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x371e00u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x371e04: 0xc0b7692  jal         func_2DDA48
    ctx->pc = 0x371E04u;
    SET_GPR_U32(ctx, 31, 0x371E0Cu);
    ctx->pc = 0x371E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E04u;
    // 0x371e08: 0x80460000  lb          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA48u, 0x371E04u, 0x371E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E0Cu;
label_371e0c:
    // 0x371e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371e10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371e14: 0x3e00008  jr          $ra
    ctx->pc = 0x371E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E14u;
        // 0x371e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371E1Cu;
    // 0x371e1c: 0x0  nop
    ctx->pc = 0x371e1cu;
    // NOP
    ctx->pc = 0x371e20u;
}
