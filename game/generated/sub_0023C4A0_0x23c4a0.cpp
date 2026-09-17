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

// Function: sub_0023C4A0
// Address: 0x23c4a0 - 0x23c4d8
void sub_0023C4A0_0x23c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C4A0_0x23c4a0");
#endif

    ctx->pc = 0x23c4a0u;

    // 0x23c4a0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x23c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x23c4a4: 0x2465e3b0  addiu       $a1, $v1, -0x1C50
    ctx->pc = 0x23c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960048));
    // 0x23c4a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3AE3B0u));
    // 0x23c4ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C4ACu;
    {
        const bool branch_taken_0x23c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c4ac) {
            ctx->pc = 0x23C4D0u;
            goto label_23c4d0;
        }
    }
    ctx->pc = 0x23C4B4u;
    // 0x23c4b4: 0x8ca208e0  lw          $v0, 0x8E0($a1)
    ctx->pc = 0x23c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2272)));
    // 0x23c4b8: 0xac820894  sw          $v0, 0x894($a0)
    ctx->pc = 0x23c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 2));
    // 0x23c4bc: 0xc4a008e4  lwc1        $f0, 0x8E4($a1)
    ctx->pc = 0x23c4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c4c0: 0xe48006c0  swc1        $f0, 0x6C0($a0)
    ctx->pc = 0x23c4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1728), bits); }
    // 0x23c4c4: 0x8ca308e8  lw          $v1, 0x8E8($a1)
    ctx->pc = 0x23c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x23c4c8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x23c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x23c4cc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x23c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_23c4d0:
    // 0x23c4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C4D8u;
}
