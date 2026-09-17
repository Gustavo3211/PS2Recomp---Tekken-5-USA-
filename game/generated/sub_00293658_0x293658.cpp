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

// Function: sub_00293658
// Address: 0x293658 - 0x293690
void sub_00293658_0x293658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293658_0x293658");
#endif

    ctx->pc = 0x293658u;

    // 0x293658: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x293658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x29365c: 0x248500a0  addiu       $a1, $a0, 0xA0
    ctx->pc = 0x29365cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x293660: 0x2442e188  addiu       $v0, $v0, -0x1E78
    ctx->pc = 0x293660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959496));
    // 0x293664: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x293664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x293668: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x293668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29366c: 0x2463b510  addiu       $v1, $v1, -0x4AF0
    ctx->pc = 0x29366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948112));
    // 0x293670: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x293670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x293674: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x293674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x293678: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x293678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x29367c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x29367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x293680: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x293680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x293684: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x293684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x293688: 0x3e00008  jr          $ra
    ctx->pc = 0x293688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293688u;
        // 0x29368c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293690u;
}
