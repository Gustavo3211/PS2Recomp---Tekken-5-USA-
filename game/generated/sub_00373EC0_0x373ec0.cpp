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

// Function: sub_00373EC0
// Address: 0x373ec0 - 0x373f10
void sub_00373EC0_0x373ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373EC0_0x373ec0");
#endif

    ctx->pc = 0x373ec0u;

    // 0x373ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373ec4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x373ec8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373ec8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ecc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ed0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x373ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x373ed4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x373ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x373ed8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x373ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x373edc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x373edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x373ee0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x373ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x373ee4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x373ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x373ee8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x373ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x373eec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x373eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373ef0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x373ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x373ef4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x373ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x373ef8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373efc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373efcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f00: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373f00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373f04: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373f08: 0x3e00008  jr          $ra
    ctx->pc = 0x373F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373F10u;
}
