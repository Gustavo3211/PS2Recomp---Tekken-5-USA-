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

// Function: sub_0050CA48
// Address: 0x50ca48 - 0x50ca80
void sub_0050CA48_0x50ca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050CA48_0x50ca48");
#endif

    ctx->pc = 0x50ca48u;

    // 0x50ca48: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50ca4c: 0x2463f080  addiu       $v1, $v1, -0xF80
    ctx->pc = 0x50ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50ca50: 0x24634f78  addiu       $v1, $v1, 0x4F78
    ctx->pc = 0x50ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20344));
    // 0x50ca54: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x50ca54u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x903FF8u));
    // 0x50ca58: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x50ca58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x903FF8u));
    // 0x50ca5c: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x50ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x50ca60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50ca60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ca64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50ca68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50ca6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50ca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50ca70: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x50ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50ca74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50ca74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ca78: 0x3e00008  jr          $ra
    ctx->pc = 0x50CA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CA78u;
        // 0x50ca7c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50CA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50CA80u;
}
