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

// Function: sub_002A3D08
// Address: 0x2a3d08 - 0x2a3d38
void sub_002A3D08_0x2a3d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D08_0x2a3d08");
#endif

    switch (ctx->pc) {
        case 0x2a3d20u: goto label_2a3d20;
        case 0x2a3d28u: goto label_2a3d28;
        default: break;
    }

    ctx->pc = 0x2a3d08u;

    // 0x2a3d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a3d18: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A3D18u;
    SET_GPR_U32(ctx, 31, 0x2A3D20u);
    ctx->pc = 0x2A3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D18u;
    // 0x2a3d1c: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A3D18u, 0x2A3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D20u;
label_2a3d20:
    // 0x2a3d20: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x2A3D20u;
    SET_GPR_U32(ctx, 31, 0x2A3D28u);
    ctx->pc = 0x2A3D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D20u;
    // 0x2a3d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2A3D20u, 0x2A3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D28u;
label_2a3d28:
    // 0x2a3d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3d2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a3d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D30u;
        // 0x2a3d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3D38u;
}
