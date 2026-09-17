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

// Function: sub_004A64E0
// Address: 0x4a64e0 - 0x4a6510
void sub_004A64E0_0x4a64e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A64E0_0x4a64e0");
#endif

    ctx->pc = 0x4a64e0u;

    // 0x4a64e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a64e4: 0x8c440c40  lw          $a0, 0xC40($v0)
    ctx->pc = 0x4a64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C40u));
    // 0x4a64e8: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x4a64e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x4a64ec: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a64ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a64f0: 0x2442ff40  addiu       $v0, $v0, -0xC0
    ctx->pc = 0x4a64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967104));
    // 0x4a64f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a64f8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a64f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a64fc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4a64fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4a6500: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x4a6500u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x4a6504: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6504u;
        // 0x4a6508: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A650Cu;
    // 0x4a650c: 0x0  nop
    ctx->pc = 0x4a650cu;
    // NOP
    ctx->pc = 0x4a6510u;
}
