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

// Function: sub_004D3D60
// Address: 0x4d3d60 - 0x4d3da0
void sub_004D3D60_0x4d3d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3D60_0x4d3d60");
#endif

    ctx->pc = 0x4d3d60u;

    // 0x4d3d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d3d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d3d64: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d3d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d3d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d3d6c: 0x24a5104c  addiu       $a1, $a1, 0x104C
    ctx->pc = 0x4d3d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4172));
    // 0x4d3d70: 0x848301b8  lh          $v1, 0x1B8($a0)
    ctx->pc = 0x4d3d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x4d3d74: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4d3d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4d3d78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F104Cu));
    // 0x4d3d7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d3d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d3d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d3d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d3d84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d3d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d3d88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d3d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d3d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3d90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d3d94: 0x8124794  j           func_491E50
    ctx->pc = 0x4D3D94u;
    ctx->pc = 0x4D3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D3D94u;
    // 0x4d3d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491E50u, 0x4D3D94u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D3D9Cu;
    // 0x4d3d9c: 0x0  nop
    ctx->pc = 0x4d3d9cu;
    // NOP
    ctx->pc = 0x4d3da0u;
}
