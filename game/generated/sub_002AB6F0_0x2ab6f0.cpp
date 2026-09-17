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

// Function: sub_002AB6F0
// Address: 0x2ab6f0 - 0x2ab738
void sub_002AB6F0_0x2ab6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB6F0_0x2ab6f0");
#endif

    switch (ctx->pc) {
        case 0x2ab708u: goto label_2ab708;
        case 0x2ab714u: goto label_2ab714;
        case 0x2ab720u: goto label_2ab720;
        default: break;
    }

    ctx->pc = 0x2ab6f0u;

    // 0x2ab6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab6f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab700: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2AB700u;
    SET_GPR_U32(ctx, 31, 0x2AB708u);
    ctx->pc = 0x2AB704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB700u;
    // 0x2ab704: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2AB700u, 0x2AB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB708u;
label_2ab708:
    // 0x2ab708: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ab708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab70c: 0xc0aa772  jal         func_2A9DC8
    ctx->pc = 0x2AB70Cu;
    SET_GPR_U32(ctx, 31, 0x2AB714u);
    ctx->pc = 0x2AB710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB70Cu;
    // 0x2ab710: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC8u, 0x2AB70Cu, 0x2AB714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB714u;
label_2ab714:
    // 0x2ab714: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ab718: 0xc0aa740  jal         func_2A9D00
    ctx->pc = 0x2AB718u;
    SET_GPR_U32(ctx, 31, 0x2AB720u);
    ctx->pc = 0x2AB71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB718u;
    // 0x2ab71c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D00u, 0x2AB718u, 0x2AB720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB720u;
label_2ab720:
    // 0x2ab720: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2ab720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2ab724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab72c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB72Cu;
        // 0x2ab730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB734u;
    // 0x2ab734: 0x0  nop
    ctx->pc = 0x2ab734u;
    // NOP
    ctx->pc = 0x2ab738u;
}
