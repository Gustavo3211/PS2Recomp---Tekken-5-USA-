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

// Function: sub_002E4F58
// Address: 0x2e4f58 - 0x2e4f98
void sub_002E4F58_0x2e4f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F58_0x2e4f58");
#endif

    switch (ctx->pc) {
        case 0x2e4f70u: goto label_2e4f70;
        case 0x2e4f7cu: goto label_2e4f7c;
        default: break;
    }

    ctx->pc = 0x2e4f58u;

    // 0x2e4f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4f5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4f60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4f64: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2e4f68: 0x2604fe20  addiu       $a0, $s0, -0x1E0
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966816));
    // 0x2e4f6c: 0x0  nop
    ctx->pc = 0x2e4f6cu;
    // NOP
label_2e4f70:
    // 0x2e4f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e4f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f74: 0xc0460da  jal         func_118368
    ctx->pc = 0x2E4F74u;
    SET_GPR_U32(ctx, 31, 0x2E4F7Cu);
    ctx->pc = 0x2E4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F74u;
    // 0x2e4f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118368u, 0x2E4F74u, 0x2E4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F7Cu;
label_2e4f7c:
    // 0x2e4f7c: 0x440fffc  bltz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E4F7Cu;
    {
        const bool branch_taken_0x2e4f7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F7Cu;
        // 0x2e4f80: 0x2604fe20  addiu       $a0, $s0, -0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f7c) {
            ctx->pc = 0x2E4F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4f70;
        }
    }
    ctx->pc = 0x2E4F84u;
    // 0x2e4f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4f88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F8Cu;
        // 0x2e4f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F94u;
    // 0x2e4f94: 0x0  nop
    ctx->pc = 0x2e4f94u;
    // NOP
    ctx->pc = 0x2e4f98u;
}
