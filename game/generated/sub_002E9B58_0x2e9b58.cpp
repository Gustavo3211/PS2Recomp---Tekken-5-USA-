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

// Function: sub_002E9B58
// Address: 0x2e9b58 - 0x2e9b98
void sub_002E9B58_0x2e9b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9B58_0x2e9b58");
#endif

    switch (ctx->pc) {
        case 0x2e9b6cu: goto label_2e9b6c;
        default: break;
    }

    ctx->pc = 0x2e9b58u;

    // 0x2e9b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9b60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e9b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e9b64: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E9B64u;
    SET_GPR_U32(ctx, 31, 0x2E9B6Cu);
    ctx->pc = 0x2E9B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9B64u;
    // 0x2e9b68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E9B64u, 0x2E9B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9B6Cu;
label_2e9b6c:
    // 0x2e9b6c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e9b70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e9b74: 0x24420670  addiu       $v0, $v0, 0x670
    ctx->pc = 0x2e9b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    // 0x2e9b78: 0x2463fba0  addiu       $v1, $v1, -0x460
    ctx->pc = 0x2e9b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966176));
    // 0x2e9b7c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e9b80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e9b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e9b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9b88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e9b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9B8Cu;
        // 0x2e9b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9B94u;
    // 0x2e9b94: 0x0  nop
    ctx->pc = 0x2e9b94u;
    // NOP
    ctx->pc = 0x2e9b98u;
}
