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

// Function: sub_002F4B30
// Address: 0x2f4b30 - 0x2f4b70
void sub_002F4B30_0x2f4b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4B30_0x2f4b30");
#endif

    switch (ctx->pc) {
        case 0x2f4b44u: goto label_2f4b44;
        default: break;
    }

    ctx->pc = 0x2f4b30u;

    // 0x2f4b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4b38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f4b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f4b3c: 0xc0bb738  jal         func_2EDCE0
    ctx->pc = 0x2F4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F4B44u);
    ctx->pc = 0x2F4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B3Cu;
    // 0x2f4b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCE0u, 0x2F4B3Cu, 0x2F4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4B44u;
label_2f4b44:
    // 0x2f4b44: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f4b48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f4b4c: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x2f4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    // 0x2f4b50: 0x24630f38  addiu       $v1, $v1, 0xF38
    ctx->pc = 0x2f4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3896));
    // 0x2f4b54: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2f4b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2f4b58: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f4b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f4b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4b60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f4b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f4b64: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B64u;
        // 0x2f4b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B6Cu;
    // 0x2f4b6c: 0x0  nop
    ctx->pc = 0x2f4b6cu;
    // NOP
    ctx->pc = 0x2f4b70u;
}
