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

// Function: sub_00255A78
// Address: 0x255a78 - 0x255ab8
void sub_00255A78_0x255a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255A78_0x255a78");
#endif

    switch (ctx->pc) {
        case 0x255a94u: goto label_255a94;
        case 0x255aa0u: goto label_255aa0;
        default: break;
    }

    ctx->pc = 0x255a78u;

    // 0x255a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x255a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x255a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x255a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255a8c: 0xc095644  jal         func_255910
    ctx->pc = 0x255A8Cu;
    SET_GPR_U32(ctx, 31, 0x255A94u);
    ctx->pc = 0x255A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A8Cu;
    // 0x255a90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255910u, 0x255A8Cu, 0x255A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A94u;
label_255a94:
    // 0x255a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a98: 0xc095682  jal         func_255A08
    ctx->pc = 0x255A98u;
    SET_GPR_U32(ctx, 31, 0x255AA0u);
    ctx->pc = 0x255A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A98u;
    // 0x255a9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A08u, 0x255A98u, 0x255AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255AA0u;
label_255aa0:
    // 0x255aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x255aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255aa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x255aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x255aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255aac: 0x3e00008  jr          $ra
    ctx->pc = 0x255AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255AACu;
        // 0x255ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255AB4u;
    // 0x255ab4: 0x0  nop
    ctx->pc = 0x255ab4u;
    // NOP
    ctx->pc = 0x255ab8u;
}
