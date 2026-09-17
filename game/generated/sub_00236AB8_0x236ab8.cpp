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

// Function: sub_00236AB8
// Address: 0x236ab8 - 0x236ad0
void sub_00236AB8_0x236ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236AB8_0x236ab8");
#endif

    ctx->pc = 0x236ab8u;

    // 0x236ab8: 0x84a20012  lh          $v0, 0x12($a1)
    ctx->pc = 0x236ab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x236abc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x236abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x236ac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x236ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x236ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x236AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AC4u;
        // 0x236ac8: 0xc4400030  lwc1        $f0, 0x30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236ACCu;
    // 0x236acc: 0x0  nop
    ctx->pc = 0x236accu;
    // NOP
    ctx->pc = 0x236ad0u;
}
