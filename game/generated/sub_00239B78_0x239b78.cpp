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

// Function: sub_00239B78
// Address: 0x239b78 - 0x239bb0
void sub_00239B78_0x239b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239B78_0x239b78");
#endif

    ctx->pc = 0x239b78u;

    // 0x239b78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x239b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x239b7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x239b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x239b80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x239b84: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239b88: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x239b8c: 0xc420d630  lwc1        $f0, -0x29D0($at)
    ctx->pc = 0x239b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294956592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239b90: 0x3e00008  jr          $ra
    ctx->pc = 0x239B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239B98u;
    // 0x239b98: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x239b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x239b9c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x239b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x239ba0: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x239ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x239ba4: 0xc420d650  lwc1        $f0, -0x29B0($at)
    ctx->pc = 0x239ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294956624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x239BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239BB0u;
}
