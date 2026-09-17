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

// Function: sub_00356990
// Address: 0x356990 - 0x3569bc
void sub_00356990_0x356990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356990_0x356990");
#endif

    ctx->pc = 0x356990u;

    // 0x356990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356994: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x356994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x356998: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x356998u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35699c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x35699cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3569a0: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3569a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3569a4: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3569a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3569a8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3569a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569ac: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3569acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3569b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3569b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3569b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3569B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3569B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3569BCu;
}
