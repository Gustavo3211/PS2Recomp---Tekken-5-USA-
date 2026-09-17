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

// Function: sub_00343958
// Address: 0x343958 - 0x343990
void sub_00343958_0x343958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343958_0x343958");
#endif

    ctx->pc = 0x343958u;

    // 0x343958: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x343958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34395c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x343960: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x343960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x343964: 0x2407ffef  addiu       $a3, $zero, -0x11
    ctx->pc = 0x343964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x343968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x343968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34396c: 0x2408ffdf  addiu       $t0, $zero, -0x21
    ctx->pc = 0x34396cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x343970: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x343970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x343974: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x343974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x343978: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x343978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x34397c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x34397cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x343980: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x343980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x343984: 0x3e00008  jr          $ra
    ctx->pc = 0x343984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343984u;
        // 0x343988: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34398Cu;
    // 0x34398c: 0x0  nop
    ctx->pc = 0x34398cu;
    // NOP
    ctx->pc = 0x343990u;
}
