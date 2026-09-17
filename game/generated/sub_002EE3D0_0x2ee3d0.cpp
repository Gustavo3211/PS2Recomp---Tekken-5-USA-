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

// Function: sub_002EE3D0
// Address: 0x2ee3d0 - 0x2ee410
void sub_002EE3D0_0x2ee3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE3D0_0x2ee3d0");
#endif

    switch (ctx->pc) {
        case 0x2ee3f8u: goto label_2ee3f8;
        default: break;
    }

    ctx->pc = 0x2ee3d0u;

    // 0x2ee3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee3d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ee3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee3d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ee3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ee3e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3e8: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE3E8u;
    {
        const bool branch_taken_0x2ee3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3E8u;
        // 0x2ee3ec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3e8) {
            ctx->pc = 0x2EE400u;
            goto label_2ee400;
        }
    }
    ctx->pc = 0x2EE3F0u;
    // 0x2ee3f0: 0xc0bb8c2  jal         func_2EE308
    ctx->pc = 0x2EE3F0u;
    SET_GPR_U32(ctx, 31, 0x2EE3F8u);
    ctx->pc = 0x2EE308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE308u, 0x2EE3F0u, 0x2EE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE3F8u;
label_2ee3f8:
    // 0x2ee3f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee3fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ee400:
    // 0x2ee400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ee404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee408: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE408u;
        // 0x2ee40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE410u;
}
