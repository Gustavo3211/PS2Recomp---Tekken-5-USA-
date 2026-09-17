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

// Function: sub_004A4D50
// Address: 0x4a4d50 - 0x4a4d80
void sub_004A4D50_0x4a4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4D50_0x4a4d50");
#endif

    ctx->pc = 0x4a4d50u;

    // 0x4a4d50: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a4d54: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4a4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4a4d58: 0x246323f8  addiu       $v1, $v1, 0x23F8
    ctx->pc = 0x4a4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9208));
    // 0x4a4d5c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a4d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72FA78u));
    // 0x4a4d60: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4a4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4a4d64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a4d68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4d6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a4d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a4d70: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4a4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a4d74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4d78: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D78u;
        // 0x4a4d7c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4D80u;
}
