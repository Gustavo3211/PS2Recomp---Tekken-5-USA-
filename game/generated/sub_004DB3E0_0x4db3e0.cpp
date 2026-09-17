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

// Function: sub_004DB3E0
// Address: 0x4db3e0 - 0x4db400
void sub_004DB3E0_0x4db3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB3E0_0x4db3e0");
#endif

    switch (ctx->pc) {
        case 0x4db3e8u: goto label_4db3e8;
        case 0x4db3ecu: goto label_4db3ec;
        default: break;
    }

    ctx->pc = 0x4db3e0u;

    // 0x4db3e0: 0xc136d74  jal         func_4DB5D0
    ctx->pc = 0x4DB3E0u;
    SET_GPR_U32(ctx, 31, 0x4DB3E8u);
    ctx->pc = 0x4DB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB3E0u;
    // 0x4db3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB5D0u, 0x4DB3E0u, 0x4DB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB3E8u;
label_4db3e8:
    // 0x4db3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4db3ec:
    // 0x4db3ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4db3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4db3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB3F4u;
        // 0x4db3f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB3FCu;
    // 0x4db3fc: 0x0  nop
    ctx->pc = 0x4db3fcu;
    // NOP
    ctx->pc = 0x4db400u;
}
