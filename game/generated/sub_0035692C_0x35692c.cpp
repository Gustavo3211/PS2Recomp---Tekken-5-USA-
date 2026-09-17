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

// Function: sub_0035692C
// Address: 0x35692c - 0x356968
void sub_0035692C_0x35692c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035692C_0x35692c");
#endif

    switch (ctx->pc) {
        case 0x356950u: goto label_356950;
        default: break;
    }

    ctx->pc = 0x35692cu;

    // 0x35692c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35692cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356930: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x356930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x356934: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x356934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x356938: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x356938u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35693c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x35693cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x356940: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x356940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356948: 0xc0d5a05  jal         func_356814
    ctx->pc = 0x356948u;
    SET_GPR_U32(ctx, 31, 0x356950u);
    ctx->pc = 0x356814u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356814u, 0x356948u, 0x356950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356950u;
label_356950:
    // 0x356950: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x356950u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356954: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x356954u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356958: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x356958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35695c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35695cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x356960: 0x3e00008  jr          $ra
    ctx->pc = 0x356960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356968u;
}
