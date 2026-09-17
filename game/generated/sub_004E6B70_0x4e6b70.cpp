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

// Function: sub_004E6B70
// Address: 0x4e6b70 - 0x4e6bb8
void sub_004E6B70_0x4e6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B70_0x4e6b70");
#endif

    ctx->pc = 0x4e6b70u;

    // 0x4e6b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6b74: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6b7c: 0x24a511e4  addiu       $a1, $a1, 0x11E4
    ctx->pc = 0x4e6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4580));
    // 0x4e6b80: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e6b84: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e6b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6b88: 0x844711d0  lh          $a3, 0x11D0($v0)
    ctx->pc = 0x4e6b88u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x7F11D0u));
    // 0x4e6b8c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e6b8cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F11E4u));
    // 0x4e6b90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E4u));
    // 0x4e6b94: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4e6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4e6b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6b9c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4e6b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4e6ba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6ba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6ba8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e6bac: 0x8139b00  j           func_4E6C00
    ctx->pc = 0x4E6BACu;
    ctx->pc = 0x4E6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6BACu;
    // 0x4e6bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6C00u, 0x4E6BACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E6BB4u;
    // 0x4e6bb4: 0x0  nop
    ctx->pc = 0x4e6bb4u;
    // NOP
    ctx->pc = 0x4e6bb8u;
}
