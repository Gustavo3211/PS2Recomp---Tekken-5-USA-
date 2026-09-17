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

// Function: sub_002A3178
// Address: 0x2a3178 - 0x2a31a8
void sub_002A3178_0x2a3178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3178_0x2a3178");
#endif

    switch (ctx->pc) {
        case 0x2a3190u: goto label_2a3190;
        case 0x2a3198u: goto label_2a3198;
        default: break;
    }

    ctx->pc = 0x2a3178u;

    // 0x2a3178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a317c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3184: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a3184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a3188: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2A3188u;
    SET_GPR_U32(ctx, 31, 0x2A3190u);
    ctx->pc = 0x2A318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3188u;
    // 0x2a318c: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2A3188u, 0x2A3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3190u;
label_2a3190:
    // 0x2a3190: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x2A3190u;
    SET_GPR_U32(ctx, 31, 0x2A3198u);
    ctx->pc = 0x2A3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3190u;
    // 0x2a3194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2A3190u, 0x2A3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3198u;
label_2a3198:
    // 0x2a3198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a319c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a319cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a31a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A31A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A31A0u;
        // 0x2a31a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A31A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A31A8u;
}
