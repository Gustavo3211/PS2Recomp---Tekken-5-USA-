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

// Function: sub_002FA8F0
// Address: 0x2fa8f0 - 0x2fa930
void sub_002FA8F0_0x2fa8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA8F0_0x2fa8f0");
#endif

    ctx->pc = 0x2fa8f0u;

    // 0x2fa8f0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2fa8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa8f4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fa8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fa8f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fa8fc: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA8FCu;
    {
        const bool branch_taken_0x2fa8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fa8fc) {
            ctx->pc = 0x2FA924u;
            goto label_2fa924;
        }
    }
    ctx->pc = 0x2FA904u;
    // 0x2fa904: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fa904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa908: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x2fa908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2fa90c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2fa910: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA910u;
    {
        const bool branch_taken_0x2fa910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA910u;
        // 0x2fa914: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa910) {
            ctx->pc = 0x2FA924u;
            goto label_2fa924;
        }
    }
    ctx->pc = 0x2FA918u;
    // 0x2fa918: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2fa918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fa91c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA91Cu;
    {
        const bool branch_taken_0x2fa91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa91c) {
            ctx->pc = 0x2FA920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA91Cu;
            // 0x2fa920: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA924u;
            goto label_2fa924;
        }
    }
    ctx->pc = 0x2FA924u;
label_2fa924:
    // 0x2fa924: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA924u;
        // 0x2fa928: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA92Cu;
    // 0x2fa92c: 0x0  nop
    ctx->pc = 0x2fa92cu;
    // NOP
    ctx->pc = 0x2fa930u;
}
