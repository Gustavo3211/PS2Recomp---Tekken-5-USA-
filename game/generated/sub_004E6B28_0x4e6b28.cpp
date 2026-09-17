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

// Function: sub_004E6B28
// Address: 0x4e6b28 - 0x4e6b70
void sub_004E6B28_0x4e6b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B28_0x4e6b28");
#endif

    ctx->pc = 0x4e6b28u;

    // 0x4e6b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6b2c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6b34: 0x24a511e0  addiu       $a1, $a1, 0x11E0
    ctx->pc = 0x4e6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4576));
    // 0x4e6b38: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e6b3c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e6b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6b40: 0x844711d0  lh          $a3, 0x11D0($v0)
    ctx->pc = 0x4e6b40u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x7F11D0u));
    // 0x4e6b44: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e6b44u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F11E0u));
    // 0x4e6b48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E0u));
    // 0x4e6b4c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4e6b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4e6b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6b54: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4e6b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4e6b58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6b5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6b60: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e6b64: 0x8139b00  j           func_4E6C00
    ctx->pc = 0x4E6B64u;
    ctx->pc = 0x4E6B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6B64u;
    // 0x4e6b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6C00u, 0x4E6B64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E6B6Cu;
    // 0x4e6b6c: 0x0  nop
    ctx->pc = 0x4e6b6cu;
    // NOP
    ctx->pc = 0x4e6b70u;
}
