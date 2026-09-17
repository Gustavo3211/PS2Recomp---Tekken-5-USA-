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

// Function: sub_00334BC0
// Address: 0x334bc0 - 0x334c00
void sub_00334BC0_0x334bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334BC0_0x334bc0");
#endif

    ctx->pc = 0x334bc0u;

    // 0x334bc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x334bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x334bc4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x334bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x334bc8: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x334bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x334bcc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334bd0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x334bd0u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 4)); // MMIO: 0x10003000
    // 0x334bd4: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x334bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x334bd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u)); // MMIO: 0x10003020
    // 0x334bdc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x334bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u)); // MMIO: 0x10003020
    // 0x334be0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334be0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u)); // MMIO: 0x10003020
    // 0x334be4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x334be4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u)); // MMIO: 0x10003020
    // 0x334be8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334be8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u)); // MMIO: 0x10003020
    // 0x334bec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x334becu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u)); // MMIO: 0x10003020
    // 0x334bf0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x334bf0u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 0)); // MMIO: 0x10003000
    // 0x334bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x334BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334BFCu;
    // 0x334bfc: 0x0  nop
    ctx->pc = 0x334bfcu;
    // NOP
    ctx->pc = 0x334c00u;
}
