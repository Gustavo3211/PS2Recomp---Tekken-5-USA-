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

// Function: sub_00373CBC
// Address: 0x373cbc - 0x373d0c
void sub_00373CBC_0x373cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373CBC_0x373cbc");
#endif

    ctx->pc = 0x373cbcu;

    // 0x373cbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373cc0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x373cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x373cc4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373cc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373cc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x373cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x373cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373cd0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x373cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x373cd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x373cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373cd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x373cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x373cdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x373cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x373ce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x373ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x373ce4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x373ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x373ce8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x373ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373cec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x373cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x373cf0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x373cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x373cf4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x373cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x373cf8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373cf8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373cfc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x373cfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373d00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373d04: 0x3e00008  jr          $ra
    ctx->pc = 0x373D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373D0Cu;
}
