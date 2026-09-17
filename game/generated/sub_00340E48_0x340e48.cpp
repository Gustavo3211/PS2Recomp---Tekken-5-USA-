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

// Function: sub_00340E48
// Address: 0x340e48 - 0x340e80
void sub_00340E48_0x340e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340E48_0x340e48");
#endif

    ctx->pc = 0x340e48u;

    // 0x340e48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x340e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340e4c: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x340e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x340e50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x340e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x340e54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x340e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x340e58: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x340E58u;
    {
        const bool branch_taken_0x340e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E58u;
        // 0x340e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e58) {
            ctx->pc = 0x340E74u;
            goto label_340e74;
        }
    }
    ctx->pc = 0x340E60u;
    // 0x340e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x340e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x340e64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340e68: 0xa0a30009  sb          $v1, 0x9($a1)
    ctx->pc = 0x340e68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x340e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340e70: 0xa0a40008  sb          $a0, 0x8($a1)
    ctx->pc = 0x340e70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 4));
label_340e74:
    // 0x340e74: 0x3e00008  jr          $ra
    ctx->pc = 0x340E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340E7Cu;
    // 0x340e7c: 0x0  nop
    ctx->pc = 0x340e7cu;
    // NOP
    ctx->pc = 0x340e80u;
}
