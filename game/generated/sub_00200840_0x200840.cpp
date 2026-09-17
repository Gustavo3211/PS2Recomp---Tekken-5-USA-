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

// Function: sub_00200840
// Address: 0x200840 - 0x200858
void sub_00200840_0x200840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200840_0x200840");
#endif

    ctx->pc = 0x200840u;

    // 0x200840: 0x78820750  lq          $v0, 0x750($a0)
    ctx->pc = 0x200840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1872)));
    // 0x200844: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x200844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200848: 0x7c820630  sq          $v0, 0x630($a0)
    ctx->pc = 0x200848u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1584), GPR_VEC(ctx, 2));
    // 0x20084c: 0x3e00008  jr          $ra
    ctx->pc = 0x20084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0xe4800674  swc1        $f0, 0x674($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1652), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200854u;
    // 0x200854: 0x0  nop
    ctx->pc = 0x200854u;
    // NOP
    ctx->pc = 0x200858u;
}
