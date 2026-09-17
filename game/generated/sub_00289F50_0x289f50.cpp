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

// Function: sub_00289F50
// Address: 0x289f50 - 0x289f80
void sub_00289F50_0x289f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289F50_0x289f50");
#endif

    switch (ctx->pc) {
        case 0x289f64u: goto label_289f64;
        default: break;
    }

    ctx->pc = 0x289f50u;

    // 0x289f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289f58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289f5c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x289F5Cu;
    SET_GPR_U32(ctx, 31, 0x289F64u);
    ctx->pc = 0x289F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F5Cu;
    // 0x289f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x289F5Cu, 0x289F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F64u;
label_289f64:
    // 0x289f64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289f68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x289f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x289f6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x289f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x289f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289f74: 0x3e00008  jr          $ra
    ctx->pc = 0x289F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F74u;
        // 0x289f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289F7Cu;
    // 0x289f7c: 0x0  nop
    ctx->pc = 0x289f7cu;
    // NOP
    ctx->pc = 0x289f80u;
}
