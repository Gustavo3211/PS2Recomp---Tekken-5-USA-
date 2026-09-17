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

// Function: sub_004E3B90
// Address: 0x4e3b90 - 0x4e3bb0
void sub_004E3B90_0x4e3b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3B90_0x4e3b90");
#endif

    switch (ctx->pc) {
        case 0x4e3b98u: goto label_4e3b98;
        case 0x4e3b9cu: goto label_4e3b9c;
        default: break;
    }

    ctx->pc = 0x4e3b90u;

    // 0x4e3b90: 0xc138f32  jal         func_4E3CC8
    ctx->pc = 0x4E3B90u;
    SET_GPR_U32(ctx, 31, 0x4E3B98u);
    ctx->pc = 0x4E3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B90u;
    // 0x4e3b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3CC8u, 0x4E3B90u, 0x4E3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B98u;
label_4e3b98:
    // 0x4e3b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3b9c:
    // 0x4e3b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e3b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e3ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3BA4u;
        // 0x4e3ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3BACu;
    // 0x4e3bac: 0x0  nop
    ctx->pc = 0x4e3bacu;
    // NOP
    ctx->pc = 0x4e3bb0u;
}
