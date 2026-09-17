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

// Function: sub_00323C58
// Address: 0x323c58 - 0x323c98
void sub_00323C58_0x323c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323C58_0x323c58");
#endif

    switch (ctx->pc) {
        case 0x323c84u: goto label_323c84;
        default: break;
    }

    ctx->pc = 0x323c58u;

    // 0x323c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323c60: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x323c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c64: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x323c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x323c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323c6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x323c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x323c70: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x323c70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x323c74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x323c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x323c78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x323c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x323c7c: 0xc0d01ce  jal         func_340738
    ctx->pc = 0x323C7Cu;
    SET_GPR_U32(ctx, 31, 0x323C84u);
    ctx->pc = 0x323C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323C7Cu;
    // 0x323c80: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340738u, 0x323C7Cu, 0x323C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323C84u;
label_323c84:
    // 0x323c84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x323c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x323c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323c8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323c90: 0x3e00008  jr          $ra
    ctx->pc = 0x323C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323C90u;
        // 0x323c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323C98u;
}
