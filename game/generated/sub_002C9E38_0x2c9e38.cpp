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

// Function: sub_002C9E38
// Address: 0x2c9e38 - 0x2c9e70
void sub_002C9E38_0x2c9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9E38_0x2c9e38");
#endif

    ctx->pc = 0x2c9e38u;

    // 0x2c9e38: 0x8f87bb18  lw          $a3, -0x44E8($gp)
    ctx->pc = 0x2c9e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2c9e3c: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9E3Cu;
    {
        const bool branch_taken_0x2c9e3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E3Cu;
        // 0x2c9e40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e3c) {
            ctx->pc = 0x2C9E64u;
            goto label_2c9e64;
        }
    }
    ctx->pc = 0x2C9E44u;
    // 0x2c9e44: 0x3c023b9a  lui         $v0, 0x3B9A
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
    // 0x2c9e48: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x2c9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x2c9e4c: 0x3442c9ff  ori         $v0, $v0, 0xC9FF
    ctx->pc = 0x2c9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51711);
    // 0x2c9e50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9e54: 0x46182b  sltu        $v1, $v0, $a2
    ctx->pc = 0x2c9e54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2c9e58: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x2c9e58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2c9e5c: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x2c9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x2c9e60: 0xaca44520  sw          $a0, 0x4520($a1)
    ctx->pc = 0x2c9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 17696), GPR_U32(ctx, 4));
label_2c9e64:
    // 0x2c9e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E6Cu;
    // 0x2c9e6c: 0x0  nop
    ctx->pc = 0x2c9e6cu;
    // NOP
    ctx->pc = 0x2c9e70u;
}
