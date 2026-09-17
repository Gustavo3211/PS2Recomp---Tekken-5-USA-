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

// Function: sub_00505BE8
// Address: 0x505be8 - 0x505c28
void sub_00505BE8_0x505be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505BE8_0x505be8");
#endif

    ctx->pc = 0x505be8u;

    // 0x505be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505bec: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x505becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x505bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x505bf4: 0x24a5c534  addiu       $a1, $a1, -0x3ACC
    ctx->pc = 0x505bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952244));
    // 0x505bf8: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x505bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x505bfc: 0x8464f0a8  lh          $a0, -0xF58($v1)
    ctx->pc = 0x505bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8FF0A8u));
    // 0x505c00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x505c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x505c04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x505c04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC534u));
    // 0x505c08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x505c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x505c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505c10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x505c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505c14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x505c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x505c18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x505c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x505c1c: 0x81416ca  j           func_505B28
    ctx->pc = 0x505C1Cu;
    ctx->pc = 0x505C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505C1Cu;
    // 0x505c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505B28u, 0x505C1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505C24u;
    // 0x505c24: 0x0  nop
    ctx->pc = 0x505c24u;
    // NOP
    ctx->pc = 0x505c28u;
}
