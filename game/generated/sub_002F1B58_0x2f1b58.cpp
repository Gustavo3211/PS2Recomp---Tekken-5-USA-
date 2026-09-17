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

// Function: sub_002F1B58
// Address: 0x2f1b58 - 0x2f1bb0
void sub_002F1B58_0x2f1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B58_0x2f1b58");
#endif

    switch (ctx->pc) {
        case 0x2f1b84u: goto label_2f1b84;
        default: break;
    }

    ctx->pc = 0x2f1b58u;

    // 0x2f1b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1b5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f1b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f1b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b70: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2f1b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f1b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1b78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f1b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f1b7c: 0xc0bc3d4  jal         func_2F0F50
    ctx->pc = 0x2F1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2F1B84u);
    ctx->pc = 0x2F1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B7Cu;
    // 0x2f1b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F50u, 0x2F1B7Cu, 0x2F1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1B84u;
label_2f1b84:
    // 0x2f1b84: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f1b88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2f1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2f1b8c: 0x24630db0  addiu       $v1, $v1, 0xDB0
    ctx->pc = 0x2f1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3504));
    // 0x2f1b90: 0x24841228  addiu       $a0, $a0, 0x1228
    ctx->pc = 0x2f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
    // 0x2f1b94: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f1b98: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2f1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x2f1b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1ba0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f1ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1BA4u;
        // 0x2f1ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1BACu;
    // 0x2f1bac: 0x0  nop
    ctx->pc = 0x2f1bacu;
    // NOP
    ctx->pc = 0x2f1bb0u;
}
