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

// Function: sub_0035C3B8
// Address: 0x35c3b8 - 0x35c3f8
void sub_0035C3B8_0x35c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C3B8_0x35c3b8");
#endif

    switch (ctx->pc) {
        case 0x35c3d0u: goto label_35c3d0;
        case 0x35c3d8u: goto label_35c3d8;
        default: break;
    }

    ctx->pc = 0x35c3b8u;

    // 0x35c3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c3bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35c3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c3c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35c3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c3c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c3cc: 0x0  nop
    ctx->pc = 0x35c3ccu;
    // NOP
label_35c3d0:
    // 0x35c3d0: 0xc0d707a  jal         func_35C1E8
    ctx->pc = 0x35C3D0u;
    SET_GPR_U32(ctx, 31, 0x35C3D8u);
    ctx->pc = 0x35C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C3D0u;
    // 0x35c3d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1E8u, 0x35C3D0u, 0x35C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C3D8u;
label_35c3d8:
    // 0x35c3d8: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x35c3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c3dc: 0x1460fffc  bnez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35C3DCu;
    {
        const bool branch_taken_0x35c3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3DCu;
        // 0x35c3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3dc) {
            ctx->pc = 0x35C3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c3d0;
        }
    }
    ctx->pc = 0x35C3E4u;
    // 0x35c3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c3e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35c3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35C3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3ECu;
        // 0x35c3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C3F4u;
    // 0x35c3f4: 0x0  nop
    ctx->pc = 0x35c3f4u;
    // NOP
    ctx->pc = 0x35c3f8u;
}
