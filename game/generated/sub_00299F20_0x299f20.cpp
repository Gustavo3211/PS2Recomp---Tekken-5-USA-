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

// Function: sub_00299F20
// Address: 0x299f20 - 0x299f50
void sub_00299F20_0x299f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F20_0x299f20");
#endif

    switch (ctx->pc) {
        case 0x299f34u: goto label_299f34;
        case 0x299f3cu: goto label_299f3c;
        default: break;
    }

    ctx->pc = 0x299f20u;

    // 0x299f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299f28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x299f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x299f2c: 0xc0a67d4  jal         func_299F50
    ctx->pc = 0x299F2Cu;
    SET_GPR_U32(ctx, 31, 0x299F34u);
    ctx->pc = 0x299F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F2Cu;
    // 0x299f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F50u, 0x299F2Cu, 0x299F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F34u;
label_299f34:
    // 0x299f34: 0xc0a68f6  jal         func_29A3D8
    ctx->pc = 0x299F34u;
    SET_GPR_U32(ctx, 31, 0x299F3Cu);
    ctx->pc = 0x299F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F34u;
    // 0x299f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A3D8u, 0x299F34u, 0x299F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F3Cu;
label_299f3c:
    // 0x299f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299f40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x299f44: 0x3e00008  jr          $ra
    ctx->pc = 0x299F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F44u;
        // 0x299f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299F4Cu;
    // 0x299f4c: 0x0  nop
    ctx->pc = 0x299f4cu;
    // NOP
    ctx->pc = 0x299f50u;
}
