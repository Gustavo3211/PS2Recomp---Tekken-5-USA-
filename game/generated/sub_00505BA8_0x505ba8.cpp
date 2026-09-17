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

// Function: sub_00505BA8
// Address: 0x505ba8 - 0x505be8
void sub_00505BA8_0x505ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505BA8_0x505ba8");
#endif

    ctx->pc = 0x505ba8u;

    // 0x505ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505bac: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x505bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x505bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x505bb4: 0x24a5c534  addiu       $a1, $a1, -0x3ACC
    ctx->pc = 0x505bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952244));
    // 0x505bb8: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x505bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x505bbc: 0x8464f0a6  lh          $a0, -0xF5A($v1)
    ctx->pc = 0x505bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x8FF0A6u));
    // 0x505bc0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x505bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x505bc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x505bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC534u));
    // 0x505bc8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x505bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x505bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505bd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x505bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505bd4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x505bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x505bd8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x505bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x505bdc: 0x81416ca  j           func_505B28
    ctx->pc = 0x505BDCu;
    ctx->pc = 0x505BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505BDCu;
    // 0x505be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505B28u, 0x505BDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505BE4u;
    // 0x505be4: 0x0  nop
    ctx->pc = 0x505be4u;
    // NOP
    ctx->pc = 0x505be8u;
}
