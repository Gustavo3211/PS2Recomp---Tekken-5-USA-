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

// Function: sub_004E6A58
// Address: 0x4e6a58 - 0x4e6a98
void sub_004E6A58_0x4e6a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A58_0x4e6a58");
#endif

    ctx->pc = 0x4e6a58u;

    // 0x4e6a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6a5c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6a64: 0x24a511dc  addiu       $a1, $a1, 0x11DC
    ctx->pc = 0x4e6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4572));
    // 0x4e6a68: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e6a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6a6c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e6a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F11DCu));
    // 0x4e6a70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11DCu));
    // 0x4e6a74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e6a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6a7c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e6a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e6a80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6a84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6a88: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e6a8c: 0x8139b00  j           func_4E6C00
    ctx->pc = 0x4E6A8Cu;
    ctx->pc = 0x4E6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6A8Cu;
    // 0x4e6a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6C00u, 0x4E6A8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E6A94u;
    // 0x4e6a94: 0x0  nop
    ctx->pc = 0x4e6a94u;
    // NOP
    ctx->pc = 0x4e6a98u;
}
