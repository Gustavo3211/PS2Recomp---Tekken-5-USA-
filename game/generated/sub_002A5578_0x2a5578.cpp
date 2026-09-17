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

// Function: sub_002A5578
// Address: 0x2a5578 - 0x2a55b8
void sub_002A5578_0x2a5578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5578_0x2a5578");
#endif

    switch (ctx->pc) {
        case 0x2a558cu: goto label_2a558c;
        default: break;
    }

    ctx->pc = 0x2a5578u;

    // 0x2a5578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a557c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5580: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a5580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a5584: 0xc0bb738  jal         func_2EDCE0
    ctx->pc = 0x2A5584u;
    SET_GPR_U32(ctx, 31, 0x2A558Cu);
    ctx->pc = 0x2A5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5584u;
    // 0x2a5588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCE0u, 0x2A5584u, 0x2A558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A558Cu;
label_2a558c:
    // 0x2a558c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a558cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a5590: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a5590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a5594: 0x2442dae0  addiu       $v0, $v0, -0x2520
    ctx->pc = 0x2a5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957792));
    // 0x2a5598: 0x2463e8a0  addiu       $v1, $v1, -0x1760
    ctx->pc = 0x2a5598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961312));
    // 0x2a559c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2a559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2a55a0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2a55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2a55a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a55a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a55a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a55a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a55ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A55ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55ACu;
        // 0x2a55b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A55ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A55B4u;
    // 0x2a55b4: 0x0  nop
    ctx->pc = 0x2a55b4u;
    // NOP
    ctx->pc = 0x2a55b8u;
}
