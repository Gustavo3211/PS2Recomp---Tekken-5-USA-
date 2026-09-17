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

// Function: sub_00356968
// Address: 0x356968 - 0x356990
void sub_00356968_0x356968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356968_0x356968");
#endif

    ctx->pc = 0x356968u;

    // 0x356968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35696c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x356970: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x356970u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356974: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x356974u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x356978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35697c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x35697cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356980: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x356980u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356984: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x356984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x356988: 0x3e00008  jr          $ra
    ctx->pc = 0x356988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356990u;
}
