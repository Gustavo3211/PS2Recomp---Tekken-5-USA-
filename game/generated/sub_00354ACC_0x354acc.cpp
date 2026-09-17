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

// Function: sub_00354ACC
// Address: 0x354acc - 0x354b00
void sub_00354ACC_0x354acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354ACC_0x354acc");
#endif

    ctx->pc = 0x354accu;

    // 0x354acc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354ad0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x354ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354ad4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354ad4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ad8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x354adc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x354adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354ae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x354ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354ae4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x354ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x354ae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354aec: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x354aecu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354af0: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x354af0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354af4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x354af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354af8: 0x3e00008  jr          $ra
    ctx->pc = 0x354AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354B00u;
}
