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

// Function: sub_0012A998
// Address: 0x12a998 - 0x12a9c8
void sub_0012A998_0x12a998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A998_0x12a998");
#endif

    ctx->pc = 0x12a998u;

    // 0x12a998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a99c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x12a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x12a9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a9a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x12a9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9ac: 0x8c644728  lw          $a0, 0x4728($v1)
    ctx->pc = 0x12a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x12a9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12a9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a9b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12a9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12a9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9bc: 0x804a9d8  j           func_12A760
    ctx->pc = 0x12A9BCu;
    ctx->pc = 0x12A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9BCu;
    // 0x12a9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A760u, 0x12A9BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x12A9C4u;
    // 0x12a9c4: 0x0  nop
    ctx->pc = 0x12a9c4u;
    // NOP
    ctx->pc = 0x12a9c8u;
}
