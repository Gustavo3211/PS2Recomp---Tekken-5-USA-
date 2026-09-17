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

// Function: sub_001FC438
// Address: 0x1fc438 - 0x1fc470
void sub_001FC438_0x1fc438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC438_0x1fc438");
#endif

    ctx->pc = 0x1fc438u;

    // 0x1fc438: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x1fc438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fc43c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc440: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fc440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fc444: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fc444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fc448: 0x246303e0  addiu       $v1, $v1, 0x3E0
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 992));
    // 0x1fc44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc450: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1fc450u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fc454: 0xa485003e  sh          $a1, 0x3E($a0)
    ctx->pc = 0x1fc454u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc458: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc45c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc460: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x1fc460u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fc464: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC464u;
        // 0x1fc468: 0xa4850040  sh          $a1, 0x40($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC46Cu;
    // 0x1fc46c: 0x0  nop
    ctx->pc = 0x1fc46cu;
    // NOP
    ctx->pc = 0x1fc470u;
}
