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

// Function: sub_00374058
// Address: 0x374058 - 0x3740a8
void sub_00374058_0x374058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374058_0x374058");
#endif

    ctx->pc = 0x374058u;

    // 0x374058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37405c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x37405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x374060: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x374060u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x374064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x374068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37406c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x37406cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x374070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x374070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x374074: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x374074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374078: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x374078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37407c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x374080: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x374080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x374084: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x374084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x374088: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x374088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37408c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x37408cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x374090: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x374090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374094: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374094u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374098: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x374098u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37409c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37409cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3740a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3740A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3740A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3740A8u;
}
