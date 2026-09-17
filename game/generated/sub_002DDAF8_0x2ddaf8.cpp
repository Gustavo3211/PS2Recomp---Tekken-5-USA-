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

// Function: sub_002DDAF8
// Address: 0x2ddaf8 - 0x2ddb20
void sub_002DDAF8_0x2ddaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDAF8_0x2ddaf8");
#endif

    switch (ctx->pc) {
        case 0x2ddb0cu: goto label_2ddb0c;
        default: break;
    }

    ctx->pc = 0x2ddaf8u;

    // 0x2ddaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddb00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddb04: 0xc0cc518  jal         func_331460
    ctx->pc = 0x2DDB04u;
    SET_GPR_U32(ctx, 31, 0x2DDB0Cu);
    ctx->pc = 0x2DDB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB04u;
    // 0x2ddb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331460u, 0x2DDB04u, 0x2DDB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB0Cu;
label_2ddb0c:
    // 0x2ddb0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddb10: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2ddb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2ddb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddb18: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB18u;
        // 0x2ddb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDB20u;
}
