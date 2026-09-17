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

// Function: sub_00341040
// Address: 0x341040 - 0x341078
void sub_00341040_0x341040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341040_0x341040");
#endif

    ctx->pc = 0x341040u;

    // 0x341040: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x341040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341044: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x341044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x341048: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x341048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34104c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34104cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x341050: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x341050u;
    {
        const bool branch_taken_0x341050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341050u;
        // 0x341054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341050) {
            ctx->pc = 0x34106Cu;
            goto label_34106c;
        }
    }
    ctx->pc = 0x341058u;
    // 0x341058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x341058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34105c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x34105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x341060: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x341060u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x341064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341068: 0xa0a40008  sb          $a0, 0x8($a1)
    ctx->pc = 0x341068u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 4));
label_34106c:
    // 0x34106c: 0x3e00008  jr          $ra
    ctx->pc = 0x34106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34106Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341074u;
    // 0x341074: 0x0  nop
    ctx->pc = 0x341074u;
    // NOP
    ctx->pc = 0x341078u;
}
