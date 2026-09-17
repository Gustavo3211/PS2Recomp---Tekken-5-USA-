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

// Function: sub_00249E28
// Address: 0x249e28 - 0x249e48
void sub_00249E28_0x249e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E28_0x249e28");
#endif

    switch (ctx->pc) {
        case 0x249e3cu: goto label_249e3c;
        default: break;
    }

    ctx->pc = 0x249e28u;

    // 0x249e28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249e2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249e34: 0xc092752  jal         func_249D48
    ctx->pc = 0x249E34u;
    SET_GPR_U32(ctx, 31, 0x249E3Cu);
    ctx->pc = 0x249E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E34u;
    // 0x249e38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D48u, 0x249E34u, 0x249E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E3Cu;
label_249e3c:
    // 0x249e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249e40: 0x3e00008  jr          $ra
    ctx->pc = 0x249E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E40u;
        // 0x249e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E48u;
}
