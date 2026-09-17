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

// Function: sub_00355CD0
// Address: 0x355cd0 - 0x355d0c
void sub_00355CD0_0x355cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355CD0_0x355cd0");
#endif

    ctx->pc = 0x355cd0u;

    // 0x355cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355cd4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x355cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x355cd8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x355cd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355cdc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x355cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355ce0: 0xffc50008  sd          $a1, 0x8($fp)
    ctx->pc = 0x355ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 5));
    // 0x355ce4: 0xdfc20008  ld          $v0, 0x8($fp)
    ctx->pc = 0x355ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355ce8: 0x644203ff  daddiu      $v0, $v0, 0x3FF
    ctx->pc = 0x355ce8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1023);
    // 0x355cec: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x355cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x355cf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x355cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x355cf4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x355cf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x355cf8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355cf8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355cfc: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x355cfcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355d00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355d04: 0x3e00008  jr          $ra
    ctx->pc = 0x355D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355D0Cu;
}
