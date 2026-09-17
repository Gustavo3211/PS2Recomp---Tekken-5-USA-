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

// Function: sub_001FB498
// Address: 0x1fb498 - 0x1fb4f0
void sub_001FB498_0x1fb498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB498_0x1fb498");
#endif

    ctx->pc = 0x1fb498u;

    // 0x1fb498: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb4a0: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x1fb4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
    // 0x1fb4a4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4a8: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x1fb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x1fb4ac: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4b0: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x1fb4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    // 0x1fb4b4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4b8: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x1fb4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x1fb4bc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4c0: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x1fb4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    // 0x1fb4c4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4c8: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x1fb4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x1fb4cc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4d0: 0xac6400bc  sw          $a0, 0xBC($v1)
    ctx->pc = 0x1fb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 4));
    // 0x1fb4d4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4d8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1fb4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x1fb4dc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4e0: 0xac6000a8  sw          $zero, 0xA8($v1)
    ctx->pc = 0x1fb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
    // 0x1fb4e4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4E8u;
        // 0x1fb4ec: 0xac4003d4  sw          $zero, 0x3D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB4F0u;
}
