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

// Function: sub_004E6AE0
// Address: 0x4e6ae0 - 0x4e6b28
void sub_004E6AE0_0x4e6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6AE0_0x4e6ae0");
#endif

    ctx->pc = 0x4e6ae0u;

    // 0x4e6ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6ae4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e6ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e6ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e6aec: 0x24a511e0  addiu       $a1, $a1, 0x11E0
    ctx->pc = 0x4e6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4576));
    // 0x4e6af0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e6af4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e6af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e6af8: 0x844711d0  lh          $a3, 0x11D0($v0)
    ctx->pc = 0x4e6af8u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x7F11D0u));
    // 0x4e6afc: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4e6afcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F11E0u));
    // 0x4e6b00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E0u));
    // 0x4e6b04: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4e6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4e6b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6b0c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4e6b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4e6b10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e6b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e6b14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4e6b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4e6b18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4e6b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4e6b1c: 0x8139b00  j           func_4E6C00
    ctx->pc = 0x4E6B1Cu;
    ctx->pc = 0x4E6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6B1Cu;
    // 0x4e6b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6C00u, 0x4E6B1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E6B24u;
    // 0x4e6b24: 0x0  nop
    ctx->pc = 0x4e6b24u;
    // NOP
    ctx->pc = 0x4e6b28u;
}
