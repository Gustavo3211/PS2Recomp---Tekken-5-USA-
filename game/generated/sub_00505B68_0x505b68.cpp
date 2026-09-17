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

// Function: sub_00505B68
// Address: 0x505b68 - 0x505ba8
void sub_00505B68_0x505b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505B68_0x505b68");
#endif

    ctx->pc = 0x505b68u;

    // 0x505b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505b6c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x505b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x505b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x505b74: 0x24a5c534  addiu       $a1, $a1, -0x3ACC
    ctx->pc = 0x505b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952244));
    // 0x505b78: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x505b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x505b7c: 0x8464f0a4  lh          $a0, -0xF5C($v1)
    ctx->pc = 0x505b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8FF0A4u));
    // 0x505b80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x505b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x505b84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x505b84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC534u));
    // 0x505b88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x505b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x505b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505b90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x505b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505b94: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x505b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x505b98: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x505b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x505b9c: 0x81416ca  j           func_505B28
    ctx->pc = 0x505B9Cu;
    ctx->pc = 0x505BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505B9Cu;
    // 0x505ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505B28u, 0x505B9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505BA4u;
    // 0x505ba4: 0x0  nop
    ctx->pc = 0x505ba4u;
    // NOP
    ctx->pc = 0x505ba8u;
}
