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

// Function: sub_00347040
// Address: 0x347040 - 0x347070
void sub_00347040_0x347040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347040_0x347040");
#endif

    ctx->pc = 0x347040u;

    // 0x347040: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x347040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x347044: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x347044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x347048: 0x2442dc70  addiu       $v0, $v0, -0x2390
    ctx->pc = 0x347048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958192));
    // 0x34704c: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x34704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x347050: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x347050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x347054: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x347054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347058: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x347058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x34705c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34705cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x347060: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x347060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x347064: 0x3e00008  jr          $ra
    ctx->pc = 0x347064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347064u;
        // 0x347068: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34706Cu;
    // 0x34706c: 0x0  nop
    ctx->pc = 0x34706cu;
    // NOP
    ctx->pc = 0x347070u;
}
