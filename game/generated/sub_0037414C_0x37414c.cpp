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

// Function: sub_0037414C
// Address: 0x37414c - 0x37419c
void sub_0037414C_0x37414c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037414C_0x37414c");
#endif

    ctx->pc = 0x37414cu;

    // 0x37414c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37414cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374150: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x374150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x374154: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x374154u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374158: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x374158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37415c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x37415cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x374160: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x374160u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x374164: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x374164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x374168: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x374168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x37416c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x37416cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x374170: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x374170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x374174: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x374174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x374178: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x374178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x37417c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x374180: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x374180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x374184: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x374184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x374188: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374188u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37418c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x37418cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374190: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x374190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x374194: 0x3e00008  jr          $ra
    ctx->pc = 0x374194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37419Cu;
}
