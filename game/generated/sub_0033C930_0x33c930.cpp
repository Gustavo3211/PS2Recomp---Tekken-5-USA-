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

// Function: sub_0033C930
// Address: 0x33c930 - 0x33c970
void sub_0033C930_0x33c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C930_0x33c930");
#endif

    ctx->pc = 0x33c930u;

    // 0x33c930: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x33c930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x33c934: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33c938: 0x244225b0  addiu       $v0, $v0, 0x25B0
    ctx->pc = 0x33c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9648));
    // 0x33c93c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33c940: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x33c940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x33c944: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x33c944u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x33c948: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x33c948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x33c94c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x33c94cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x33c950: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x33c950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x33c954: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x33c954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x33c958: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x33c958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c95c: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x33c95cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c960: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x33c960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x33c964: 0x3e00008  jr          $ra
    ctx->pc = 0x33C964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C964u;
        // 0x33c968: 0xa0800017  sb          $zero, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C96Cu;
    // 0x33c96c: 0x0  nop
    ctx->pc = 0x33c96cu;
    // NOP
    ctx->pc = 0x33c970u;
}
