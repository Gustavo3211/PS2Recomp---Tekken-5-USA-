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

// Function: sub_004931A0
// Address: 0x4931a0 - 0x4931c8
void sub_004931A0_0x4931a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004931A0_0x4931a0");
#endif

    ctx->pc = 0x4931a0u;

    // 0x4931a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4931a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4931a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4931a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4931a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4931a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4931ac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4931acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4931b0: 0x24427bf8  addiu       $v0, $v0, 0x7BF8
    ctx->pc = 0x4931b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31736));
    // 0x4931b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4931b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4931b8: 0xac62f928  sw          $v0, -0x6D8($v1)
    ctx->pc = 0x4931b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F928u, _value); } while (0);
    // 0x4931bc: 0x81298f6  j           func_4A63D8
    ctx->pc = 0x4931BCu;
    ctx->pc = 0x4931C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4931BCu;
    // 0x4931c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A63D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A63D8u, 0x4931BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4931C4u;
    // 0x4931c4: 0x0  nop
    ctx->pc = 0x4931c4u;
    // NOP
    ctx->pc = 0x4931c8u;
}
