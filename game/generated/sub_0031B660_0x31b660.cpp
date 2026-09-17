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

// Function: sub_0031B660
// Address: 0x31b660 - 0x31b6a0
void sub_0031B660_0x31b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B660_0x31b660");
#endif

    switch (ctx->pc) {
        case 0x31b674u: goto label_31b674;
        default: break;
    }

    ctx->pc = 0x31b660u;

    // 0x31b660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b66c: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B66Cu;
    SET_GPR_U32(ctx, 31, 0x31B674u);
    ctx->pc = 0x31B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B66Cu;
    // 0x31b670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B66Cu, 0x31B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B674u;
label_31b674:
    // 0x31b674: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x31b674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x31b678: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31b67c: 0x24421410  addiu       $v0, $v0, 0x1410
    ctx->pc = 0x31b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5136));
    // 0x31b680: 0x24842480  addiu       $a0, $a0, 0x2480
    ctx->pc = 0x31b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9344));
    // 0x31b684: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x31b684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x31b688: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x31b688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x31b68c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b690: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b694: 0x3e00008  jr          $ra
    ctx->pc = 0x31B694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B694u;
        // 0x31b698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B69Cu;
    // 0x31b69c: 0x0  nop
    ctx->pc = 0x31b69cu;
    // NOP
    ctx->pc = 0x31b6a0u;
}
